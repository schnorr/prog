all: apresentacao.pdf introducao.pdf revisao-aula-01.pdf sequencial.pdf revisao-aula-02.pdf revisao-aula-03.pdf revisao-aula-04.pdf revisao-aula-05.pdf revisao-aula-06.pdf revisao-aula-07.pdf revisao-aula-08.pdf if.pdf if-else.pdf switch.pdf for.pdf maisfor.pdf while.pdf

%.pdf: %.org
	emacs -batch $^ --funcall org-babel-tangle
	emacs -batch $^ --funcall org-beamer-export-to-pdf
