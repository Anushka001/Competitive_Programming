'''
Task
Given the names and grades for each student in a class of N students, store them in a nested list and print the name(s) of any student(s) having the second lowest grade.
'''

if __name__ == '__main__':
    res = []
    grade = []

    for i in range(int(input())):
        name = input()
        score = float(input())
        res.append([name, score])
        grade.append(score)     # calculating 2nd lowest grade

    grade = sorted(set(grade))      # to sort elements and remove duplicates
    m = grade[1]

    name = []
    for val in res:
        if m == val[1]:
            name.append(val[0])

    name.sort()
    for n in name:
        print(n)
