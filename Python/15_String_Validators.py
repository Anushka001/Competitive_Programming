'''
Task
You are given a string S.
Your task is to find out if the string S contains: alphanumeric characters, alphabetical characters, digits, lowercase and uppercase characters.
'''

if __name__ == '__main__':
    s = input()

    alphanum = 'False'
    alphabet = 'False'
    digit = 'False'
    lower = 'False'
    upper = 'False'

    for i in s:
        if i.isalnum():
            alphanum = 'True'

        if i.isalpha():
            alphabet = 'True'

        if i.isdigit():
            digit = 'True'

        if i.islower():
            lower = 'True'

        if i.isupper():
            upper = 'True'

    print(alphanum, alphabet, digit, lower, upper, sep='\n')
