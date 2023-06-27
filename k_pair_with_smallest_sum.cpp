#include<bits/stdc++.h>
using namespace std;
/*here in this problem we are given two arrays and wnat to find first k pair with smallest sum*/
vector<vector<int>> solve(vector<int>& nums1,vector<int>& nums2,int k){
    vector<vector<int>> res;
    priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
    int n1=nums1.size();
    int n2=nums2.size();
    if(n1==0 || n2==0) return res;
    //for every element in nums1 the best choise in nums2 is nums2[0];
    for(int i=0;i<n1;++i){
        pq.push({nums1[i]+nums2[0],i,0});
    }
    while (!pq.empty() && k)
    {
        int val = pq.top()[0];
        int i = pq.top()[1];
        int j = pq.top()[2];
        pq.pop();
        res.push_back({nums1[i], nums2[j]});
            
        if (j+1 == n2) continue;
        pq.push({nums1[i]+nums2[j+1],i, j+1});
    }
    return res;
}
int main(){
    return 0;
}