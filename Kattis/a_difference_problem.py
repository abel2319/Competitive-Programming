from sys import stdin

for line in stdin:
    print(abs(int(line.split(" ")[0]) - int(line.split(" ")[1])))
