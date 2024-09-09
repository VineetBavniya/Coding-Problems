#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;
// N in range of 18

ll solve(ll n){
	if(n <= 1) return 1;
	return n *solve(n-1);
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
