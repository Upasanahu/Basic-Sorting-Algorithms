def radix_sort(list1):

    if list1:
        bins = [ [] for x in range(10) ]

        K = max(list1)
        place = 1
        while K > place:
            for i in list1:
                bins[int((i/place)%10)].append(i)
            place = place * 10

            list1 = []
            for i in range(10):
                list1.extend(bins[i])
                bins[i] = []

    return list1

list1 = [56,11,24,44,44,23,22,33,234,44,11,23,33,22,65,44,5,5,1,8]
print(radix_sort(list1))