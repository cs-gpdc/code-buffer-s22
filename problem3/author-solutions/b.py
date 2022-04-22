n = int(input())
a = [int(item) for item in input().split()]
reward = 0
for i,v in enumerate(a):
    prev = -1
    for j in range(i-1, -1, -1):
        if (a[j] > a[i]):
            prev = j
            break
    count = i-prev
    reward += count * a[i]
print(reward)