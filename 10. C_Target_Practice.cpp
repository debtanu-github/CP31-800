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
        vector<string>a(10);

        for(int i=0; i<10; i++){
          cin>>a[i];
        }
        int sum=0;
        int add=0;

        for(int i=0; i<10; i++){
          for(int j=0; j<10; j++){
            if(i==0||i==9||j==0||j==9){
                add=1;
            }else if(((i==1||i==8) && j>0 && j<9)||((j==1||j==8) && i>0 && i<9)){
                add=2;
            }else if(((i==2||i==7) && j>1 && j<8)||((j==2||j==7) && i>1 && i<8)){
                add=3;
            }else if(((i==3||i==6) && j>2 && j<7)||((j==3||j==6) && i>2 && i<7)){
                add=4;
            }else if(((i==4||i==5) && j>3 && j<6)||((j==4||j==5) && i>3 && i<6)){
                add=5;
            }
            if(a[i][j]=='X'){
              sum+=add;
            }
          }
        }
        cout<<sum<<endl;
    }
}