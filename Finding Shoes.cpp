#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n, m, r = 0;
		cin >> n >> m;
		
		if(n <= m)
		{
			r = n;
			cout << r << "\n";
		}
		
		else 
		{
			r = (n*2 - m);
			cout << r << "\n";
		}
		
	}
}
