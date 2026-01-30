#include <bits/stdc++.h>
using namespace std;


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

    cout<<"sorted array"<<endl;
    for (int i = 0; i<n ;i++){
        cout<< arr[i]<<" "<<endl;

    }
}