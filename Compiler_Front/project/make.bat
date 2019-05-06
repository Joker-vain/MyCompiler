flex scanner.l
bison -vdty parser.y
gcc -o tcc y.tab.c lex.yy.c treeNode.c
pause
