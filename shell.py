def shell_sort(list1):
     gap = len(list1)//2
     while gap > 0:
         for i in range(gap, len(list1)):
             val = list1[i]
             j = i
             while j >= gap and list1[j-gap] > val:
                 list1[j] = list1[j-gap]
                 j -= gap
             list1[j] = val
         gap //= 2

list1=[24,756,33,90,654,66,78,34,56,83,23,65,13,4,43];
shell_sort(list1);
print(list1)