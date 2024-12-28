// Problem 
// 1
// 2 2
// 3 3 3
// 4 4 4 4
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your Number: ";
    cin >> n;
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << num << " ";
        }
        num++;
        cout << endl;
    }
    return 0;
}