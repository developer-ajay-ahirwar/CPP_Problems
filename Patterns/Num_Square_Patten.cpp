// Problem
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5

#include <iostream>
using namespace std;
int main(){
    int i = 1;
    cout << "Enter Your Number: ";
    int n;
    cin >> n;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << j << " ";
            j++;
        }
        i++;
        cout <<endl;

    }
    return 0;
}