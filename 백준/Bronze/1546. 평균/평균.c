#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size, i,j;
	float *score;
	float max;
	float temp;
	float total = 0;
	float avg;
	scanf("%d", &size);
	score = (float*)malloc(sizeof(float)*size);
	for (i = 0; i < size; i++)
	{
		scanf("%f",&score[i]);
	}
	max = score[0];

	for (i = 0; i < size; i++)
	{
		if (score[i] > max)
			max = score[i];
	}
	for (i = 0; i < size; i++)
	{
		if (score[i] < max)
		{
			score[i] = score[i] / max * 100;
		}
		else if (score[i] = max)
			score[i] = 100;

		total += score[i];
	}
	avg = total / size;

	printf("%.2f", avg);
	
}