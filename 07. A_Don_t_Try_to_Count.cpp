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
        int m;
        cin>>n>>m;

        string x;
        string s;

        cin>>x>>s;

        int count=0;
        int flag=0;

        if(x.find(s)!=string::npos){
            flag=1;
        }

        while(x.size()<s.size()){
          count++;
          x=x+x;
          if(x.find(s)!=string::npos){
            flag=2;
            break;
          }
        }
        x=x+x;

        if(flag==1){
          cout<<0<<endl;
        }else if(flag==2){
          cout<<count<<endl;
        }else if(x.find(s)!=string::npos){
            cout<<count+1<<endl;
        }else{
          cout<<-1<<endl;
        }
    }
}