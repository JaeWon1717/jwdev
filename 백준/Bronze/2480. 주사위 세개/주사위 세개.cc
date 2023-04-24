#include <iostream>
#include<stdio.h>
int main()
{
	int a, b, c;
	std::cin >> a>>b>>c;
	if (a == b && a == c && b == c)
	{
		std::cout << 10000 + a * 1000;
	}
	else if (a == b && a != c)//a,b가같을경우 
	{
		std::cout << 1000 + a * 100;
	}
	else if (a == c && a != b)//a,c가같을경우 ,a가 b랑 다를경우 
	{
		std::cout << 1000 + a * 100;
	}
	else if (b == c && a != c)//b,c가같을경우 ,a가 c랑 다를경우 
	{
		std::cout << 1000 + b * 100;
	}
	//모두다를경우 
	else if (a != b && a != c && b != c) {
		// a, b, c 모두 다른 경우에 해당하는 처리
		if (a >= b &&a>=c)
		{
			std::cout << a * 100;
		}
		else if(b>=a &&b>=c)
		{
			std::cout << b * 100;
		}
		else if (c >= a && c >= b)
		{
			std::cout << c * 100;
		}
	}
	else
		std::cout << "예외";
	
}