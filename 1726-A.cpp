/* My Template (01-08-2022) */
#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<queue>
#include<set>
#include<limits>
#include<iomanip>
#include<conio.h>
#include<cmath>

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
#define V vector<int>
#define v2d vector<vector<int>>
#define Permutation(ss) while(next_permutation(ss.begin(), ss.end()))
#define forn(i, n) for (int i = 0; i < int(n-1); i++)
#define forr(i, n) for (int i = n-1; i>0; i--)
#define optimize(); \
    ios_base::sync_with_stdio(0); \
    cin.tie(0); \
    cout.tie(0);
#define testCase \
    int t; \
    cin>>t; \
    while(t--)

using namespace std;



int main()
{
	/* 
	   #ifndef ONLINE_JUDGE freopen("input.txt", "r", stdin);
	   freopen("output.txt", "w", stdout); #endif */

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector < int >v;
		for (int i = 0; i < n; i++)
		{
			int a;
			cin >> a;
			v.push_back(a);
		}
		int ans = 0;
		for (int i = 0; i < n - 1; i++)
		{
			ans = max(ans, v[i] - v[i + 1]);
			ans = max(ans, v[n - 1] - v[i]);
			ans = max(ans, v[i] - v[0]);
		}
		cout << ans << endl;
	}
	return 0;
}


/* 

   //Accepted


   int t; in(t); while(t--){ int n; in(n); V v; int mx = 0; int mn = INT_MAX;
   for(int i=0; i<n; i++){ int a; in(a); v.pb(a); } for(int i=0; i<n-1; i++){
   mn = min(mn, v[i]); } mx = max(mx, v[n-1]-mn); int mx2 = 0; for(int i=n-1;
   i>0; i--){ mx2 = max(mx2, v[i]); } mx = max(mx, mx2-v[0]); for(int i=0;
   i<n-1; i++){ mx = max(mx, v[i]-v[i+1]); } out(mx); }




   */
