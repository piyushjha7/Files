n = int(input("Enter your number:"))



even_count = 0
odd_count = 0


for i in range(1,n+1):
	if i % 2 == 0: 
		 even_count= even_count+1
		 print(i)
  
	else: 
		 odd_count= odd_count+1
		 print(i)

          
print("Even numbers:{}". format (even_count))
print("Odd numbers:{}". format (odd_count))







