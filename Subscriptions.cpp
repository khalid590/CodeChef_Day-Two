#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n,x, r = 0;
		cin >> n >> x;
		
		if(n < 6)
		{
			r = n*x;
			cout << r << "\n";
		}
		
		else
		{
			
				r = ceil(n/6.0);
				int c = r * x;
				cout << c << "\n";
				
			}
		}
	}
