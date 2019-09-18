#include <iostream>
using namespace std;

int main()
{
	int day;
	cin >> day;
	int j,y,t;
	for(int i = 1; i <= day; i++)
	{
		if(i == 1)
		{
			cin >> j;
			cin >> y;
			cin >> t;
		}
		else{
			int jj,yy,tt;
			cin >> jj;
			cin >> yy;
			cin >> tt;
			j += jj;
			y += yy;
			t += tt;
		}
	}
	int all = j+y+t;
	cout << j << " " << y << " " << t << " " << all;
	return 0;
 } 
