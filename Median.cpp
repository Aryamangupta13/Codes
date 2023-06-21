#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
         long long int f(vector<int>& nums,vector<int>& cost,long long int md){
        long long int res=0;
        int n=nums.size();
        for(int i=0;i<n;++i){
            res+=(abs(nums[i]-md)*(long long)cost[i]);
        }
        return res;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        vector<pair<int,int>> vp;
        int n=nums.size();

        for(int i=0;i<n;++i){
            vp.push_back({nums[i],cost[i]});
        }
        sort(vp.begin(),vp.end());
        long long int tot_ele=0;
        for(int i=0;i<n;++i){
            tot_ele=tot_ele+(long long)(vp[i].second);
        }
        long long int ele=0;
        long long int med=0;
        int i=0;
        while(i<n && ele<(tot_ele+1)/2){
            ele=ele+(long long)vp[i].second;
            med=vp[i].first;
            i+=1;
        }
        // cout<<med<<endl;
        return f(nums,cost,med);
    }    
};

int main(){
    //when you have to make all elements equal with some const answer always lies between 
    // in median
    //here in this question you have given 2 vectors nums and cost and you have to find
    //minimum cost to make all elements equal
    // first bruteforce:- here you just add two loops and retuen mini
    // optimal:-  here wigted median is used 
    //just means add no of cost elements in nums array
    return 0;
}