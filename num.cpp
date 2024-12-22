#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if (b*log10(a)>d*log10(c)) cout<<"YES";
    else cout<<"NO";
}
