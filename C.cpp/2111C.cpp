#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ff                  first
#define ss                  second
#define int                 long long
#define pb                  push_back
#define mp                  make_pair
#define pii                 pair<int,int>
#define vi                  vector<int>
#define mii                 map<int,int>
#define pqb                 priority_queue<int>
#define pqs                 priority_queue<int,vi,greater<int>>
#define setbits(x)          __builtin_popcountll(x)
#define zrobits(x)          __builtin_ctzll(x)
#define mod                 100000007
#define inf                 1e18
#define ps(x,y)             fixed<<setprecision(y)<<x
#define mk(arr,n,type)      type *arr = new type[n]
#define w(x)                int x; cin>>x; while(x--)
mt19937                     rng(chrono::steady_clock::now().time_since_epoch().count());
typedef tree < int, null_type , less<int>, rb_tree_tag , tree_order_statistics_node_update> pbds;
void c_p_c() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w" , stdout);
    #endif
}
int32_t  main() { 
    c_p_c();
    w(x){
        int n ; cin>>n;
        vi arr(n);
        for(int i = 0 ; i < n; i++) cin>>arr[i];
        int i = 0; int j = 0; 
        int ans = LLONG_MAX;
        while(i < n){
            while(j < n && arr[i] == arr[j]) j++;
            ans = min(ans , i * arr[i] + (n - (j - 1) - 1)*arr[j - 1]);
            i = j;
        }
        cout<<ans<<endl;
    }
}