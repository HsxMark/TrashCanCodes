#include <iostream>
using namespace std;
class CPU
{
public:
	virtual void caculate() = 0; // 计算的函数
};
class VideoCard
{
public:
	virtual void display() = 0;
};
class Memory
{
public:
	virtual void storage() = 0;
};
class Computer
{
public:
	Computer(CPU *cpu, VideoCard *vc, Memory *mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	void work()
	{
		m_cpu->caculate();
		m_vc->display();
		m_mem->storage();
	}

private:
	CPU *m_cpu;
	VideoCard *m_vc;
	Memory *m_mem;
};
class IntelCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Inte is working!" << endl;
	}
};
class IntelVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "英特尔：晚啦" << endl;
	}
};
class IntelMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "英特：" << endl;
	}
};
void test01()
{
	CPU *intelCpu = new IntelCPU;
	VideoCard *intelCard = new IntelVideoCard;
	Memory *intelMen = new IntelMemory;
	Computer *computerl = new Computer(intelCpu, intelCard, intelMen)
}
int main()
{
	system("pause");
	return 0;
}