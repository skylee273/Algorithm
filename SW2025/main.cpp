#include <cstdio>

using namespace std;

int n;

int main() {

	scanf("%d", &n);

	// ���� ���� �̿� (�� ����) N * ( N + 1) / 2
	printf("%d", (n*(n + 1)) / 2);
	return 0;
}