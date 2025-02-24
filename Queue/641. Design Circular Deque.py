
    """
    Time complexity : nil
    Space complexity : nil
    """
    
    
    """
    Additional Notes : nil
    """

    
    class MyCircularDeque:

    def __init__(self, k: int):
        
        self.circular_deque=[None]*k
        self.size=0
        self.max_size=k
        self.front=0
        self.rear=-1

    def insertFront(self, value: int) -> bool:
        if self.size==self.max_size:
            return False
        self.front=(self.front-1)%self.max_size
        self.circular_deque[self.front]=value
        self.size+=1
        return True

    def insertLast(self, value: int) -> bool:
        if self.size==self.max_size:
            return False
        self.rear=(self.rear+1)%self.max_size
        self.circular_deque[self.rear]=value
        self.size+=1
        return True

    def deleteFront(self) -> bool:
        if self.size==0:
            return False
        self.circular_deque[self.front]=None
        self.front=(self.front+1)%self.max_size
        self.size-=1
        return True

    def deleteLast(self) -> bool:
        if self.size==0:
            return False
        self.circular_deque[self.rear]=None
        self.rear=(self.rear-1)%self.max_size
        self.size-=1
        return True

    def getFront(self) -> int:
        if self.size == 0:
            return -1
        return self.circular_deque[self.front]

    def getRear(self) -> int:
        if self.size == 0:
            return -1
        return self.circular_deque[self.rear]

    def isEmpty(self) -> bool:
        if self.size ==0:
            return True
        return False

    def isFull(self) -> bool:
        if self.size==self.max_size:
            return True
        return False


# Your MyCircularDeque object will be instantiated and called as such:
# obj = MyCircularDeque(k)
# param_1 = obj.insertFront(value)
# param_2 = obj.insertLast(value)
# param_3 = obj.deleteFront()
# param_4 = obj.deleteLast()
# param_5 = obj.getFront()
# param_6 = obj.getRear()
# param_7 = obj.isEmpty()
# param_8 = obj.isFull()
    
    
    """
    Author : Saikrishna216
    Question Link : https://leetcode.com/problems/design-circular-deque/
    """
    
    