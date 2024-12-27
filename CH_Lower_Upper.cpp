#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a Character: ";
    cin >> ch;
    if(ch >= 65 && ch <= 90){
        cout << ch << " this Upper" << endl;
    }
    else if (ch >= 97 && ch <= 122){
        cout << ch << " this Lower" << endl;
    }
    else {
        cout << ch << " correct Character" << endl;
    }
    return 0;

}