//Problem Link - https://open.kattis.com/problems/3dprinter
//Vjudge Contest Problem No A

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int total_days = ceil(log2(n)) + 1;
	cout << total_days << endl;
}
