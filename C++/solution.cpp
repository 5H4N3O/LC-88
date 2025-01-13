#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> numsMerge;

        for (int i = 0; i < m; i++){
            numsMerge.push_back(nums1[i]);
        }
        for (int j = 0; j < n; j++){
            numsMerge.push_back(nums2[j]);
        }

        sort(numsMerge.begin(), numsMerge.end());
        nums1 = numsMerge;
    }
};

int main() {
    Solution exampleTest;
    vector<int> nums1 {1,2,3,0,0,0}; 
    int m = 3; 
    vector<int> nums2 {2,5,6}; 
    int n = 3;  
    exampleTest.merge(nums1, m, nums2, n);
    for(int i=0; i< nums1.size(); i++){
        cout << nums1[i];
    } 

}