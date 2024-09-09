#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;


ll solve(ll n, ll m){
	ll start = 1, end = m;

	while(start <= end){
		ll mid = start + (end - start)/2;

		if(pow(mid, n) == m) return mid;
		else if(pow(mid, n) < m){
			start = mid+1;
		}else end = mid -1;
	}

	return -1;
}


int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif

   	ll n, m; cin>>n>>m;
	cout << solve(n, m); 	
	
   	return 0;
	
}
