#include<bits/stdc++.h>
using namespace std;
#include <iostream>
int num_special_pairs(int n,vector<int>nums){
    unordered_map<int,int>prefix_func;
    for(int i=0;i<n;i++){
        prefix_func[nums[nums[nums[i]-1]-1]]++;
    }
    int num_spec=0;
    for(auto t:prefix_func){
        int a=t.second;
        num_spec+=((a)*(a-1))/2;
    }
    return(num_spec);


}
int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    int r=num_special_pairs(n,nums);
    cout<<r<<endl;


return 0;
}