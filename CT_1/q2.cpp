// name : Piyush 
// roll no : 2010990525
// set -04 
#include <iostream>
#include <unordered_set>
using namespace std;
 

bool isConsecutive(int arr[], int n)
{
    // base case
    if (n <= 1) {
        return true;
    }
 
    int min = arr[0], max = arr[0];
 

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }
 
        if (arr[i] > max) {
            max = arr[i];
        }
    }
 
    
    if (max - min != n - 1) {
        return false;
    }
 
    
    unordered_set<int> vis;
 
    
    for (int i = 0; i < n; i++)
    {
        
        if (vis.find(arr[i]) != vis.end()) {
            return false;
        }
 
      
        vis.insert(arr[i]);
    }
 

    return true;
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
 
    isConsecutive(arr, n)? cout << " array contains cons intege...." << endl : cout << " array does not contain cons integer .... "<<endl ;
 
    return 0;
}