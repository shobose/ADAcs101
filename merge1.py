def mergeSort(L, ascending = True):
    result = []  
    if len(L) == 1:
        return L  
    mid = len(L) // 2

    l1 = mergeSort(L[:mid])

    l2 = mergeSort(L[mid:])

    x, y = 0, 0
    while x < len(l1) and y < len(l2):
        if l1[x] > l2[y]: 
            result.append(l2[y])
            y = y + 1

        else:
            result.append(l1[x])
            x = x + 1


    result = result + l1[x:]

    result = result + l2[y:]
    if ascending == True :
        return result
    else:
        result.reverse()
        return result

list=[3,2,4,1,5,9,7,6]
print(list)
print(mergeSort(list, True) )
