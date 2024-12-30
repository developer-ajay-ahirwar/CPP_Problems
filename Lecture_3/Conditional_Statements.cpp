#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter the your age: ";
    cin >> age;
    if(18 <= age){
        cout << "are you Voter" << endl;
    }
    else{
         cout << "are you not  Voter" << endl;
    }

    return 0;
}
