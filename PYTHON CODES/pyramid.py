row=int(input("Enter the no of rows:"))
for i in range(1,row+1):
    for j in range(1,i+1):
        print('*',end=' ')
    print()
for k in range(1,row):
    for l in range(k,row):
        print('*',end=' ')
    print()
