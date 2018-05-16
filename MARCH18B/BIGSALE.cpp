/*
Author : Neeraj Rajpurohit
MARCH18B
*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int q = 0; q < t; q++) {
        int n;
        cin>>n;
        double loss=0;
        for(int i=0;i<n;i++){
            double p,u,d;
            cin>>p>>u>>d;
            loss += (u*p*d*d/10000.000000000);
        }
        cout<<std::setprecision(100)<<loss<<endl;
 
    }
} 