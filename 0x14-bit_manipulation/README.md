# 0x14. C - Bit manipulation

## Description
Bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a word. Computer programming tasks that require bit manipulation include low-level device control, error detection and correction algorithms, data compression, encryption algorithms, and optimization. For most other tasks, modern programming languages allow the programmer to work directly with abstractions instead of bits that represent those abstractions. Source code that does bit manipulation makes use of the bitwise operations: AND, OR, XOR, NOT, and bit shifts.

 - in this project we will see how to manipulate bits and use bitwise operators

| File | Description |
| ---- | ----------- |
| [holberton.h](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/lists.h) | header file |
| [0-print_listint.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/0-print_listint.c) | a function that prints all the elements of a listint_t list |
| [1-listint_len.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/1-listint_len.c) | a function that returns the number of elements in a linked listint_t list |
| [2-add_nodeint.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/2-add_nodeint.c) | a function that adds a new node at the beginning of a listint_t list. |
| [3-add_nodeint_end.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/3-add_nodeint_end.c) | a function that adds a new node at the end of a listint_t list. |
| [4-free_listint.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/4-free_listint.c) | a function that frees a listint_t list. |
| [5-free_listint2.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/5-free_listint2.c) | a function that frees a listint_t list. |
| [6-pop_listint.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/6-pop_listint.c) | a function that deletes the head node of a list, and returns the head node's data |
| [7-get_nodeint.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/7-get_nodeint.c) |  a function that returns the nth node of a listint_t linked list. |
| [8-sum_listint.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/8-sum_listint.c) | a function that returns the sum of all the data (n) of a list. |
| [9-insert_nodeint.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/9-insert_nodeint.c) |  a function that inserts a new node at a given position. |
| [10-delete_nodeint.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/10-delete_nodeint.c) | a function that deletes the node at index index of a list. |
| [100-reverse_listint.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/100-reverse_listint.c) | a function that reverses a listint_t linked list. |
| [101-print_listint_safe.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/101-print_listint_safe.c) | a function that prints a listint_t linked list. |
| [102-free_listint_safe.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/102-free_listint_safe.c) | a function that frees a listint_t list. |
| [103-find_loop.c](https://github.com/cedouiri/holbertonschool-low_level_programming/blob/master/0x13-more_singly_linked_lists/103-find_loop.c) | a function that finds the loop in a linked list. |

## Author

**Chems Eddin Douiri**
