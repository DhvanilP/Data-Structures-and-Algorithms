class Queue:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        return self.items == []

    def enqueue(self, item):
        self.items.insert(0, item)

    def dequeue(self):
        return self.items.pop()

    def size(self):
        return len(self.items)


def main():
    n = int(input("Enter the number of vertices:"))
    mat = [[] for i in range(n)]
    e = int(input("Enter the number of edges:"))
    visited = [False] * n
    distance = [0] * n

    for i in range(e):
        print("edge ", i + 1, ":", end='')
        a = input()
        l = a.split(" ")
        mat[int(l[0])].append(int(l[1]))
        mat[int(l[1])].append(int(l[0]))
    # to print the adj list
    print("The adjacent list is:")
    for i in range(n):
        print("Vertex ", i, ":", end='')
        for j in range(len(mat[i])):
            print(mat[i][j], end='')
            if j is not (len(mat[i]) - 1):
                print(",", end='')
        print()
    # till here to print the adj list

    a = int(input("Enter the source vertex:"))
    q = Queue()
    q.enqueue(a)
    visited[a] = True
    distance[a] = 0
    x = 0
    while q.isEmpty() is False:
        a = q.dequeue()
        for i in range(len(mat[a])):
            if visited[mat[a][i]] is False:
                q.enqueue(mat[a][i])
                visited[mat[a][i]] = True
                distance[mat[a][i]] = distance[a] + 1

    print(distance)
    visited = [False] * n

    # from here it is for no of components
    q = Queue()
    k = 0

    for i in range(len(visited)):
        print("")
        if visited[i] is False:
            k = k + 1
            print("Component ", k, "has vertices:", end=' ')
            q.enqueue(i)
            visited[i] = True
            while q.isEmpty() is False:
                a = q.dequeue()
                print(a, end=' ')
                for d in range(len(mat[a])):
                    if visited[mat[a][d]] is False:
                        q.enqueue(mat[a][d])
                        visited[mat[a][d]] = True


if __name__ == '__main__':
    main()
