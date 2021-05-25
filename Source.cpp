#include<iostream>
using namespace std;

void addFunction(int a, int b, int c, int d, float low, float high)
{
	high = a * d + b * c;
	low = b * d;
	cout << high << "/" << low;
}
void subtractFunction(int a,int b,int c,int d,int low,int high)
{
	high = a * d - b * c;
	low = b * d;
	cout << high << "/" << low;

}
void multiplyFunction(int a, int b, int c, int d, int low, int high)
{
	high = a * c;
	low = b * d;
	cout << high << "/" << low;
}
void divideFunction(int a,int b,int c,int d, int low ,int high)
{
	high = a * d;
	low = b * c;
	cout << high << "/" << low;

}
int main()
{
	char op;
	int a, b, c, d, multilow = 0, sum =0,sub = 0,multiplyhigh=0,divideofupper=0,divideoflower=0;
	cout << "enter the two int of first fraction :" << endl;
	cin >> a >> b;
	cout << "enter the two int  for second fraction :" << endl;
	cin >> c >> d;
	cout << "enter the operation : ";
	cin >> op;
	if (op == '+')
		(addFunction(a, b, c, d, multilow, sum));
	else if (op == '-')
		subtractFunction(a, b, c, d, multilow, sub);
	else if (op == '*')
		multiplyFunction(a, b, c, d, multilow, multiplyhigh);
	else
		divideFunction(a, b, c, d, divideoflower, divideofupper);
}