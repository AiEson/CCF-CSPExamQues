#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	cin >> num;
	int leng = num.length();
	cout << leng << endl;
	for(int i = 0; i < leng; i++)
	{
		cout << num[i] << endl;
	}
	return 0;
 } 
