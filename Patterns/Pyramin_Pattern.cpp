// Problem
//       1
//     1 2 1 
//   1 2 3 2 1
// 1 2 3 4 3 2 1


#include<iostream>
using namespace std;
int main(){
    int n= 78;
    cout << "Enter Your Number: ";
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int space = n-i-1; space > 0;space--){
            cout << " ";
        }
        for(int num_1 = 1;num_1 <= i+1;num_1++){
            cout << num_1;
            
        }
        for(int num_2 = i; num_2 > 0;num_2--){
           
            cout << num_2;
        }
        cout << endl;
    }
    return 0;
}