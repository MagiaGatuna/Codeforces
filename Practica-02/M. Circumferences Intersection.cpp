#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int x1, y1, r1, x2, y2, r2, d2;
    
    cin>>x1>>y1>>r1>>x2>>y2>>r2;

    d2=(x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);

    if(d2==0 && r1==r2) cout<<"Infinity"<<endl;
    else if ((r1-r2)*(r1-r2)<d2 && d2<(r1+r2)*(r1+r2)) cout<<"2"<<endl;
    else if (d2==(r1+r2)*(r1+r2) || d2==(r1-r2)*(r1-r2)) cout<<"1"<<endl;
    else cout<<"0"<<endl;


    return 0;
}