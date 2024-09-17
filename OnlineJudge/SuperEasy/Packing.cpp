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
	int i=1;
	while(tc-->0){

		int a,b,c;
		scanf("%d%d%d", &a, &b, &c);

		if(a > 20 || b > 20 || c > 20) {
			printf("Case %d: bad\n", i);
		}else{printf("Case %d: good\n", i);}
		i++;
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
