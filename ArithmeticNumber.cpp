#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;


int solve(int A, int B, int C){
	if(A==B) return 1;
	
	if(C > 0 and B > A and (B - A)%C == 0) return 1;
	if(C < 0 and B < A and (A - B)%C == 0) return 1;

	return 0;

}


int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif
   	int A, B, C; cin>>A>>B>>C;
 	cout << solve(n);

   	return 0;
	
}
