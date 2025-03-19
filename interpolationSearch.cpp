#include <iostream>
#include <search.h>
using namespace std;

//INTERPOLATION FUNCTION
void interpolation_search(int arr[], int arr_len, int key){
  int found = 0;
  int low = 0;
  int high = arr_len - 1;
  while (key >= arr[low] && key <= arr[high] && arr[high] != arr[low] ){
    int pos = low + ((key - arr[low]) * (high - low) / (arr[high] - arr[low]));
    if (arr[pos] == key) {
      found = 1;
      cout << "Found key at index " << pos << endl;
      break;
    } else if (arr[pos] > key)
      high = pos - 1;
    else
      low = pos + 1;
  }
  if (!found)
    cout << "Could not find the key" << endl;
}


int main(){
  int arr[] = {1, 3, 7, 10, 14, 15, 16, 18, 20, 21, 22, 23, 25, 33, 35, 42, 45, 47, 50, 52};
  int arr_len = sizeof(arr) / sizeof(arr[0]);
  int key;
  cout << "Enter the key to search: ";
  cin >> key;

  interpolation_search(arr, arr_len, key);

  return 0;
}