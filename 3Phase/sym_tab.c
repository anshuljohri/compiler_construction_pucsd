#include<stdio.h>
#include<string.h>
#define max_no_symbols 503
#define max_stack_size 10

typedef struct symbol_table {
  char *name;
 }Sym_tab;

typedef struct stack_entry{
  int top;
  struct symbol_table (*items)[max_stack_size];
  int parent_index;
}pointer_to_symtab;

Sym_tab* Create_sym_tab(void);
void Push(pointer_to_symtab *,struct symbol_table *);
void Pop(pointer_to_symtab *);
int Hash_value(char *);

pointer_to_symtab *ps;

Sym_tab* Create_sym_tab(void)
{
  Sym_tab* arr[max_no_symbols];
  //  Sym_tab **arr;
  int i;
  //Sym_tab *ar;
  //arr=(Sym_tab**)malloc(sizeof(Sym_tab*) * max_no_symbols);
  ps=(pointer_to_symtab *)malloc(sizeof(pointer_to_symtab));
  ps->top=-1;
  
  for(i=0; i<max_no_symbols; i++)
    arr[i]=(Sym_tab*)malloc(sizeof(Sym_tab));
  return arr[0];
}

void Push(pointer_to_symtab *ps,Sym_tab *item)
{
  ps->items[++ps->top]=item;
}

void Pop(pointer_to_symtab *ps)
{
  Sym_tab *tmp;
  tmp=ps->items[ps->top--];
}

int Hash_value(char *symbol)
{
  char *p;
  unsigned h=0,g;
  for(p=symbol; *p!='\0'; p++)
    {
      h=(h << 4)+(*p);
      if(g=h & 0xf0000000)
	{
	  h=h ^ (g >> 24);
	  h=h ^ g;
	}
    }
  return (h % max_no_symbols);
}

void Insert(,Sym_tab new_symbol)
{
  int pc=0;
  int probe;
  int inc=1;
  probe=Hash_value(new_symbol.name);

  while(H[probe].name != NULL && strcmp(new_symbol.name, H[probe].name) && pc<= max_no_symbols/2)
    {
      pc++;
      probe=(probe+inc) % max_no_symbols;
      inc+=2;
    }
  if(H[probe].name == NULL)
    H[probe]=new_symbol;
  else if(strcmp(new_symbol.name, H[probe].name) == 0)
    ERROR("Same key cant be appear");
  else
    ERROR("Hash Table is full");
}

main()
{
  char *p;
  int val;
  p=(char *)malloc(20);
  while(1){
    printf("Enter var\n");
    scanf("%s",p);
    val=Hash_value(p);
    printf("Hash value is %d\n",val);
  } 
}
