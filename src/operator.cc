#include <iostream>

using namespace std;

int main()
{
    int a = 25, b = 3;

    int c = a + b;
    cout<<"a+b = "<< c << endl;

    c = a - b;
    cout<<"a-b = "<< c << endl;

    c = a * b;
    cout<<"a*b = "<< c << endl;

    float d = (float)a / b;
    cout<<"a/b = "<< c << endl;

    c = a % b;
    cout<<"a%b = "<< c << endl;

    a++;
    cout<<"a++ = "<< a << endl;

    ++a;
    cout<<"++a = "<< a << endl;

    b--;
    cout<<"b-- = "<< b << endl;

    --b;
    cout<<"--b = "<< b << endl;


	return 0;
}

