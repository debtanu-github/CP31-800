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
        int n;
        cin>>n;

        vector<int>a(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int span=0;
        int temp=0;

        for(int i=0; i<n-1; i++){
            if(a[i]%2 == a[i+1]%2){
                temp++;
            }else{
                span+=temp;
                temp=0;
            }
            if(i==n-2){
                span+=temp;
                temp=0;
            }
        }
        if(n==1){
            cout<<0<<endl;
        }else{
            cout<<span<<endl;
        }
    }
}