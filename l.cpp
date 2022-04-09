#include<iostream>
#include<fstream>
#include<vector>
int Timso( std::string path){
    std::ifstream file(path);
    int n;
    file >> n;
    std::vector<int> v;
    while(!file.eof()){
        int k;
        file >> k;
        v.push_back(k);
    }
    sort(v.begin(),v.end());
    return v[n/2];
}