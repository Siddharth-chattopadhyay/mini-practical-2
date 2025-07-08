#include<iostream>
using namespace std;

int main(){
    char ch = 'a';

    do{
        if (ch % 3 == 0){
            cout << ch << " ";
        }
        ch++;
    }while (ch <= 'z');
    cout << endl; // Because of UNIX way of painting text
    return 0;
}