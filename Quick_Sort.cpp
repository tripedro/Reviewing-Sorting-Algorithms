#include <iostream>
using namespace std;

// Quick Sort
void quickSort(int arr[], int n) 
{ 

} 
  
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl;
} 
  
// Driver code
int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6 }; 
    int N = sizeof(arr) / sizeof(arr[0]); 
  
    quickSort(arr, N); 
    printArray(arr, N); 
  
    return 0; 
} 

