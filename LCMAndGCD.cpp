#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;



int gcd(int a, int b){
	if(a == 0) return b;
	return gcd(b%a, a);
}

int lcm(int a, int b){
	return (a*b)/gcd(a, b);
}


int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif
   	int a, b; cin>>a>>b;

   	cout << lcm(a, b) << " " << gcd(a, b);
 	

   	return 0;
	
}
