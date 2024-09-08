#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;


int solve(int n){
	if(n == 1 || n == 2) return n;

	int n1 = 1, n2 = 2, ans = 0;

	for(int i=3; i<=n; i++){
		ans = (n1%MOD + n2%MOD)%MOD;
		int temp = n2;
		n2 = ans;
		n1 = temp;
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
