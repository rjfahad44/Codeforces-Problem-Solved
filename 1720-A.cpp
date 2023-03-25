
#include<iostream>
#include<algorithm>
using namespace std;
#define in(x) cin>>x
#define out(x) cout<<x<<endl
#define to_str(x) # x
#define concat(x,y) x ## y
#define is_win(x) (x&1)
#define D double
#define ll long long int

int main()
{
	int test_cases;
	in(test_cases);
	while(test_cases--)
	{
		ll a,b,c,d;
		in(a>>b>>c>>d);
		ll x = a*d;
		ll y = b*c;
		if(x==y) out(0);
		else{
			if(x == 0 || y== 0 || x%y==0 || y%x ==0) out(1);
			else out(2);
		}
	}
	return 0;
}

//1
//1000000000 999999999 999999999 999999998
//2