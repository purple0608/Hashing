#include<bits/stdc++.h>
using namespace std;
#include <iostream>
int maximum_sum_selection(vector<int>num,int k){
    unordered_map<int,int>prefix_sum;
    unordered_map<int,int>suffix_sum;
    for(int i=0;i<k;i++){
        prefix_sum[i+1]=prefix_sum[i]+num[i];
    }
    for(int i=0;i<k;i++){
        suffix_sum[i+1]=suffix_sum[i-1]+num[k-1-i];
    }
    int max_sum=0;
    for(int i=0;i<k;i++){
        int sum=prefix_sum[i]+prefix_sum[k-i];
        if(sum>max_sum){
            max_sum=sum;
        }
    }
    return(max_sum);
}
int main(){
    vector<int>num={5,-2,3,1,2};
    int n;
    cin>>n;
   
    int k;
    cin>>k;
    int r=maximum_sum_selection(num,k);
    cout<<r<<endl;

return 0;
}