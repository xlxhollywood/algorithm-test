#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void makePermutation(vector<int>& v, int n, int r, int depth) {
    // 기저 조건: depth==r -> 앞의 r개 출력 후 종료
    if (depth == r) {
        for(int i = 0; i < r; i++) {
            cout << v[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = depth; i < n; i++) {
        swap(v[i], v[depth]);                // 정방향 swap
        makePermutation(v, n, r, depth + 1); // 재귀
        swap(v[i], v[depth]);                // 역방향 swap(원상복구)
    }
}

int main() {
    vector<int> v = {0, 1, 2};
    // 3개 중 2개 뽑는 순열 (즉 3P2)
    makePermutation(v, 3, 2, 0); 
    return 0;
}
