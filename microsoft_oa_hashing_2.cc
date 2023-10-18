#include<bits/stdc++.h>
using namespace std;
#include <iostream>

int max_pattern(string S,string T){
    unordered_map<char,int>num_T;
    unordered_map<char,int>num_S;
    for(int i=0;i<S.size();i++){
        num_S[S[i]]++;
    }
    for(int j=0;j<T.size();j++){
        num_T[T[j]]++;
    }
    int mino=INT_MAX;
    for(char r:T){
        int m=num_S[r]/num_T[r];
        if(m<mino){
            mino=m;
        }
        
    }
    return(mino);

}
int main(){
    string S="abdadccacd";
    string T="edac";
    int r=max_pattern(S,T);
    cout<<r<<endl;
    

return 0;
}