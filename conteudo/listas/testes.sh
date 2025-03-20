for lista in Lista*.org; do
    emacs -batch -l ~/.emacs.d/init.el $lista --funcall org-babel-tangle
    NUMERO=$(basename $lista .org | sed "s/Lista//")
    for arq in $(ls -1 lista${NUMERO}*.c); do
	echo "Tratando o arquivo $arq"
	gcc -Wall -Werror $arq -lm
    done
done
