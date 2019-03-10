#include <iostream>
#include <array>
#include <vector>

using namespace std;


void merge_sort(vector<int> a, int left, int right){
  
  //base case


  //first recursive call


  //second recursive call


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
