n = int(input("Enter your number:"))

multiple = 0


for i in range(0,n+1):
	# print("{} % 3 = {} ".format(i, i%3))
	if i%3==0:
		multiple= multiple+1
		print("{} % 3 = {} ".format(i, i%3))

		

print("Multiple = {}".format(multiple))
