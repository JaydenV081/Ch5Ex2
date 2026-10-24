/*
Developer: Jayden Veloz
File Name: Ch5Ex2.cpp
Date: 10 / 23 / 26

Requirements:
Write a program that asks the user for a positive integer value and that uses a loop to validate the
input. The program should then use a second loop to compute the sum of all the integers from 1 up to
the number entered. For example, if the user enters 20, the loop will find the sum of 1 + 2 + 3 + 4
+ . . . + 20.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {

    int num, sum;
    sum = 0;

    cout << "Please enter a positive integer: ";
    cin >>  num;

    // Checks for positive integer
    while (num < 0) {
        cout << "This integer is invalid. Please enter a positive integer: ";
        cin >>  num;
    }

    // Computes sum
    for (int i = 0; i <= num; i++) {
        sum += i;
    }

    cout << sum;

    return 0;
}