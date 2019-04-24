REVISAO="revisao-aula-01.pdf \
	 revisao-aula-02.pdf \
	 revisao-aula-04.pdf \
	 revisao-aula-05.pdf \
	 revisao-aula-07.pdf \
	 revisao-aula-08.pdf \
	 revisao-aula-10.pdf \
	 revisao-aula-11.pdf \
	 revisao-aula-13.pdf \
	 revisao-aula-15.pdf \
	 revisao-aula-16.pdf \
	 revisao-aula-17.pdf"
ORIGINA="apresentacao.pdf \
arranjos.pdf \
for.pdf \
if-else.pdf \
if.pdf \
introducao.pdf \
maisfor.pdf \
sequencial.pdf \
strings.pdf \
switch.pdf \
tipos.pdf \
while.pdf \
matriz.pdf \
maismatriz.pdf"

PDFS="$REVISAO $ORIGINA"

COMMAND="rsync -rv --progress $PDFS html.inf.ufrgs.br:./public_html/inf1202/"
echo $COMMAND
eval $COMMAND
