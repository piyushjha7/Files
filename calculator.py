# Hello World program in Python

def difference(x, y):
    return x-y

def sum1(p,q):
    # print (p+q)
    # print(p*q)
    return p+q
    
def multiply(a,b):
    return a-b 
    # print a*b

def divide(s,a):

    return s/a
    
# print(sum1(4,5))    
    
    
def calculator(x,y,op):
    if(op=='+'):
        print(sum1(x,y))
    
    elif(op=='-'):
        print(difference(x,y))
        
    elif(op=='*'):
        print(multiply(x,y))
        
    elif(op=='/'):
        if(y==0):
            print("Division by 0 is not possible.")
        else:
            print(divide(x,y))
        
        
    else:
        print("You have selected the wrong operator.Please select one of +,-,* or /")
        
    
        
number1 = int(input("Enter the first number: "))
number2 = int(input("Enter the second number: "))
operator = input("Enter one of the operators: +, -, * or / to perform an operation: \n")


calculator(number1, number2, operator)  