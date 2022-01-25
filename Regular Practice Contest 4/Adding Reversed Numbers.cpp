//Problem Link - https://www.spoj.com/problems/ADDREV/en/|
//Vjudge contest problem - F
#include<bits/stdc++.h>
using namespace std;

int reverse(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum *= 10;
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

int main()
{
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		int a, b;
		cin >> a >> b;
		int sum = reverse(a) + reverse(b);
		cout << reverse(sum) << endl;
	}
}
