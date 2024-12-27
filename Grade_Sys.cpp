#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;
    if(marks <= 100 && marks >=0){
         if(marks >= 90){
            cout  << "A"<<endl;
        }
        else if (marks >= 80 && marks < 90){
            cout << "B";
        }
        else {
            cout << "C";
        }
    }
    else {
        cout << "Please Enter Correct Number: " << endl;
    }
   
    return 0;
}