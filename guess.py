import random

x = random.randrange(1,101)
number_of_tries = 5


while(number_of_tries>0):
	guess = int(input("Guess your number:"))

	if (guess>x):
		print("Wrong! Guess a lower number")
		number_of_tries-= 1
	elif(guess<x):
		print("Wrong! Guess a higher number")
		number_of_tries-=1
	else:
		print("Congratulations!! You have guessed the \
			number correctly")		
		break

if(number_of_tries==0):
	print("Oops! You failed to guess the number")

