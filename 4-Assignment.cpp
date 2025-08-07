#include<iostream>
using namespace std;
int main(){
   int size;
       int a[20];
     cout << "Enter Size Of array: ";
    cin >> size;

    cout << "Enter Data:\n";
    for(int i = 0; i < size; i++) {
        cin >> a[i]; 
        
    }
   
  int low=0,high=size-1;
  int mid;

    while (low<high){

        mid=(low+high)/2; 

         if(a[mid]>=a[high]){
            low=mid+1;
         }
         else{
            high=mid;
         }

        
    }
    cout<<"The samllet value is :- "<<a[low];
  
}


/*
Output :-PS C:\TY-SEM-I\ADSA LAB> g++ Practise_Q_I.cpp
PS C:\TY-SEM-I\ADSA LAB> ./a
Enter Size Of array: 5
Enter Data:         
3
4
5
1
2
The samllet value is :- 1
*/
