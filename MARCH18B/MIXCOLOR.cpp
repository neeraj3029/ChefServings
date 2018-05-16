//
//  mergesort.c
//
//
//  Created by Neeraj Rajpurohit//
 
 
#include<stdio.h>
#include<stdlib.h>
 
 
 
 
void merge(int *a,int p, int q, int r){
    int l1 = q - p + 1;
    int l2 =  r - q;
    int i;
    int m1[l1]; int m2[l2];
    for(i=0;i<l1;i++){
        m1[i] = a[p+i];
    }
    for(i=0;i<l2;i++){
        m2[i] = a[q+1+i];
    }
 
 
    i=0;
    int j=0;
    int k=p;
    i=0;
    while(i<l1 && j<l2){
        if(m1[i]<m2[j])
        {a[k]=m1[i];
            i++;
        }
        else{
            a[k]=m2[j];
            j++;
        }
 
 
        k++;
    }
 
 
    while(i<l1){
        a[k] = m1[i];
        i++;k++;
    }
    while(j<l2){
        a[k] = m2[j];
        j++;k++;
    }
 
}
 
 
void mergesorts(int *a, int p, int r){
    if(p<r){int q = (p + r)/2;
        mergesorts(a,p,q);
        mergesorts(a,q+1,r);
        merge(a,p,q,r);
    }
}
 
 
int main(){
    int t;
    scanf("%d", &t);
    int q;
    for(q=0;q<t;q++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
 
        mergesorts(a,0,n-1);
 
 
 
        int total = 0;
        int x =0;
        while(x<n)
        {
            if(a[x]==a[x+1])
                {total++;}
 
            x++;
        }
        printf("%d\n",total);
 
    }
 
    return 0;
}
 
 