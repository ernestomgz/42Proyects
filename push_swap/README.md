# Push Swap
Project for 42 School

## Objetive
The goal of this project if to sort a list of numbers using two stacks in the least quantity of movements/actions.

Moves allowed:

    sa : swap a - swap the first 2 elements at the top of stack a. (Do nothing if there is only one or no elements).
    sb : swap b - swap the first 2 elements at the top of stack b. (Do nothing if there is only one or no elements).
    ss : sa and sb at the same time.
    pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
    pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
    ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
    rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
    rr : ra and rb at the same time.
    rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
    rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
    rrr : rra and rrb at the same time.

## Structure
The stacks are going to be internally implemented as a circular queue.
https://miro.medium.com/v2/resize:fit:640/format:webp/1*jXTiiMwSBLin3JHgZCDWhg.jpeg

So the struct stack will have the following information
- first node
- size

Also, each node will contain:
- data
- next node
- previous node

### File structure
stack_actions/:
- stack_actions.h
- swap.c
- push.c
- rotate. (1 or 2 files)

stack.h
stack.c (define stack and its usual actions)

sorting.c (sort algorithm)

pushSwap.c

## References
Idea of circular queue https://medium.com/@ayogun/push-swap-c1f5d2d41e97

