#include<stdio.h>
int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	
		if (x == 1 && y <= 31 && y >= 1)
		{
			if (y % 7 == 1)
				printf("MON");
			else if (y % 7 == 2)
				printf("TUE");
			else if (y % 7 == 3)
				printf("WED");
			else if (y % 7 == 4)
				printf("THU");
			else if (y % 7 == 5)
				printf("FRI");
			else if (y % 7 == 6)
				printf("SAT");
			else if (y % 7 == 0)
				printf("SUN");
		}
		if (x == 2 && y <= 28 && y >= 1)
		{

			if (((y + 31) % 7) == 1)
				printf("MON");
			else if (((y + 31) % 7) == 2)
				printf("TUE");
			else if (((y + 31) % 7) == 3)
				printf("WED");
			else if (((y + 31) % 7) == 4)
				printf("THU");
			else if (((y + 31) % 7) == 5)
				printf("FRI");
			else if (((y + 31) % 7) == 6)
				printf("SAT");
			else if (((y + 31) % 7) == 0)
				printf("SUN");
		}
		if (x == 3 && y <= 31 && y >= 1)
		{

			if (((y + 31 + 28) % 7) == 1)
				printf("MON");
			else if (((y + 31 + 28) % 7) == 2)
				printf("TUE");
			else if (((y + 31 + 28) % 7) == 3)
				printf("WED");
			else if (((y + 31 + 28) % 7) == 4)
				printf("THU");
			else if (((y + 31 + 28) % 7) == 5)
				printf("FRI");
			else if (((y + 31 + 28) % 7) == 6)
				printf("SAT");
			else if (((y + 31 + 28) % 7) == 0)
				printf("SUN");
		}
		if (x == 4 && y <= 30 && y >= 1)
		{

			if (((y + 31 + 28 + 31) % 7) == 1)
				printf("MON");
			else if (((y + 31 + 28 + 31) % 7) == 2)
				printf("TUE");
			else if (((y + 31 + 28 + 31) % 7) == 3)
				printf("WED");
			else if (((y + 31 + 28 + 31) % 7) == 4)
				printf("THU");
			else if (((y + 31 + 28 + 31) % 7) == 5)
				printf("FRI");
			else if (((y + 31 + 28 + 31) % 7) == 6)
				printf("SAT");
			else if (((y + 31 + 28 + 31) % 7) == 0)
				printf("SUN");
		}
		if (x == 5 && y <= 31 && y >= 1)
		{

			if (((y + 31 + 28 + 31 + 30) % 7) == 1)
				printf("MON");
			else if (((y + 31 + 28 + 31 + 30) % 7) == 2)
				printf("TUE");
			else if (((y + 31 + 28 + 31 + 30) % 7) == 3)
				printf("WED");
			else if (((y + 31 + 28 + 31 + 30) % 7) == 4)
				printf("THU");
			else if (((y + 31 + 28 + 31 + 30) % 7) == 5)
				printf("FRI");
			else if (((y + 31 + 28 + 31 + 30) % 7) == 6)
				printf("SAT");
			else if (((y + 31 + 28 + 31 + 30) % 7 ) == 0)
				printf("SUN");
		}
		if (x == 6 && y <= 30 && y >= 1)
		{

			if (((y + 31 + 28 + 31 + 30 + 31) % 7) == 1)
				printf("MON");
			else if (((y + 31 + 28 + 31 + 30 + 31) % 7) == 2)
				printf("TUE");
			else if (((y + 31 + 28 + 31 + 30 + 31) % 7) == 3)
				printf("WED");
			else if (((y + 31 + 28 + 31 + 30 + 31) % 7) == 4)
				printf("THU");
			else if (((y + 31 + 28 + 31 + 30 + 31) % 7) == 5)
				printf("FRI");
			else if (((y + 31 + 28 + 31 + 30 + 31) % 7) == 6)
				printf("SAT");
			else if (((y + 31 + 28 + 31 + 30 + 31) % 7) == 0)
				printf("SUN");
		}
		if (x == 7 && y <= 31 && y >= 1)
		{

			if (((y + 31 + 28 + 31 + 30 + 31 + 30) % 7) == 1)
				printf("MON");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30) % 7) == 2)
				printf("TUE");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30) % 7) == 3)
				printf("WED");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30) % 7) == 4)
				printf("THU");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30) % 7) == 5)
				printf("FRI");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30) % 7) == 6)
				printf("SAT");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30) % 7) == 0)
				printf("SUN");
		}
		if (x == 8 && y <= 31 && y >= 1)
		{

			if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31) % 7) == 1)
				printf("MON");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31) % 7) == 2)
				printf("TUE");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31) % 7) == 3)
				printf("WED");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31) % 7) == 4)
				printf("THU");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31) % 7) == 5)
				printf("FRI");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31) % 7) == 6)
				printf("SAT");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31) % 7) == 0)
				printf("SUN");
		}
		if (x == 9 && y <= 30 && y >= 1)
		{

			if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31) % 7) == 1)
				printf("MON");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31) % 7) == 2)
				printf("TUE");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31) % 7) == 3)
				printf("WED");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31) % 7) == 4)
				printf("THU");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31) % 7) == 5)
				printf("FRI");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31) % 7) == 6)
				printf("SAT");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31) % 7) == 0)
				printf("SUN");
		}
		if (x == 10 && y <= 31 && y >= 1)
		{

			if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30) % 7) == 1)
				printf("MON");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30) % 7) == 2)
				printf("TUE");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30) % 7) == 3)
				printf("WED");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30) % 7) == 4)
				printf("THU");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30) % 7) == 5)
				printf("FRI");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30) % 7) == 6)
				printf("SAT");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30) % 7) == 0)
				printf("SUN");
		}
		if (x == 11 && y <= 30 && y >= 1)
		{

			if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) % 7) == 1)
				printf("MON");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) % 7) == 2)
				printf("TUE");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) % 7) == 3)
				printf("WED");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) % 7) == 4)
				printf("THU");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) % 7) == 5)
				printf("FRI");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) % 7) == 6)
				printf("SAT");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31) % 7) == 0)
				printf("SUN");
		}
		if (x == 12 && y <= 31 && y >= 1)
		{

			if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) % 7) == 1)
				printf("MON");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) % 7) == 2)
				printf("TUE");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) % 7) == 3)
				printf("WED");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) % 7) == 4)
				printf("THU");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) % 7) == 5)
				printf("FRI");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) % 7) == 6)
				printf("SAT");
			else if (((y + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30) % 7) == 0)
				printf("SUN");
		}
	
}