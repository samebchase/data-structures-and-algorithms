#pragma once

#include <stdbool.h>

typedef struct _singly_linked_node {
    int data;
    struct _singly_linked_node *next;
} singly_linked_node;

typedef struct _singly_linked_list {
    singly_linked_node *head;
} singly_linked_list;

typedef struct _generic_container_node {
    void *data;
    struct _generic_container_node *next;
} generic_container_node;

singly_linked_node* new_singly_linked_node();

singly_linked_list* new_singly_linked_list();

bool is_empty(singly_linked_list *list);

size_t list_length(singly_linked_list *list);

singly_linked_node* list_end(singly_linked_list*);

void push(singly_linked_list *list, int data);

int pop(singly_linked_list *list);

void append(singly_linked_list*, int);

void insert(singly_linked_list *list, int index, int data);

void print_singly_linked_list(singly_linked_list *);

char* string(singly_linked_list *list);