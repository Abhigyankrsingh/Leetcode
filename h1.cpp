#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; 
    cin >> n;

    char arr[n];  // Change the array type to char

    map<char, int> mppp;  // Change the map type to char

    for(int i = 0; i < n; i++){  // Change the loop condition to i < n
        cin >> arr[i];

        mppp[arr[i]]++;
    }

    for(auto it : mppp){
        cout << it.first << "--> " <<  it.second << endl;
    }

    return 0; 
}
