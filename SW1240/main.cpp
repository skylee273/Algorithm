#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

string code, tmp, chiper[10] = { "0001101","0011001","0010011","0111101","0100011","0110001","0101111","0111011","0110111","0001011" };

int main() {
	int testCase;
	scanf("%d", &testCase);
	for (int tc = 1; tc <= testCase; ++tc) {
		int n, m;
		int odd = 0, even = 0, val = 0;
		scanf(" %d %d", &n, &m);
		for (int i = 0; i < n; ++i) {
			cin >> tmp;
			if (tmp.find("1") != -1) code = tmp;
			/*cout << code << "\n";*/
		}
		// string.assign(���ڿ�,������ġ, ����) : �Ű����� ���ڿ��� ������ġ���� ������ŭ�� ȣ���� ���ڿ��� �Ҵ�
		code.assign(code, code.rfind("1") - 55, 56);
		/*cout << code << "\n";*/
		for (int i = 0; i < 8; ++i) {
			tmp.assign(code, i * 7, 7);
			/*cout << tmp << "\n";*/
			for (int j = 0; j < 10; ++j) {
				if (tmp.compare(chiper[j]) == 0) {
					// Ȧ��
					if ((i+1) % 2 != 0) odd += j;
					else even += j;
					val += j;
					break;
				}
			}
		}
		if (((odd * 3) + even) % 10 == 0)
			cout << "#" << tc << " " << val << "\n";
		else cout << "#" << tc << " 0\n";
	}

	return 0;
}