#include<iostream>
using namespace std;
int main()
{
	/*<< �����������ʹ��*/ 
	cout << "Hello World" << endl << "and nice to meet Cpp" << endl;
	int a;
	cout << "input a number" << endl;

	/*>> �����������ʹ��*/
	cin >> a;
	cout << "Get " << a << endl;

	cout << "input two number" << endl;
	int b, c;
	cin >> b >> c;
	cout << "Get " << b << " " << c << endl; 

	/*�������ʹ��*/
	int unit, decade, hundreds;
	int d;
	cin >> d;
	unit = d % 10;
	decade = (d % 100) / 10;
	hundreds = d / 100;
	cout << "��ʮ��λ�ֱ�Ϊ " << unit << " " << decade << " " << hundreds << endl;

	return 0;
}