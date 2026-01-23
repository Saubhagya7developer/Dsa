#include<bits/stdc++.h>
using namespace std;

/* take the day no and print the corresponding day :
for 1 print monday 
and for 2 print tuesday and for 7 print sunday*/

int main(){
    int dn;
    cout<<"Print the No to Print thet correspondance Day"<<endl;

    cin>>dn;

    switch (dn)
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;
    case 4:
        cout<<"Thusrday"<<endl;
        break;
    case 5:
        cout<<"Friday"<<endl;
        break;
    case 6:
        cout<<"Saturday"<<endl;
        break;
    case 7:
        cout<<"Sunday"<<endl;
        break;
    default:
        cout<<"check the given no. you entered"<<endl;
        break;
    }

    return 0;
}

    