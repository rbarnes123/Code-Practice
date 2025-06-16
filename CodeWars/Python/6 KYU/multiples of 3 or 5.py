def solution(number):
    sum = 0
    # check if negative
    if number < 0:
        return 0
    # check every number below n 
    for i in range(number):
        # prevents duplicates 
        added = False
        if i % 3 == 0:
            sum += i
            added = True
        if i % 5 == 0 and added == False:
            sum += i
    return sum