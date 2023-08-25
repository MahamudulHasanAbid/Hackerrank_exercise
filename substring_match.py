def count_substring(string, sub_string):
    n = 0
    sub=len(sub_string)
    for i in range(len(string)-sub+1):
        current = string[i:i+sub]
        if current == sub_string:
            n = n+1
    return n

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)