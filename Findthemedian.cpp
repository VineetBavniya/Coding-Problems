#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;



int solve(int n, int a[]){
	if(n == 1) return a[0];
	if(n == 2) return (a[0] + a[1])/2;
	sort(a, a+n);

	if(n%2 == 0){
		return ((a[(n/2)]) + a[(n/2)-1])/2;
	}

	return (a[((n/2) + (n%2))-1]);
}


int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif

   	int n; cin>>n;
   	int a[n]; 
   	for(int i=0; i<n; i++) cin>>a[i];
	cout << solve(n, a); 	
	
   	return 0;
	
}
