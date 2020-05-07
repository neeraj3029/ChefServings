// Author: Shubham Singh Manhas

#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long power(long long a,long long b){
  long long temp=1;
  a=a%mod;
  while(b>0){
    if(b%2!=0){
      temp=(temp*a)%mod;
    }
    b/=2;
    a=(a*a)%mod;
  }
  return temp;
}

int main(){
  long long n,k;
  cin >> n >> k;
  long long q=power(2,n-1);
  long long ans=((q%mod-n%mod)%mod*power(q,mod-2)%mod)%mod;
  cout << ans << "\n";
  return 0;
}
