/*����ģ��*/
//��ʽ���
#include<iostream>
using namespace std;

template <class T1,class T2>
T1 add(T1 x, T2 y)
{
	cout << sizeof(T1) << "," << sizeof(T2) << "\t";//���T1��T2���ֽڴ�С
	return x + y;
}
//int main()
//{
//	cout << add(1, 2) << endl;
//	cout << add(1.2, 1.2) << endl;
//	cout << add(1.2, 2) << endl;
//	cout << add('A', 1) << endl;
//
//	return 0;
//}