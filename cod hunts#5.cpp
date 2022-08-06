#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[]={11,16,13,77,10};
    int ans=0;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if((a[i]&1)!=(a[j]&1))
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}

