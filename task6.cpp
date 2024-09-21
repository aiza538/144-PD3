#include<iostream>
using namespace std;

main()
{
  int area;
  int cost;
  int size;
  cout<<"Enter the size of fertilizer bag"<<endl;
  cin>>size;
  cout<<"Enter the cost of bag"<<endl;
  cin>>cost;
  cout<<"Enter the area in square feet"<<endl;
  cin>>area;
  cost = cost/size;
  cost = cost * size;
  cout<<"cost of fertilizer per pound"<<cost<<endl;
  cout<<"cost of fertilizer per square foot"<<cost;
}