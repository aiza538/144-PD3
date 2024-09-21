#include<iostream>
using namespace std;

main()
{
  int finalvelocity;
  int initialvelocity;
  int acceleration;
  int time;
  cout<<"Enter initial velocity"<<endl;
  cin>>initialvelocity;
  cout<<"Enter acceleration"<<endl;
  cin>>acceleration;
  cout<<"Enter time"<<endl;
  cin>>time;
  finalvelocity = initialvelocity + (acceleration)*(time);
  cout<<"the final velocity :"<<finalvelocity;
}
  