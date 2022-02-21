#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main(){
    vector<string> chars,arr;
    string path;
    cin>>path;
    ifstream file(path);
    if(file.is_open()){
        while(! file.eof()){
            string n;
            file>>n;
             chars.push_back(n);
        }
    }
    double m=chars.size(),a,x,y,r;
    for(int i=0;i<m;i++){
        if(chars[i]=="SIDE:") {
            a= atof(chars[i+1].c_str());
            cout<<a*a;
        }
        else(chars[i]=="WIDTH:"){
            x=atof(chars[i+1].c_str());
            y=atof(chars[i+3].c_str());
            cout<<x*y ;
        }
            
    }
    return 0;
}