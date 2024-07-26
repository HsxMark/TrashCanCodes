#include<iostream>
using namespace std;
//虚析构和纯虚析构
class Animal
{
public:
	virtual void speak() = 0;
	Animal()
	{
		cout << "animal构造" << endl;
	}
	~Animal()
	{
		cout << "Animal析构" << endl;
	}
};
class Cat :public Animal
{
public:
	Cat(string name)
	{
		m_Name=new string(name);
		cout << "Cat构造" << endl;
	}
	virtual void speak()
	{
		cout << *m_Name<<"小猫在说话啊" << endl;
	}
	
	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat析构函数调用了" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string* m_Name;
};
void test01()
{
	Animal* animal = new Cat("tom");
	animal->speak();
	//父类指针在析构的时候不会调用子类的析构函数
	// 导致子类如果有堆区属性，出现内存溢出
	delete animal;//创建在堆区要释放的
}
int main()
{
	test01();
	system("pause");
	return 0;
}