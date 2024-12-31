#include<iostream>
using namespace std;


int decToBinary(int decNum){
    int ans = 0, pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum/= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    
    return ans;
}
int main(){
    int n;
    cout << "Enter Your Decimal Number: ";
    cin >> n;
    cout << n <<" :<< Decimal To Binary>>:  " << decToBinary(n) << endl;
    for(int i = 1;i <= n;i++){
        cout << i <<" :<< Decimal To Binary>>:  " << decToBinary(i) << endl;
    }
    
    return 0;
}