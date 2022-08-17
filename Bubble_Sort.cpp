#include <iostream>
using namespace std;

// Bubble Sort
void bubbleSort(int arr[], int n) 
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
  
    bubbleSort(arr, N); 
    printArray(arr, N); 
  
    return 0; 
} 

