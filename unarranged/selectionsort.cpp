#include<iostream>

using namespace std;

int search(int ar[],int n,int size)
{
    int num=n;
    cout<<"enter the number to found: ";
    cin>>n;
    for(int i=0;i<size;i++){
        if(num==ar[i]){
            cout<<"the number is at position: "<<i;
           
        }
        else
            i++;
        else if(num!=ar[i]&&i==size-1){
           
            cout<<"the number not found. "<<endl;
            //break;
        }
        
    }
     
        return 0;

}
int main(){
 int n,a[100],size;
 cout<<"enter the size of the array: ";
 cin>>size;
 for(int i=0;i<size;i++)
 {
     cout<<"enter numbers: ";
     cin>>a[i];
 }
 
    int result=search(a,n,size);
    cout<<result;
}
