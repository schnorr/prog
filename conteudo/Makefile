REVISAO= revisao-aula-01.pdf \
	 revisao-aula-02.pdf \
	 revisao-aula-04.pdf \
	 revisao-aula-05.pdf \
	 revisao-aula-07.pdf \
	 revisao-aula-08.pdf \
	 revisao-aula-10.pdf \
	 revisao-aula08.pdf \
	 revisao-aula09.pdf \
	 revisao-aula10.pdf \
	 revisao-aula11.pdf \
	 revisao-aula12.pdf \
	 revisao-aula12b.pdf \
	 revisao-aula13.pdf \
	 revisao-aula-13.pdf \
	 revisao-aula-15.pdf \
	 revisao-aula-16.pdf \
	 revisao-aula-17.pdf \
	 revisao-aula-23.pdf \
	 revisao-aula-25.pdf \
	 revisao-aula-26.pdf \
	 revisao-aula-28.pdf \
	 revisao-aula-29.pdf \
	 revisao-aula-31.pdf \
	 revisao-aula-32.pdf \
	 revisao-aula-34.pdf \
	 revisao-aula-35.pdf \
	 revisao-aula-37.pdf \
	 revisao-aula-38.pdf \
	 revisao-aula-40.pdf \
	 revisao-aula-41.pdf \
	 comentarios-p1.pdf

ORIGINA= aula01-apresentacao.pdf \
	 aula01-introducao.pdf \
	 aula02-sequencial.pdf \
	 aula03-tipos.pdf \
	 aula04-if.pdf \
	 aula05-if-else.pdf \
	 aula06-switch.pdf \
	 aula07-for.pdf \
	 aula08-maisfor.pdf \
	 aula09-while.pdf \
	 aula10-arranjos.pdf \
	 aula11-strings.pdf \
	 aula12-matriz.pdf \
	 aula12-ordenamento.pdf \
	 aula13-maismatriz.pdf \
	 aula13-ordenamento.pdf \
	 aula14-revisao-p1.pdf \
	 aula14-revisao-p1-base.pdf \
	 funcoes.pdf \
	 parametros.pdf \
	 referencias.pdf \
	 ponteiros.pdf \
	 passagem-matrizes.pdf \
	 ordenamento-bolha.pdf \
	 estruturas.pdf \
	 typedef.pdf \
	 arquivo.pdf \
	 aleatorio.pdf \
	 arq-texto.pdf \
	 arq-texto-p2.pdf \
	 recursividade.pdf \
	 estruturacao.pdf \
	 revisao-p2.pdf \
	 revisao-p2-corrigido.pdf

revisao: $(REVISAO)
origina: $(ORIGINA)
all: revisao origina

%.pdf: %.org
	emacs -batch $^ --funcall org-babel-tangle
	emacs -batch $^ --eval "(setq org-latex-listings 'minted org-latex-packages-alist '((\"\" \"minted\")) org-latex-pdf-process '(\"pdflatex -shell-escape -interaction nonstopmode -output-directory %o %f\" \"pdflatex -shell-escape -interaction nonstopmode -output-directory %o %f\"))" --eval "(setq org-latex-minted-options '((\"frame\" \"lines\") (\"fontsize\" \"\\\\scriptsize\")))" --funcall org-beamer-export-to-pdf

clean:
	rm -f $(REVISAO) $(ORIGINA)
