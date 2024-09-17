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
	int tc;
	scanf("%d", &tc);
	while(tc-->0){
		int n,m; scanf("%d%d", &n , &m);

		n -=2, m-=2;
		int r = n/3;
		int rn = n%3;

		if(rn > 0){
			r++;
		}

		int c = m/3;
		int cm = m%3;

		if(cm > 0){
			c++;
		}

		printf("%d\n", c*r);
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
