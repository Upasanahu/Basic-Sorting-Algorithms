def counting_sort(list1):
	K = max(list1)
	listAux = [0]*(K+1)
	for i in list1:
		listAux[i]+=1
	i=0
	for j in range(len(listAux)):
		while listAux[j] > 0 :
			list1[i] = j;
			i +=1
			listAux[j]-=1
			
list1 = [56,11,24,44,44,23,22,33,234,44,11,23,33,22,65,44,5,5,1,8]
counting_sort(list1)
print(list1)