#include <stdio.h>

int main()
{
    int n1, n2, n3, divi, op, res;
    
    int operacao(){
        printf("Escolha a operacao: \n");
        printf("1 - Somar \n");
        printf("2 - Subitrair \n");
        printf("3 - Dividir \n");
        printf("4 - Multiplicar \n");
        scanf("%i", &op);
    }
    
    int novaOperaca(){
        if(op == 1){
            divi = divi + n3;
            
            printf("%i", divi);
        }else if(op == 2){
            divi = divi - n3;
            printf("%i", divi);
        }else if(op == 3){
           divi = divi/n3;
           
           if(n3 == 0){
                printf("Impossivel dividir!");
            }else{
                printf("%i", divi);
            }
        }else if(op == 4){
            divi = divi * n3;
            printf("%i", divi);
        }
    }
    
    int continuacao(){
        printf("Digite o proximo numero: ");
        scanf("%i", &n3);
        operacao();
        
        novaOperaca();
        
        printf("\nQuer continuar a operacao com o resultado acima? \n");
        printf("1 - Sim \n");
        printf("2 - Não \n");
        scanf("%i", &res);
        while( res == 1){
            printf("Digite o proximo numero: ");
            scanf("%i", &n3);
            operacao();
        
            novaOperaca();
            printf("\nQuer continuar a operacao com o resultado acima? \n");
            printf("1 - Sim \n");
            printf("2 - Não \n");
            scanf("%i", &res);
        }
    }
    
    int escolhaacao(){
        if( res == 1){
            continuacao();
        }else{
            printf("by!");
        }
    }
    
    
    printf("Digite um numero: ");
    scanf("%i", &n1);
    printf("Digite o divisor: ");
    scanf("%i", &n2);
    operacao();
    
    if(op == 1){
        divi = n1 + n2;
        
        printf("%i", divi);
    }else if(op == 2){
        divi = n1 - n2;
        printf("%i", divi);
    }else if(op == 3){
       divi = n1/n2;
       
       if(n2 == 0){
            printf("Impossivel dividir!");
        }else{
            printf("%i", divi);
        }
    }else if(op == 4){
        divi = n1 * n2;
        printf("%i", divi);
    }
    
    printf("\nQuer continuar a operacao com o resultado acima? \n");
    printf("1 - Sim \n");
    printf("2 - Não \n");
    scanf("%i", &res);
    
    escolhaacao();
    
    return 0;
}
