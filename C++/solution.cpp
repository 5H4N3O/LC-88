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
    vector<int> nums1; 
    int m; 
    vector<int> nums2; 
    int n;

    // Example 1
    nums1 = {1,2,3,0,0,0};
    m = 3;
    nums2 = {2,5,6};
    n = 3;
    exampleTest.merge(nums1, m, nums2, n);
    cout << "Example 1:" << endl;

    for(int i=0; i< nums1.size(); i++){
        cout << nums1[i];
    } 
    cout << endl;

    // Example 2
    nums1 = {1};
    m = 1;
    nums2 = {};
    n = 0;
    exampleTest.merge(nums1, m, nums2, n);
    cout << "Example 2:" << endl;

    for(int i=0; i< nums1.size(); i++){
        cout << nums1[i];
    } 
    cout << endl;

    // Example 3
    nums1 = {0};
    m = 0;
    nums2 = {1};
    n = 1;
    exampleTest.merge(nums1, m, nums2, n);
    cout << "Example 3:" << endl;

    for(int i=0; i< nums1.size(); i++){
        cout << nums1[i];
    } 
    cout << endl;

}