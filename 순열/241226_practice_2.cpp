#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void makePermutation(vector<int>&v , int n , int r , int depth){
  // 기저 사례
  if(r == depth){
    for(int i = 0 ; i < r; i++){
    cout << v[i] << " ";
    }
    cout << "\n"; // 한 줄 출력 후 종료
    return;
  }

  for(int i = depth; i < n; i++){
  swap(v[i], v[depth]);
  makePermutation(v, n, r, depth + 1);
  swap(v[i], v[depth]);
  }

  return;
}

int main(){
  vector<int> v;

  for(int i = 0; i < 3; i ++)
    v.push_back(i);
  
  // n은 전체 원소 , r은 뽑을 원소 , 0 은 depth
  makePermutation(v,3,3,0);


  return 0;
}