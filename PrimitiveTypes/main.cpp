#include <iostream>

using namespace std;
int main()
{
    char middleInitial {'J'};
    //Single quotes around character
    //Double "" means string
    
    cout << "My middle initial " << middleInitial << endl;
    
    unsigned short int examScore {55};
    cout << "My exam score is " << examScore << endl;
    
    int countriesRepresented {65};
    cout << "There were " << countriesRepresented << endl;
    
    long peopleInFlorida {2029848484};
    cout << "There are about " << peopleInFlorida << " people in Florida" << endl;
    
    long peopleOnEarth {7'600'000'000};
    cout << "There are about " << peopleOnEarth << " people on Earth" << endl;
    
    long distanceToAlphaCentuari {9461000000000};
    cout << "Distance to alpha is " << distanceToAlphaCentuari << "kilometers" << endl; 
    
    float carPayment {401.23};
    cout << "My car payment is " << carPayment << endl;
    
    double pi {3.14159};
    cout << "PI is " << pi << endl;
    
    long double largeAmount {2.7e120};
    cout << "This is a very big number: " << largeAmount << endl;
    
    
    bool gameOver {false};
    cout << "The value of gameOver is " << gameOver << endl;
    //Prints 0 because false is 0
    
    /*
     * Overflow example, not so obvious
     */
    short value1 {30000};
    short value2 {1000};
    //short product {value1 * value2};
    int product {value1 * value2};
    
    cout << "The sum of " << value1 << " and " << value2 << " is " << product << endl;
    return 0;
}