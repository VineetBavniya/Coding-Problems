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
	int tc; scanf("%d", &tc);

	while(tc-->0){
		int n; 
		scanf("%d", &n);

		int MN = INT_MAX , MX = INT_MIN;

		for (int i = 0; i<n; i++){
			int a; scanf("%d", &a);
			MN = min(MN, a);
			MX = max(MX, a);
		}

		printf("%d\n", 2*(MX-MN));

	}	
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
