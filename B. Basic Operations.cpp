#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b;
    cin>>a>>b;
    cout << a+b << endl;
    cout << a-b << endl;
    cout << (int)floor((double)a / b) << endl;
    cout << a%b << endl;
    cout << a*b << endl;
    printf("%.6f\n", (double)a / b);
    cout << (int)ceil((double)a / b) << endl;
    return 0;
}