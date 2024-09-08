#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;


ll solve(ll n, ll arr[]){
	ll ans = (n*(n+1))/2;
	for(ll i=0; i<n-1; i++){
		ans = ans - arr[i];
	}

	return ans;
}


int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif

   	ll n; cin>>n;
   	ll arr[n-1];
   	for(ll i=0; i < n; i++) cin>>arr[i];
	cout << solve(n, arr); 	
	
   	return 0;
	
}
