'''
Task
Consider a list (list = []). You can perform the following commands:

insert i e: Insert integer  at position .
print: Print the list.
remove e: Delete the first occurrence of integer .
append e: Insert integer  at the end of the list.
sort: Sort the list.
pop: Pop the last element from the list.
reverse: Reverse the list.
Initialize your list and read in the value of  followed by  lines of commands where each command will be of the  types listed above. Iterate through each command in order and perform the corresponding operation on your list.
'''

if __name__ == '__main__':
    N = int(input())
    l = []
    for i in range(N):
        cmd = input().split()
        if cmd[0] == 'insert':
            l.insert(int(cmd[1]), int(cmd[2]))
        elif cmd[0] == 'print':
            print(l)
        elif cmd[0] == 'remove':
            l.remove(int(cmd[1]))
        elif cmd[0] == 'append':
            l.append(int(cmd[1]))
        elif cmd[0] == 'sort':
            l.sort()
        elif cmd[0] == 'pop':
            l.pop()
        else:
            l.reverse()
