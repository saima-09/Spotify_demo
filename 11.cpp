#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int ans=0;
       vector<int>v;int m=1;
       for(int i=0;i<n;i++){
           v[i]=m++;
       }
       for(int i=0;i<n;i++){
          v[array[i]-1]=0;
       }
       for(auto ch : v){
           if(ch!=0){
               ans = ch;
               break;
           }
       }
       return ans;
    }
int main(){
     vector<int>k={1,2,3,4,5,6,7,8,10};
   cout<< missingNumber(k,10);       
                
return 0;}