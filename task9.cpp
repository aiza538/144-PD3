#include<iostream>
using namespace std;

main()
{
  int number;
  int sum;
  int div1, div2, div3, div4, mod1, mod2, mod3, mod4;
  cout<<"Enter the 4-digit number"<<endl;
  cin>>number;
  mod1 = number%10;
  div1 = number/10;
  mod2 = div1%10;
  div2 = div1/10;
  mod3 = div2%10;
  div3 = div2/10;
  mod4 = div3%10;
  div4 = div3/10;
  sum = mod1 + mod2 + mod3 + mod4;
  cout<<"Sum of individual digits :"<<sum;
}