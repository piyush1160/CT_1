// name : Piyush 
// roll no : 2010990525
// set -04 
#include <iostream>
#include<unordered_set>
using namespace std;
 
int findMinIndex(int arr[], int n)
{
    int minimumindex = n;
 
    unordered_set<int> set;
 
    for (int i =n-1 ; i>=0 ; i--)
    {
        if (set.find(arr[i]) != set.end()) {
            minimumindex = i;
        }
          else{
            set.insert(arr[i]);
        
          }
        
            
    }
 
   //hai hi nahi arry me 
    // if (minimumIndex == n) {
    //     cout<<"INVALID INPUT .... "<<endl;
      
    // }
    //iske bina bhi chal skta hai ....

 
    return minimumindex;
}
 
int main()
{   
    cout<<"enter size of array ... "<<endl;
    int n ;
    cin>>n ;

    int arr[n];
    cout<<"enter the element of an array ..."<<endl;
    for(int i = 0 ;i<n ;i++){
        cin>>arr[i];
    }
      //store kra lo index ko jo func faikega 
    int minimumIndex = findMinIndex(arr, n);
 
    if (minimumIndex != n) {
        cout << "Minimum index of a repeating element  :  " << minimumIndex;
    }
    else {
        cout << "INVALID INPUT ..... ";
    }
 
    return 0;
}
