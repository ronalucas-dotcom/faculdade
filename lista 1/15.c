 #include <stdio.h>

int main() {
    float valorHora, horasMes, percINSS;
    float salarioBruto, desconto, salarioLiquido;

    printf("Digite o valor da hora-aula: ");
    scanf("%f", &valorHora);

    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horasMes);

    printf("Digite o percentual de desconto do INSS (ex: 11 para 11%%): ");
    scanf("%f", &percINSS);

    salarioBruto = valorHora * horasMes;
    desconto = salarioBruto * (percINSS / 100.0);
    salarioLiquido = salarioBruto - desconto;

    printf("\nSalario Bruto : R$ %.2f\n", salarioBruto);
    printf("Desconto INSS : R$ %.2f\n", desconto);
    printf("Salario Liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}