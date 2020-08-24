REVISAO=\
N1-R0-revisao-aula-01.pdf N2-R0-revisao-aula-02.pdf N2-R1-revisao-aula-04.pdf N3-R0-revisao-aula-05.pdf N3-R1-revisao-aula-07.pdf N4-R0-revisao-aula-08.pdf N4-R1-revisao-aula-10.pdf N5-R0-revisao-aula-11.pdf N5-R1-revisao-aula-13.pdf N6-R0-revisao-aula-15.pdf N6-R1-revisao-aula-16.pdf N7-R0-revisao-aula-17.pdf N7-R1-revisao-aula-18.pdf N9-R0-revisao-aula-23.pdf N9-R1-revisao-aula-25.pdf N10-R0-revisao-aula-26.pdf N10-R1-revisao-aula-28.pdf N10-R2-revisao-aula-29.pdf N11-R0-revisao-aula-31.pdf N11-R1-revisao-aula-32.pdf N12-R0-revisao-aula-34.pdf N12-R1-revisao-aula-35.pdf N13-R0-revisao-aula-37.pdf N13-R1-revisao-aula-38.pdf N14-R0-revisao-aula-40.pdf revisao-p1.pdf revisao-p2.pdf revisao-p2-corrigido.pdf

ORIGINA=\
N1-A0-apresentacao.pdf N1-A0-ere.pdf N1-A1-introducao.pdf N2-A0-sequencial.pdf N2-A1-tipos.pdf N3-A0-expressoes_logicas.pdf N3-A1-if.pdf N3-A2-if-else.pdf N4-A0-switch.pdf N4-A1-for.pdf N5-A0-maisfor.pdf N5-A1-while.pdf N6-A0-arranjos.pdf N6-A1-strings.pdf N7-A0-matriz.pdf N7-A1-maismatriz.pdf N9-A0-funcoes.pdf N9-A1-parametros.pdf N10-A0-referencias.pdf N10-A1-ponteiros.pdf N10-A2-passagem-matrizes.pdf N11-A0-ordenamento-bolha.pdf N11-A1-estruturas.pdf N11-A2-typedef.pdf N12-A0-arquivo.pdf N12-A1-aleatorio.pdf N13-A0-arq-texto.pdf N13-A1-arq-texto-p2.pdf N14-A0-recursividade.pdf N14-A1-estruturacao.pdf comentarios-p1.pdf

revisao: $(REVISAO)
origina: $(ORIGINA)
all: revisao origina

%.pdf: %.org
	emacs -batch $^ --funcall org-babel-tangle
	emacs -batch $^ --eval "(setq org-latex-listings 'minted org-latex-packages-alist '((\"\" \"minted\")) org-latex-pdf-process '(\"pdflatex -shell-escape -interaction nonstopmode -output-directory %o %f\" \"pdflatex -shell-escape -interaction nonstopmode -output-directory %o %f\"))" --eval "(setq org-latex-minted-options '((\"frame\" \"lines\") (\"fontsize\" \"\\\\scriptsize\")))" --funcall org-beamer-export-to-pdf

clean:
	rm -f $(REVISAO) $(ORIGINA)
