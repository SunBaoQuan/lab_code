#ifndef _Circle//�������룬�����ظ�����
#define _Circle
class circle
{
private:
	double Radius;
	const double PI;
public:
	circle(double r=0):PI(3.1415926)  /*ֻ��ͨ����ʼ���б��ʼ�������ݳ�Ա*/
	{
		Radius=r;
	}
	double Area();//�������
	double Circumference();//�ܳ�����
};
#endif