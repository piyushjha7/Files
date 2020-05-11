# Enter a number: 6
# You entered 6.

number = int(input("Enter your number:"))


if(number>0):
	print("positive")

else:
	print("negative")


# for i in range(10):
	# print(i)
	# print(number)
	# print("hello")




# print ("You entered {}").format(number))



for i in range(10):
	print(" {} You entered {} ".format(i+1, number*(i+1)))
