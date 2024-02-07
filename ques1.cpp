#include<iostream>
using namespace std;
#define max 10

int main()
{
    int a[max];
    int i ,j,t,key,n;
    cout<<"entre the number of test cases"<<endl;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"enter size of array"<<endl;
        cin>>n;
        cout<<"enter the elments you want to enter"<<endl;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        cout<<"enter the elment you want to search"<<endl;
        cin>>key;
        int lb=0;
        int ub=n-1;
        int c=0;
        for(j=lb;j<ub;j++)
        {
            int mid=(lb+ub)/2;
            if(key==a[mid])
            {
                c=1;
                int u=mid-1;
                while(u>0&&a[u]==key)
                {
                    c++;
                    u--;
                }
                int l=mid+1;
                while(j<n&&a[l]==key)
                {
                    c++;
                    l++;
                }
            }
            else if(key>a[mid])
            {
                lb=mid+1;
            }
            else
            {
                ub=mid-1;
            }
            
        }
        cout<<"frequency of"<<key<<":"<<c<<endl;
    }
    return 0;
}
