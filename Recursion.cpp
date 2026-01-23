//Remeber that Recursion is a good approach but not the most efficient one always.
//Sometimes it can lead to stack overflow if the depth of recursion is too high.
#include <bits/stdc++.h>
using namespace std;

// Printing 1 - n using recursion and Backtracking.
// Also restricted to use the additional operators which was used in normal recursion method

void fun_1toN(int n){
    if(n<1){
        return; // base Condition
    }

    fun_1toN(n-1);
    cout<<n<<endl; // this will execute during the backtracking phase
    return;

}


// Printing n - 1 using recursion and Backtracking.
// Also restricted to use the subraction operators which was used in normal recursion method

void fun_Nto1(int i,int n){
    if(i>n){
        return; // base Condition
    }
    fun_Nto1(i+1,n);
    cout<<i<<endl; // this will be executed during Backtracting phase 

    return;
}


// returnig Sum of First N numbers

int sum_N(int n){
    if(n==0) return 0; // base Condition
    return n + sum_N(n-1);
}




// factoruial ofd a number using recursion

int Factorial(int n){
    if (n==0) return 1; // base Condition
    return n * Factorial(n-1);
}




// Check if a string is palindrome using Recursion

bool isPalindrome(string s) {
    int l = 0, r = s.size() - 1;

    while (l < r) {
        while (l < r && !isalnum(s[l])) l++;
        while (l < r && !isalnum(s[r])) r--;

        if (tolower(s[l]) != tolower(s[r]))
            return false;

        l++; r--;
    }
    return true;
}




// Multiple Recursion Calls 
// Fibonacci Series using Recursion

int Fibonacci(int n){
    if (n<=1) return n; // base Condition
    int last = Fibonacci(n-1);
    int slast = Fibonacci(n-2);
    return last + slast;
}



int main(){
    int n;
    int i = 1;
    cin>>n;
    
    // cout<<"Enter the no. till which you want to print: "<<endl;
    // fun_1toN(n);
    // cout<<"Now printing in reverse order: "<<endl;
    // fun_Nto1(i,n);
    // cout<<"The sum of first "<< n <<" numbers is: "<< sum_N(n) << endl;
    
    cout<<Fibonacci(n)<<endl;

    return 0;
}
