#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;

// Catalan Numbers C(n) = (2n)!/(n!(n+1)!). 
// c4 = c0c3 + c1c2 + c2c1 + c3c0

int solve(int n){
	ll dp[n+1] = {0};
	dp[0] = 1, dp[1] = 1;

	for(int i=2; i<=n; i++){
		for(int j=0; j<i; j++){
			dp[i] = (dp[i] + ((dp[j] %MOD) * (dp[i-j-1])%MOD)%MOD)%MOD;
		}
	}

	return (int)dp[n];
}


int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif

   	ll n; cin>>n;
	cout << solve(n); 	
	
   	return 0;
	
}
