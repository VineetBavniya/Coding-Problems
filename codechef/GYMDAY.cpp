#include <bits/stdc++.h>
using namespace std;


#define endl "\n"
#define ll long long 
#define llu unsigned long long 
#define lli long long int 
const int NUM = 10001;
const ll MOD = 1e9+7;





void solve(){
	int cost,coin, disc, ans = -1;
	int disc_price, dis_val;
	cin>>disc>>cost>>coin;
	if(coin >= cost){
		ans = 0;
	}else{
		int count = 0;

		while(coin--){
			count++;
			disc_price = (disc*count*cost)/100;
			dis_val = cost - disc_price;

			if(dis_val <= coin){
				ans = count;
				break;
			}
		}

	}

	cout << ans << endl;
	
}



int main()
{

   	#ifndef ONLINE_JUDGE
   		freopen("input.txt", "r", stdin);
   	 	freopen("output.txt", "w", stdout);
	#endif

   	int t;cin>>t;
   	
   	while(t-->0){
   		solve();
   	}
	
   	return 0;
	
}
