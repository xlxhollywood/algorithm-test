#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);

    // next_permutation을 사용하기 전, 반드시 정렬 상태여야
    sort(a.begin(), a.end());

    do {
        // 여기서 '2'만큼의 원소만 출력 -> "길이 2인" 순열
        for(int i = 0; i < 2; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";

    } while(next_permutation(a.begin(), a.end()));

    return 0;
}
