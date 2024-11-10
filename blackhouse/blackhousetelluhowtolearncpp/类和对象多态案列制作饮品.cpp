#include<iostream>
using namespace std;
//多态案列2
class AbstractDrinking
{
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void PutSometing() = 0;
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSometing();
	}
};
class Coffee :public AbstractDrinking 
{
public:
	virtual void Boil()
	{
		cout << "农夫山泉" << endl;
	}
	virtual void Brew()
	{
		cout << "冲咖啡" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PutSometing()
	{
		cout << "加入唐和牛奶" << endl;
	}
};
class Tea :public AbstractDrinking 
{
public:
	virtual void Boil()
	{
		cout << "泉" << endl;
	}
	virtual void Brew()
	{
		cout << "泡茶" << endl;
	}
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}
	virtual void PutSometing()
	{
		cout << "加入枸杞啊？" << endl;
	}
};
void doWork(AbstractDrinking* abs)
{
	abs->makeDrink();
	delete abs;
}
void test01()
{
	doWork(new Coffee);
}

int main(void)
{
	test01();
	system("pause");

	return 0;
}
