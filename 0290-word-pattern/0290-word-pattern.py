class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        s = s.split(' ')
        list1 = []
        list2 = []

        for i in pattern:
            list1.append(pattern.index(i))

        for i in s:
            list2.append(s.index(i))
        print(list1,list2)

        if list1 == list2:
            return True
        else:
            return False