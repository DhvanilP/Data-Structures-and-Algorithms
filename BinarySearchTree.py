class Node:
    def __init__(self, key=None, parent=None):
        self.key = key
        self.parent = parent
        self.left = None
        self.right = None


class BinarySearchTree:
    def __init__(self, key=None):
        self.root = None
        if key is not None:
            self.root = Node(key)

    def preorder(self, pointer):
        if pointer is None:
            return
        print(pointer.key, end=' ')
        self.preorder(pointer.left)
        self.preorder(pointer.right)

    def insert(self, value):
        """insert a value into the bst"""
        if self.root is None:
            self.root = self.createNode(key=value)
            return
        p = self.root
        q = None
        while p is not None:
            q = p
            if value > p.key:
                p = p.right
            else:
                p = p.left
        if value > q.key:
            q.right = self.createNode(key=value, parent=q)
        else:
            q.left = self.createNode(key=value, parent=q)

    def search(self, value):
        x = self.root
        while x is not None and x.key is not value:
            if value > x.key:
                x = x.right
            else:
                x = x.left

        if x is not None and x.key is value:
            return True
        else:
            return False

    def minimum(self, pointer):
        x = pointer
        while x.left is not None:
            x = x.left
        return x.key, x

    def maximum(self, pointer):
        x = pointer
        while x.right is not None:
            x = x.right
        return x.key, x

    def createNode(self, key=None, parent=None):
        return Node(key=key, parent=parent)

    def predecessor(self, pointer):
        if pointer.left is not None:
            key, keypointer = self.maximum(pointer.left)
            return key, keypointer

    def successor(self, pointer):
        if pointer.right is not None:
            key, keypointer = self.minimum(pointer.right)
            return key, keypointer

    def delete(self, pointer):
        parent = pointer.parent
        # here no child case
        if pointer.right is None and pointer.left is None:
            if pointer.key > parent.key:
                parent.right = None
            else:
                parent.left = None
            return
        # here one child case
        if pointer.right is None and pointer.left is not None:
            parent = pointer.parent
            if pointer.key > parent.key:
                parent.right = pointer.left
                pointer.left.parent = parent
            else:
                parent.left = pointer.left
                pointer.left.parent = parent
            return

        elif pointer.left is None and pointer.right is not None:
            parent = pointer.parent
            if pointer.key > parent.key:
                parent.right = pointer.right
                pointer.right.parent = parent
            else:
                parent.left = pointer.right
                pointer.right.parent = parent
            return
        # here is the case with two children, we can use predecessor or successor, here predecessor is used
        else:
            predV, predP = self.predecessor(pointer)
            pointer.key, predP.key = predP.key, pointer.key
            self.delete(predP)


def main():
    B = BinarySearchTree()
    B.insert(10)
    B.insert(2)
    B.insert(17)
    B.insert(1)
    B.insert(8)
    B.insert(12)
    B.insert(20)
    B.insert(11)
    B.insert(15)
    B.insert(18)
    B.insert(19)
    B.insert(22)
    B.insert(14)
    B.preorder(B.root)
    print("\nInserting done")
    B.delete(B.root.right)
    B.preorder(B.root)


if __name__ == '__main__':
    main()
