# This is  min heap implementation, here the parent is less than its children,
# here we are using an array to store the values in the heap, in the array index 0 is useless.


class MinHeap:
    def __init__(self):
        self.array = [0]
        self.size = 0

    def heapify(self, i):
        # this takes O(log(n)) time
        """used to make the heap, given the node i is not satisfying heap property but its children satisfy88"""
        if 2 * i < self.size and self.array[2 * i] < self.array[i]:
            smaller = 2 * i
        else:
            smaller = i
        if 2 * i + 1 < self.size and self.array[2 * i + 1] < self.array[smaller]:
            smaller = 2 * i + 1
        if smaller is not i:
            temp = self.array[smaller]
            self.array[smaller] = self.array[i]
            self.array[i] = temp
            self.heapify(smaller)

    def insert(self, x):
        # this takes constant time
        """this is used to enter into the array, simply appending at the end"""
        self.array.append(x)
        self.size = self.size + 1

    def buildheap(self):
        # this takes O(n) time
        """this is sued to build the actual heap out of the heap"""
        for i in range(self.size//2, 0, -1):
            self.heapify(i)

    def minimum(self):
        # this takes constant time
        """this only returns the minimum element from the heap"""
        return self.array[1]

    def extractmin(self):
        # this takes O(log(n)) time
        """this returns and removes the minimum element from the heap"""
        min = self.array[1]
        if self.size > 0:
            temp = self.array[1]
            self.array[1] = self.array[self.size]
            self.array[self.size] = temp
            self.size = self.size - 1
            self.heapify(1)
        return min

    def heapsort(self):
        # this takes O(n.log(n)) time
        """used to sort array  representing  heap, it also makes the heap empty as extractmin is used"""
        size = self.size
        for i in range(1, size + 1):
            self.extractmin()
        for i in range(1, size + 1):
            print(self.array[i], end=' ')


def main():
    h = MinHeap()
    n = int(input("Enter the number of elements:"))
    for i in range(n):
        h.insert(int(input()))

    h.buildheap()
    print("The sorted array is:", end=' ')
    h.heapsort()


if __name__ == '__main__':
    main()
