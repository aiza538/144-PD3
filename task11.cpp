#include<iostream>
using namespace std;
 
main()
{
  int age;
  int moves; 
  float average;
  cout<<"Enter the person's age"<<endl;
  cin>>age;
  cout<<"Enter the no of times they have moved"<<endl;
  cin>>moves;
  average = age /(moves+1);
  cout<<"the average duration is"<<average;
}