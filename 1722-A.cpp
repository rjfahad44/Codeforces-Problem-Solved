/* 
   My Template */
#include<iostream>
#include<algorithm>
#include<map>
#include<cctype>
#include<unordered_map>
#include<vector>
#include<queue>
#include<set>
#include<limits>
#include<iomanip>
#include<conio.h>

#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define Permutation(ss) while(next_permutation(ss.begin(), ss.end()))
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
#define pb push_back
#define mp map<string, ll>
#define ump unordered_map<string,ll>
#define ummp unordered_multimap<string, ll>
#define vc vector<User>
#define v2d vector<vector<int>>

using namespace std;


int main()
{
	int t;
	in(t);
	for (int j = 0; j < t; j++)
	{
		int n;
		string s, ss;
		in(n >> s);
		ss= "Timru";
		sort(s.begin(), s.end());
		out((s==ss? "YES" : "NO"));
	}
	return 0;
}
