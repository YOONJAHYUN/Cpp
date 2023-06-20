#include <iostream>
using namespace std;

// 동적으로 메모리 확보하기
int main()
{
	int num;
	int* pT;

	cout << "몇 명의 시험 점수를 입력하시겠습니까? \n";

	cin >> num;

	pT = new int[num];

	cout << num << "명의 점수를 입력하시오. \n";

	for (int i = 0; i < num; i++) {
		cin >> pT[i]; // 포인트로 점수 저장
	}

	for (int j = 0; j < num; j++) {
		cout << j + 1 << "번째 사람의 점수는 " << pT[j] << "입니다. \n";
	}
	delete[] pT;
	return 0;
}