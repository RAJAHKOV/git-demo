#include <iostream>
using namespace std; 
int main()
{
    
    // outer loop on letters
    for (char c = 97; c <= 101; ++c) 
    {
        cout << c; // print our letter first
        
        // inner loop on all numbers
        for (int i = 0; i < 3; ++i) 
            cout << i;
 
        cout << endl;
    }
    return 0;
}