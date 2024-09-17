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
			
void solve(){
	int i=1; 
	char s1[] = "Hajj";
	char s2[] = "Umrah";
	char s[22]; 
	while(scanf("%s", &s) != '*'){
		if(!strcmp(s, "*")){
			break;
		}
		if(0 == strcmp(s, s1)){
			printf("Case %d: Hajj-e-Akbar\n", i);
		}else if(0 == strcmp(s, s2)){
			printf("Case %d: Hajj-e-Asghar\n", i);
		}
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
