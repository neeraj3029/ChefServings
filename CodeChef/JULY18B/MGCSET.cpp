// Author: Shubham Singh Manhas

#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n,m,count=0;
    cin >> n >> m;
    int a[n];
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    for(int i=0;i<n;i++){
      if(a[i]%m==0){
        count++;
      }
    }
    long long ans=(pow(2,count)-1);
    cout << ans << "\n";
  }
  return 0;
}
