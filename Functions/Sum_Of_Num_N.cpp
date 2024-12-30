#include <iostream>
using namespace std;

int sumOF_N(int n){
    int sum = 0;
    for(int i =1; i <=n;i++){
        sum +=i;
    }
    return sum;
}

int main(){
    cout << "SumOf_N:- " << sumOF_N(5)<<endl;
    cout << "SumOf_N:- " << sumOF_N(10)<<endl;

    return 0;
}