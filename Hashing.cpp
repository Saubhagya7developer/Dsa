#include <bits/stdc++.h>
using namespace std;

// Counting frequency of numbers in an array using array Hashing
int countFrequencies(int arr[], int n){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}




//Character Hashing
int countCharacterFrequencies(char arr[], int n){
    string s;
    cin >> s;

    //precompute:
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}

//charackter hashing if having both uppercase and lowercase
int countCharacterFrequenciesCaseSensitive(char arr[], int n){
    string s;
    cin >> s;

    //precompute:
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c] << endl;
    }
    return 0;
}

int main() {

}

