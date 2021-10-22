// Given two given integers N1 and N2, find the number of perfect squares from N1 to N2 (N1 and N2 inclusive).
// Write a function that accepts the integers N1 and N2. The function should return the count of perfect squares from N1 to N2. 
  
// Input:
//   4
//   50
// where:
//   First line represents a value of N1
//   Second line represents a value of N2
 
// Output:
//     6
      
// Explanation: Perfect squares from 4 to 50 are: 4,9,16,25,36,49.

#include <iostream>
#include <math.h>
using namespace std;
void square(int a, int b){
    int count=0,temp;
    for(;a<=b;++a){
        temp=sqrt(a);
        if((temp*temp)==a){count+=1;}
    }
    cout<<count;
}
int main() 
{
    int n1,n2;
    cin>>n1;
    cin>>n2;
    square(n1,n2);
}
