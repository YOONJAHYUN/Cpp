#include <iostream>
using namespace std;

// ����ü�� Year�� ����
union Year {
	int ad;
	int dangi;
};

int main()
{
	Year myyear;

	cout << "���⸦ �Է��Ͻÿ�. \n";

	cin >> myyear.ad;

	cout << "����" << myyear.ad << "���Դϴ�. \n";
	cout << "�ܱ� ���� " << myyear.dangi << "���Դϴ�. \n";

	cout << "�ܱ⸦ �Է��Ͻÿ�. \n";

	cin >> myyear.dangi;

	cout << "�ܱ�" << myyear.dangi << "���Դϴ�. \n";
	cout << "���� ����, " << myyear.ad << "���Դϴ�. \n";

	return 0;
}