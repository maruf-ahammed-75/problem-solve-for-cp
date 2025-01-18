#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int even[1] = {0},odd[1] = {0};
        cin>>n;
        int a[n],b[n];
        int i,sum =0,e=0,o=0;
        for(i=0 ; i<n ; i++)
        {
            cin>>a[i];
            sum +=a[i];
        }
        for(i=0 ; i<n ; i++)
        {
           int v=0;
            if(a[i]%2 == 0)
            {
                while(1)
                {
                    a[i] = a[i]/2;
                    v++;
                    b[i] = v;
                    if(a[i]%2 != 0) break;
                }
            }
            else
            {
                while(1)
                {
                    a[i] = a[i]/2;
                    v++;
                    b[i] = v;
                    if(a[i]%2 == 0) break;
                }
            }
        }
        sort(b,b+n);
       // printf("%d\n",b[0]);
        //for(i=0 ; i<n ; i++) printf("%d ",b[i]);
        //for(i=0 ; i<n ; i++) printf("%d ",b[i]);
        if(sum%2 != 0) printf("%d\n",b[0]);
        else  cout<<'0'<<'\n';


    }



    return 0;
}