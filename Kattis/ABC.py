entry1 = input()
entry2 = input()
A, B, C = entry1.split(" ")
A = int(A)
B = int(B)
C = int(C)


dict_ = {"A":min(A, B, C),
         "B": A+B+C-min(A,B,C)-max(A,B,C),
         "C":max(A, B, C)
         }
print(f"{dict_[entry2[0]]} {dict_[entry2[1]]} {dict_[entry2[2]]}")
