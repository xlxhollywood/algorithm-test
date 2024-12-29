#include <iostream>
#include <vector>
#include <algorithm> // swap 함수를 사용하기 위한 헤더

using namespace std;

void printV(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}

    cout << "\n";
}

// 순열을 생성하는 재귀 함수
void makePermutation(vector<int>& v, int n, int r, int depth) {
    // 디버깅용 출력 (현재 재귀 상태를 보여줌)
    cout << n << " : " << r << " : " << depth << '\n';

    // 기저 조건: r개의 순열이 완성된 경우
    if (r == depth) {
        printV(v); // 현재 벡터의 상태를 출력
        return;       // 재귀 종료
    }

    // 현재 단계에서 가능한 모든 교환을 시도
    for (int i = depth; i < n; i++) {
        swap(v[i], v[depth]);                // i번째 요소와 depth번째 요소를 교환
        makePermutation(v, n, r, depth + 1); // 다음 단계로 이동
        swap(v[i], v[depth]);                // 원상복구 (백트래킹)
    }
}

int main() {
    vector<int> v; // 순열을 생성할 벡터

    // 벡터 초기화: 0부터 2까지 총 3개의 요소 추가
    for (int i = 0; i < 3; i++) {
        v.push_back(i); // 벡터에 i 추가 (0, 1, 2)
    }

    // 순열 생성 함수 호출
    // n = 3: 전체 원소 개수
    // r = 3: 선택할 원소 개수
    // **depth = 0: 재귀 시작 깊이
    makePermutation(v, 3, 3, 0);

    return 0; // 프로그램 종료
}
