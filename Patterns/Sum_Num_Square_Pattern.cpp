// Problem
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12
// 13 14 15 16


// A B C D
// E F G H 
// I J K L
// M N O P

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Your Number: ";
    cin >> n;
    // Problem 1
    int sum = 1;
    for(int i = 0;i < n; i++){
        for(int j = 0; j < n;j++){
            cout << sum << " ";
            sum++;
        }
        cout << endl;
    }

    // Problem 2
    
    // char ch = 'A';
    // for(int i = 0;i < n; i++){
    //     for(int j = 0; j < n;j++){
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }
    return 0;
}
