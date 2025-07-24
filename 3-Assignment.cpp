/* Implement a problem of smallest number with at least no trailing 
zeroes in factorial.   
Statement: Given a number n. The task is to find the smallest number 
whose factorial contains at least n trailing zeroes.*/


#include<iostream>
 using namespace std;
 int countTrailingZeros(int x){
    int count =0;
    if(x>0){
      x=x/5;
      count +=x;
    }
    return count ;

 }
 int FindsmallestNumber(int n){
   int low =0;
   int high = 5*n;
   int result =-1;
   while(low<=high){
      int mid = (low+high)/2;
      int zeros =countTrailingZeros(mid);
  if(zeros>=n){
      result=mid;
      high=mid-1;
   }else{
      low=low+1;
   }
    
   }
   return result;
}
   int main (){
 
      int n ;
      cout << "Enter The Number Of trailing zeros:- ";
      cin >> n;
      int answer = FindsmallestNumber(n);
     cout << " Smallest number whose factorial has at least " << n << " trailing zeroes is: " << answer<< endl;
    return 0;

   }

 

