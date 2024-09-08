#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;



string solve(int n){
	int ans = 0;
	int realnum = n;
	while(n > 0){
		int rem = n%10;
		n/=10;
		ans += pow(rem, 3);

	}
	return (ans == realnum) ? "true" : "false";

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
