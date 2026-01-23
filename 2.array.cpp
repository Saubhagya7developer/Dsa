#include<bits/stdc++.h>
using namespace std;

// int main ()
// {
//     //1D Array in C++

//     cout<<"enter the lenght of array"<<endl;
//     int l;
//     cin>>l;

//     // array taraversal for input
//     int arr[l]; // if you want to store Double values use "double arr[l];"
//     cout << "Enter " << l << " integers to store in the array:" << endl;
//     for(int i=0;i<l;i++)
//     {
//         cin>>arr[i];
//     }
//     // array traversal for output
//     cout<<"You entered the following values in the array:"<<endl;
//     for(int i=0;i<l;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }

    //2D Array in C++
    
int main ()
{
    int m,n,i,j;
    cout<<"enter the rows and columns of Array"<<endl;
    cin>>m>>n;

    int arr2d[m][n];
    cout<<"Enter the elements of the 2D array:"<<endl;
    // input in 2D array
    for( i = 0;i < m; i++)
    {
        for( j=0;j<n;j++)
        {
            cin>>arr2d[i][j];
        }
    }

    //output in 2D array
    cout<<"The elements of the 2D array are:"<<endl;
    
    for( i = 0;i < m; i++)
    {
        for(  j = 0;j < n; j++)
            cout<<arr2d[i][j] << " ";
 
        cout<<endl;

    }
    

   return 0;

}