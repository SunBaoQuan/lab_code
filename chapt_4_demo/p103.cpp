#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
	int num;
	char name[20];
public:
	static int total;    //公有的静态数据成员
	Student() { total++; }  //构造函数，每定义一个新对象，则total加1
	~Student() { total--; } //析构函数，每一个对象生存期结束，total减1
	Student(int n,char *p="Wang");
	void Getname();
	int Getnum();
};
int Student::total;   //静态数据成员初始化
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
int main()
{
	cout << "The number of all students:" << Student::total << endl;
	Student * p= new Student(13);
	cout << "The number of all students:" << Student::total << endl;
	cout << "The number of all students:" << p->total << endl;
	delete p;
	cout << "The number of all students:" << Student::total << endl;
	Student s[2];
	cout << "The number of all students:" << s[0].total << endl;
	cout << "The number of all students:" << s[1].total << endl;
	getchar();
	return 0;
}
