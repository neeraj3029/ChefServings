#include<iostream>
using namespace std;
 //Author : Neeraj Rajpurohit
// solution for 18 pts
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long q, n, l, r;
    cin >> n >> q;
    long b[n];
    long a[n];
    for (long i = 0; i < n; i++) {
        cin >> b[i];
    }
 
    for( long i=0 ; i<q ; i++ ) {
        cin >> l >> r;
        long z = 0;
        long exp = 1;
       	long long sub = 0;
 
 
        //printf("len = %ld ",len);
        while (z < 31) {
 
            long u=0;long d=0;
            for (long j = l - 1 ; j < r ; j++)
 
            {
 
                ( (b[j]&exp) == 0 )? d-- : d++;
 
            }
 
            if(d<0)
                sub+=exp; 
            exp*=2;
            z++;
        } 
        cout<<sub<<endl;
    }
} 
