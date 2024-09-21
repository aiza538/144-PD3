#include<iostream>
using namespace std;

main()
{
  float number = 1.94;
  float vegetablesprice;
  float fruitprice;
  int kilogramsofvegetables;
  int kilogramsoffruits;
  int total;
  cout<<"Enter the vegetable price per kilogram"<<endl;
  cin>>vegetablesprice;
  cout<<"Enter the fruit price per kilogram"<<endl;
  cin>>fruitprice;
  cout<<"Enter total kilograms of vegetables"<<endl;
  cin>>kilogramsofvegetables;
  cout<<"Enter total kilograms of fruits"<<endl;
  cin>>kilogramsoffruits;
  total = vegetablesprice * kilogramsofvegetables + fruitprice * kilogramsoffruits/1.94;
  cout<<"total earnings"<<total;
}
  