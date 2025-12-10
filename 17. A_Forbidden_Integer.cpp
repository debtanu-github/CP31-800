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
        int n,k,x;
        cin>>n>>k>>x;

        if(x==1 && k==2 && n%2==1 || x==1 && k==1){
          cout<<"NO"<<endl;
          continue;
        }

        int i=1;
        while(x!=1 && i<=n){
          if(i==1){
            cout<<"YES\n"<<n<<endl;
          }
          cout<<1<<" ";
          if(i==n){
            cout<<"\n";
          }
          i++;
        }
        if(x!=1){
          continue;
        }

        cout<<"YES"<<endl;
        cout<<n/2<<endl;

        if(n%2==0){
          cout<<2<<" ";
        }else{
          cout<<3<<" ";
        }
        for(int i=1; i<=n/2-1; i++){
          cout<<2<<" ";
        }
        cout<<"\n";
    }
}