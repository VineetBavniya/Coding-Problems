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
	string s1="";
	int fo = 1;
	char ch;
	while((ch = getchar()) != EOF){
		if(ch == '"' && fo==1){
			s1+="``";
			fo++;
		}else if(ch == '"' && fo == 2){
			s1+="''";
			fo = 1;
		}else{
			s1+=ch;
		}
	}
	cout << s1;
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
