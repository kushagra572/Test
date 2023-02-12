#include<iostream>
using namespace std;
long long minprice(int a,int b, int n, int m){
    long long  min;
    long long  pricea;
    long long  priceb;
    min=0;
    if (m>=n){
        pricea=a*n;
        priceb=b*n;
        if (pricea<priceb){
            min=pricea;
        }
        else{
            min=priceb;
        }

    }
    else{
        while (n>0){
            pricea=a*m;
            priceb=b*(m+1);
            if (pricea<priceb && n>m){
                min=min+pricea;
                n=n-(m+1);
            }
            
            else{
                min=min+b*n;
                break;
            }
        }
    }
    return min;
}

int main(){int t,a,b,n,m;
// long long int pricea,priceb,min;

    cin>>t;
    for (int i=0;i<t;i++){
        cin>>a>>b;
        cin>>n>>m;
       
        cout<<minprice(a,b,n,m)<<endl;

    }
    
    return 0;
}
