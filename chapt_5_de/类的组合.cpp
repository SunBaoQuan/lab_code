#include<iostream>
#include<ctime>
#include <cstdlib>
using namespace std;
class Dice      //骰子类
{
public:
	int run()
	{
		return (rand() % 6 + 1);
	}
};
class Gambler
{
private:
	Dice a, b, c;

public:
	void play()
	{
		int num1, num2, num3;
		num1 = a.run();
		num2 = b.run();
		num3 = c.run();
		if(num1==num2&&num1==num3)
		{
			cout << num1 << "  " << num2 << "  " << num3 << "豹子" << endl;
		}
		else if (num1+num2+num3>10)
		{
			cout << num1 << "  " << num2 << "  " << num3 << "大" << endl;
		}
		else
		{
			cout << num1 << "  " << num2 << "  " << num3 << "小" << endl;
		}
	}
};
int main()
{
	Gambler Jack;
	srand(time(NULL));
	Jack.play();
	getchar();
	return 0;
}