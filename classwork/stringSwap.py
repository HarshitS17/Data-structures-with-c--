#start_with checks whether the given string is starting with that word or not 
string = "hello World"
start_with_hello = string.startswith("world")
print (start_with_hello)

# using the start with 
a= "hello ,welcome to python"
b = a.startswith("we",5,10)
print (b) # false

# write a program to get a single string from two given string seperated by space and swap the first two character of the string


def swap_first_chars(string1, string2): 
     return string2[0]+ string1[1:] +" "+ string1[0] + string2[1:]
       
string1= "hello"
string2 = "world"
result = swap_first_chars(string1, string2)
print("Resulting string:", result)
    
    # write a program to count the number of character (character frequency in a string )


   