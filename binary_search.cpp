#include<iostream>
using namespace std;

int binary_search(int a[],int n,int key)
{
  start=0;
  end=n-1;
  
  for(int i=0;i<n;i++)
  {
    mid=start+end/2;
    if(a[mid]==key)
    { 
      return i;
    }
    else if(a[mid]>key)
    {
      end=mid-1;
    }
    else
    {
      start= mid + 1;
    }
 }

int main(){
  int key,n;
  cin>>n;
  cin>>key;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  binary_search(int a[],int n,key);
  for(int i=0;i<n;i++)
  {
   cout<<a[i];
  }
  return 0;
}
  
