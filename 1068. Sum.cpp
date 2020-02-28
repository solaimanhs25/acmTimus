#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;

    if(num==0)
        cout<<"1"<<endl;
   else if(num<0)
        cout<<((num*(abs(num)+1))/2)+1<<endl;
    else
        cout<<(num*(num+1))/2<<endl;

    return 0;
}
