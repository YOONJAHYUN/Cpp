#include <iostream>
using namespace std;

// �������� �޸� Ȯ���ϱ�
int main()
{
	int num;
	int* pT;

	cout << "�� ���� ���� ������ �Է��Ͻðڽ��ϱ�? \n";

	cin >> num;

	pT = new int[num];

	cout << num << "���� ������ �Է��Ͻÿ�. \n";

	for (int i = 0; i < num; i++) {
		cin >> pT[i]; // ����Ʈ�� ���� ����
	}

	for (int j = 0; j < num; j++) {
		cout << j + 1 << "��° ����� ������ " << pT[j] << "�Դϴ�. \n";
	}
	delete[] pT;
	return 0;
}