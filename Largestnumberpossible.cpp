#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;


string solve(ll n, ll s){
	
	ll snum = s;
	ll sum = 0;
	
	string str = "";
	

	if(s == 0 && n == 1) return "0";
	if(s == 0 && n >= 2) return "-1";  

	while(n-- > 0){
		for(int i=9; i>=0; i--){
			if(i <= s){
				sum+=i;
				s-=i;
				str+=to_string(i);
				break;
			}
		}
	}
	return (snum == sum) ? str : "-1";
}


int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif

   	ll n, s; cin>>n>>s;
	cout << solve(n, s); 	
	
   	return 0;
	
}
