/*
Abril Gonzalez
February 2019


Is the input string a palindrome? 

Runtime: O(n)

*/


#include <iostream>
#include <string>

using namespace std;

bool isPalindrome (string str){
    if (str.length() <= 0){
        return false;
    }
    
    int j = str.length()-1;
    
    for(int i =0; i < str.length()/2;){
        if (str[i] == str[j]){
            i++;
            j--;
        }
        else {
            return false;
        }
    }
    return true;
}

int main()
{
    string input;
    cin >> input;
    cout << isPalindrome(input) << endl;

    return 0;
}
