items = [24, 756, 33, 90, 654, 66, 78, 34, 56, 83, 23, 65, 13, 4, 43]
for _ in range(len(items)-1):
	for index,value in enumerate(items):
		if index<len(items)-1 and items[index+1] < value:
			temp = items[index+1]
			items[index+1] = value
			items[index] = temp
	
print(items)