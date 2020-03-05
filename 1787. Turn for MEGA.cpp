#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n;
    cin>>k>>n;

    int diff=0;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if((a+diff)<=k){
                diff=0;
        }
        else{
            diff+=a-k;
        }
    }
        cout<<diff<<endl;



    return 0;
}

