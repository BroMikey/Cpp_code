/*
#include<iostream>
//using namespace std;
int main()
{
	int x = 1;
	int y = 2;
	std::cout << x - y << ' ' << x * y << std::endl;
	std::cout << "Hello Buggy World" << std::endl;
	return 0;
}
*/
/*
#include<iostream>

constexpr double GetPi() { return 22.0 / 7; }
constexpr double XPi(int x) { return x * GetPi(); }
int main()
{
	using namespace std;
	const double Pi = GetPi();
	cout << "constexpr Pi evaluated by compiler to " << Pi << endl;
	cout << "constexpr XPi(2) evaluated by compiler to " << XPi(2) << endl;


	return 0;
}
*/

/*
enum Cardinaldirections
{
	North,
	South,
	East,
	West
};

#include<iostream>
using namespace std;
int main()
{
	Cardinaldirections Home = North;
	cout << Home << endl;
	return 0;
}
*/

/*

#include<iostream>
#include<vector>

using namespace std;
int main()
{
	vector<int> dynArray(3);

	dynArray[0] = 365;
	dynArray[1] = -421;
	dynArray[2] = 212;

	cout << "Number of integers in array: " << dynArray.size() << endl;

	cout << "Enter another elements to inserts" << endl;
	int newvalue = 0;
	cin >> newvalue;
	dynArray.push_back(newvalue);

	cout << "The last number of array is " << dynArray[dynArray.size() - 1] << endl;

	return 0;
}
*/

