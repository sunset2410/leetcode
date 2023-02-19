// // https://leetcode.com/problems/two-sum/description/


// #include<unordered_map>
// #include<vector>
// using namespace std;

// class Solution {
// public:
//     unordered_map<int,vector<int>> map;
//     vector<int> anser;
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for(int i =0;i< nums.size(); i++) {
//             map[nums[i]].push_back(i);
//         }

//         for(int i =0;i< nums.size(); i++) {
//             if (nums[i]*2 == target) {
//                 if (map[nums[i]].size() < 2)
//                     continue;
//                 anser.push_back(map[nums[i]][0]);  
//                 anser.push_back(map[nums[i]][1]);  
//                 return anser;
//             } else {
//                 if (map[target - nums[i]].size() <= 0)
//                     continue;

//                 anser.push_back(i);  
//                 anser.push_back(map[target - nums[i]][0]);    
//                 return anser;  
//             } 
//         }
//         return anser;
//     }
// };


// int main() {
//     Solution sl;
//     //vector<int> test = {2,7,11,15};
//     //vector<int> a = sl.twoSum(test, 9);

//     vector<int> test = {3,3};
//     vector<int> a = sl.twoSum(test, 6);


//     return 0;
// }


// int main2() {
//     Solution sl;
//     vector<int> test = {3,2,4};
//     vector<int> a = sl.twoSum(test, 6);

//     return 0;
// }