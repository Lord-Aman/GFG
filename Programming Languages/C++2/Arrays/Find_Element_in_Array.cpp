// Find Element in an array

/*
1.You are given a number n, representing the size of array a.
2.You are given n numbers, representing elements of array a.
3. You are given another number d.
4. You are required to check if d number exists in the array a and at what index (0 based). If found print the index, otherwise print -1.
*/

#include <iostream>
using namespace std;

int main(){
  int arrSize;
  cin >> arrSize;

  int arr[arrSize];
  for(int i=0; i < arrSize ; i++)
    cin >> arr[i];

  int data;
  cin >> data;

  int res = -1;

  for(int i=0; i < arrSize; i++){
      if(arr[i] == data){
      res = i;
      break; // To save time 
    }
  }
  cout << res;
}
