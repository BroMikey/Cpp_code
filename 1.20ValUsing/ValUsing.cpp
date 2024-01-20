#include<iostream>
using namespace std;
int main()
{
	/*<< 输出操作符的使用*/ 
	cout << "Hello World" << endl << "and nice to meet Cpp" << endl;
	int a;
	cout << "input a number" << endl;

	/*>> 输入操作符的使用*/
	cin >> a;
	cout << "Get " << a << endl;

	cout << "input two number" << endl;
	int b, c;
	cin >> b >> c;
	cout << "Get " << b << " " << c << endl; 

	/*运算符的使用*/
	int unit, decade, hundreds;
	int d;
	cin >> d;
	unit = d % 10;
	decade = (d % 100) / 10;
	hundreds = d / 100;
	cout << "个十百位分别为 " << unit << " " << decade << " " << hundreds << endl;

	return 0;
}