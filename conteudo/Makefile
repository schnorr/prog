REVISAO= revisao-aula01.pdf \
	 revisao-aula02.pdf \
	 revisao-aula05.pdf \
	 revisao-aula06.pdf \
	 revisao-aula07.pdf \
	 revisao-aula-04.pdf \
	 revisao-aula-05.pdf \
	 revisao-aula08.pdf \
	 revisao-aula09.pdf \
	 revisao-aula10.pdf \
	 revisao-aula11.pdf \
	 revisao-aula12.pdf \
	 revisao-aula12b.pdf \
	 revisao-aula13.pdf \
	 revisao-aula16.pdf \
	 revisao-aula17.pdf \
	 revisao-aula18.pdf \
	 revisao-aula19.pdf \
	 revisao-aula20.pdf \
	 revisao-aula21.pdf \
	 revisao-aula22.pdf \
	 revisao-aula23.pdf \
	 revisao-aula24.pdf \
	 revisao-aula25.pdf \
	 comentarios-p1.pdf

ORIGINA=aula01-apresentacao.pdf \
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
aula11-string.pdf \
aula12-matriz.pdf \
aula13-maismatriz.pdf \
aula14-revisao-p1-base.pdf \
aula14-revisao-p1.pdf \
aula15-funcoes.pdf \
aula16-parametros.pdf \
aula17-referencias.pdf \
aula18-ponteiros.pdf \
aula19-ordenamento-matriz.pdf \
aula19-ordenamento-caracteres.pdf \
aula20-estruturas.pdf \
aula21-typedef.pdf \
aula22-arq-binario-p1.pdf \
aula23-arq-binario-p2.pdf \
aula24-arq-texto-p1.pdf \
aula25-arq-texto-p2.pdf \
aula26-recursividade.pdf \
aula27-depuracao.pdf \
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
