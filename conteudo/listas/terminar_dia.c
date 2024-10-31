#include <stdio.h>

int main() {
    
    //declaração de variaveis
    //Variáveis de entrada
    int segundos, minutos, horas;
    //Variável de saída
    int segundos_restantes;
    //Variável auxiliar
    int lidos;

    //entrada de dados
    printf("Insira a quantidade de segundos que se passaram desde o inicio do dia: ");
    lidos = scanf("%d", &segundos);
    if (lidos != 1) {
        printf("Houve erro ao ler os segundos\n");
        return 1;
    }
    
    printf("Insira a quantidade de minutos que se passaram desde o inicio do dia: ");
    lidos = scanf("%d", &minutos);
    if (lidos != 1) {
        printf("Houve erro ao ler os minutos\n");
        return 1;
    }
    
    printf("Insira a quantidade de horas que se passaram desde o inicio do dia: ");
    lidos = scanf("%d", &horas);
    if (lidos != 1) {
        printf("Houve erro ao ler as horas\n");
        return 1;
    }

    //Calcular os segundos que faltam pra terminar o dia
    // 1 dia tem 86400 segundos 
    segundos_restantes = 86400 - (horas * 3600 + minutos * 60 + segundos);

    //Saida de dados
    printf("Faltam %d segundos para terminar o dia\n", segundos_restantes);

  
    return 0;
}