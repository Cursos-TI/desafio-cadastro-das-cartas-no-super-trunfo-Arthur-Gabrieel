 #include <stdio.h>
#include <string.h>

int main(){

printf("Desafio Super Trunfo - Países - Cadastro de Cartas - Novato\n");

//País
char pais[50] = "Brasil";

//Primeiro Estado 1 Variáveis
char  estado1[50];
double populacao1;                       // populacao1 = Quantidades de Pessoas que Moram na Cidade
double area1;                           // area1 = Tamanho da Aréa da Cidade
double pib1;                            // pib1 = Produto Interno Bruto
int npt1;                                //npt1 = Número e Pontos Turísticos
double dp1;                              //dp1 = Densidade Populacional
double pib_cap1;                         //pib_cap1 = PIB per capita



  
        printf("Primeiro Vamos Criar os Estados e ás Cidade\n");
     
        printf("--------%s--------\n",pais);        
        
                     //Perguntas 1
      
      //estado1
        printf("1-Qual é o Nome do Primeiro Estado: \n");
        fgets(estado1, sizeof(estado1), stdin);
        estado1[strcspn(estado1, "\n")] = 0;  // Remove a quebra de linha que o fgets() captura
      
        
               
    
    //populacao1
        printf("2-Qual é a População da Cidade: \n");
        scanf("%lf", &populacao1);
        while (getchar() != '\n');
        
    
    //area1
        printf("3-Qual é a Área dessa Cidade: \n");
        scanf("%lf", &area1);
        while (getchar() != '\n');
        
        
        
    //pib1
        printf("4-Qual é o PIB desta Cidade:\n");
        scanf("%lf", &pib1);
        while (getchar() != '\n');
       
                
    //npt1
        printf("5-Número de Pontos Túristicos da Cidade:\n");
        scanf("%d", &npt1);
        while (getchar() != '\n'); // Limpa o buffer após a leitura de um número

        
        
        
        //dp1        Novas Variáveis
        dp1 = (float)  populacao1 / area1 ; 
       
   
        pib_cap1 = (float)  pib1 / populacao1 ;  

     
        


//Primeiro Estado2  Variáveis
char  estado2[50];
float populacao2;                    // populacao2 = Quantidades de Pessoas que Moram na Cidade
double area2;                        // area2 = Tamanho da Aréa da Cidade
double pib2;                        // pib2 = Produto Interno Bruto
int npt2;                        //npt2 = Número e Pontos Turísticos
double dp2;                              //dp4 = Densidade Populacional
double pib_cap2;                         //pib_cap4 = PIB per capita


            //Perguntas 2
        
    //estado2
       printf("6-Qual é o Nome do Segundo Estado:\n");
       fgets(estado2, sizeof(estado2), stdin);
       estado2[strcspn(estado2, "\n")] = 0;
       
      
    
    //populacao2  
        printf("7-Qual é a População da Segunda Cidade:\n");
        scanf("%f", &populacao2);
        while (getchar() != '\n');
               // Limpa o buffer após a leitura de um número
    
    //area2
        printf("8-Qual é a Área dessa Cidade: \n");
        scanf("%lf", &area2);
        while (getchar() != '\n');
     
    
    //pib2
        printf("9-Qual é o PIB desta Cidade: \n");
        scanf("%lf", &pib2);
        while (getchar() != '\n');
     
    
    //npt2   
        printf("10-Número de Pontos Túristicos da Cidade:\n");
        scanf("%d", &npt2);
        while (getchar() != '\n');

          
    //dp2       Novas Variáveis
        dp2 = (float)  populacao2 / area2 ;
         
        pib_cap2 = (double)  pib2 / populacao2 ;
       


        
         //Primeiro Estado3  Variáveis

char  estado3[50];
float populacao3;                    // populacao3 = Quantidades de Pessoas que Moram na Cidade
double area3;                        // area3 = Tamanho da Aréa da Cidade
double pib3;                        // pib3 = Produto Interno Bruto
int npt3;                        //npt3 = Número e Pontos Turísticos
double dp3;                              //dp3 = Densidade Populacional
double pib_cap3;                         //pib_cap3 = PIB per capita


       
                //Perguntas 3

    //estado3
       printf("11-Qual é o Nome do Terceiro Estado:\n");
        fgets(estado3, sizeof(estado3), stdin);
        estado3[strcspn(estado3, "\n")] = 0;
               // Lê o nome do primeiro estado ( com espaços )
     
     //populacao3
        printf("12-Qual é a População da Terceira Cidade: \n");
        scanf("%f", &populacao3);
        while (getchar() != '\n');
    
     
     //area3
        printf("13-Qual é a Área dessa Cidade: \n");
        scanf("%lf", &area3);
        while (getchar() != '\n');
    
    
    //pib3
        printf("14-Qual é o PIB desta Cidade:\n");
        scanf("%lf", &pib3);
        while (getchar() != '\n');

    //npt3
        printf("15-Número de Pontos Túristicos da Cidade:\n");
        scanf("%d", &npt3);
       while (getchar() != '\n');

        
    //dp3      Novas Variáveis 
        dp3 = (double)  populacao3 / area3;
        
        pib_cap3 = (double)  pib3 / populacao3;
      


          //Primeiro Estado4  Variáveis
char  estado4[50];
double populacao4;                        //populacao4 = Quantidades de Pessoas que Moram na Cidade
double area4;                            //area4 = Tamanho da Aréa da Cidade
double pib4;                             //pib4 = Produto Interno Bruto
int npt4;                                //npt4 = Número e Pontos Turísticos
double dp4;                              //dp4 = Densidade Populacional
double pib_cap4;                         //pib_cap4 = PIB per capita


                        //Perguntas 4
    
    //estado4
       printf("16-Qual é o Nome do Quarto Estado:\n");
       fgets(estado4, sizeof(estado4), stdin);
       estado4[strcspn(estado4, "\n")] = 0;

      //populaca4
        printf("17-Qual é a População da Quarta Cidade:\n");
        scanf("%f", &populacao4);
        while (getchar() != '\n');
            
      //area4
        printf("18-Qual é a Área dessa Cidade:\n");
        scanf("%lf", &area4);
        while (getchar() != '\n');
      

    //pib4
        printf("19-Qual é o PIB desta Cidade:\n");
        scanf("%lf", &pib4);
        while (getchar() != '\n');
       

      //npt4
        printf("20-Número de Pontos Túristicos da Cidade:\n");
        scanf("%d", &npt4);
        while (getchar() != '\n');


        
     //dp4        Novas Variáveis   
        dp4 = (double)  populacao4 / area4;
    
        pib_cap4 = (double)  pib4/ populacao4;
       



       
                              //Resultados

            printf("------------Resultados-----------\n");
        
        printf("1-Estado: %s\n 2-População: %.3f Habitantes\n 3-Área: %.2f km²\n 4-PIB: R$ %.2lf\n 5-Pontos Turísticos: %d\n 6-Densidade Populacional: %.3fkm²\n 7-PIB PER CAPITAL: %.4f\n", estado1, populacao1, area1, pib1, npt1,  dp1, pib_cap1);
        
        printf("--------------------------\n");
        
         printf("8-Estado: %s\n 9-População: %.3f Habitantes\n 10-Área: %.2f km²\n 11-PIB: R$ %.2lf\n 12-Pontos Turísticos: %d\n 13-Densidade Populacional: %.3fkm²\n 14-PIB PER CAPITAL: %.4f\n", estado2, populacao2, area2, pib2, npt2,  dp2, pib_cap2);
        printf("---------------------------\n");
       
         printf("15-Estado: %s\n 16-População: %.3f Habitantes\n 17-Área: %.2f km²\n 18-PIB: R$ %.2lf\n 19-Pontos Turísticos: %d\n 20-Densidade Populacional: %.3fkm²\n 21-PIB PER CAPITAL: %.4f\n", estado3, populacao3, area3, pib3, npt3,  dp3, pib_cap3);
       
        printf("---------------------------\n");
        
         printf("22-Estado: %s\n 23-População: %.3f Habitantes\n 24-Área: %.2f km²\n 25-PIB: R$ %.2lf\n 26-Pontos Turísticos: %d\n 27-Densidade Populacional: %.3fkm²\n 28-PIB PER CAPITAL: %.4f\n", estado4, populacao4, area4, pib4, npt4,  dp4, pib_cap4);

    return 0;

   


}








