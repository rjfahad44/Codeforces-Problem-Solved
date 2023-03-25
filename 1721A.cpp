
/* My Template */
//(03/09/2022  11:26 AM)
// #include<bits/stdc++.h>
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
#define pb push_back
#define mp map<string, ll>
#define ump unordered_map<string,ll>
#define ummp unordered_multimap<string, ll>
#define vc vector<User>
#define v2d vector<vector<int>>


using namespace std;

int main()
{
	int test_case;
	in(test_case);
	while (test_case--)
	{
		set < char >pixels;
		string s1, s2;
		cin >> s1 >> s2;
		pixels.insert(s1[0]);
		pixels.insert(s1[1]);
		pixels.insert(s2[0]);
		pixels.insert(s2[1]);
		cout << pixels.size() - 1 << endl;
	}
	return 0;
}
