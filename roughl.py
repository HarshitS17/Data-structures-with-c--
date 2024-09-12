# #write a fucntion that merges two sorted lists into a single sorted list without usiing sort method 
# def merging(list1, list2):
#     merged_list = []
#     i, j = 0, 0
    
#     while i < len(list1) and j < len(list2):
#         if list1[i] < list2[j]:
#             merged_list.append(list1[i])
#             i+=1
#         else:
#             merged_list.append(list2[j])
#             j += 1
    
    
#     merged_list.extend(list1[i:])
#     merged_list.extend(list2[j:])
    
#     return merged_list
# list1  = {2,3,4,5,6}
# list2 = {4,5,6,7,8,9}
# result = merging(list1, list2)
# print(result)
# write a function which returns the frequency of each element in the tuple 
def element_frequency(tup):
    frequency = {}
    
    # Use index-based iteration
    for i in range(len(tup)):
        if tup[i] in frequency:
            frequency[tup[i]] += 1
        else:
            frequency[tup[i]] = 1
    
    return frequency

# write a program that sort a list of tuple based on second element of each tuple
tuple_list = [(1, 3), (4, 1), (2, 5), (7, 2)]
print (tuple_list)
tuple_list.sort()

print("Sorted list" , tuple_list)
