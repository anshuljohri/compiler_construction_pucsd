FINAL=Nothing
YACC_FLAGS=-dv --report=state
YACC_GEN_FILE=y.tab.c
YACC_HEADER_FILE=y.tab.h
LEX_GEN_FILE=lex.yy.c
YACC_SRC =./source/nothing_yacc.y
LEX_SRC =./source/nothing_lex.l
testoutput=output.txt
testdir=Test



$(FINAL):$(YACC_GEN_FILE) $(YACC_HEADER_FILE) $(LEX_GEN_FILE)
	@echo "Generating Executable "
	gcc $(YACC_GEN_FILE) $(LEX_GEN_FILE) -lfl -o $(FINAL)

$(YACC_GEN_FILE) $(YACC_HEADER_FILE):$(YACC_SRC)
	@echo "Generating YACC Source "	
	yacc $(YACC_FLAGS) $(YACC_SRC)

$(LEX_GEN_FILE):$(LEX_SRC)
	@echo "Generating Lex Source "	
	lex  $(LEX_SRC)

clean:
	rm -f $(FINAL) *~ $(YACC_GEN_FILE) $(LEX_GEN_FILE) $(YACC_HEADER_FILE) y.output output.txt

check: 
	$(shell rm $(testoutput))
	$(shell ./lss $(FINAL) $(testoutput) $(testdir))
