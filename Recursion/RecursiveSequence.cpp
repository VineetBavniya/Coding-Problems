#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;



lli solve(int n){
	ll ans = 1, temp = 2;
	int i=2; 

	while(i<=n){
		int j=i;
		lli temp2 = 1;

		while(j--){
			temp2 *= temp;
			temp2 %=MOD;
			temp++;
		}
		ans +=temp2;
		ans %=MOD;
		i++;
	}
	return ans;	
}



int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif

   	int n; cin>>n;
	cout << solve(n);
	
   	return 0;
	
}
