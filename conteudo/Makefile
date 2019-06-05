REVISAO= revisao-aula-01.pdf \
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
	 revisao-aula-17.pdf \
	 revisao-aula-18.pdf \
	 revisao-aula-23.pdf \
	 revisao-aula-25.pdf \
	 revisao-aula-26.pdf \
	 revisao-aula-28.pdf \
	 revisao-aula-29.pdf \
	 revisao-aula-31.pdf \
	 revisao-aula-32.pdf \
	 revisao-aula-34.pdf \
	 revisao-aula-35.pdf \
	 comentarios-p1.pdf

ORIGINA= apresentacao.pdf \
	 introducao.pdf \
	 sequencial.pdf \
	 if.pdf \
	 if-else.pdf \
	 switch.pdf \
	 for.pdf \
	 maisfor.pdf \
	 while.pdf \
	 arranjos.pdf \
	 strings.pdf \
	 matriz.pdf \
	 maismatriz.pdf \
	 revisao-p1.pdf \
	 funcoes.pdf \
	 parametros.pdf \
	 referencias.pdf \
	 ponteiros.pdf \
	 passagem-matrizes.pdf \
	 ordenamento-bolha.pdf \
	 estruturas.pdf \
	 typedef.pdf \
	 arquivo.pdf \
	 aleatorio.pdf

revisao: $(REVISAO)
origina: $(ORIGINA)
all: revisao origina

%.pdf: %.org
	emacs -batch $^ --funcall org-babel-tangle
	emacs -batch $^ --eval "(setq org-latex-listings 'minted org-latex-packages-alist '((\"\" \"minted\")) org-latex-pdf-process '(\"pdflatex -shell-escape -interaction nonstopmode -output-directory %o %f\" \"pdflatex -shell-escape -interaction nonstopmode -output-directory %o %f\"))" --eval "(setq org-latex-minted-options '((\"frame\" \"lines\") (\"fontsize\" \"\\\\scriptsize\")))" --funcall org-beamer-export-to-pdf

clean:
	rm -f $(REVISAO) $(ORIGINA)
