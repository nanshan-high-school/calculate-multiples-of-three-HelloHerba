#include <iostream>
using namespace std;
int main() {
  int j;
  long int num1,num2,num3,i;
  char calculation;
  cout<<"請輸入算式：";
  cin>>num1>>calculation>>num2;
  if(calculation=='+')
  { 
    cout<<num1<<'+'<<num2<<'='<<num1+num2;  
    num3=num1+num2;
    }
  else if(calculation=='-')
    { 
      cout<<num1<<'-'<<num2<<'='<<num1-num2;  
      num3=num1-num2;
      }
    else if(calculation=='*')
      { 
        cout<<num1<<'*'<<num2<<'='<<num1*num2; 
        num3=num1*num2;
        }
        else if(calculation=='/')
        { 
          cout<<num1<<'/'<<num2<<'='<<num1/num2;  
          num3=num1/num2;
          }
  if(num3/3*3==num3)
  {
    cout<<"\n"<<num3<<"是3的倍數";
  }else{
    cout<<"\n"<<num3<<"不是3的倍數";
  }
  
