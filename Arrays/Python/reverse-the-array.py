arr=[]
n=int(input())
while n>0:
    a=int(input())
    arr.append(a)
    n=n-1
for i in arr:
    print(i,end="")
print('\n')
arr.reverse()
for i in arr:
    print(i,end="")

'''
a=[1,2,3,4]
print(a[::-1])
'''