#include <stdio.h>
#include <math.h>

/*
2. Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele. Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. A partir da média, informar o conceito de acordo com a tabela:
maior ou igual a 9	A
        maior ou igual a 7.5 e menor que 9	B
        maior ou igual a 6 e menor que 7.5	C
        maior ou igual a 4 e menor que 6	D
        menor que 4	E

        */

int main() {

    float nota1,nota2,nota3,mediaNotas,mediaAproveitamento;

    printf("Digite a nota 1:");

    scanf("%f", &nota1);

    printf("Digite a nota 2:");
    scanf("%f", &nota2);

    printf("Digite a nota 3:");
    scanf("%f", &nota3);

    mediaNotas = (nota1 + nota2 + nota3)/3;

    mediaAproveitamento = (nota1 + (nota2*2) + (nota3*3) + mediaNotas)/7;

    if(mediaAproveitamento< 4){
        printf("Media de aproveitamento : %.2f \n", mediaAproveitamento);
        printf("Nota: E");
    }

    if(mediaAproveitamento >= 4 && mediaAproveitamento < 6){
        printf("Media de aproveitamento : %.2f \n", mediaAproveitamento);
        printf("Nota: D");
    }

    if(mediaAproveitamento >= 6 && mediaAproveitamento < 7.5){
        printf("Media de aproveitamento : %.2f \n", mediaAproveitamento);
        printf("Nota: C");
    }

    if(mediaAproveitamento >= 7.5 && mediaAproveitamento < 9){
        printf("Media de aproveitamento : %.2f \n", mediaAproveitamento);
        printf("Nota: B");
    }

    if(mediaAproveitamento >= 9){
        printf("Media de aproveitamento : %.2f \n", mediaAproveitamento);
        printf("Nota: A");
    }

    return 0;
}
