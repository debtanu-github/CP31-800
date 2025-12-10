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
        int pos=0;
        int neg=0;
        int count=0;
        int diff=0;

        for(int i=0; i<n; i++){
          cin>>a[i];
          if(a[i]==1){
            pos++;
          }else{
            neg++;
          }
        }

        if(neg==0){
          cout<<0<<endl;
        }else if(pos>=neg && neg%2==0){
          cout<<0<<endl;
        }else if(pos>=neg && neg%2==1){
          cout<<1<<endl;
        }else if(pos<neg){
          diff=neg-pos;
          if(diff%2==0){
            count=diff/2;
          }else{
            count=diff/2+1;
          }
          neg=neg-count;
          pos=pos+count;
          
          if(neg%2==0){
            cout<<count<<endl;
          }else{
            cout<<count+1<<endl;
          }
        }
    }
}