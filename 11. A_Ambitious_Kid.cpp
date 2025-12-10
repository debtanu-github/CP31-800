#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
        int n;
        cin>>n;
        vector<int>a(n);
        int min=pow(10,5);
        int max=-1*min;
        int count=1;

        for(int i=0; i<n; i++){
          cin>>a[i];
          if(a[i]==0){
            count=0;
          }else if(a[i]>0){
            if(min>a[i]){
              min=a[i];
            }
          }else if(a[i]<0){
            if(max<a[i]){
              max=a[i];
            }
          }
        }
        max*=-1;
        if(count==0){
          cout<<count<<endl;
        }else{
          if(min<=max){
            cout<<min<<endl;
          }else{
            cout<<max<<endl;
          }
        }
    }