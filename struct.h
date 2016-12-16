#ifndef EXAM_H_INCLUDED
#define EXAM_H_INCLUDED
#define ST 20
#define GR 10
#define SB 15
struct student{
    char first_name[ST];
    char last_name[ST];
    char group[10];
};

struct subject{
    char subject_name[SB];
    int credit;
};
struct get_mark{
    struct student student;
    struct subject subject;
    float mark;
    struct get_mark * next;
};
struct get_mark * head, * current, * prev;

struct get_mark * creat_get_mark(struct get_mark * get_mark);
struct get_mark * print_get_mark(struct get_mark * head);
int delete_get_mark(struct get_mark * get_mark);




#endif // EXAM_H_INCLUDED
