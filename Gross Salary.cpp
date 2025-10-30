#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int bsl;
		cin >> bsl;
		
		double gs = 0, r1 = 0, r2 = 0;	
		
		if(bsl >= 1500)
		{
			r1 = 500;
			r2 = (bsl*0.98);
			
			gs = bsl + r1 + r2;
			cout  <<fixed <<setprecision(2) << gs << "\n"; 
		}
		
		else
		{
			r1 = (bsl*0.1);
			r2 = (bsl*0.9);
			
			gs = bsl + r1 + r2;
			cout <<fixed <<setprecision(2) << gs << "\n"; 
		}
	}
}
