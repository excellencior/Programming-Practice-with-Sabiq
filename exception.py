# Exception
# An error that happens while the program is running

num_input = input("Please enter a number: ")

try:
    num = int(num_input) # ERROR
except ValueError:
    print("An error occurred!") # ERROR HANDLING


# Common Exception Types
# ValueError
# Wrong value type f.e. int("abc")

# ZeroDivisionError
# num = 10/0

# FileNotFoundEror
# File path/name mismatch and as a result python can't find the file
# open("missing.txt")

# KeyError
# Whenever you try to access a key that's not in the dictionary
# dict = {
#     "one": 1
# }
# print(dict["one"])
# print(dict["key1"])

# IndexError
# List index out of range
# list1 = [1, 2, 3]
# print(list1[3])

num_input = input("Please enter a number: ")

try:
    num = int(num_input)
    ans = 10/num
except ValueError:
    print("You can't convert something that isn't a number to a number")
except ZeroDivisionError:
    print("You can't divide a number by zero!")
else: # When there's no error in the code, this block will execute
    print(f"num: {num}")
    print("Yee! No error!!")


# finally BLOCK
try:
    print(10/2)
except ZeroDivisionError:
    print("Error!")
finally:
    print("Always runs!")

# An example scenario where the finally block is handy!
# Task: Suppose you are taking an input from the user and you want to make sure that the user will only input a number and not anything else, if there's an error in the user input, give the user the chance to correct it through letting him/her input again

while True:
    num_input = input("Please enter a number: ")

    try:
        print(f"User input: {int(num_input)}")
        break
    except ValueError:
        print("ERROR: Not a number!")
        
        cmd = input("Do you want to try again? (y/n): ")
        if cmd == 'y':
            continue
        else:
            break
    finally:
        # A default greeting message that should be shown in each user interaction
        print("\nThanks! for using my software!")


# Raising Exceptions by Yourself
# TLDR: SUPER important

# In this example whenever the user inputs something bad (f.e. not a number) or a number (f.e. age) which is not permitted, it should throw (/raise) an exception (Runtime Error).
def input_age():        
    age = int(input("Please enter your age: "))
    if age < 0:
        raise ValueError("Age cannot be negative!")
    return age

while True:
    try:
        age = input_age()
        print(f"Your input age is {age}!")
        break
    except ValueError:
        print("Please try again.")