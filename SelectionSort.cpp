#include <bits/stdc++.h>
using namespace std;

// time complexity of selection sort for every case is O(n^2)

/*
Definiion - Selection Sort is a simple comparison-based sorting algorithm in which it 
repeatedly selects the minimum element and moves it to the front.
*/
void selectionSort(int arr[], int n){
    for (int i=0;i<=n-2;i++){ //remeber that this loop is to iterate over array index
        int mini = i;
        for (int j=i;j<=n-1;j++){ // and this loop is to find the minimum out of the array 
            if (arr[j]<arr[mini]){
                mini = j;
            }
        }
        //Swap
        int temp = arr[mini];
        arr[mini]= arr[i];
        arr[i] = temp;
    }    
}
/*
We run i till n-2 because the last element is automatically sorted, and 
j till n-1 because we must compare with every remaining element to find the minimum.
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
    selectionSort(arr,n); // sorting happens after calling this 

    // printing the sorted array 

    cout<<"sorted array using selection sort algorithm"<<endl;
    for (int i = 0; i<n ;i++){
        cout<< arr[i]<<" "<<endl;

    }
}