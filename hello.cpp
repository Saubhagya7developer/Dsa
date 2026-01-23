// #include <iostream>

// int main() {
//     std::cout <<"Hello, saubhagya" << std::endl;
//     std::cout <<"hmm lets Strt with C++" << std::endl;
//     return 0;
// }



// so to Exclued the std:: we can use the below line
// using namespace std;

// #include <iostream>
// using namespace std;

// int main() {
//     cout <<"Hello, saubhagya"<<endl << "lets have some fun with C++"<<endl;
//     cout <<"hmm lets Strt with C++"<<endl;
//     return 0;
// }



// to include every librabry used in C++
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     cout <<"Hello, saubhagya"<<endl << "lets have some fun with C++"<<endl;
//     cout <<"hmm lets Strt with C++"<<endl;
//     return 0;
// }



//user input and Output
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int x,y;
//     cout<<"Enter two numbers:"<<endl;
//     cin>> x >> y;
//     cout<<"you entered x = "<<x<< " and y as " <<y<< endl;   cout<<"The sum is: "<< x + y << endl;
// }



//datatypes in C++
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     float x=3.5;
//     cout<<"the value of  is :" <<x << endl;
//     int y = 7.7;
//     cout<<"the value of y is :" <<y << endl;
//     int y = 9;
//     cout<<"the value of y is :" <<y << endl;

// }


//strings

#include<bits/stdc++.h>
using namespace std;

int main(){
    string g;
    cout<<"Enter a string:"<<endl;
    cin>> g;
    cout<<"the String you enteres is :" <<g<< endl;
    //this will only take single word as input

    //so to take a full line as input

    string s;
    getline(cin,s);
    cout<<"the full line entered by you "<<s<< endl;

    //char

    char a;
    cout<<"Enter a character:"<<endl;
    cin>>a;
    cout<<"the character you entered is :" <<a<< endl;

}
