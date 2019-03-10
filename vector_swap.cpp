#include <iostream>
#include <array>
#include <vector>

using namespace std;

void swap(vector<int> arr, int ind1, int ind2){
  int temp = arr[ind1];
  arr[ind1] = arr[ind2];
  arr[ind2] = temp;
}

void insertion_sort(vector<int>arr){
  for (int i=1; i< 5; i++){
      int num = arr[i];
      int p = i-1;
      while(arr[p] > num){
	swap(arr, p, p+1);
	p -= 1;
      }
  }
}

int find_min(vector<int> a, int start_index, int end_index){
  int i;
  int min_index = start_index;
  for (i=start_index; i <end_index;i++){
    if(a[i] < a[min_index]){
      min_index = i;
    }
  }
  return min_index;
}
 
vector<int> selection_sort(vector<int> a){
  int min_index;
  int i, tmp;
  
  for (i=0; i <a.size()-1; i++){
    min_index = find_min(a, i, a.size());
    tmp = a[i];
    a[i] = a[min_index];
    a[min_index] = tmp;
  }

  return a;
}

int main()
{
  vector<int> a;
  a.push_back(15);
  a.push_back(12);
  a.push_back(3);
  a.push_back(2);
  a.push_back(1);
  a = selection_sort(a);
  for (int i=0; i< a.size(); i++){
    cout << a[i] << endl;
  }

  return 0;
}
