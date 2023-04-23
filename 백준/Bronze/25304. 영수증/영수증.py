TotalPrice = int(input())
StuffNum = int(input())
Sum = 0

for i in range(StuffNum):
    EachPrice, EachNum = map(int, input().split())
    Sum = Sum + EachPrice * EachNum


if Sum == TotalPrice:
    print("Yes")
else:
    print("No")