#include <iostream>

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
    return 0;
}