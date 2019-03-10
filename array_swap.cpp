#include <iostream>
#include <array>
#include <vector>

using namespace std;

void swap(int arr[5], int ind1, int ind2){
  int temp = arr[ind1];
  arr[ind1] = arr[ind2];
  arr[ind2] = temp;
}



void insertion_sort(int arr[5]){
  for (int i=1; i< 5; i++){
      int num = arr[i];
      int p = i-1;
      while(arr[p] > num){
	swap(arr, p, p+1);
	p -= 1;
      }
  }
}


int find_min(int a[], int start_index, int end_index){
  int i;
  int min_index = start_index;
  for (i=start_index; i <end_index;i++){
    if(a[i] < a[min_index]){
      min_index = i;
    }
  }
  return min_index;
}

 
void selection_sort(int a[], int size){
  int min_index;
  int i, temp;
  
  for (i=0; i <size-1; i++){
    min_index = find_min(a, i, size);
    temp = a[i];
    a[i] = a[min_index];
    a[min_index] = temp;
  }

}



int main()
{

  int s = 10;
  int *a = new int[s];
  for(int p = 0; p<s; p++){
    a[p] = rand()%100;
  }

  
  cout << "INSERTON" << endl;
  int arr [5] = {15, 12, 1, 2, 3}; 
  cout << find_min(arr, 0, 5)<<endl;
  insertion_sort(arr);
  for(int i=0; i < 5; i++){
    cout << arr[i] << endl;
  }


  cout << "SELECTION" << endl;
  int arr2 [5] = {15, 12, 1, 2, 3};
  selection_sort(arr2, 5);
  cout << "---------------------------" << endl;
  for(int i=0; i < 5; i++){
    cout << arr2[i] << endl;
  }

  

  return 0;
}
