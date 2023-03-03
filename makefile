### Lab 6 CS466
### CMINUS+ Abstract Syntax Tree
##	March 29, 2023
##	Robert J. Armendariz

# creates executable lab6
all:		lab6

# checks for lab6.l, lab6.y, runs lex on lab6.l which generates lex.yy.c,
# runs YACC on lab6.y which generates y.tab.h and y.tab.c; compiles lex.yy.c,
# y.tab.c, in conjunction with eachother and creates executable lab6
lab6:		lab6.l lab6.y
			lex lab6.l
			yacc -d lab6.y
			gcc lex.yy.c y.tab.c -o lab6
	
# remove lab6 executable
clean:
			rm -f lab6