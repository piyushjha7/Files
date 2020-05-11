def find_max_two(x,y): 
	if(x>y):
		print(x)
	else:
		print(y)	



def find_max_three(x,y,z):
	if(x>y and x>z):
		print(x)
	elif(y>z and y>x):
		print(y)
	else:
		print(z)	


find_max_two(10,2)
find_max_three(-55,-255,-60)					