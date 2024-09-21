#include<iostream>
using namespace std;

main()
{
  string name;
  int adultticket;
  int childticket;
  int adultticketsold;
  int childticketsold;
  int total;
  float charity;
  float percent;
  float remaining;
  cout<<"Enter the movie name"<<endl;
  cin>>name;
  cout<<"Enter adult ticket price"<<endl;
  cin>>adultticket;
  cout<<"Enter child ticket price"<<endl;
  cin>>childticket; 
  cout<<"Enter the adult ticket sold"<<endl;
  cin>>adultticketsold;
  cout<<"Enter the child ticket sold"<<endl;
  cin>>childticketsold;
  cout<<"Enter the percentage denoted to charity"<<endl;
  cin>>charity;
  total= (adultticket*adultticketsold) + (childticket*childticketsold);
  charity = (total / 100);
  remaining = total - charity; 
  cout<<"total amount"<<total<<endl;
  cout<<"charity donation"<<charity<<endl;
  cout<<"remaining ammount"<<remaining<<endl;
}