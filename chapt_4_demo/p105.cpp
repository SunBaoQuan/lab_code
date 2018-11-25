#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
	static int total; //私有的静态数据成员
	int num;
	char name[20];
public:   
	Student() { total++; }  //构造函数，每定义一个新对象，则total加1
	~Student() { total--; } //析构函数，每一个对象生存期结束，total减1
	Student(int n,char *p="Wang");
	void Getname();
	int Getnum();
	static void Print();
};
int Student::total=0;   //静态数据成员初始化
Student::Student(int n,char *p)   //带参构造函数
{
	num = n;
	strcpy(name, p);
	total++;
}
void Student::Getname()
{
	cout << name << endl;
}
int Student::Getnum()
{
	return num;
}
void Student::Print()
{
	cout<<"The number of all student:"<<total<<endl;
}

int main()
{
	Student::Print(); //无对象时可用类名：：静态成员函数名（）形式输出total
	Student *p=new Student(13);
	Student::Print();
	p->Print();
	delete p;
    Student::Print();
	Student s[2];
	s[0].Print();
	s[1].Print();
	getchar();
	return 0;



}