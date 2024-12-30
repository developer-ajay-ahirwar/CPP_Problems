#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter The Number: ";
    cin >> num;
    if(num % 2 == 0){
        cout << num <<" Number is Even" << endl;
    }
    else {
        cout << num <<" Number is Odd" << endl;
    }
    return 0;
}