limit = int(input("Set a limit:"))
number  = 0
while(number+1)**2 < limit:
	number+=1
	nearest_square = number**2
	print(nearest_square)