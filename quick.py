'''def quick_sort(array):
    less = []
    equal = []
    greater = []

    if len(array) > 1:
        pivot = array[0]
        for x in array:
            if x < pivot:
                less.append(x)
            if x == pivot:
                equal.append(x)
            if x > pivot:
                greater.append(x)
        return quick_sort(less)+equal+quick_sort(greater)  
    else:  
        return array

list1 = [12,34,55,32,89,42,12,56,76,44,335,6,7,77,43]
print(quick_sort(list1))
'''
# short but less effective way below
def quick_sort(arr): 
     if len(arr) <= 1:
          return arr
     else:
          return quick_sort([x for x in arr[1:] if x<arr[0]]) + [arr[0]] + quick_sort([x for x in arr[1:] if x>=arr[0]])

list1 = [12,34,55,32,89,42,12,56,76,44,335,6,7,77,43]
print(quick_sort(list1))
