#include <iostream>
using namespace std;

double f(float x)
{
	float out = 0.0;
	if(x >= 0 && x < 5) out = x+2.5;
	else if(x >= 5 && x < 10) out = 2-1.5*(x-3)*(x-3);
	else if(x >= 10 && x < 20) out = x/2 - 1.5;
	return out;
}

int main()
{
	float in;
	cin >> in;
	printf("%.3f", f(in));
	return 0;
 } 
