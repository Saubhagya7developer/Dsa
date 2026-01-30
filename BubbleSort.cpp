#include <bits/stdc++.h>
using namespace std;
// time complexity for Bubble Sort is again same as selection sort , for all cases its O(n^2)

/*Definition - Bubble Sort is a comparison-based sorting algorithm in which adjacent elements are repeatedly compared and swapped 
if they are in the wrong order.In each pass, the largest element “bubbles up” to its correct position at the end of the array, 
just like air bubbles rise to the surface of water.
*/

void BubbleSort(int arr[],int n){
    bool swapped = false;
    for (int i=0;i<=n-1;i++){ //remeber that this loop is to iterate over array index
        for (int j=i;j<=n-i-2;j++){ // and this loop is to find the minimum out of the array 
            if (arr[j]<arr[j+1]){
                //swap
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break; // if already sorted
    }
}
/*
We run i till n-2 because bubble sort needs n-1 passes, and 
j till n-i-2 because after each pass the last i elements are already sorted, 
and we must avoid comparing them.
*/
int main(){

    cout<<"provide the length of array"<<endl;
    int n ;
    cin>> n;
    cout<<"Now enter the elements"<<endl;
    int arr[n];


    for (int i = 0; i<n ;i++){
        cin>>arr[i];
    } 

    BubbleSort(arr,n); // sorting happens after calling this 

    // printing the sorted array 
    cout<<"sorted array using Bubble sort algorithm"<<endl;
    for (int i = 0; i<n ;i++){
        cout<< arr[i]<<" "<<endl;

    }
}
