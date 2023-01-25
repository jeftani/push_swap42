# push_swap42
This code is a C program that sorts a list of integers using the "pushswap" algorithm. The program takes in two command line arguments, the first being the number of elements in the list and the second being the elements themselves. The program first uses the fillarg function to create an array of strings from the input arguments, and then uses the check_overflow, check_dup, and check_validiter functions to validate the input. It then uses the fillstack function to create a linked list of integers from the array of strings. The program then checks if the list is already sorted and exits if it is. If not, it uses different sorting functions based on the size of the list, such as sorting_three, sorting_two, sorting_five, sorting_more and arraysorted to sort the list. The program also includes error handling for invalid input and memory allocation
