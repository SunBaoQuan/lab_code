#include"Circle.h"  //ͷ�ļ�
double circle::Area() //�����
{
	return PI*Radius*Radius;
}
double circle::Circumference()  //���ܳ�
{
	return 2*PI*Radius;
}
double circle::GetRadius()const
{
	return Radius;
}


