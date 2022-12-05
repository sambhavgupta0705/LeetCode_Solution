class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        res = head
        l = 0
        while head:
            head = head.next
            l += 1
        mid = l//2
        while mid:
            res = res.next
            mid -= 1
        return res