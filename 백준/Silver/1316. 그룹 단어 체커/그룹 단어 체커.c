#include <stdio.h>
#include <string.h>

int main() {
	int i,j, n,answer;
	char arr[101];
	char alp[200];
	char tmp;
	scanf("%d", &n);
	answer = n;
	for (i = 0; i < n; i++) {
		memset(alp, -1, sizeof(alp)); // 배열을 -1로 초기화
		scanf("%s", arr);
		int len = strlen(arr);
		for (j = 0; j < len; j++) {
			if (arr[j] == alp[arr[j]] && arr[j] != tmp) { //만약 나왔던 문자일경우
				answer--; // 답에서 1을 뺀다.
				break;
			}
			else {
				tmp = arr[j];
				alp[arr[j]] = tmp;
			}
		}
	}
	printf("%d", answer);
}