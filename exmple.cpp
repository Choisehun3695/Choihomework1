#include <iostream>
using namespace std;

//5���� ���ڸ� �Է¹޾� �迭�� ������ �� �հ� ����� ����ϴ� ����� ��Ȯ�� �����ϴ��� Ȯ��
//�հ� ����� ���ϴ� �κ��� �Լ��� �����ؼ� �����ߴ��� Ȯ��
//5���� �ƴ� N���� �Է��� �޴´ٰ� �����ϰ� ���뼺�� ����� �ڵ带 �ۼ��ߴ��� Ȯ��


// ���� ����ϴ� �Լ�
int Sum(int* number, int s) {
    int sum = 0;
    for (int i = 0; i < s; ++i) {
        sum += number[i];
    }
    return sum;
}

// ����� ����ϴ� �Լ�
int Average(int* number, int s) {
    if (s == 0) return 0;
    int sum = Sum(number, s);
    return static_cast<int>(sum) / s;
}

int main(){
    int N;
    cout << "�Է��� ������ ���� ";
    cin >> N;

    int* number = new int[N];
    cout << N << "N���� ���ڸ� �Է�: ";
    for (int i = 0; i < N; ++i) {
        cin >> number[i];
    }

    int sum = Sum(number, N);
    int average = Average(number, N);

    cout << "��: " << sum << endl;
    cout << "���: " << average << endl;

    delete[] number;
    return 0;
}



