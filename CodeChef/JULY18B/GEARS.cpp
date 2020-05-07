// Author: Shubham Singh Manhas

#include<bits/stdc++.h>
using namespace std;
long long a[100001];
pair<int,int> node[100001];
bool block[100001];
vector<int> sign(100001,1);

int find(int s){
  if(node[s].first==s){
    return node[s].first;
  }
  return find(node[s].first);
}

int getsign(int s){
  if(s==node[s].first) return sign[s];
  return sign[s]*getsign(node[s].first);
}

void unionn(int x,int y){
  int i1=find(x),i2=find(y);
  if(node[i1].second<node[i2].second){
    if(getsign(x)==getsign(y)) sign[i1]=-sign[i2];
    node[i1].first=i2;
  }
  else if(node[i1].second>node[i2].second){
    if(getsign(x)==getsign(y)) sign[i2]=-sign[i1];
    node[i2].first=i1;
  }
  else{
    if(getsign(x)==getsign(y)) sign[i2]=-sign[i1];
    node[i2].first=i1;
    node[i1].second++;
  }
}

int main(){
  int n,m;
  cin >> n >> m;
  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  for(int i=1;i<=n;i++){
    node[i].first=i;
    node[i].second=0;
  }
  while(m--){
    int t,x,y;
    long long c,v;
    cin >> t;
    if(t==1){
      cin >> x >> c;
      a[x]=c;
    }
    else  if(t==2){
      cin >> x >> y;
      int i1=find(x),i2=find(y);
      if(i1==i2){
        if(getsign(x)==getsign(y)){
          block[i1]=true;
          block[i2]=true;
        }
      }
      if(block[i1]||block[i2]){
        block[i1]=true;
        block[i2]=true;
      }
      unionn(x,y);
    }
    else{
      cin >> x >> y >> v;
      int i1=find(x),i2=find(y);
      if(i1==i2&&!block[i1]&&!block[i2]){
        long long p=v*a[x];
        long long q=a[y];
        long long gcd=__gcd(p,q);
        p/=gcd;
        q/=gcd;
        if(getsign(x)!=getsign(y)) p=-p;
        cout << p << "/" << q << "\n";
      }
      else cout << "0\n";
    }
  }
  return 0;
}
