#include <iostream>
using namespace std;

int main()
{
	int all;
	long long nl = 0;
	cin >> all;
	for(int i = 1; i <= all; i ++)
	{
		int in;
		cin >> in;
		nl += in;
	}
	float age = (nl*1.0)/(all*1.0);
	printf("%.2f", age);
	return 0;
 } 
