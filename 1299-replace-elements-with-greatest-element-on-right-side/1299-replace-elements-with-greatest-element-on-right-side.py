class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        val=-1
        for i in range(len(arr)-1,-1,-1):
            if val<arr[i]:
                arr[i],val=val,arr[i]
            else:
                arr[i]=val
        return arr
                