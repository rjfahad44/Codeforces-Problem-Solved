/* 
   My Template 
*/
#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
/*_________________________________________________*/
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define in(x) cin>>x
#define out(x) cout<<x<<endl
#define to_str(x) # x
#define concat(x,y) x ## y
#define is_even_or_not(x) (x&1)
#define D double
#define lli long long int
#define ll long long
#define ld long double
#define ull unsigned long long
#define loop(i,n) for(i=n/2; i>=1; i--)
#define pb push_back
#define mp map<string, ll>
#define ump unordered_map<string,ll>
#define ummp unordered_multimap<string, ll>
#define vc vector<User>

using namespace std;

struct User
{
	string k;
	int v;
};


ll gcd(ll a, ll b)
{
	return b == 0 ? a : gcd(b, a % b);
}


int main()
{
	ll n, i;
	while (in(n))
	{
		loop(i, n)
		{
			if (gcd(i, n - i) == 1)
			{
				out(i << " " << n - i);
				break;
			}
		}
	}
	return 0;
}
