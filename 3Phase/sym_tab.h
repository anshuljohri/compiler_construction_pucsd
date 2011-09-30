#include<stdio.h>
#include<string.h>
#include<error.h>
#define max_no_symbols 503
#define max_stack_size 10

// structure for maintaining symbol table.

typedef struct symbol_table {
  char *name[max_no_symbols];
 }Sym_tab;

// Structure for maintaining scopes

typedef struct stack_entry{
  int top;
  struct symbol_table* items[max_stack_size]; // This contains the base address of each symbol table
}pointer_to_symtab;

int Create_sym_tab(void); 
void Push(struct symbol_table *);
void Pop(void);
int Hash_value(char *);
int Insert(char *);
int Check(char *);
void Init_stack(void);
void Malloc(void);

pointer_to_symtab *ps;
