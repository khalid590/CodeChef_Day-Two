#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n, x;
		cin >> n >> x;
		int r = 0,inc = 0;
		inc = pow(2,x);
		r = inc;
		
		for(int i = 1; i <= n; i++)
		{
			r = r/2;
		}
		cout << r << "\n";
	}
}
