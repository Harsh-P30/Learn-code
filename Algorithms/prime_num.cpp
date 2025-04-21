#include<iostream>
using namespace std;

void primeNum(int n){
    cout<<"Prime no by O(n^2)";
    for(int i=2;i<n;i++){
        bool prime=0;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                prime=1;
            }
        }
        if(prime == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}


// Sieve of Eratosthenes (a algorithm to find prime number till n )
void primeNo(int n){
    cout<<"Prime no by 2O(n)+n log (log n)) ";
    bool prime[n+1];
    for(int i=2;i<n;i++){  // O(n)
        prime[i]=1;
    }

    for(int i=2;i*i<=n;i++){  // n log(logn)
        if(prime[i] == 1){
            for(int j=i*i; j<=n;j+=i){
                prime[j]=0;
            }
        }
    }

    for(int i=0;i<n;i++){  // O(n)
        if(prime[i] == 1) cout<<i<<' ';
    }

}

int main(){
    // primeNum(50);
    primeNo(50);
}