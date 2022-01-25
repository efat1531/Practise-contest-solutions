//Problem Link - https://open.kattis.com/problems/3dprinter
//Vjudge Contest Problem No A
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int total_printer = 1, total_days = 0;
	while (total_printer < n)
	{
		total_printer = (total_printer * 2);
		total_days++;
	}
	total_days  = total_days+1;
	cout << total_days << endl;
}
