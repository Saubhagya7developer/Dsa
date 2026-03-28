#include <iostream>
#include <vector>
#include <deque>
#include <climits>


using namespace std;


vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> ans;
    deque<int> dq; // will store indices of elements in the current window
    
    for (int i = 0; i < nums.size(); i++) {
        // Remove indices that are out of the current window
        while (!dq.empty() && dq.front() < i - k + 1) {
            dq.pop_front();
        }

        // Remove indices whose corresponding values are less than nums[i]
        while (!dq.empty() && nums[dq.back()] < nums[i]) {
            dq.pop_back();
        }

        // Add the current index to the deque
        dq.push_back(i);
        
        // If we've hit the size of the window, add the maximum to the answer
        if (i >= k - 1) {
            ans.push_back(nums[dq.front()]);
        }
    }

    return ans;
}


vector<int> sumSlidingWindow(vector<int>& nums, int k) {
    vector<int> ans;
    int windowSum = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        windowSum += nums[i]; // Add the current element to the window sum

        // If we've hit the size of the window, add the sum to the answer and remove the leftmost element
        if (i >= k - 1) {
            ans.push_back(windowSum);
            windowSum -= nums[i - k + 1]; // Remove the leftmost element from the sum
        }
    }

    return ans;
}

int maxsum(vector<int>& nums, int k) {
    int maxSum = INT_MIN;
    int windowSum = 0;
    
    for (int i = 0; i < nums.size(); i++) {
        windowSum += nums[i]; // Add the current element to the window sum

        // If we've hit the size of the window, check if it's the maximum and remove the leftmost element
        if (i >= k - 1) {
            maxSum = max(maxSum, windowSum);
            windowSum -= nums[i - k + 1]; // Remove the leftmost element from the sum
        }
    }

    return maxSum;

}

int main(){

    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 4;
    vector<int> sumResult = sumSlidingWindow(nums, k);
    cout << "Sums in each sliding window: ";
    for (int num : sumResult) {
        cout << num << " "<< endl;
        
    }
    cout << endl;

    return 0;
    

}