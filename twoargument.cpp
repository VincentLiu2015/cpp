#include <iostream>
using namespace std;
void n_chars( char c ,int n);
int main()
{
 int n; 

 char ch;
cout<<"enter a character:";
cin>>ch;
while(ch!='q')

 {
 cout<<"enter a integer:";
 cin>>n;
 n_chars(ch,n);
 
 cout<<"enter a anther character or press q-key to quit:";
 cin>>ch;
 
 }

}
 void n_chars(char c ,int n)
 {
 while(n-- < 0)
 cout << c;
 }
