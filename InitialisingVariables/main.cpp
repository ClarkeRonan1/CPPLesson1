#include <iostream>
#include <climits>
//This is used to check how much storage each 
//variable type holds

using namespace std;
int main()
{
    //int age {21};
    //Don't use a variable before you initialise it
    //cout << age << endl;
    
    cout << "Enter the width of the room ";
    int roomWidth {0};
    cin >> roomWidth;
    
    cout << "Enter the length of the room ";
    int roomLength {0};
    cin >> roomLength;
    
    cout << "The area of the room is " << roomWidth * roomLength << " square meters " <<endl;
    
    //char 8 bits
    //char16_t atleast 16 bits
    //char32_t atleast 32 bits
    //wchar_t large as needs to be
    
    //integer data types
    //By default, integers are signed
    
    //unsigned means integers 0 or more (positive)
    
    //float double and long double
    
    //bool Zero is false, non zero is true
    return 0;
}

