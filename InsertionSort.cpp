#include <bits/stdc++.h>
using namespace std;

// time complexity - 

/*
Definition - Insertion Sort is a comparison-based sorting algorithm that builds the sorted array,
- one element at a time by taking each new element and inserting it into its correct position in the already sorted part of the array.
*/
void insertionSort(int arr[], int n) {
    for (int i=0 ; i<=n-1 ; i++){
        int j = i;
        while (j>0 && arr[j-1]>arr[j]){

            swap(arr[j-1],arr[j]);
            j--;
        }


    } 
}

int main(){
    
    cout<<"provide the length of array"<<endl;
    int n ;
    cin>> n;
    cout<<"Now enter the elements"<<endl;
    int arr[n];


    for (int i = 0; i<n ;i++){
        cin>>arr[i];
    } 
    insertionSort(arr,n); // sorting happens after calling this 

    // printing the sorted array 

    cout<<"sorted array using insertion sort algorithm"<<endl;
    for (int i = 0; i<n ;i++){
        cout<< arr[i]<<" "<<endl;

    }
}
