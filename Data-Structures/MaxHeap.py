# refer MinHeap for proper documentation
class MaxHeap:
    def __init__(self):
        self.array = [0]
        self.size = 0

    def heapify(self, i):
        """this is used to make the heap given the node i is not heap and its children satisfy the heap property"""
        if 2 * i < self.size and self.array[2 * i] > self.array[i]:
            larger = 2 * i
        else:
            larger = i
        if 2 * i + 1 < self.size and self.array[2 * i + 1] > self.array[larger]:
            larger = 2 * i + 1
        if larger is not i:
            temp = self.array[larger]
            self.array[larger] = self.array[i]
            self.array[i] = temp
            self.heapify(larger)

    def insert(self, x):
        """this is used to enter into the array ,simply appending at the end"""
        self.array.append(x)
        self.size = self.size + 1

    def buildheap(self):
        """this is sued to build the actual heap out of the heap"""
        for i in range(self.size, 0, -1):
            self.heapify(i)

    def maximum(self):
        """this only returns the maximum element from the heap"""
        return self.array[1]

    def extractmax(self):
        """this returns and removes the maximum element from the heap"""
        max = self.array[1]
        if self.size > 0:
            temp = self.array[1]
            self.array[1] = self.array[self.size]
            self.array[self.size] = temp
            self.heapify(1)
            self.size = self.size - 1
        return max

    def heapsort(self):
        """used to sort array  representing  heap, it also makes the heap empty as extractmax is used"""
        size = self.size
        for i in range(1, size + 1):
            self.extractmax()
        for i in range(1, size + 1):
            print(self.array[i], end=' ')


def main():
    h = MaxHeap()
    n = int(input("Enter the number of elements:"))
    for i in range(n):
        h.insert(int(input()))

    h.buildheap()
    print("The sorted array is:", end=' ')
    h.heapsort()


if __name__ == '__main__':
    main()
