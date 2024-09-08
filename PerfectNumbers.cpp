#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;


// first you should read this artical 
// https://en.wikipedia.org/wiki/Perfect_number
//  2 p − 1 ( 2 p − 1 ) {\displaystyle 2^{p-1}(2^{p}-1)} 
// n = 2, pow(2, (2-1)) * (pow(2,2) - 1); 
// = 2(4 –1) 
//= 2 × 3 = 6.


int solve(ll n){
	
	if(n <= 3) return 0;
	for(int i=2; i<=sqrt(n); i++){
		ll ans = pow(2, (i-1)) * (pow(2,i) - 1);
		if(ans == n){
			return 1;
		}else if(ans > n){
			return 0;
		}else continue;
	}

	return 0;

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
