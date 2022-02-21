#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int* a = new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]%k>a[j]%k){
                int tmp = a[j];
                a[j]=a[i];
                a[i] = tmp ;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" " ; 
    }
}