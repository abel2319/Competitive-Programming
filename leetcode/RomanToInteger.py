class Solution:
    def romanToInt(self, s: str) -> int:
        roman_map = {
            "I":1,
            "V":5,
            "X":10,
            "L":50,
            "C":100,
            "D":500,
            "M":1000
        }
    
        sum = 0
        i = 0
        while i < len(s) - 1:
            if roman_map[s[i]] < roman_map[s[i + 1]]:
                sum += roman_map[s[i + 1]] - roman_map[s[i]]
                i+=2
            else:
                sum += roman_map[s[i]]
                i += 1

        if i == len(s) - 1:
            sum += roman_map[s[i]]
        
        return sum

S = Solution()
print(S.romanToInt(s="MDCXCV"))

class Solution_best:
    def romanToInt(self, s: str) -> int:
        alphabet: dict = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000,
        }
        arr = [alphabet[i] for i in s]
        arr_len = len(arr)
        for i in range(arr_len):
            if (i + 1 < arr_len) and (arr[i] < arr[i + 1]):
                arr[i] = -arr[i]
        return sum(arr)
