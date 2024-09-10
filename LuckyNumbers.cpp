#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;



bool solve(int n, int c){
	if(c <= n){
		if(n%c == 0) return false;

		n = n - (n/c);
		c+=1;

		return solve(n, c);
	}

	return true;
}


int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif

   	int n; cin>>n;
	cout << solve(n, 2); 	
	
   	return 0;
	
}
