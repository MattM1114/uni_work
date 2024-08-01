read_file = open("numbers.txt", "r")

for i in read_file:
    num = int(i)
    if num % 3 == 0:
        print(num)