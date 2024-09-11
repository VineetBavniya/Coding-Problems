#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;



lli solve(int N){
        if(N == 1 || N == 2) return N-1;
        
        lli ans ((solve(N-2) * solve(N-2)) - solve(N-1));
        
        return ans;
    }
    
    void gfSeries(int N)
    {
        // Write Your Code here
        for(int i=1; i<=N; i++){
            lli ans = solve(i);
            cout << ans << " ";
            
        }
        cout<<endl; 
        
    }

int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif

   	int n; cin>>n;
	
		gfSeries(N);
	
   	return 0;
	
}
