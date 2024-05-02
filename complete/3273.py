n = int(input())
lst = map(int, input().split(' '))
Sum = int(input())
count = 0

lst.sort()
for i in range(len(lst) - 1):
    for j in range(i + 1, len(lst)):
        current_sum = lst[i] + lst[j]
        if Sum == current_sum:
            count += 1
        elif Sum < current_sum:
            break
print(count)