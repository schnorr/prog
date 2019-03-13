all: apresentacao.pdf introducao.pdf revisao-aula-01.pdf sequencial.pdf

%.pdf: %.org
	emacs -batch $^ --funcall org-babel-tangle
	emacs -batch $^ --funcall org-beamer-export-to-pdf
