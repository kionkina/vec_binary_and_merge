#include <iostream>
#include <array>
#include <vector>

using namespace std;


void merge_sort(vector<int> a){
  
  //base case
  if a.size() == 1 return;

  
  vector<int> left;
  int mid = a.size()/2;
  
  //filling left half
  for (int i = 0; i < mid; i++){
    left[i] = a[i];
  }

  //filling right half
  int right_index = 0;
  for (int p = mid; p < a.size(); p++){
    right[right_index] = a[p];
    right_index += 1;
  }

  //first recursive call
  mergeSort(left);

  //second recursive call
  mergeSort(right);  

  //merge
  merge(a, left, right);

}


void merge(vector<int> a, vector<int> left, vector<int>right){

  int i=0;
  int left_ind=0;
  int right_ind=0;
  
  while (left_ind < left.size() && right_ind < right.size()){
    
    //going through left and right array values one by one and comparing them
    if(left[left_ind] <= right[right_ind]){
      a[i] = left[left_ind];
      i++;
      left_ind++;
    }
    else {
      a[i] = right[right_ind];
      i++;
      right_ind++;
    }
  }
  //copying rest of the elements

  while(left_ind < left.size()){
    a[i] = left[left_ind];
    i++;
    left_ind++;
  }

  while(left_ind < right.size()){
    a[i] = left[right_ind];
    i++;
    right_ind++;
  }

}


//vector binary search
//assumes that the array is already sorted
int binary_search(vector<int> &a, int low, int high, int find){
  
  int mid = low + (high-low)/2;
  
  if (high < low){
    return -1;
  }

  if (a[mid] == find){
    return mid;
  }

  else if (a[mid] > find){
    return binary_search(a, mid, high, find);
  }

  else {
    return binary_search(a, low, mid, find);
  }
}


int main()
{
  vector<int> a;
  a.push_back(15);
  a.push_back(12);
  a.push_back(3);
  a.push_back(2);
  a.push_back(1);

  int p = binary_search(a, 0, 5, 15);
  cout << p << endl;
  /*
 for (int i=0; i< 5; i++){
    cout << a[i] << endl;
  }
  */

  return 0;
}
