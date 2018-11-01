// Author: Shubham Singh Manhas

#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    long long sum=0;
    string s;
    cin >> s;
    pair<int,int> a[s.length()][26];
    int count[26],count1[26],b[s.length()];
    memset(count,0,sizeof(count));
    memset(count1,0,sizeof(count1));
    memset(b,0,sizeof(b));
    for(int i=s.length()-1;i>=0;i--){
      long long num=0;
      for(int j=0;j<26;j++){
        a[i][j].second=count[j];
        if(j>s[i]-'a') num+=count[j];
      }
      b[i]=num;
      sum+=num;
      count[s[i]-'a']++;
    }
    long long ans=sum;
    for(int i=0;i<s.length();i++){
      for(int j=0;j<26;j++){
        a[i][j].first=count1[j];
      }
      for(char j='a';j<='z';j++){
        long long x=abs(s[i]-j);
        long long y=sum-b[i];
        for(int k=j-'a'+1;k<26;k++){
          y+=a[i][k].second;
        }
        for(int k=0;k<26;k++){
          if(j>('a'+k)&&s[i]<=('a'+k)){
            y+=a[i][k].first;
          }
          else if(j<=('a'+k)&&s[i]>('a'+k)){
            y-=a[i][k].first;
          }
        }
        ans=min(ans,x+y);
      }
      count1[s[i]-'a']++;
    }
    cout << ans << '\n';
  }
  return 0;
}
