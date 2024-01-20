#include<iostream>
using namespace std;
int add(int a, int b)
{
	cout << "(int,int)\t";
	return a + b;
}

double add(double a, double b)
{
	cout << "(double,double)\t";
	return a + b;
}

int add(double a, int b)
{
	cout << "(double,int)\t";
	return a + b;
}

int add(int a, double b)
{
	cout << "(int,double)\t";
	return a + b;
}

//int main()
//{
//	cout << add(1, 2) << endl;
//	cout << add(1.2, 2.2) << endl;
//	cout << add(1.2, 2) << endl;
//	cout << add(1, 2.2) << endl;
//	return 0;
//}