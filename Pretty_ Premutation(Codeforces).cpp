#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define w(t) int t; cin>>t; while(t--)
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define pb push_back
#define mp make_pair
#define len size()
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
int32_t main()
{
    fio
    w(t)
    {   int n,t;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
        {
            a[i]=i;
        }
        for(int i=n;i>=1;i=i-2)
         {
             if(i==1)
             {
                  t=a[i];
                  a[i]=a[i+1];
                  a[i+1]=t;
                 
             }
             else{
                t=a[i];
                a[i]=a[i-1];
               a[i-1]=t;
               }
           }
      for(int k=1;k<=n;k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<"\n";
        
    }
}
