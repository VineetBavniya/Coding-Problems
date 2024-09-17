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

// one two three 
char s[5];
string ar[3] = {"one", "two", "three"};

void solve(){
	int tc; scanf("%d", &tc);
	while(tc-->0){
		scanf("%s", &s);
		for(int i=0; i<3; i++){
			string l = ar[i];
			int cmp = 0;
			if(l.size() <= 3){
				for(int j=0; j<3; j++){
					if(l[j] == s[j]){
						cmp++;
					}
				}

				if(cmp >= 2) {
					printf("%d\n", i+1);
					break;
				} 
			}else{
				for (int j = 0; j < 5; ++j)
				{
					if(l[j] == s[j]){
						cmp++;
					}

					if(cmp >= 4){
						printf("%d\n", i+1);
						break;
					}
				}
			}
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
