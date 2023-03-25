/* My Template (01-08-2022) */
#include<iostream>
#include<algorithm>
#include <iomanip>
#include<map>
#include<unordered_map>
#include<vector>
#include<queue>
#include<set>
#include<unordered_set>
#include<limits>
#include<iomanip>
#include<conio.h>

#define in(n) cin>>n
#define O(n) cout<<n
#define V vector<int>
#define testCase int t; \
	cin>>t; \
	while(t--) 

using namespace std;

V bestPermutation(V& v)
{
	if(v.size()&1){
		swap(v[0], v[1]);
	}
	return v;
}

int main()
{
	testCase{
		V v;
		int n; in(n);
		for(int i=n-2; i>=1; i--){
			v.push_back(i);
		}
		v.push_back(n-1);
		v.push_back(n);
		bestPermutation(v);
		for(auto i: v){
			O(i<<" ");
		}
		O("\n");
	}
}
