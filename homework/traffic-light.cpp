#include <iostream>
#include <memory>

using namespace std;

class State
{
public:
    virtual ~State() = default;
    virtual void handleState() = 0; // 纯虚函数
};
// 绿灯
class GreenState : public State
{
public:
    void handleState() override
    {
        cout << "Green Light" << endl;
    }
};
// 黄灯
class YellowState : public State
{
public:
    void handleState() override
    {
        cout << "Yellow Light" << endl;
    }
};
// 红灯
class RedState : public State
{
public:
    void handleState() override
    {
        cout << "Red Light" << endl;
    }
};

class TrafficLight
{
private:
    unique_ptr<State> currentState;

public:
    TrafficLight(unique_ptr<State> initialState) : currentState(move(initialState)) {}

    void changeState(unique_ptr<State> newState)
    {
        currentState = move(newState);
    }
    void operate()
    {
        currentState->handleState();
    }
};

int main()
{
    auto greenState = make_unique<GreenState>();
    auto yellowState = make_unique<YellowState>();
    auto redState = make_unique<RedState>();

    TrafficLight trafficLight(make_unique<GreenState>());

    trafficLight.operate();
    trafficLight.changeState(move(yellowState));
    trafficLight.operate();
    trafficLight.changeState(move(redState));
    trafficLight.operate();
    
    return 0;
}