#include<iostream>
using namespace std;

int main(){
  int a = 100;
  cout<<a<<endl;
  cout<<&a<<endl;

  int *ptr = &a;
  cout<<*ptr<<endl;
  cout<<ptr<<endl;
  cout<<&ptr<<endl;

  //size of ptr
  int *x  = &a;
  cout<<sizeof(x)<<endl;
  long t = 1348934;
  long *b= &t;
  cout<<sizeof(t)<<endl;

  // bad practice: it access random address
  int *y;
  cout<<*y<<endl;

  //  so we can initilise with NULL
  // int *y= NULL;
  // cout<<*y<<endl;

  cout<<(*ptr)++<<endl;
  cout<<++(*ptr)<<endl;
   cout<<(*ptr)/2<<endl;


	return 0;
}
