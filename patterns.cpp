#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"this was a simple pattern 1 "<<endl;
    cout<<endl;
}

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
    cout<<endl;
    }
    cout<<"this was a increasing wrt to i - pattern 2"<<endl;
    cout<<endl;
}

void pattern3(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
    cout<<endl;
    }
    cout<<"this was a increasing wrt to i in int format - pattern 3"<<endl;
    cout<<endl;
}

void pattern4(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
    cout<<endl;
    }
    cout<<"this was a increasing wrt to i in int format - pattern 4"<<endl;
    cout<<endl;
}

void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"* ";
        }
    cout<<endl;
    }
    cout<<"this was a increasing wrt to i in int format - pattern 5"<<endl;
    cout<<endl;
}

void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<j<<" ";
        }
    cout<<endl;
    }
    cout<<"this was a increasing wrt to i in int format - pattern 6"<<endl;
    cout<<endl;
}

void pattern7(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;

    }
    cout<<"this is a pyrtamid pattern 7 "<<endl;
    cout<<endl;

}

void pattern8(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int k=0;k<2*n-(2*i+1);k++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        cout<<endl;

    }
    cout<<"this is a integer pyrtamid pattern 8 "<<endl;
    cout<<endl;
}

void pattern9(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int k=0;k<i;k++){
            cout<<k;
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;

    }
    cout<<"this is a integer pyrtamid pattern 9 "<<endl;
    cout<<endl;
}

void pattern10(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        cout<<endl;
    }
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for(int k=0;k<2*n-(2*i+1);k++){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        cout<<endl;
    }
    cout<<"this is the combination of 7th and 8th pattern to form DIAMOND ";
    cout<<endl;

}

int main (){

    int n;
    cout<<"Enter the no. of rows "<<endl;
    cin>>n;

    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);

    return 0;
}
