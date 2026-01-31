#include <bits/stdc++.h>
using namespace std;
// time complexity - O(n log n) for best , average and worst case.
/*
Merge Sort is a classic divide and conquer algorithm. The core idea is based on breaking down a big problem into smaller,
manageable sub-problems i.e. sorting smaller arrays and then merging those solutions to get the final sorted array.
*/
void merge(vector<int>& arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    // Merge two sorted halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right])
            temp.push_back(arr[left++]);
        else
            temp.push_back(arr[right++]);
    }

    // Copy remaining elements from left half
    while (left <= mid)
        temp.push_back(arr[left++]);

    // Copy remaining elements from right half
    while (right <= high)
        temp.push_back(arr[right++]);

    // Copy sorted elements back to original array
    for (int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }

}

//recursive merge sort Function
void mergeSort(vector<int> & arr, int low , int high){
    if(low>=high) return;

    // Find the middle index
    int mid = (low + high) / 2;

    // Recursively sort left half
    mergeSort(arr, low, mid);

    // Recursively sort right half
    mergeSort(arr, mid + 1, high);

    // Merge the two sorted halves
    merge(arr, low, mid, high);

}



int main(){
    cout<<"provide the lenght of array"<<endl;
    int n;
    cin >> n;
    vector<int> arr(n);
    cout<<"enter the elements of array"<<endl;
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,arr.size()-1); // sorting happens after calling this 

    // printing the sorted array 
    cout<<"sorted array using Merge sort algorithm"<<endl;
    for (int i = 0; i<n ;i++){
        cout<< arr[i]<<" "<<endl;

    }
}
