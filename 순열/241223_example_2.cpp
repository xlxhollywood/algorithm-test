#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    set<string> unique_results; // 중복 제거를 위한 집합

    // 5P5 전체 순열 생성
    do {
        // 앞 2개 숫자만 사용
        string result = to_string(a[0]) + " " + to_string(a[1]);
        unique_results.insert(result);
    } while (next_permutation(a, a + 5));

    // 중복 제거된 결과 출력
    for (const auto& res : unique_results) {
        cout << res << '\n';
    }

    return 0;
}
