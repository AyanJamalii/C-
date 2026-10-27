// Write a program that take four floating numbers from keyboard and prints their sum,
// product and average.

#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, num4;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    cout << "Enter fourth number: ";
    cin >> num4;
    
    double sum = num1 + num2 + num3 + num4;
    double product = num1 * num2 * num3 * num4;
    double average = sum / 4.0;
    
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Average: " << average << endl;
    return 0;
}