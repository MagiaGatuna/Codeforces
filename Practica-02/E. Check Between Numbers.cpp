#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b, n;
    cin>>a>>b>>n;
    if(a>b) swap(a,b);
    if (a<=n&&n<=b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}