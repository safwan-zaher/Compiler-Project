bison -d project.y
flex project.l
gcc project.tab.c lex.yy.c
./a.exe
	 