/*  Program File Name: Chapter 3 Exercise 4
    Programmer: Christian Min
    Date: 10/4/26
    Requirements:
    Write a program that calculates the user's minimum amount of insurance that should be purchased for the
    property based on the idea of at least 80% of the amoujnt it would cost to replace the structure. Ask
    the user to enter the replacement cost of a building, and then display the recommended minimum amount.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double replacementTotal, insuranceMinimum;      //To hold the value for the total replacement cost, and the recommended minimum value

    cout << "Enter the replacement cost of the home or building in dollars: ";
    cin >> replacementTotal;

    insuranceMinimum = (replacementTotal * 0.80);       //find the minimum recommended value by multiplying the total by 80%

    cout << "The recommended minimum amount of insurance that should be purchased for the property is: $" << insuranceMinimum << "\n";
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
