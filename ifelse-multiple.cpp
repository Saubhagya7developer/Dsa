#include<bits/stdc++.h>
using namespace std;


int main(){
    int marks;
    cout<<"Enter your marks: "<<endl;
    cin>>marks;

    if(marks>=90 && marks<=100)
    {
        cout<<"your grade is A"<<endl;
    }
    else if(marks>=80 && marks<90)
    {
        cout<<"your grade is B"<<endl;
    }
    else if(marks>=70)
    {
        cout<<"your grade is C"<<endl;
    }
     else if(marks>+60)
    {
        cout<<"your grade is D"<<endl;
    }
     else if(marks>=50)
    {
        cout<<"your grade is E"<<endl;
    }
    else 
    {
        cout<<"your grade is F"<<endl;
    }
}

//nested If-Else Statement

int main(){
    int age;
    cout<<"enter your age"<<endl;
    cin >>age;

    if (age>=18)
    
    {
        cout<<"You are an adult"<<endl;
        if(age>=65)
        {
            cout<<"You are a senior citizen"<<endl;
        }
        else
        {
            cout<<"You are not a senior citizen"<<endl;
        }
    
    }
    else
    
    {
        cout<<"You are a minor"<<endl;
        if(age<=12)

         {
            cout<<"You are a child"<<endl;
        }
        else
        {
            cout<<"You are a teenager"<<endl;
        }

    }

}


