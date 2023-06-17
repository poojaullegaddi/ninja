#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
if(n==0)
return 1;
else
return n*fact(n-1);
}
int main()
{
int n;
cout<<"enter n"<<endl;
cin>>n;
int factorial=fact(n);
cout<<"factorial of number is" <<factorial<<endl;
return 0;
}
