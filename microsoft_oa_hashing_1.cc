//my approach
#include<bits/stdc++.h>
using namespace std;
#include<unordered_map>
#include <iostream>

int digit_sum(int n){
    int sum=0;
    while(n>0){
        int d=n%10;
        n=n/10;
        sum+=d;
    }
    return(sum);
}
int max_sum(vector<int>arr){
    unordered_map<int,int>presum_digit;
    int max_sum=-1;
    for(int i=0;i<arr.size();i++){
        int s=digit_sum(arr[i]);
        cout<<s<<endl;
        if(presum_digit.find(s)!=presum_digit.end()){
            int r=presum_digit[s]+arr[i];
            if(r>max_sum){
                max_sum=r;
            }
            if(arr[i]>presum_digit[s]){
                presum_digit[s]=arr[i];
            }
        }
            else{
                presum_digit[s]=arr[i];
                
            }

        
    }
    return(max_sum);
    

}


int main(){
    vector<int>arr{51,32,43};
    int r=max_sum(arr);
    cout<<r<<endl;



return 0;
}