#include<stdio.h>
#include<string.h>
#include<error.h>
#define max_no_symbols 503
#define max_stack_size 10

typedef struct symbol_table {
  char *name;
 }Sym_tab;

typedef struct stack_entry{
  int top;
  struct symbol_table* items[max_stack_size];
}pointer_to_symtab;

int Create_sym_tab(void);
void Push(pointer_to_symtab *,struct symbol_table *);
void Pop(pointer_to_symtab *);
int Hash_value(char *);
int Insert(char *);
int Check(char *);
void Init_stack(void);

pointer_to_symtab *ps;

void Init_stack(void)
{
  ps=(pointer_to_symtab *)malloc(sizeof(pointer_to_symtab));
  ps->top=-1;
  return;
}

int Create_sym_tab(void)
{
  Sym_tab arr[max_no_symbols];  
  int i;
    
  for(i=0; i<max_no_symbols; i++)
    arr[i].name='\0';
  
  Push(ps,&arr[0]);
  return 1;
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

int Insert(char* new_symbol)
{
  int pc=0;
  int probe;
  int inc=1;
  Sym_tab *H;
  Sym_tab tmp;

  strcpy(tmp.name,new_symbol);

  H=ps->items[ps->top];
  probe=Hash_value(tmp.name);

  while(H[probe].name != NULL && strcmp(tmp.name, H[probe].name) && pc<= max_no_symbols/2)
    {
      pc++;
      probe=(probe+inc) % max_no_symbols;
      inc+=2;
    }

  if(H[probe].name == NULL)
    {
      H[probe]=tmp;
      return 1;
    }

  else if(strcmp(tmp.name, H[probe].name) == 0)
    {
      perror("Same key cant be appear");
      return 0;
    }
  else
    {
      perror("Hash Table is full");
      return 0;
    }
}

int Check(char *symbol)
{
  int pc=0;
  int probe;
  int inc=1,i;
  Sym_tab *H;
 
  for(i=ps->top; i<-1; i--){
    H=ps->items[i];
    probe=Hash_value(symbol);
    
    while(strcmp(symbol, H[probe].name) && pc<= max_no_symbols/2)
      {
	pc++;
	probe=(probe+inc) % max_no_symbols;
	inc+=2;
      }
    
    if(!strcmp(symbol,H[probe].name))
      return 1;
    
    else if(strcmp(symbol, H[probe].name) != 0)
      return 0;
    
    else
      return 0;
  }
}

main()
{
  char *p;
  int val;
  p=(char *)malloc(20);
  printf("%d\n",sizeof(pointer_to_symtab));
  while(1){
    printf("Enter var\n");
    scanf("%s",p);
    val=Hash_value(p);
    printf("Hash value is %d\n",val);
  } 
}
