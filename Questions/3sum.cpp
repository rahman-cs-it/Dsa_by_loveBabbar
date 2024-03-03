#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;

        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                for(int k = j + 1; k < nums.size(); k++){
                    if(nums[i] + nums[j] + nums[k] == 0 ){
                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        sort(triplet.begin(), triplet.end());
                        st.insert(triplet);
                    }
                }
            }
        }

        vector<vector<int>> result(st.begin(), st.end());
        return result;
    }
};

int main() {
    cout << "Enter the number of test cases: ";
    int testCases;
    cin >> testCases;

    vector<vector<int>> nums;

    for(int i = 0; i < testCases; i++) {
        cout << "Enter test case #" << i + 1 << " elements: ";
        int size;
        cin >> size;

        vector<int> testCase(size);
        for(int j = 0; j < size; j++) {
            cin >> testCase[j];
        }

        nums.push_back(testCase);
    }

    Solution solution;
    vector<vector<int>> result = solution.threeSum(nums[0]);  // Assuming you are working with the first test case

    cout << "Result:" << endl;
    for (vector<int>& triplet : result) {
        for (int& num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
