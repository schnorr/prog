revisao: revisao-aula-01.pdf \
	 revisao-aula-02.pdf \
	 revisao-aula-04.pdf \
	 revisao-aula-05.pdf \
	 revisao-aula-07.pdf \
	 revisao-aula-08.pdf \
	 revisao-aula-10.pdf \
	 revisao-aula-11.pdf \
	 revisao-aula-13.pdf
origina: apresentacao.pdf \
	 introducao.pdf \
	 sequencial.pdf \
	 if.pdf \
	 if-else.pdf \
	 switch.pdf \
	 for.pdf \
	 maisfor.pdf \
	 while.pdf \
	 arranjos.pdf
all: revisao origina

%.pdf: %.org
	emacs -batch $^ --funcall org-babel-tangle
	emacs -batch $^ --funcall org-beamer-export-to-pdf
