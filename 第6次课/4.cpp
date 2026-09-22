#include <iostream>
using namespace std;

int main()
{
    int x = 5;
int y = 7;
 
if (! x == y)
    cout << "x does not equal y"<<endl; 
else
    cout << "x equals y"; // wrong branch executed. 
    cout << ((x > y) ? x : y);
    return 0;
}