#include <iostream>
using namespace std;

int fectorial(int num){
    int fec = 1;
    for(int i = 1; i <= num;i++){
        fec *= i;
    }
    return fec;
}

int nCr(int n ,int r){
    int result;
    int fec_N = fectorial(n);
    int fec_R = fectorial(r);
    int fec_nr = fectorial(n-r);
    result = fec_R * fec_nr;
    result = fec_N / result;
    return result;
}

int main(){
    int n , c;
    cout << "Enter your Number: ";
    cin >> n;
    cout << "Enter your Number: ";
    cin >> c;
    cout << "nCr: " << nCr(n,c) << endl;
    return 0;
}