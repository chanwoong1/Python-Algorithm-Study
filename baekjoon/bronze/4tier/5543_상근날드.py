# https://www.acmicpc.net/problem/5543

burger = [int(input()) for _ in range(3)]
drink = [int(input()) for _ in range(2)]
print(min(burger) + min(drink) - 50)