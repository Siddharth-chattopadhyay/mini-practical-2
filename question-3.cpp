#include<iostream>
using namespace std;

int main(){
    int firstDigit = 0, lastDigit, sum = 0, n;
    cout << "Enter number: ";
    cin >> n;

    lastDigit = n % 10;
    
    while (n >= 10){
        n = n / 10;
        firstDigit = n;
    }
    sum = firstDigit + lastDigit;

    cout << "The sum of " << firstDigit << " and " << lastDigit << " is " << sum << endl;
    return 0;
}