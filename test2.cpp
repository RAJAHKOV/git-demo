#include <iostream>
using namespace std;

int main(){
    double a, b;
    cin >> a >> b;
    cout<<"a+b="<< a+b<<endl;
    cout<<"a*b="<<a*b<<endl;
    cout << "a-b=" << a-b << endl;
    if (b!=0)
    {
        cout << "a/b=" << a/b << endl;
    }
    else{
        cout << "devider can't be zero" << endl;
    }
    return 0;
}