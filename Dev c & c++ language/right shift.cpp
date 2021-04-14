#include <iostream> 
using namespace std; 
right(int n,int arr[],int x,int pos) 
{ 
    int i; 
   
    n++;
    for(i=n;i>= pos;i--) 
    arr[i]=arr[i-1]; 
    arr[pos-1] = x; 
} 
int main() 
{ 
    int arr[100];
    int i,x,pos,n;
    cout<<"Enter total no of element you want you enter";
    cin>>n;
    cout<<"Enter elements";
    for(i=0;i<n;i++) 
    cin>>arr[i]; 
    for(i=0;i<n;i++) 
    cout<<arr[i] << " "; 
    cout<<endl; 
    cout<<"Enter the element you want to enter"; 
    cin>>x;
    cout<<"Enter the position you want to enter";
    cin>>pos;
	if(pos<n)
	{
    right(n, arr, x, pos); 
    for (i=0;i<n+1;i++) 
    cout<<arr[i]<<" "; 
    cout<<endl;
    }
    else{
    	cout<<"error!";
	}
    
} 
