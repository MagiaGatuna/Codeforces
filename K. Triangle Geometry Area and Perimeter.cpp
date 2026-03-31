#include <bits/stdc++.h>

using namespace std;

int main()
{
    long double AP, PB, PC, area, peri, AC, AB, BC;
    cin>>AP>>PB>>PC;
    
    AC=sqrt(AP*AP+PC*PC);
    BC=sqrt(PC*PC+PB*PB);
    AB=AP+PB;
    
    area=(AB*PC)/2.0;
    peri=AC+BC+AB;
    cout<< fixed << setprecision(9)<<area<<" "<<peri;

    return 0;
}