import random

NUMBER_LIST = [random.randint(0,1000)]

def main():

    for numbers in range(100):

        number = print(NUMBER_LIST)
        number

    is_even(number)

    print('The total amount of even numbers is', even_count)
    print('The total amount of odd numbers is', 100 - even_count)   

def is_even(number):

    even_count = 0

    for number in NUMBERS_LIST:
        if (number % 2):
            even_count += 1

    return even_count

main()