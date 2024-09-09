#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;


ll solve(ll n){
	int cnt = 0;
	if(n == 1) return 0;

	for(int i=1; i<=sqrt(n); i++){
		if(i*i < n) cnt++;
		else return cnt;
	}
	return cnt;
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
