#include<iostream>
using namespace std;

int main(){
  int arr[] {10,20,30,40};
  cout<<arr<<endl;
  cout<<&arr<<endl;
  cout<<arr[0]<<endl;
  cout<<&arr[0]<<endl;
  cout<<*arr<<endl;
  cout<<*arr+1<<endl;
  cout<<*(arr)+1<<endl;
  cout<<*(arr)+3<<endl;

  int *p = arr;
  int *q = arr+1;
  cout<<p<<endl;
  cout<<&p<<endl;
  cout<<*p<<endl;
  cout<<*q<<endl;
  cout<<*p+1<<endl;
  cout<<*(p)+2<<endl;
   cout<<*(q)+2<<endl;
    cout<<*(q)+4<<endl;

    char ch[50] = "Masum";
    char *cptr = ch;
    cout<<cptr<<endl;
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<ch[0]<<endl;
    cout<<&cptr<<endl;
    cout<<*cptr<<endl;



	return 0;
}
