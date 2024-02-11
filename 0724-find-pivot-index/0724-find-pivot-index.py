class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        arr=[]
        arr.append(0)
        for i in range(len(nums)):
            arr.append(arr[i]+nums[i])
        for i in range(1,len(arr)):
            if(arr[i-1]==arr[len(arr)-1]-arr[i]):
                return i-1
        return -1