// Problem
//A B C D
//A B C D
//A B C D
//A B C D
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your Number: ";
    cin >> n;
    for(int i = 0; i <= n; i++){
        char ch = 'A';
        for(int j = 1; j <= n;j++){
            char c = ch + j - 1;
            cout << c << " ";
        }
        cout << endl;
    }
}