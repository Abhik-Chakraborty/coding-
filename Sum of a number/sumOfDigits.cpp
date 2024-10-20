#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    
    while(num != 0) {
        sum += num % 10; 
        num /= 10;       
    }
    
    return sum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    int result = sumOfDigits(number);
    cout << "The sum of digits is: " << result << endl;
    return 0;
}
