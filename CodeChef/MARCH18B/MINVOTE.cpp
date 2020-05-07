#include<iostream>
using namespace std;
// Author : Neeraj Rajpurohit
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
        cin >> t;
        for( int q=0 ; q<t ; q++ ){
            long n;
            cin >> n;
            long a[n];
            long b[n];
            for( int i=0 ; i<n ; i++ ){
                cin >> a[i];
                if( i==0 )
                    b[i] = a[i];
                else
                    b[i] = b[i-1] + a[i];
 
            }
 
 
 
 
 
            for( int i=0 ; i<n ; i++ ){
                int sum = 0;
                for( int j=0 ; j<n ; j++ )
                {
                    if( j!=i ){
                        long d;
                        if( j > i )
                            d = a[j]-(b[j]-b[i]-a[j]);
                        else
                            d = a[j]-(b[i] - b[j] - a[i]);
 

                        if( d>=0 )
                            sum++;
 
                    }
                          }
                printf("%ld ", sum);
 
            }
 
 
}
    printf("\n");
 
}  
