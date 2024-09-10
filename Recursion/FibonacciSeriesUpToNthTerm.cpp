#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;




vector<int> solve(int n){
	
	vector<int> v(n+1, 0);
	v[0] = 0, v[1] = 1;

	if(n == 1) return v;

	for(int i=2; i<=n; i++){
		v[i] = (v[i-2] + v[i-1]);
	}	

	return v;
}



int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif

   	int n; cin>>n;
	
	vector<int> ans = solve(n);
	for(auto i:ans) cout << i << " ";
	
	
   	return 0;
	
}
