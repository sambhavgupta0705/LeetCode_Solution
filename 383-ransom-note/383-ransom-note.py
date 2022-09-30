class Solution(object):
    def canConstruct(self, ransomNote, magazine):
   
        return not Counter(ransomNote) - Counter(magazine)
        