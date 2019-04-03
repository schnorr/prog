PDFS="apresentacao.pdf \
introducao.pdf \
revisao-aula-01.pdf \
sequencial.pdf \
revisao-aula-02.pdf \
tipos.pdf \
revisao-aula-03.pdf \
if.pdf \
revisao-aula-04.pdf \
if-else.pdf \
revisao-aula-05.pdf \
switch.pdf \
revisao-aula-06.pdf \
for.pdf \
revisao-aula-07.pdf \
maisfor.pdf"

COMMAND="rsync -rv --progress $PDFS html.inf.ufrgs.br:./public_html/inf1202/"
echo $COMMAND
eval $COMMAND
