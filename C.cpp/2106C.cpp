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
    w(t){
        int n; int k; cin>>n; cin>>k; 
        vi arr(n);
        vi brr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        for(int j = 0 ; j < n ;j++){
            cin>>brr[j];
        }
        int sum = accumulate(brr.begin() , brr.end() , 0);
        int mini = *(min_element(arr.begin() ,arr.end()));
        int maxi = *(max_element(arr.begin() ,arr.end()));
        if(sum == (-n)){
            cout<<(k + mini + 1 - (maxi))<<endl;
            continue;
        }
        int s = -1;
        int answer = 1;
        for(int i = 0 ; i < arr.size() ;i++){
            if(brr[i] == -1 ) continue;
            if(s == -1) s = arr[i] + brr[i];
            else if(s != -1 && s != arr[i] + brr[i]) {
                answer = 0;
                break;
            }
        
        }
        if(maxi > s) answer = 0;
        if(s - mini > k) answer = 0;
        cout<<answer<<endl;
    }
}