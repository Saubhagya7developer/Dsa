#include<bits/stdc++.h>
using namespace std;

long countDigits(long x ){ // normal approach
    int count=0;
    while(x>0){
        count++;
        x=x/10;
    }
    return count;
}

long countDigitslog(long x ){ // log10 based approach
    int count=log10(x)+1;
    return count;

}

int reverse(long x ){
    int revNum = 0;
    while(x > 0){
        int ld = x % 10;
        revNum = (revNum * 10) + ld;
        x = x/10;
    }
    cout<< revNum;
}

bool isPalindrome(int x) { // palindrome no are those no which read same from left to right and right to left

    if (x<0) return false;
    int original = x;
    long long rev = 0;

    while(x != 0){
        int ld = x % 10;
        rev = rev * 10 + ld;
        if (rev > INT_MAX || rev < INT_MIN)
            return false;

        x /= 10;
    }
    return (rev == original);
    
}

int ArmStrongNo(int x){ // Armstrong no are those no which are equal to the sum of cubes of their digits
    if (x<0) return false;
    int original = x;
    long long sum = 0;

    while(x != 0){
        int ld = x % 10;
        sum =sum + ld*ld*ld;
        if (sum > INT_MAX || sum < INT_MIN) // overflow check
            return false;

        x /= 10;
    }
    if (sum == original){
        cout<< original << " is an Armstrong No. "<< endl;
    }
    else{
        cout<< original << " is not an Armstrong No. "<< endl;
    }

}

bool ArmStrongNoB(int x){ // armstrong no. in boolean form
    if (x<0) return false;
    int original = x;
    long long sum = 0;

    while(x != 0){
        int ld = x % 10;
        sum =sum + ld*ld*ld;
        if (sum > INT_MAX || sum < INT_MIN) // OverFlow check
            return false;

        x /= 10;
    }
    return (sum == original);

}

int Divisor(int x){ 
    if (x<=0) {
        cout<<"Please provide a valid positive integer "<< endl;
    }
    cout<<"The divisors of " << x << " are : "<< endl;

    for(int n=1; n<x; n++){
        if (x % n == 0)
        {
            cout<<n;
        }
        else{
            continue; // have to put continue statement here to skip the Space iteration
        }
        cout<<endl;
    }
}

void SquareRootDevisor(int x){ //a better approach by checking till sqrt(x)
    vector<int> ls;
    for(int i=1; i*i<=x;i++){
        if(x%i==0){
            ls.emplace_back(i); // i can also use push_back(i); but empplace_back is more efficient(time complexity wise)
            if(i!=x/i){ // to handle perfect square case
                ls.emplace_back(x/i);
            }
        }
    }
    sort(ls.begin(), ls.end()); // to print in sorted order
    
    for(auto it:ls){
        cout<<it<<" ";
    } 

}

void primeNo(int x){// A no. divissible by only 1 and itself
    if (x<=1){
        cout<< x << " is not a prime no. "<< endl;
        return;
    }
    for(int i=2; i<=x; i++){
        if(x%i==0){
            cout<< x << " is not a prime no. "<< endl;
            return;
        }
    }
    cout<< x << " is a prime no. "<< endl;
}

void primeNOsqrtechnique(int x){ // using square root technique
    int cnt = 0;
    if (x<=1){
        cout<< x << " is not a prime no. "<< endl;
        return;
    }
    for(int i=2; i<=x; i++){
        if(x%i==0){
            cnt++;
            if (x/i!=i){ // to handle perfect square case
                cnt++;
            }
        }
    }
    cout<<(int)cnt<<endl; // to show no. of divisors

    if (cnt==2){
        cout<< x << " is a prime no. "<< endl;
    }
    else{
        cout<< x << " is not a prime no. "<< endl;
    }
    
}

int main(){
    cout<<"Please provide the number to ..."<<endl;
    long x;
    cin>>x;
    
    // call the functions  you want to test here
    
    return 0; 


}