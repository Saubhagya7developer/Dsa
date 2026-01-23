#include<bits/stdc++.h>
using namespace std;

    //functions are set of codes which perform a specific task for you
    //functions are used to moudalarise code 
    //functions are used to iincrese readbability
    //Functions are used to use the same code multiple times

    /* Types of functions - 
    1. void -> ehich does not return anything 
    2. return typeing functions
    3. parameterised functions
    4. NON parametrised 

    */

// void printName(string name){
//     cout<<"hello " << name <<endl;
// }

// int sum(int num1, int num2){
//     int num3 = num1 + num2;
//     return num3;

// }

//pass by refrence 
int doSomething(int &num){ // here & is used to pass by Refrence
    num=num+5;
    cout<<"inside the function " << num <<endl;
}



int main()
{
    // string name ;
    // cin>>name ;
    // printName(name);
    
    // string name2;
    // cin>>name2;
    // printName(name2);

    // cout<<"please provide the No. to Add"<<endl;
    // int a,b;
    // cin>>a>>b;

    // int result = sum(a,b);
    // cout<<"the sum is " << result <<endl;

    

      //Pass by refrerence & Pass by value - 

      /*
      - in pass by value -  a copy of that thing goes to the function to be Executed 
      - whereas in pass by Refrence the Original value is passed to the Function to be executed - all the updation executed will reflect on to the original too.
      - also Remember that whenever you pass ARRAYS to functions it is always pass by Refrence
      */

      

      int num = 10;
      doSomething(num);
      cout<<num<<endl;
      return 0; 

}
