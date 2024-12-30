#include<iostream>
using namespace std;

int factorial_N(int n){
    int fec = 1;
    for(int i = 1; i<=n;i++){
        // fec = fec * i;
        fec *= i;
    }
    return fec;
}

int main(){
    cout << "Fectorial of N:  " << factorial_N(4)<< endl;
    cout << "Fectorial of N:  " << factorial_N(5)<< endl;

    return 0;
}