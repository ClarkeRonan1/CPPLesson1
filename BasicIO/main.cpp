#include <iostream>

using namespace std;
int main()
{
    cout<<"Hello World" << endl;
    cout << "Hello" << "World!" << endl;
    cout << "Hello" << "World!\n";
    cout << "Hello\nOut\nThere\n";
    
    //Working with variables
    int num1;
    int num2;
    double num3;
    /*
    cout << "Enter an integer\n";
    cin >> num1;
    cout << "You entered\n" << num1;
    //No matter what you type in, the characters
    //that are determined to be integers.
    //So whitespace will not be given as input
    cout << "Enter a second integer\n";
    cin >> num2;
    cout << "you entered: " << num1 << " and " << num2 << endl;
    */
    
    /*
    cout << "Enter two integers seperated with a space\n";
    cin >> num1 >> num2;
    cout << "You entered" << num1 << " and " << num2 << endl;
    */
    
    /*
    cout << "Enter a double\n";
    cin >> num3;
    cout << "You entered " << num3 <<endl;
    */
    cout << "Enter an integer\n";
    cin >> num1;
    cout << "Enter a double\n";
    cin >> num3;
    cout << "You entered " << num1 << " and " << num3;
    
    //When you input 10.5
    //10 is stored as the int and .5 is stored
    //as double, be careful
    
    int age1; //this is uninitialised
    int age2 = 21; //C-like initialisation
    int age3 (21); //Constructor initialisation
    
    int age4 {21}; //C++11 list initialisation syntax
    return 0;
}