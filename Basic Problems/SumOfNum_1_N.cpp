#include <iostream>
using namespace std;

int main(){
    
    int sum_Of_Number;
    cout << "Enter Your Number: ";
    int num;
    cin >> num;
    for(int i = 1; i <= num; i++){
        sum_Of_Number = sum_Of_Number + i;
    }
    cout << "Total Sum: " << sum_Of_Number << endl;
    return 0;
}