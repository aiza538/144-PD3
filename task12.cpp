#include<iostream>
using namespace std;

main()
{
  int squaremeters;
  int width;
  int height;
  int number;
  cout<<"no of square meters you can paint"<<endl;
  cin>>squaremeters;
  cout<<"width of the single wall (in meters)"<<endl;
  cin>>width;
  cout<<"height of the single wall (in meters)"<<endl;
  cin>>height;
  number = (squaremeters)/((width) *(height));
  cout<<"number of walls you can paint:"<<number;
} 