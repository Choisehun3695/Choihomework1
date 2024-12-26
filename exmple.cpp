#include <iostream>
using namespace std;

//5개의 숫자를 입력받아 배열에 저장한 뒤 합과 평균을 출력하는 기능이 정확히 동작하는지 확인
//합과 평균을 구하는 부분을 함수로 정의해서 구현했는지 확인
//5개가 아닌 N개의 입력을 받는다고 가정하고 재사용성을 고려한 코드를 작성했는지 확인


// 합을 계산하는 함수
int Sum(int* number, int s) {
    int sum = 0;
    for (int i = 0; i < s; ++i) {
        sum += number[i];
    }
    return sum;
}

// 평균을 계산하는 함수
int Average(int* number, int s) {
    if (s == 0) return 0;
    int sum = Sum(number, s);
    return static_cast<int>(sum) / s;
}

int main(){
    int N;
    cout << "입력할 숫자의 개수 ";
    cin >> N;

    int* number = new int[N];
    cout << N << "N개의 숫자를 입력: ";
    for (int i = 0; i < N; ++i) {
        cin >> number[i];
    }

    int sum = Sum(number, N);
    int average = Average(number, N);

    cout << "합: " << sum << endl;
    cout << "평균: " << average << endl;

    delete[] number;
    return 0;
}



