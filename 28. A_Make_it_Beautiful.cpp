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
        int sum=0;
        int flag=1;

        for(int i=0; i<n; i++){
          cin>>a[i];
          if(sum==a[i]){
            flag=0;
          }
          sum+=a[i];
        }

        if(a[0]==a[n-1]){
          cout<<"NO"<<endl;
          continue;
        }

        if(flag==1){
          cout<<"YES"<<endl;
          for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
          }
          cout<<'\n';
          continue;
        }

        int j=-1;
        int i=0;

          cout<<"YES"<<endl;
          for(i=n-1; i>0; i--){
            if(a[i]==a[i-1] && j==-1){
              continue;
            }else{
              j++;
              cout<<a[i]<<" ";
            }
          }
          cout<<a[i]<<" ";
          for(int i=n-1; i>j+1; i--){
            cout<<a[i]<<" ";
          }
          cout<<'\n';
    }
}