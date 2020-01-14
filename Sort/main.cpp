#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int> &v) {
	for (int i = 0; i < v.size() - 1; ++i) {
		for(int j = 0; j < v.size()-1-i; ++j)
			if (v[j] > v[j +1])
				swap(v[j], v[j+1]);
	}
}
void countingSort(vector<int> &v) {
	// 1. ���� ū�� ã��
	int max = *max_element(v.begin(), v.end());
	vector<int> count(max+1,0);
	vector<int> arr(v.size(), 0);
	// 2. �߻�Ƚ�� ����
	for (int i = 0; i < v.size(); ++i) {
		count[v[i]]++;
	}
	// 3. ���� �ڸ��� ���߱�
	for (int i = 1; i < count.size(); ++i)
		count[i] = count[i] + count[i - 1];

	while (!v.empty()) {
		int index = v.back();
		v.pop_back();
		arr[--count[index]] = index;
	}
	v = arr;
}
void selectionSort(vector<int> &v) {
	// �־��� �ڷ�� �� ���� ���� ���� ���Һ��� ���ʴ�� �����Ͽ� ��ġ�� ��ȯ
	
	
	for (int i = 0; i < v.size(); ++i) {
		int min = v[i];
		int index = i;
		for (int j = i+1; j < v.size(); ++j) {
			if (min > v[j]) {
				min = v[j];
				index = j;
			}
		}
		swap(v[i], v[index]);
	}
}
void printSort(const vector<int> v) {
	for (int i = 0; i < v.size(); ++i)
		printf("%d ", v[i]);
	printf("\n");
}
int main() {
	vector<int> v;
	
	v.push_back(0);
	v.push_back(4);
	v.push_back(1);
	v.push_back(3);

	v.push_back(1);
	v.push_back(2);
	v.push_back(4);
	v.push_back(1);
	
	/*bubbleSort(v);
	printSort(v);
	countingSort(v);
	printSort(v);*/
	selectionSort(v);
	printSort(v);
}