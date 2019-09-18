#include <iostream>
using namespace std;

int main()
{
	int all, max, min;
	cin >> all;
	for(int i = 1; i <= all; i ++)
	{
		int in;
		cin >> in;
		if(i == 1)
		{
			max = in;
			min = in;
		}
		if(in > max) max = in;
		if(in < min) min = in;
	}
	cout << max-min;
	return 0;
 } 
