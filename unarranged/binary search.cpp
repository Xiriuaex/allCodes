#include<iostream>
using namespace std;

int binary(int ar[],int size,int num){
        int number=num;
       // int size=size;
        int first=0;
        int last=size;
        int mid=(last+first)/2;
        for(int i=0; i<last;i++ ){
            if(number==ar[mid])
            cout<<"the number is at "<<mid;
            else if(number<ar[mid]){
                last=mid-1;
                mid=(last+first)/2;
                if(number==ar[mid])
                    cout<<"the number is at "<<mid;
                    else 
                         break;
                }
             else if(number>ar[mid]){
                first=mid+1;
                mid=(last+first)/2;
                if(number==ar[mid])
                    cout<<"the number is at "<<mid;
                    else 
                         break;
                }
            }
            else if(number)
        }

}

int main(){

}




{

}