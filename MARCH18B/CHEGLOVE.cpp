/*
Author : Neeraj Rajpurohit
MARCH 18B
CHEGLOVE
*/

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
      int n;
        cin>>n;
        int f=1;int bk=1;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
                f=0;
            if(a[i]>b[n-1-i])
                bk=0;
        }
 
        if(f==1 && bk == 1)
            printf("both\n");
        else if(f==1 && bk == 0)
            printf("front\n");
        else if(f==0 && bk==1)
            printf("back\n");
        else
            printf("none\n");
 
    }
} 