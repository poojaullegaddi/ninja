/*
Check Palindrome (recursive)
Send Feedback
Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S
Output Format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false
*/
#include <iostream>
#include "solution.h"
using namespace std;
#include<string.h>
bool checkPalindrome(char input[]) {
    // Write your code here
static int i=0;
    int S=strlen(input);
    if(i>=S)
        return 1;
    if(input[i]!=input[S-i-1])
    {
        return 0;
    }
    else
    {
       i++;
        checkPalindrome(input);
    }
    
}



int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
