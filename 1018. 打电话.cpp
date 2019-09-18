#include <iostream>
using namespace std;

int main()
{
	float moy;
	int time = 0;
	cin >> moy;
	if(moy >= 0.5)
	{
		time = 3;
	}
	moy -= 0.5;
	if(moy > 0)
	{
		while(moy >= 0.2)
		{
			moy -= 0.2;
			time += 1;
		}
	 }
	cout << time;
	return 0;
 } 
