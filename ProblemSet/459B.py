# http://codeforces.com/problemset/problem/459/B

#Discard the first line
input()

beauty = list(map(int, input().split()))
min_beauty = min(beauty)
max_beauty = max(beauty)

min_count = beauty.count(min_beauty)
max_count = beauty.count(max_beauty)

if max_beauty != min_beauty:
	print(max_beauty - min_beauty, end=" ")
	print(min_count * max_count)
else:
	print(max_beauty - min_beauty, end=" ")
	print(min_count * (max_count-1) // 2)