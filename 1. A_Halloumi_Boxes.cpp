#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    while (tc--) {
        int n,k;
        cin>>n;
        cin>>k;
        vector<int> a(n);

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int is_sorted=1;

        for(int i=0; i<n-1;i++){
            if(a[i+1]<a[i]){
                is_sorted=0;
                break;
            }
        }

        if(is_sorted==0 && k<2){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}