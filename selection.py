items = [24, 756, 33, 90, 654, 66, 78, 34, 56, 83, 23, 65, 13, 4, 43]
for index, value in enumerate(items):
	min_index = index
	min = value
	for j in range(index+1,15):
		if items[j] < min:
			min_index = j
			min = items[j]
	if min_index != index:
		temp = items[min_index];
		items[min_index] = items[index];
		items[index] = temp;

print(items)