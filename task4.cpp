#include<iostream>
using namespace std;

main()
{ 
  float imposter;
  float player;
  float chance;
  cout<<"Enter imposter count"<<endl;
  cin>>imposter;
  cout<<"Enter player count"<<endl;
  cin>>player;
  chance = 100 * (imposter/player);
  cout<<"the chance is :"<<chance;
}