// Author: Shubham Singh Manhas

#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    if(n==1) cout << "1 1\n";
    else{
      string p="1",q="1";
      int temp=n/2;
      for(int i=0;i<temp;i++){
        q+='0';
      }
      cout << p << ' ' << q << "\n";
    }
  }
  return 0;
}