#include<iostream>
using namespace std;


int printHello(){
    cout << "Hello\n";
    return 3;
}
// parameter function
int sum(int a ,int b){
    int s = a + b;
    return s;
}

int main(){
    printHello();
    int ver = printHello();
    // cout << ver;
    cout << "Sum: "<< sum(3,5);
    return 0;
}



