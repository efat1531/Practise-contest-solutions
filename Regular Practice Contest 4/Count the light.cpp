#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, len;
	cin >> n >> len;
	int ar[n];
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	sort(ar, ar + n);
	double ans = max(ar[0] - 0, len - ar[n - 1]);
	for (int i = 1; i < n; i++)
	{
		ans = max(ans, (double)(ar[i] - ar[i - 1]) / 2);
	}
	cout << fixed << setprecision(10) << ans << endl;
}