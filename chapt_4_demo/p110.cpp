#include <iostream>
#include <cstdlib>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


class person 
{

private:
	int age;
	char *name;


public:
	
	person(int n = 1,char *na="zhuli");//构造函数
	~person ();
	void print();
	//void print() const;  //重载 const
	void modifyage(); //用于修改年龄的普通成员函数
};

person::person(int n, char *na)
{
	age = n;
	name = new char[strlen(na) + 1];
	strcpy(name,na);
}

person::~person() //析构定义
{
	delete[]name;
}

void person::print()  //普通函数 print定义
{
	cout << "age:" << age << " name :" << name <<endl;
	cout << "this is general print()." << endl;
}

/*void person::print() const 
{
	cout << "age:" << age << " name :" << name <<endl;
	cout << "this is const print()." << endl;
}*/


void person::modifyage()
{
	age++;
}


int main()
{
	const person p1(17, "wu");
	cout << "output const object p1" << endl;
	p1.print();

	person p2(18, "zhang");
	cout << "output general object p2" << endl;
	p2.modifyage;
	p2.print();
	
	system("pause");
	
	return 0;
}


