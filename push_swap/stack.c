#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct s_node{
	struct s_node *next;
	struct s_node *previus;
	int value;
}t_node;

//is defined as stack but in reality is a circular queue
typedef struct s_stack {
	t_node *first;
	int size;
} t_stack; 

int size(t_stack st)
{
	return st.size;
}

t_node *first(t_stack st){
	return st.first;
}

//test empty, with one or two elements
t_node *top(t_stack st){
	int i;
	t_node *out = st.first;

	i = 0;
	if(st.size > 0)
	{
		while (i != st.size - 1){
			out = out->next;
			i++;
		}
	}
	return out;
}

int push(t_stack *st, int value){
	t_node *next;
	if(top(*st) != NULL)
	{
		next = &(t_node) { .next = first(*st), .previus = top(*st), .value = value};
		top(*st)->next = next;
	}
	else
		st->first = &(t_node) { .next = NULL, .previus = NULL, .value = value};
	st->size++;
	return 0;
}

//just for testing
void printStack(t_stack st)
{
	int i;
	t_node *tmp;

	i = 0;
	tmp = st.first;
	if(tmp == NULL)
		printf("stack empty\n");
	else
	{
		while (st.size > i)
		{
			printf("Pos %d Pointer %p Value %d \n", i, tmp, tmp->value);
			i++;
			tmp = tmp->next;
		}
		printf("(last is %p)\n", tmp);
	}

}


// 0 if false (so contains something), otherwise true (is empty)
int isEmpty(t_stack st)
{
	return (int) (st.size == 0);
}

int main(){
	t_stack stackA= { .first = NULL, .size = 0};
	printf("%d\n", stackA.size);
	printf("%p\n", top(stackA));
	printf("is empty: %d \n", isEmpty(stackA));
	push(&stackA, 1);
	push(&stackA, 2);
	push(&stackA, 1);
	push(&stackA, 2);
	printf("%p\n", top(stackA));
	printf("%d\n", top(stackA)-> value);

	printf("%p\n", first(stackA));
	printf("%d\n", first(stackA)-> value);
	printf("is empty: %d\n", isEmpty(stackA));
	
	printStack(stackA);

	return 0;
}
