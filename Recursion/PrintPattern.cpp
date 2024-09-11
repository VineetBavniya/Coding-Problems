#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;

// Recursive Way
vector<int> f(int &n, vector<int>& v){
	if(n <= 0) return v;
	v.push_back(n);
	n-=5;
	return f(n, v);
}


vector<int> s(int &r, int &n, vector<int>& v){
	if(r < n) return v;
	v.push_back(n);
	n+=5;
	return s(r, n, v);
}


/////////////////////


// Normal Way 
vector<int> solve(int n){
	if(n <= 0) return {n};
	vector<int> v;
	int real = n;

	while(n > 0){
		v.push_back(n);
		n-=5;
	}

	while(real >= n){
		v.push_back(n);
		n+=5;
	}

	return v;
}



int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif

   	int n; cin>>n;
	vector<int> ans = solve(n);
	for(auto i:ans) cout << i << " ";
	
	
   	return 0;
	
}
