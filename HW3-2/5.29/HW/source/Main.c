#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int min = 0; 
	int a, b,temp,max=0;
	printf("��J��ƨD�̤p������(�Ů�):");
	scanf("%d %d", &a, &b);
	if (a < b) {
		temp = b;
		b = a;
		a = temp;
	}
	for (int i = 1; i < a; i++) {
		if (a%i == 0 && b%i == 0) {
			max = i;
		}
	}
	min = (a*b) / max;
	printf("�̤p������=%d", min);
	return 0;
}