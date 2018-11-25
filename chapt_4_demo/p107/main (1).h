#ifndef _Circle//条件编译，避免重复包含
#define _Circle
class circle
{
private:
	double Radius;
	const double PI;
public:
	circle(double r=0):PI(3.1415926)  /*只能通过初始化列表初始化常数据成员*/
	{
		Radius=r;
	}
	double Area();//面积函数
	double Circumference();//周长函数
};
#endif