from typing import List

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        i = 0
        nums.sort()
        while i < len(nums)-1:
            if nums[i] != nums[i+1]:
                return nums[i]
            i += 2
        return nums[-1]

if __name__ == "__main__":
    s = Solution()
    # Get input for number of elements in array
    n = int(input())
    arr = []
    # Get each element of array as input
    for i in range(n):
        arr.append(int(input()))
    print(s.singleNumber(arr))