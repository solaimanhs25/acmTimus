#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    int length=s.size();
    int fact=n,i=1;

    while((n-i*length)>=1)
    {
        fact*=(n-i*length);
        i++;
    }

    cout<<fact<<endl;

    return 0;
}

