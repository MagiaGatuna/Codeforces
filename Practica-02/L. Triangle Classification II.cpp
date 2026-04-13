#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    
    cin>>a>>b>>c;

    if(a<90 && b<90 && c<90) cout<<"Acute"<<endl;
    else if (a==90 || b==90 || c==90) cout<<"Right"<<endl;
    else cout<<"Obtuse"<<endl;

    return 0;
}