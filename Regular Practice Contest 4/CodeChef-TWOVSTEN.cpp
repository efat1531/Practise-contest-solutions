//Problem Link - https://www.codechef.com/problems/TWOVSTEN
//Vjudge contest problem - E
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		int n;
		cin >> n;
		if (n % 10 == 0)
			cout << 0 << endl;
		else if (n % 5 == 0)
			cout << 1 << endl;
		else cout << -1 << endl;
	}
}
