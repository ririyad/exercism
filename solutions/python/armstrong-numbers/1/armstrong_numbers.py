def is_armstrong_number(number):
    result = 0
    count_d = len(str(number))
    for i in str(number):
        result += int(i) ** count_d
    return number == result
        
        
        
