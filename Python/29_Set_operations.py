'''
Task
You have a non-empty set S, and you have to execute N commands given in N lines.

The commands will be pop, remove and discard.
'''

n = int(input())
s = set(map(int, input().split()))

for i in range(int(input())):
    cmd = input().split()

    if cmd[0] == "pop":
        s.pop()
    elif cmd[0] == "discard":
        s.discard(int(cmd[1]))
    else:
        s.remove(int(cmd[1]))

print(sum(s))
