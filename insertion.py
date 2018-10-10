def insertionSortRec(listDup,n):
	if n <= 1:
		return;
	insertionSortRec(listDup,n-1);
	key = listDup[n-1];
	j = n-2;
	while j>=0 and listDup[j]>key:
			listDup[j+1]=listDup[j]
			j-=1
	listDup[j+1] = key

list1 = [24,756,33,90,654,66,78,34,56,83,23,65,13,4,43]
insertionSortRec(list1, 15)
print(list1)