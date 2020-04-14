from typing import List

class Solution:
    def happy(self, n):
        s = 0
        while n != 0:
            m = n % 10
            s += (m*m)
            n //= 10
        return s
    def isHappy(self, n: int) -> bool:
        t = [n]
        while n != 1:
            n = self.happy(n)
            if n in t:
                return False
            else:
                t.append(n)
        return True

if __name__ == "__main__":
    s = Solution()
    # Get input for number of elements in array
    n = int(input())
    print(s.isHappy(n))