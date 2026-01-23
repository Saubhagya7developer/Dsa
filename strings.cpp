#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Saubhagya";

    //to get the Length of String - 
    int len = s.length();
    cout<<"the length of string is "<<len<<endl;
    
    //to change the character we can do teh following -

    s[len-1] = 'z';
    cout << s[len-1]<<endl;


    //to traverse every character of String 
    cout<<"to traverse the character of String -"<<endl;

    for(int i=0;i<len;i++)
    {
        cout<<s[i]<<endl;
    }


    cout<<"the updated string is " <<s<<endl;

    return 0;


}


// int main(){
//     string str1;
//     cout<<"Enter first string: "<<endl;
//     getline(cin,str1); // for input string with spaces

//     string str2;
//     cout<<"Enter second string: "<<endl;
//     getline(cin,str2);

//     // string concatenation
//     string str3 = str1 + " " + str2;
//     cout<<"Concatenated String: "<<str3<<endl;

//     // string length
//     cout<<"Length of first string: "<<str1.length()<<endl;
//     cout<<"Length of second string: "<<str2.length()<<endl;

//     // string comparison
//     if(str1 == str2)
//     {
//         cout<<"Both strings are equal"<<endl;
//     }
//     else
//     {
//         cout<<"Strings are not equal"<<endl;
//     }

//     // substring
//     cout<<"Substring of first string (first 5 characters): "<<str1.substr(0,5)<<endl;

//     return 0;
// }