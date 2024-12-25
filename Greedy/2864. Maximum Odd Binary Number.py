
    """
    Time complexity : O(n)
    Space complexity : O(n)
    """


class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        ones_count=s.count("1")
        zero_count=s.count("0")
        return "1" * (ones_count-1) + "0" * zero_count +"1"


    """
    Author : Saikrishna216
    Question Link : Nil
    """

    