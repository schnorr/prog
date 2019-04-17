REVISAO="revisao-aula-01.pdf \
	 revisao-aula-02.pdf \
	 revisao-aula-04.pdf \
	 revisao-aula-05.pdf \
	 revisao-aula-07.pdf \
	 revisao-aula-08.pdf \
	 revisao-aula-10.pdf \
	 revisao-aula-11.pdf \
	 revisao-aula-13.pdf \
	 revisao-aula-15.pdf"
ORIGINA="apresentacao.pdf \
	 introducao.pdf \
	 sequencial.pdf \
	 if.pdf \
	 if-else.pdf \
	 switch.pdf \
	 for.pdf \
	 maisfor.pdf \
	 while.pdf \
	 arranjos.pdf \
	 strings.pdf"

PDFS="$REVISAO $ORIGINA"

COMMAND="rsync -rv --progress $PDFS html.inf.ufrgs.br:./public_html/inf1202/"
echo $COMMAND
eval $COMMAND
