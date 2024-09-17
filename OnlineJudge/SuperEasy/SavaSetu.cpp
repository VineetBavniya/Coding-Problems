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


char s[10];
ll amount = 0;
			
void solve(){
	int t; scanf("%d", &t);

	while(t-->0){
		int k = 0;
		scanf("%s %d", &s, &k);

		if(strcmp(s, "donate") == 0){
			amount+=k;
		}else if(strcmp(s, "report") == 0){
			printf("%d\n", amount);
		}
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
