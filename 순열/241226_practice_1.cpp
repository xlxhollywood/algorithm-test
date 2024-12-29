#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (){

  vector<int> a;

  a.push_back(1);
  a.push_back(2);
  a.push_back(3);

  do {
    for(int i = 0; i < a.size(); i++ )
      cout << a[i] << " ";

    cout << "\n";

  } while (next_permutation(a.begin(), a.end()));



  return 0;
}