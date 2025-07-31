n = int(input())

for i in range(n):
    line = input()
    if line == "P=NP":
        print("skipped")
    else:
        a, b = line.split("+")
        print(int(a) + int(b))