#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    const int MAX_N = 1000;
    cin >> n;
    double arr[MAX_N];
    double sum=0,S=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+= arr[i];
    }
    double mean=sum/n;
    for(int i=0;i<n;i++){
        S+=(arr[i]-mean)*(arr[i]-mean);
    }
    cout<<fixed<<setprecision(2)<<S/n;
    return 0;
}