#include <iostream>
//Constants

/*
 * franks Carpet cleaning service
 * charges 30 per room
 * Sales tax is 6%
 * Estimates are valid for 30 days
 * 
 * Prompt the user for the number of 
 * rooms they would like cleaned and 
 * provide an estimate such as:
 * 
 * Pseudocode:
 *  Prompt user to enter number of rooms
 *  Display number of rooms
 *  Display price per room
 * 
 *  Display cost (number of rooms * price per room)
 *  Display tax (number of rooms * price per room * tax rate)
 *  Display total estimate (number of rooms * price per room) + (number of rooms * price per room * tax rate)
 *  Display estimate expiration time
 */
 using namespace std;
 
int main()
{
    const double priceOfSmallRoom {25.0};
    const double priceOfLargeRoom {35.0};
    const double taxRate {0.06};

    int numberOfSmallRooms {0};
    int numberOfLargeRooms {0};
    cout << "Enter number of small rooms and large rooms separated by a space" << endl;
    cin >> numberOfSmallRooms >> numberOfLargeRooms;
    
    cout << "\nPrice for " << numberOfSmallRooms << " small rooms is " << numberOfSmallRooms * priceOfSmallRoom << endl;
    cout << "\nPrice for " << numberOfLargeRooms << " large rooms is " << numberOfLargeRooms * priceOfLargeRoom << endl;

    double taxTotal {((numberOfSmallRooms * priceOfSmallRoom) + (numberOfLargeRooms * priceOfLargeRoom)) * (taxRate)};
    cout << "The tax will add another " << taxTotal << endl;
    
    double estimatedTotal {(taxTotal) + (priceOfSmallRoom * numberOfSmallRooms) + (priceOfLargeRoom * numberOfLargeRooms)};
    cout << "The total estimate with tax is " << estimatedTotal << endl;
    
    cout << "This extimate shall expire within 30 days" << endl;
    return 0;
}