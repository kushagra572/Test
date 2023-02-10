/*Write a program to store the number input and then store the number which are prime in another array 
(Note the no. of inputs  must not be greater than 15)
*/
#include<iostream>
using namespace std;
int primearray(int array[], int size,int prime[]){int k=0;
    for (int i=0;i<size;i++){int n=0;
        for (int j=2;j<array[i];j++){
            if(array[i]%j==0){
                n++;
            }
        }
        if (n>=1){
                continue;
        }
        else{
            prime[k]=array[i];
            k++;
        }
    }
    return k;
}

int main(){int size,n,k,j;
    int num[20];
    int prime[20];
    cout<<"How many numbers U want to input";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>n;
        num[i]=n;
    }
    k=primearray(num,size,prime);    //k denotes the size of no. of prime no. in the prime[] array
    for(int j=0;j<k;j++){
        cout<<prime[j]<<" ";
    }
    cout<<endl<<k;
    return 0;
}