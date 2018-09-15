#include <iostream>
#include <climits>

using namespace std;


int main()
{
    //Using sizeof with data types
    cout << "sizeof information" << endl;
    cout << "int " << sizeof(int) << " bytes " << endl;
    
    cout << "Minimum values" << endl;
    cout << "int " << INT_MIN << endl;
    
    cout << "Maximum values" << endl;
    cout << "int " << INT_MAX << endl;
    
    //Using sizeof with variables
    cout << "sizeof using variable names" << endl;
    int age {21};
    cout << "size of age is " << sizeof(age) << " bytes" << endl;
    // can use sizeof age instead
    //Don't need brackets
    
    return 0;
}