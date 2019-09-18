#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long in;
	int ci = 0;
	cin >> in;
	for(int i = 1; i <= sqrt(in); i++)
	{
		if(in%i == 0)
		{
			ci += 2;
		}
		if(i == sqrt(in)) ci -= 1;
	}
	cout << ci;
	return 0;
 } 
