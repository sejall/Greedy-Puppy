#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long int n,k,i,s=0;
        cin>>n>>k;
        for(i=1; i<=k; i++)
        {
            if(s<n%i)
            {
                s=n%i;
            }
        }

    cout<<s<<endl;
    }
    return 0;
}
