#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
        //two pointer + sorting
        vector<vector<int>> data; 
        int size=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<size-2;i++){
          if(i>0 && nums[i]==nums[i-1])
             continue;
          int left=i+1;
          int right=size-1;
          while(left<right){
            int sum=num[i]+nums[left]+nums[right];
            if(sum<0){left++;}
            else if(sum>0){right--;}
            else{data.push_back({nums[i],nums[left],nums[right]});
           while(left<right && nums[left]==nums[left+1]){
           left++;
           while(left<right && nums[right]==nums[right-1]){
            right--;
            left++;
            right--;
           }
           }
        }return data;
          }   
        }
    }