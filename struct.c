#include <stdio.h>
#include <stdlib.h>
#include "Exam.h"
#include <conio.h>
#include <windows.h>
#include <string.h>


int main()
{
    struct get_mark get_mark;
    delete_get_mark(print_get_mark(creat_get_mark(&get_mark)));
    return 0;
}


struct get_mark * creat_get_mark(struct get_mark * get_mark){
    struct get_mark * head = NULL;
    struct get_mark * prev, * current;
    char k;
    printf("esc to exit! any key to continue \n");
    k=getch();
    while(k!=27){
        struct get_mark * current = (struct get_mark *)malloc(sizeof(struct get_mark));
        if (head==NULL)
            head = current;
        else
        {
            (*prev).next = current;
            (*current).next = NULL;
        }
        printf("Enter: name surname group  subject_name   credits\n");
        scanf("%s %s %s %s %d",(*current).student.first_name,(*current).student.last_name,(*current).student.group, (*current).subject.subject_name, &(*current).subject.credit);
        printf("\n");
        printf("Enter student mark");
        scanf("%f",&(*current).mark);
        prev = current;
        printf("esc to exit! any key to continue\n");
        k=getch();
    }

    return head;
};


struct get_mark * print_get_mark(struct get_mark * head){
    int count = 1;
    if (head == NULL)
		return 0;
	 current = head;
	while (current != NULL){
		printf(" name       surname         group       subject_name            credits\n");
		printf("%s %s %s %s %d",(*current).student.first_name,(*current).student.last_name,(*current).student.group, (*current).subject.subject_name, &(*current).subject.credit);
		printf("\n");
		current = (*current).next;
	}
	return head;
}


int delete_get_mark(struct get_mark * head){
    if (head == NULL)
		return 0;
	struct get_mark * current = head;
	while (current != NULL){
		free(current);
		current = current->next;
	}
	return 0;
	}
