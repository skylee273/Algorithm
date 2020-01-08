#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

//�л��� ���� 1000���̸�, �� �л��� ������ 0�� �̻� 100�� ������ ���̴�.
int testCase;
int student[1000];
const int studentSize = 1000;
int main() {


	scanf("%d", &testCase);
	
	while (testCase--) {
		int num = 0;
		int score = 0;
		scanf("%d ", &num);
		memset(student, 0, sizeof(student));
		for (int i = 0; i < studentSize; ++i) {
			scanf("%d", &score);
			student[score]++;
		}
		int max = 0;
		int maxIndex = 0;
		for (int i = 0; i < studentSize; ++i) {
			if (max <= student[i]) {
				max = student[i];
				maxIndex = i;
			}
		}
		printf("#%d %d\n", num, maxIndex);
	}
	return 0;
}