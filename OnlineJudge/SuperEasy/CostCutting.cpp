#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef long long int lli; 
typedef unsigned long long llu;
typedef vector<int> vi;
typedef pair<int, int> pi; 

#define ff first 
#define ss second 
#define pb push_back
#define pop pop_back
#define mkp make_pair

const int NUM = 10001;
const ll MOD = 1e9+7;


void solve(){
	int tc, no = 1;
	scanf("%d", &tc);
	int arr[3];
	while(tc-->0){
		for(int i=0; i<3; i++) scanf("%d", &arr[i]);
		sort(arr, arr+3);

		printf("Case %d: %d\n", no, arr[1]);
	}	
	no++;
}



int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif
   	solve();
   	return 0;
	
}
