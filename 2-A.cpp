#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>
#include<vector>
#include<set>

#define in(x) cin>>x
#define out(x) cout<<x<<endl
#define to_str(x) # x
#define concat(x,y) x ## y
#define is_even_or_not(x) (x&1)
#define D double
#define ll long long int
#define mp map<string, ll>
#define ump unordered_map<string,ll>
#define ummp unordered_multimap<string, ll>
#define vc vector<pair<string, ll>>
#define S set<pair<string,ll>>

using namespace std;

int main(){
	ll test_cases;
	in(test_cases);
	mp m, mm;
	vc v;
	while(test_cases--){
		string p;
		ll n;
		in(p>>n);
		m[p]+=n;
		v.push_back(make_pair(p,n));
	}
	
	auto mx = max_element(m.begin(), m.end(), [](const auto &x, const auto &y){
		return x.second < y.second;
	});
	
	string ans;
	for(auto [key, value] : v){
		mm[key]+=value;
		if(m[key] == mx->second && mm[key]>= mx->second){
			ans = key;
			break;
		}
	}
	out(ans);
	return 0;
}

/*
26
ys 535

gczuitwphlv -706

fzcgiyqdsddncqeccyegireaj -712

gczuitwphlv 127

mxcdbcgzfpgnfumhz 134

gczuitwphlv -185

gczuitwphlv 19

ys 708

wwsopulbmausryy -461

mxcdbcgzfpgnfumhz 840

fzcgiyqdsddncqeccyegireaj -911

mxcdbcgzfpgnfumhz -762

fzcgiyqdsddncqeccyegireaj -926

fzcgiyqdsddncqeccyegireaj 761

mxcdbcgzfpgnfumhz -82

ys -339

wwsopulbmausryy -774

ys -946

ys -43

wwsopulbmausryy 989

ys -746

gczuitwphlv 91

wwsopulbmausryy -929

wwsopulbmausryy -463

mxcdbcgzfpgnfumhz 835

gczuitwphlv -84


output : mxcdbcgzfpgnfumhz
*/