// minimum and maximum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
* File Name: Minimum and Maximum
GitHub URl: https://github.com/omr24100/minimum-and-maximum.git
Programmer: Olivia Ruiz
Date: 2/26/25
Requirements: Program that ask the user to enter two numbers. The program should use
the conditional operator to determine which number is smaller and which is larger. 
*/

#include <iostream>
using namespace std;

int main() {
  
    float num1, num2;


    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

 
    float smaller = (num1 < num2) ? num1 : num2;
    float larger = (num1 > num2) ? num1 : num2;

   
    cout << "The smaller number is: " << smaller << endl;
    cout << "The larger number is: " << larger << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
