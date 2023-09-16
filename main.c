#include <math.h>
#include <stdio.h>

int main(void) {

  int opcao;

  printf("Digite o número da questão desejada (1-10): ");
  scanf("%d", &opcao);

  switch (opcao){

    case 1:

    //1. Faça um algoritmo que receba um número positivo, calcule e mostre:
    // • o número ao cubo;
    // • a raiz quadrada do número;
    // • a raiz cúbica do número;
    // • o seno do número;
    // • o cosseno do número
      
      float x, anguloRadianos;
  
      printf("Entre com o valor de x:");
      scanf("%f", &x);
      
      anguloRadianos = x * 3,141592653 / 180;
  
      printf("%.1f ao cubo = %f\n", x, pow(x, 3));
      printf("Raiz quadrada de %.1f = %f\n", x, sqrt(x));
      printf("Raiz cubica de %.1f = %f\n", x, pow(x, (1.0 / 3.0)));
      printf("Sen (%.1f)=%f\n", x, sin(anguloRadianos));
      printf("Cos (%.1f)=%f\n", x, cos(anguloRadianos));
      break; 

    case 2: 

      // 2. Faça um algoritmo que receba 2 números inteiros x e y e calcule o resto da divisão x / y.

      printf("RESTO DA DIVISAO ENTRE DOIS NUMEROS\n");
      printf("-------------------------------------\n");
    
      int x2 ,y2 ;
      printf("Insira o primeiro numero:\n");
      scanf("%d", &x2);
      printf("Insira o segundo número:\n");
      scanf("%d", &y2); 
    
      printf("O resto da divisão eh: %d", (x2 % y2));

      break;

    case 3:

    // 3. Faça um algoritmo que leia os lados de um retângulo e calcule sua área e seu perímetro.

      float comprimento, altura, area, perimetro;
      printf("Insira o comprimento do retangulo (em cm):\n");
      scanf("%f", &comprimento);
      printf("Insira a altura do retangulo (em cm):\n");
      scanf("%f", &altura);
    
      area = comprimento * altura / 2;
      printf("a area eh igual a: %f cm^2\n", area);
    
      perimetro = (altura * 2) + (comprimento * 2);
      printf("O perimetro eh igual a: %f cm\n", perimetro);

      break;
    
    case 4:

    // 4. Faça um algoritmo para calcular a área de um trapézio. O algoritmo deve ler o valor da base menor, da base maior e da altura. Em seguida, imprima o valor da área do trapézio

      float bmenor, bmaior, h, area;
      printf("Insira a base menor do triangulo:\n");
      scanf("%f", &bmenor);
      printf("Insira a base maior do triangulo:\n");
      scanf("%f", &bmaior);
      printf("Insira a altura do triangulo:\n");
      scanf("%f", &h);
    
      area = (bmenor + bmaior) * h / 2;
      printf("A area do trapezio eh: %2.f", area);
  
      break;
    
    case 5:
    
    // 5. Faça um algoritmo que calcule a área de uma circunferência, recebendo o valor do raio

      //const float (PI = 3,1415);
      float raio, area;
      printf("Insira o valor do raio:\n");
      scanf("%f", &raio);
    
      area = 3,141592653 * pow(raio,2);
      printf("A area da circunferencia eh: %f", area);

      break;
    
    case 6:

    // 6. Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um algoritmo que receba o salário fixo do funcionário e o valor de suas vendas no mês, calcule e mostre a comissão e seu salário final.

      float salario, vendas, salarioTotal, comissao= 0.04;

      printf("Digite o salario do funcionario:");
      scanf("%f", &salario);
      printf("Digite as vendas do funcionario:");
      scanf("%f", &vendas);
  
      salarioTotal = salario + (vendas * comissao); 
  
      printf("O salario total eh: %f", salarioTotal);

      break;

    case 7:

    // 7. Faça um algoritmo que leia as seguintes informações de um empregado: o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas. Calcule e mostre o salário que o empregado receberá seguindo as seguintes regras:
    // • o valor pago por hora trabalhada é 1/8 do salário mínimo;
    // • o valor pago por hora extra vale 1/4 do salário mínimo;
    // • o salário bruto equivale ao número de horas trabalhadas vezes o valor pago por hora trabalhada;
    // • a quantia a receber por horas extras equivale ao número de horas extras realizadas multiplicado pelo valor
    // pago por hora extra;
    // • o salário a receber é a soma do salário bruto e da quantia a receber pelas horas extras.

      float hTrabalhadas, sMin, hExtras, sBruto, sExtra, sFinal;
  
      printf("Insira o salário:\n");
      scanf("%f",&sMin);
      printf("Insira as horas regulares trabalhadas:\n");
      scanf("%f",&hTrabalhadas);
      printf("Insira as horas extras trabalhadas:\n");
      scanf("%f",&hExtras);
  
      sBruto = hTrabalhadas * (sMin/8);
      sExtra = hExtras * (sMin/4);
      sFinal = sBruto + sExtra;
  
      printf("O salario final eh: %.2f", sFinal);
  
      break;
    
    case 8:

    // 8. Faça um algoritmo que receba uma quantidade qualquer em horas e converta em minutos.

      float minutos, horas;
  
      printf("Conversor de horas em minutos\n");
      printf("------------------------------\n");
      printf("Insira a quantidade de horas que deseja converter:\n");
      scanf("%f", &horas);
  
      minutos = horas * 60;
  
      printf("%.2f horas em minutos eh: %.2f minutos", horas, minutos);

      break;
    
    case 9:

    // 9. Faça um algoritmo que receba uma quantidade qualquer em minutos e converta em horas.

      float minutos, horas;
  
      printf("Conversor de minutos em horas\n");
      printf("------------------------------\n");
      printf("Insira a quantidade de minutos que deseja converter:\n");
      scanf("%f", &minutos);
  
      horas = minutos/60;
  
      printf("%.2f minutos em horas eh: %.2f horas", minutos, horas);

      break;
    
    case 10:

    // 10. Sejam P(x1, y1) e Q(x2, y2) dois pontos quaisquer no plano. A distância entre os pontos é dada por
// d = √(x2 − x1)2 + (y2 − y1)2.
// Faça um algoritmo que leia as coordenadas dos dois pontos, determine e escreva a distância entre eles.

      float x1, y1, x2, y2, distancia;

      printf("Declare as coordenadas do primeiro ponto\n (ex: (2,1) = 2,1):\n");
      scanf("%f, %f", &x1, &y1);
      printf("Declare as coordenadas do segundo ponto\n (ex: (2,1) = 2,1):\n");
      scanf("%f, %f", &x2, &y2);
    
      distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    
      printf("a distancia entre os dois pontos eh: %.2f\n", distancia);

      break;

    default:

      printf("Opcao invalida!"); 
  }

  return 0;
}