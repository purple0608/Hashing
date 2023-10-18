//Maximise equal numbers

#include<bits/stdc++.h>
using namespace std;
#include <iostream>

int maximizing_sub(vector<int>num,int k){
    unordered_map<int,int>hash;
    for(int i=0;i<num.size();i++){
        hash[num[i]-k]=hash[num[i]-k]+1;
        hash[num[i]+k+1]=hash[num[i]+k+1]-1;
    }
    for(auto t:hash){
        hash[t.first]=hash[t.first-1]+hash[t.first];
    }
    vector<int>arr;
    for(auto y : hash){
        arr.push_back(y.second);
    }
    sort(arr.begin(),arr.end());
    return(arr[arr.size()-1]);
    
    

}
int main(){
    int k;
    cin>>k;
    vector<int>num;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        num.push_back(r);
    }
    int r=maximizing_sub(num,k);
    cout<<r<<endl;

    

return 0;
}