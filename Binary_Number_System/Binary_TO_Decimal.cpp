#include<iostream>
using namespace std;

int binaryTO_Dec(int binNum){
    int ans = 0, pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans+= rem * pow;
        binNum /= 10;
        pow *= 2;
    }
    
    return ans;
}

int main(){
    int n;
    cout << "Enter Your Binary Number: ";
    cin >> n;
    cout << n << " :Binary To Decimal: " << binaryTO_Dec(n) << endl;
    return 0;

}