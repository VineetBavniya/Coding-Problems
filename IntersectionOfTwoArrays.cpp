#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;


void solve(int a[], int b[], int n, int m){
	int mx = INT_MIN;
	int ans = 0;
	for(int i=0; i<n; i++){
		if(a[i] > mx) mx = a[i];
	}

	for(int i=0; i<m; i++){
		if(b[i] > mx) mx = b[i];
	}

	int freq[mx+1] = {0};
	int freq1[mx+1] = {0};
	
	for(int i=0; i<n; i++){
		freq[a[i]]++;
	}
	for(int i=0; i<m; i++){
		freq1[b[i]]++;
	}

	for(int i=0; i<=mx; i++) {
		if(freq[i] >= 1 && freq1[i] >= 1){
			ans++;
		}
	}

	cout << ans;

}


int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif
   	int n, m; cin>>n>>m;
 	int a[n], b[m];

 	for(int i=0; i<n; i++) cin>>a[i];
 	for(int i=0; i<m; i++) cin>>b[i];

 	// cout << solve(a, b, n, m);
   	solve(a, b, n, m);
   	return 0;
	
}
