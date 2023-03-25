/*
Date : 19(Friday)-08(August)-2022 
Time : 08:54 PM

This code is mine, which is accepted for the first time
*/

#include<iostream>
using namespace std;
#define in(x) cin>>x;
#define out(x) cout<<x;
#define to_str(x) # x
#define concat(x,y) x ## y
#define is_win(x) (x&1)

int main()
{
	int test_case;
	cin>>test_case;
	while(test_case--)
	{
		int n,m;
		in(n>>m)
		out((is_win(n+m)?"Burenka":"Tonya")<<endl)
	}
	return 0;
}