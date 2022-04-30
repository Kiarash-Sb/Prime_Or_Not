#include<iostream>
using namespace std;
int main()
{
	int num, count;
	cout << "Enter a number : " << endl;
	cin >> num;
	for (int i = 2; i < num / 2; i++)
		{if (num % i == 0)
			count++;
		}
	if (count == 0)
		cout << "\'The number is prim\'";
	else
		cout << "\'The number is not prim\'";
}
