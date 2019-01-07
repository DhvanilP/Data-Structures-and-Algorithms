def main():
    t=int(input())
    while t is not 0:
        t=t-1
        s=input()
        some=s.split(' ')
        if "not" in some:
            print("Real Fancy")
        else:
            print("regularly fancy")
main()