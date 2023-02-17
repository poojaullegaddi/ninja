/*
String to Integer
Send Feedback
Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")
Output format :
Corresponding integer N (int, Eg. 1234)
Constraints :
0 < |S| <= 9
where |S| represents length of string S.
Sample Input 1 :
00001231
Sample Output 1 :
1231
Sample Input 2 :
12567
Sample Output 2 :
12567
*/

#include <iostream>
#include "solution.h"
using namespace std;






int length(char input[])
{
int len=0;
    for(int i=0;input[i]!='\0';i++)
    {
        len++;
    }
    return len;
}

int stringToNumber(char input[],int last)
{
    
    if(last==0)
    {
        return int(input[last])-'0';
   }
    int smallans=stringToNumber(input,last-1);
    int b=input[last]-'0';
    return smallans*10+b;
}



int stringToNumber(char input[]) {
    // Write your code here
    int len=length(input);
return stringToNumber(input,len-1);
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
