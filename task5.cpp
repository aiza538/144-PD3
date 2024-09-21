#include<iostream>
using namespace std;

main()
{ 
  float days;
  string name = "Enter the name";
  float weightloss;
  cout<<"Enter the name"<<endl;
  cin>>name;
  cout<<"Enter the targetweightloss"<<endl;
  cin>>weightloss;
  days = weightloss * 15;
  cout<<"no of days"<<days;
}