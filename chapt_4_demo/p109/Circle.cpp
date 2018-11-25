#include"Circle.h"  //头文件
double circle::Area() //求面积
{
	return PI*Radius*Radius;
}
double circle::Circumference()  //求周长
{
	return 2*PI*Radius;
}
double circle::GetRadius()const
{
	return Radius;
}


