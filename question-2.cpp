#include<iostream>
using namespace std;

int main(){
    int n, totalDigits = 0, prev;

    cout << "Enter a number: ";
    cin >> n;
    prev = n;
    while (n > 0){
        totalDigits++;
        n  = n / 10;
    }

    cout << "Total digits of " << prev << " is " << totalDigits << endl;
    return 0;
}