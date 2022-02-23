#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    int a[100]={};
        for(int i=2;i<=k;i++)
        {
            int j=1;
            while((i*j)<=k)
            {
                a[i*j]++;
                j++;
            }
        }
        for(int i=0;i<k;i++){
            cout<<a[i]<<" ";
        }
        int d=0;
        for(int q=1;q<=k;q++)
        {
            if(a[q]>=a[d]) d=q;
        }
        cout<<d;
return 0;

}

