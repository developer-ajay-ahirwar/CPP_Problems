#include <iostream>
using namespace std;

int sum_OF_digit(int num){
    int lastDigit = 0;
    int digitsum = 0;
    while(num > 0){
        lastDigit = num %10;
        digitsum += lastDigit;
        num = num / 10;
    }
    return digitsum;
}

int main(){
    int n;
    cout << "Enter your Number: ";
    cin >> n;
    cout << "Sum of Digits : " << sum_OF_digit(n) << endl;
    return 0;
}