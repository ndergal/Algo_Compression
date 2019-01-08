#ifndef _CHAINED_LIST_
#define _CHAINED_LIST_

#include "string.h"
#include "stdlib.h"
#include <stdio.h>

typedef struct _cell {
  char *word;               /* pointeur sur une chaine de caracteres. */
  struct _cell *next;       /* pointeur sur la cellule suivante. */
} cell;

cell *allocate_cell(const char *word);
void insert_cell(cell* *head, const char *word);
//void set_occurence(cell* *head);
void print_list(cell *head);
int isPonctuation(char c);
void free_cell(cell* *head);
int find_word(cell* lst, char word[]);
void add_word(cell* *lst,FILE* file, char word[]);
void add_ponct(cell* *lst,FILE* file, char word[]);
cell* extract_cell(cell* *lst, char* word);
void coding(char* entrer,char * sortie);
void uncoding(char* entrer,char* sortie);
#endif
