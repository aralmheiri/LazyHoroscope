//Authors: aralmheiri
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first;
string last;
int lucky;
  //get user input
cout<<"whats your first name:\n";
cin>> first;
cout<< "whats your last name:\n";
cin>> last; 
  //tell fortune
cout<<"welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune...";
lucky = first.length();
cout<<" your lucky number"<<lucky<<endl;
if(first[0]=='a'||first[0]=='e'||first[0]=='i'||first[0]=='o'||first[0]=='u'||first[0]=='a'||first[0]=='e'||first[0]=='i'||first[0]=='o'||first[0]=='u') 
{
cout<<"you are destined to be famouse!\n";
}
else if(first[0]>65 && first[0]<99 || first[0]>97 &&  first[0]<122)
{
cout<<" you should keep a low profile.\n";
}
int len= last.length();
if(last[len -1]=='a'|| last[len -1]=='e'|| last[len -1]=='i'|| last[len -1]=='o'|| last[len -1]=='u')
{
cout<<"you have already met your true love.\n";
cout<<"have a good day!\n";
}
else
{
cout<<"have a good day!\n";
}
return 0;
}
