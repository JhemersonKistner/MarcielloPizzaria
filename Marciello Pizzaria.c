#include <stdio.h>
#include <string.h>
#include <locale.h>
 
int main(){
	
	setlocale(LC_ALL, "Portuguese");
   
    char login2[20],login1[20]="adm",fim;
    int senha2=0,tela_login=0,menu=0,submenu=0,menu_vendas=0,menu_estoque=0,menu_gerente=0,menu_relatorio=0;
    int i=0,pizza=0,j=0,bebida=0,acpm=0,sobre=0,valor_do_pedido=0,iv=0,venda_dia[100]={0},renda=0,total_diario=0,cancelamentos=0,total_cancelamentos=0,debito=0,gastos=0;
    int bebida_top=0,i_bebida_top,pizza_top=0,i_pizza_top=0,acpm_top=0,i_acpm_top=0,sobre_top=0,i_sobre_top=0,qt_=0,valor_=0,op=0;
    int cf=0,pf,clt=0,ccn=0,cref=0,ctp=0,cpn=0,codigo_produto;
    char apagado[20]="o";
    int senha1[50],menu_cdr=0;
    int incluir_produtos;
    int valor_pizza[10]={0,20,20,20,20,25,25,25,25,0},cont_pizza[10]={0};
	int valor_bebida[8]={0,5,5,5,10,10,10,0},cont_bebida[8]={0};
	int valor_acpm[8]={0,5,5,5,7,7,7,0},cont_acpm[8]={0};
	int valor_sobre[4]={0,3,4,0},cont_sobre[4]={0};
  	 
  	int topo_tela();
  	int erro();
	struct funcionarios{
		char nome[49];
		char login[49];
		int telefone[49];
		int cpf[49];
		int senha[49]; 
	};
	
	struct client{
		char client[50];
		char opniao[200];
	};
	
	struct estoque{
		char nomet[30];
		int qt_gramast[30];
		int qt_mlt[30];
		int validadet[30];
		int valort[30]; 
	};	
		struct client at[100];
		struct estoque dd[30]; 	
		struct funcionarios dados[49];	

	strcpy(dados[0].nome,login1);
  	senha1[1]=1234;

    while(tela_login==0){
        topo_tela();
        printf(" \n\n\n\n\t\t\t\t\t\t  Login:");
        scanf(" %s",&login2);
        printf("\n \t\t\t\t\t\t  Senha:");
        scanf("%d",&senha2);
        
        if(senha2==senha1[1]){
          if(strcmp(login2,login1)==0){
            system("cls");
            topo_tela();
			printf("\n\n\n\n\n\n\t\t\t\t\t\tLOGIN REALIZADO COM SUCESSO");
                tela_login=1;
                menu=1;
                sleep(1);
                system("cls");
            }else{
                system("cls");
            topo_tela();
            printf("\n\n\n\n\n\n\t\t\t\t\t\t LOGIN OU SENHA INVALIDA");
                tela_login=0;
                sleep(3);
                system("cls"); 
            }
    	}else{
            system("cls");
            topo_tela();
            printf("\n\n\n\n\n\n\t\t\t\t\t\t LOGIN OU SENHA INVALIDA");
            tela_login=0;
            sleep(3);
            system("cls");
		}
	}

    while(menu==1){
    	topo_tela();
        printf(" \n\n\n\n\t\t\t\t\t\t  Menu Principal:");
        printf(" \n\n\n\n\t  1) Vendas");
        printf(" \n\n\n\n\t  2) Estoque");
        printf(" \n\n\n\n\t  3) Relatorios");
        printf(" \n\n\n\n\t  4) Gerenciamento");
        printf(" \n\n\n\n\t  5) Sair");
        printf(" \n\t  Sua Opção: ");
        scanf("%d",&submenu);
        system("cls");
        
        switch(submenu){
        	
        	case 1:
       		 while(submenu==1){
		    	topo_tela();
		        printf(" \n\n\n\n\t\t\t\t\t\t  Menu De Vendas:");
		        printf(" \n\n\n\n\t  1) Iniciar nova venda");
		        printf(" \n\n\n\n\t  2) sair");
		        printf(" \n\t  Sua Opção: ");
		        scanf("%d",&menu_vendas);
		        system("cls");
		        
		        switch(menu_vendas){
						case 1:
							topo_tela();;
						    printf(" \n\n\n\n\t\t\t\t\t\t Selecione a pizza:");
				        	printf(" \n\n\n\n\t  1) Calabresa R$20,00");
				        	printf(" \t\t\t\t  5) Frango com catupiry R$25,00");
				        	printf(" \n\n\n\n\t  2) 4 Queijos R$20,00");
				        	printf(" \t\t\t\t  6) Vegetariana R$25,00");
							printf(" \n\n\n\n\t  3) Moda da Casa R$20,00");
				        	printf(" \t\t\t  7) Carne seca R$25,00");
				        	printf(" \n\n\n\n\t  4) Portuguesa R$20,00");
				        	printf(" \t\t\t  8) Napolitana R$25,00");
							printf(" \n\n\t  Sua Opção: ");				    
				        	scanf("%d",&pizza);
				        	system("cls");
				        		if(pizza>8 || pizza<1 ){
					        		topo_tela();
							        erro();
							        valor_do_pedido=0;
						        sleep(2);
								system("cls");		
								}else{
									valor_do_pedido=valor_do_pedido+valor_pizza[pizza];
								}
							topo_tela();
						    printf(" \n\n\n\n\t\t\t\t\t\t Selecione a Bebida:");
						    printf(" \n\n\n\n\t     Latas:");
						    printf(" \t\t\t        Garrafa 1 Litro");
				        	printf(" \n\n\n\n\t  1) Coca-cola R$5,00");
				        	printf(" \t\t\t  4) Coca-cola R$10,00");
				        	printf(" \t\t  7) Nenhuma");
				        	printf(" \n\n\n\n\t  2) Fanta R$5,00");
				        	printf(" \t\t\t  5) Fanta R$10,00");
							printf(" \n\n\n\n\t  3) Guarana R$5,00");
				        	printf(" \t\t\t  6) Guarana R$10,00");
							printf(" \n\n\t  Sua Opção: ");	
							scanf("%d",&bebida);
							
							if(bebida>=8 || bebida<=0 ){
					        		topo_tela();
							        erro();
							        valor_do_pedido=0;
						        sleep(2);
								system("cls");		
								}else{
								valor_do_pedido=valor_do_pedido+valor_bebida[bebida];
								}
							system("cls");		
							topo_tela();
						    printf(" \n\n\n\n\t\t\t\t\t\t Selecione o Acompanhamento:");
				        	printf(" \n\n\n\n\t  1) Batata frita R$5,00");
				        	printf(" \t\t\t  4) Batata Frita com bacon R$7,00");
				        	printf(" \t\t  7) Nenhuma");
				        	printf(" \n\n\n\n\t  2) Mini pasteis R$5,00");
				        	printf(" \t\t\t  5)  Linguiça R$7,00");
							printf(" \n\n\n\n\t  3) Torresmo R$5,00");
				        	printf(" \t\t\t\t  6) Cubinhos de Mussarela R$7,00");
							printf(" \n\n\t  Sua Opção: ");
							scanf("%d",&acpm);
							if(acpm>=8 || acpm<=0 ){
					        		topo_tela();
							        erro();
							        valor_do_pedido=0;
						        sleep(2);
								system("cls");		
								}else{
								valor_do_pedido=valor_do_pedido+valor_acpm[acpm];
								}	
							system("cls");
							
							topo_tela();
						    printf(" \n\n\n\n\t\t\t\t\t\t Selecione a Sobremesa :");
				        	printf(" \n\n\n\n\t  1) Sorvete R$ 3,00");
				        	printf(" \t\t\t  2) Torta de Chocolate R$ 4,00");
				        	printf(" \t\t  3) Nenhuma");
							printf(" \n\n\t  Sua Opção: ");
							scanf("%d",&sobre);
							if(sobre>=4 || sobre<=0 ){
					        		topo_tela();
							        erro();
							        valor_do_pedido=0;
						        sleep(2);
								system("cls");		
								}else{
							valor_do_pedido=valor_do_pedido+valor_sobre[sobre];
							system("cls");
							}
							topo_tela();
							printf(" \n\n\n\n\t\t\t\t\t\t Cliente:");
							printf(" \n\n\n\n\t  1) Digite o 1º Nome do Cliente: ");
							scanf("	%s",&at[iv].client);
							system("cls");
							
							topo_tela();
						    printf(" \n\n\n\n\t\t\t\t\t\t Finalizar pedido :");
							printf(" \n\n\n\n\t  0)Nome do Cliente: %s",at[iv].client);
						    printf(" \n\n\n\n\t  1) Valor da Pizza:R$ %d,00",valor_pizza[pizza]);
						    printf(" \n\n\n\n\t  2) Valor da Bebida:R$ %d,00",valor_bebida[bebida]);
						    printf(" \n\n\n\n\t  3) Valor do Acompanhamento:R$ %d,00",valor_acpm[acpm]);
						    printf(" \n\n\n\n\t  4) Valor da sobremesa:R$ %d,00",valor_sobre[sobre]);
						    printf(" \n\n\n\n\t  5) Valor total:R$ %d,00",valor_do_pedido);
						    printf(" \n\n\n\n\t   ) Deseja Finalizar?(s/n):");
						    scanf(" %c",&fim);
						    system("cls");
						    
						    if(fim=='s'){
						    	venda_dia[iv]=valor_do_pedido;
						    	renda=renda+venda_dia[iv];
						    	iv++;
						    	cont_pizza[pizza]++;
						    	cont_bebida[bebida]++;
						    	cont_acpm[acpm]++;
						    	cont_sobre[sobre]++;
						    	valor_do_pedido=0;
							}else{
								cancelamentos++;
								total_cancelamentos=total_cancelamentos+valor_do_pedido;
								valor_do_pedido=0;
							}
							topo_tela();
							printf(" \n\n\n\n\t\t\t\t\t\t Alguma Opinião ou Sugestão?(S/N)");
							scanf(" %c",&fim);
							system("cls");
								if(fim=='s'){
									topo_tela();
									printf(" \n\n\n\n\t\t\t\t\t\t Pode falar :)");
									printf("\n\n Digite aqui(max 200 caracteres):");
									scanf(" %[^\n]s",&at[iv-1].opniao);
									system("cls");
									topo_tela();
									printf(" \n\n\n\n\t\t\t\t\t\t Muito Obrigado Pela sua Opnião");
									sleep(5);
									op++;
									
								}else{
									system("cls");
									break;	
								}
							
							
							
												        	
							system("cls");	
				   		break;

						case 2:
							submenu=0;
							system("cls");	
				    	break;											
						
						default :
					    	topo_tela();
					        erro();
					        sleep(2);
					        system("cls");
			        	break;
		        	
					}
        }
   		
			case 2:
	    	while(submenu==2){
				topo_tela();
		        printf(" \n\n\n\n\t\t\t\t\t\t  Menu De Estoque:");
		        printf(" \n\n\n\n\t  1) Incluir Produto");
        		printf(" \n\n\n\n\t  2) Alterar Produto");
        		printf(" \n\n\n\n\t  3) Consultar Estoque");
       			printf(" \n\n\n\n\t  4) Eliminar Produto");
       			printf(" \n\n\n\n\t  5) Sair");
       			printf(" \n\n\t  Sua Opção: ");
       			scanf("%d",&menu_estoque);
       			system("cls");
       				
       				switch(menu_estoque){
       					
       					case 1:
							topo_tela();
				        	printf(" \n\n\n\n\t\t\t\t\t\t  Incluir Produtos:");
							printf(" \n\n\n\n\t  1) Lacticínios");
		        			printf(" \n\n\n\n\t  2) Carnes");
		        			printf(" \n\n\n\n\t  3) Produtos Naturais");
		       				printf(" \n\n\n\n\t  4) Temperos");
							printf(" \n\n\n\n\t  5) Refrigerantes");
							printf(" \n\n\n\n\t  6) Sair");
		       				printf(" \n\n\t  Sua Opção: ");
							scanf("%d",&incluir_produtos);					      	
				        	system("cls");
		        		switch(incluir_produtos){
		        			
		        			case 1:
		        				topo_tela();
		        				printf(" \n\n\n\n\t\t\t\t\t\t  Lacticínios: %d",clt);
		        				printf(" \n\n\n\n\t  1) Nome: ");
						        scanf(" %[^\n]s",&dd[codigo_produto].nomet);
				        		printf(" \n\n\t  2) Quantidade em gramas: ");
				        		scanf(" %d",&dd[codigo_produto].qt_gramast);
				        		printf(" \n\n\t  3) validade: ");
				        		scanf(" %d",&dd[codigo_produto].validadet);
				        		printf(" \n\n\t  4) Valor do produto: ");
				        		scanf(" %d",&dd[codigo_produto].valort);
				        		printf(" \n\n\t  5) Codigo do Produto: ");
				        		printf("%d",codigo_produto);
				        		codigo_produto++;
				        		clt++;
				        		sleep(2);
						        system("cls");
						        topo_tela();
						        printf(" \n\n\n\n\t\t\t\t\t\t  Produto incluido com sucesso");
						        system("cls");
		        				
		        				
							break;
							
							case 2:
		        				topo_tela();
		        				printf(" \n\n\n\n\t\t\t\t\t\t  Carnes: %d",ccn);
		        				printf(" \n\n\n\n\t  1) Nome: ");
						        scanf(" %[^\n]s",&dd[codigo_produto].nomet);
				        		printf(" \n\n\t  2) Quantidade em gramas: ");
				        		scanf(" %d",&dd[codigo_produto].qt_gramast);
				        		printf(" \n\n\t  3) validade: ");
				        		scanf(" %d",&dd[codigo_produto].validadet);
				        		printf(" \n\n\t  4) Valor do produto: ");
				        		scanf(" %d",&dd[codigo_produto].valort);
				        		printf(" \n\n\t  5) Codigo do Produto: ");
				        		printf("%d",codigo_produto);
				        		codigo_produto++;
				        		ccn++;
				        		sleep(2);
						        system("cls");
						        topo_tela();
						        printf(" \n\n\n\n\t\t\t\t\t\t  Produto incluido com sucesso");
						        sleep(2);
						        system("cls");
		        				
							break;
							
							case 3:
		        				topo_tela();
		        				printf(" \n\n\n\n\t\t\t\t\t\t  Produtos Naturais: %d",cpn);
		        				printf(" \n\n\n\n\t  1) Nome: ");
						        scanf(" %[^\n]s",&dd[codigo_produto].nomet);
				        		printf(" \n\n\t  2) Quantidade em gramas: ");
				        		scanf(" %d",&dd[codigo_produto].qt_gramast);
				        		printf(" \n\n\t  3) validade: ");
				        		scanf(" %d",&dd[codigo_produto].validadet);
				        		printf(" \n\n\t  4) Valor do produto: ");
				        		scanf(" %d",&dd[codigo_produto].valort);
				        		printf(" \n\n\t  5) Codigo do Produto: ");
				        		printf("%d",codigo_produto);
				        		codigo_produto++;
				        		cpn++;
				        		sleep(2);
						        system("cls");
						        topo_tela();
						        printf(" \n\n\n\n\t\t\t\t\t\t  Produto incluido com sucesso");
						        sleep(5);
						        system("cls");
		        				
							break;
							
							case 4:
		        				topo_tela();
		        				printf(" \n\n\n\n\t\t\t\t\t\t  Temperos %d",ctp);
		        				printf(" \n\n\n\n\t  1) Nome: ");
						        scanf(" %[^\n]s",&dd[codigo_produto].nomet);
				        		printf(" \n\n\t  2) Quantidade em gramas: ");
				        		scanf(" %d",&dd[codigo_produto].qt_gramast);
				        		printf(" \n\n\t  3) validade: ");
				        		scanf(" %d",&dd[codigo_produto].validadet);
				        		printf(" \n\n\t  4) Valor do produto: ");
				        		scanf(" %d",&dd[codigo_produto].valort);
				        		printf(" \n\n\t  5) Codigo do Produto: ");
				        		printf("%d",codigo_produto);
				        		codigo_produto++;
				        		ctp++;
				        		sleep(2);
						        system("cls");
						        topo_tela();
						        printf(" \n\n\n\n\t\t\t\t\t\t  Produto incluido com sucesso");
						        sleep(5);
						        system("cls");
		        				
							break;
							
							case 5:
		        				topo_tela();
		        				printf(" \n\n\n\n\t\t\t\t\t\t  Refrigerantes: %d",cref);
		        				printf(" \n\n\n\n\t  1) Nome: ");
						        scanf(" %[^\n]s",&dd[codigo_produto].nomet);
				        		printf(" \n\n\t  2) Quantidade em ML: ");
				        		scanf(" %d",&dd[codigo_produto].qt_gramast);
				        		printf(" \n\n\t  3) validade: ");
				        		scanf(" %d",&dd[codigo_produto].validadet);
				        		printf(" \n\n\t  4) Valor do produto: ");
				        		scanf(" %d",&dd[codigo_produto].valort);
				        		printf(" \n\n\t  5) Codigo do Produto: ");
				        		printf("%d",codigo_produto);
				        		codigo_produto++;
				        		cref++;
				        		sleep(2);
						        system("cls");
						        topo_tela();
						        printf(" \n\n\n\n\t\t\t\t\t\t  Produto incluido com sucesso");
						        sleep(5);
						        system("cls");
						        
		        			
							break;
							
							case 6:
							break;
							
							default:
		        				topo_tela();
			       				erro();
			        			sleep(2);
			        			system("cls");
							break;
							
		        			
		        			
						}
		        		
						break;
						
						case 2:
							topo_tela();
				        	printf(" \n\n\n\n\t\t\t\t\t\t  Alterar Produtos:");
				        	if(codigo_produto<=0){
				        		printf(" \n\n\n\n\t\t\t\t\t\t  Não há produtos em estoque");
				        		sleep(4);
							}else{
				        		for(i=0;i<=codigo_produto-1;i++){
				        			printf("\n\n\t%d] %s",i,dd[i].nomet);
								}
								printf("\n\nDigite o codigo do produto a ser alterado: ");
								scanf("%d",&i);
									if(i>codigo_produto){
										topo_tela();
										erro();
									}else{
										topo_tela();
										printf(" \n\n\n\n\t\t\t\t\t\t  Alterar Produto: %s",dd[i].nomet);
										printf(" \n\n\n\n\t  1) Nome: ");
						       			scanf(" %[^\n]s",&dd[i].nomet);
				        				printf(" \n\n\t  2) Quantidade em gramas: ");
						        		scanf(" %d",&dd[i].qt_gramast);
						        		printf(" \n\n\t  3) validade: ");
						        		scanf(" %d",&dd[i].validadet);
						        		printf(" \n\n\t  4) valor: ");
						        		scanf(" %d",&dd[i].valort);
						        		printf(" \n\n\t  5) Codigo do Produto: ");
						        		printf("%d",codigo_produto);
										system("cls");
										topo_tela();
										printf(" \n\n\n\n\t\t\t\t\t\t  Produto alterado com sucesso");
										system("cls");
										sleep(2);
									}
							}
							system("cls");	
						break;
						
						case 3:
							topo_tela();
				        	printf(" \n\n\n\n\t\t\t\t\t\t  Consultar Estoque:");
				        	if(codigo_produto<=0){
				        		printf(" \n\n\n\n\t\t\t\t\t\t  Não há produtos em estoque");
				        		sleep(4);
							}else{
				        	for(i=0;i<=codigo_produto-1;i++){
				        			printf("\n\n\t%d] %s",i,dd[i].nomet);
								}
							printf("\n\nDigite o codigo do produto a ser alterado: ");
								scanf("%d",&i);
									if(i>codigo_produto){
										topo_tela();
										erro();
									}else{
										topo_tela();
										printf("\n\n\t\t 1)Nome: %s",dd[i].nomet);
										printf("\n\n\t\t 2)Quantidade: %d",dd[i].qt_gramast);
										printf("\n\n\t\t 3)Validade: %d",dd[i].validadet);
										printf("\n\n\t\t 3)Valor: %d",dd[i].valort);
										printf("\n\n\t\t 5)Código do produto:%d",i);
										printf("\n\n\t\t 6)sair?(S)");
										scanf("%c",&fim);
										system("cls");
										
										if(fim=='s'){
											menu_estoque==0;
											system("cls");
										}else{
											topo_tela();
									        erro();
									        sleep(2);
									        submenu=2;
									        system("cls");
										}
										
									}
								}
							system("cls");	
						break;
						
						case 4:
							topo_tela();
				        	printf(" \n\n\n\n\t\t\t\t\t\t  Debitar Produto:");
				        	if(codigo_produto<=0){
				        		printf(" \n\n\n\n\t\t\t\t\t\t  Não há produtos em estoque");
				        		sleep(4);
				        		system("cls");
							}else{
				        	for(i=0;i<=codigo_produto-1;i++){
				        			printf("\n\n\t%d] %s",i,dd[i].nomet);
								}
							printf("\n\nDigite o codigo do produto a ser debitado: ");
								scanf("%d",&i);
									if(i>codigo_produto){
										topo_tela();
										erro();
										system("cls");
									}else{
										printf("\n\nDigite a quantidade a ser debitada do produto: ");
										scanf("%d",&debito);
										qt_=dd[i].qt_gramast;
										valor_=dd[i].valort;
										valor_=valor_/qt_;
										valor_=debito*valor_;
										gastos=valor_;
										dd[i].qt_gramast==qt_-debito;
									}	
								
							}
							sleep(2);
							system("cls");	
						break;
						
						case 5:
							submenu=0;
							system("cls");	
				    	break;	

						default:
					    	topo_tela();
					        erro();
					        sleep(2);
					        submenu=2;
					        system("cls");
			       		break;
					   }
			system("cls");	
        	break;
        }
			case 3:
    		while(submenu==3){
    			system("cls");
				topo_tela();
		        printf(" \n\n\n\n\t\t\t\t\t\t  Menu De Relatorios:");
		        printf(" \n\n\n\n\t  1) Relatorio de Vendas");
        		printf(" \n\n\n\n\t  2) Relatorio de Percas");
        		printf(" \n\n\n\n\t  3) Relatorio de Produtos mais vendidos");
        		printf(" \n\n\n\n\t  4) Relatorio de Opinioes");
       			printf(" \n\n\n\n\t  5) Sair");
       			printf(" \n\n\t  Sua Opção: ");
				scanf("%d",&menu_relatorio);
       			system("cls");
       				
       				switch(menu_relatorio){
       					
       					case 1:
							topo_tela();
				        	printf(" \n\n\n\n\t\t\t\t\t\t  Relatorio de Vendas:");
				        	printf(" \n\n\n\n\t  1) Total de pedidos: %d ",iv);
				        		for(i=0;i<=iv;i++){
						    		total_diario=total_diario+venda_dia[i];
								}
		        			printf(" \n\n\n\n\t  2) Valor De vendas Diarias: R$ %d,00 ",total_diario);
		        			printf(" \n\n\n\n\t  3) Valor De vendas Mensal: R$ %d,00 ",renda);
		       				printf(" \n\n\n\n\t   ) Deseja Sair(s)?");
		       				scanf(" %c",&fim);
		       				if(fim=='s'){
		       					total_diario=0;
		       					menu_relatorio=0;
								submenu=3;
							   }
								
						break;
						
						case 2:
							topo_tela();
				        	printf(" \n\n\n\n\t\t\t\t\t\t  Relatorio de Percas:");
				        	printf(" \n\n\n\n\t  1) Pedidos cancelados: %d",cancelamentos);
		        			printf(" \n\n\n\n\t  2) Valor total em perdas: R$ %d,00 ",total_cancelamentos);
							printf(" \n\n\n\n\t  3) Valor gasto em produtos: R$ %d,00 ",gastos);		        			
		        			
		        			
		       				printf(" \n\n\n\n\t   ) Sair(S)");
		       				scanf(" %c",&fim);
		       				if(fim=='s'){
		       					total_diario=0;
		       					menu_relatorio=0;
								submenu=3;
							   }
								
						break;
						
						case 3:
							topo_tela();
				        	printf(" \n\n\n\n\t\t\t\t\t  Relatorio de Produtos mais vendidos:");
							printf(" \n\n\n\n\t  1) Pizza mais vendida: ");
								for(i=-1;i<=iv;i++){
									if(cont_pizza[i]>pizza_top){
										pizza_top=cont_pizza[i];
										i_pizza_top=i;
										}
									}
									if(i_pizza_top==1){
										printf("Calabresa");
									}else{
										if(i_pizza_top==2){
											printf("4 Queijos");
										}else{
											if(i_pizza_top==3){
												printf("Moda da Casa");
											}else{
												if(i_pizza_top==4){
													printf("Portuguesa ");
												}else{
													if(i_pizza_top==5){
														printf("Frango com catupiry");
													}else{
														if(i_pizza_top==6){
															printf("Vegetariana");
														}else{
															if(i_pizza_top==7){
																printf("Carne seca");
															}else{
																if(i_pizza_top==8){
																	printf("Napolitana");
																}else{
																	printf("Não houve");
																}
															}
														}
													}
												}
											}
										}
									}				
		        			printf(" \n\n\n\n\t  2) Bebida mais vendida: ");
		        				for(i=0;i<=iv;i++){
									if(cont_bebida[i]>bebida_top){
										bebida_top=cont_bebida[i];
										i_bebida_top=i;
										}
									}
									if(i_bebida_top==1){
										printf("Lata Coca-cola");
									}else{
										if(i_bebida_top==2){
											printf("Lata Fanta");
										}else{
											if(i_bebida_top==3){
												printf("Lata Guarana");
											}else{
												if(i_bebida_top==4){
													printf("1L Coca-cola ");
												}else{
													if(i_bebida_top==5){
														printf("1L Fanta ");
													}else{
														if(i_bebida_top==6){
															printf("1L Guarana");
														}else{
															printf("Não houve");
																}
															}
														}
													}
												}
											}
		        			printf(" \n\n\n\n\t  3) Acompanhamento mais Vendido: ");
		        				for(i=0;i<=iv;i++){
									if(cont_acpm[i]>acpm_top){
										acpm_top=cont_acpm[i];
										i_acpm_top=i;
										}
									}
									if(i_acpm_top==1){
										printf("Batata frita");
									}else{
										if(i_acpm_top==2){
											printf("Mini pasteis");
										}else{
											if(i_acpm_top==3){
												printf("Torresmo");
											}else{
												if(i_acpm_top==4){
													printf("Batata Frita com Bacon");
												}else{
													if(i_acpm_top==5){
														printf("Linguiça ");
													}else{
														if(i_acpm_top==6){
															printf("Cubinhos de Mussarela");
														}else{
															printf("Não houve");
																}
															}
														}
													}
												}
											}
		        			printf(" \n\n\n\n\t  4) Sobremesa mais Vendida: ");
		        				for(i=0;i<=iv;i++){
									if(cont_sobre[i]>sobre_top){
										sobre_top=cont_sobre[i];
										i_sobre_top=i;
										}
									}
									if(i_sobre_top==1){
										printf("Sorvete");
									}else{
										if(i_sobre_top==2){
											printf("Torta de Chocolate");
										}else{
											printf("Não houve");
											}
										}
		       				printf(" \n\n\n\n\t  5) Sair");
							printf(" \n\n\n\n\t   ) Deseja Sair(s)?");
		       				scanf(" %c",&fim);
		       				if(fim=='s'){
		       					menu_relatorio=0;
								submenu=3;
							   } 	
						break;
						
						case 4:
							topo_tela();
							printf(" \n\n\n\n\t\t\t\t\t  Relatorio de Opniões:");
							for(i=0;i<=op;i++){
								printf("\n\n\n Cliente: %s \n  %s  ", at[i].client, at[i].opniao);
								sleep(1);
								
							}
							scanf("%c",&fim);
							
						break;
						
						
						case 5:
							submenu=0;
							system("cls");	
						break;	

						default:
					    	topo_tela();
					        erro();
					        sleep(2);
					        system("cls");
			       		break;
					   }
				system("cls");	
        	break;
        }
			case 4:
    		if(strcmp(login2,login1)==0){
			while(submenu==4){
				topo_tela();
		        printf(" \n\n\n\n\t\t\t\t\t\t  Menu De Gerenciamento:");
		        printf(" \n\n\n\n\t  1) Cadastro de funcionarios");
       			printf(" \n\n\n\n\t  2) Sair");
       			printf(" \n\n\t  Sua Opção: ");
				scanf("%d",&menu_gerente);
       			system("cls");
       				
       				switch(menu_gerente){
       					
       					case 1:
	       				while(menu_gerente==1){
							topo_tela();
				        	printf(" \n\n\n\n\t\t\t\t\t\t  Cadastro de funcionarios:");
				        	printf(" \n\n\n\n\t  1) Incluir Funcionario");
			        		printf(" \n\n\n\n\t  2) Alterar Funcionario");
			        		printf(" \n\n\n\n\t  3) Consultar Funcionario");
			        		printf(" \n\n\n\n\t  4) Demitir Funcionario");
			       			printf(" \n\n\n\n\t  5) Sair");
			       			printf(" \n\n\t  Sua Opção: ");
							scanf("%d",&menu_cdr);
							system("cls");
							
							switch(menu_cdr){
							
								case 1:
									topo_tela();
									cf++;
							        printf(" \n\n\n\n\t\t\t\t\t\t  Incluir Funcionario");
							        printf(" \n\n\n\n\t  1) Nome: ");
							        scanf(" %[^\n]s",&dados[cf].nome);
					        		printf(" \n\n\t  2) CPF: ");
					        		scanf(" %d",&dados[cf].cpf[cf]);
					        		printf(" \n\n\t  3) Numero de Telefone: ");
					        		scanf(" %d",&dados[cf].telefone[cf]);
					        		printf(" \n\n\t  4) Digite o login: ");
					        		scanf(" %s",&dados[cf].login);
					        		printf(" \n\n\t  5) Digite a senha: ");
					        		scanf(" %d",&dados[cf].senha[cf]);
							        system("cls");
									topo_tela();
									printf("\n\n\n\n\t\t\t\t\tFuncionario cadastrado com sucesso\n\n\n\n");
									printf(" \tNome: %s \n \tCPF: %d \n \tTelefone: %d \n \tLogin: %s \n \tSenha: %d \n\tCódigo de Funcionario:%d",dados[cf].nome,dados[cf].cpf[cf],dados[cf].telefone[cf],dados[cf].login,dados[cf].senha[cf],cf);
									sleep(5);
									system("cls");		
										
								break;
							
								case 2:
									topo_tela();
							        printf(" \n\n\n\n\t\t\t\t\t\t  Alterar Funcionario");
							        printf(" \n\n\n\n\t  1) Digite o Código do funcionario: ");
							        scanf(" %d",&pf);
							        	for(i=0;i<=cf;i++){
							        		if(i==pf){
										        printf(" \n\n\n\n\t  0) Funcionario:%s ",dados[i].nome);
												printf(" \n\n\n\n\t  1) Nome: ");
										       	scanf(" %[^\n]s",&dados[i].nome);
								        		printf(" \n\n\t  2) CPF: ");
								        		scanf(" %d[^\n]",&dados[i].cpf[i]);
								        		printf(" \n\n\t  3) Numero de Telefone: ");
								        		scanf(" %d",&dados[i].telefone[i]);
								        		printf(" \n\n\t  4) Digite o login: ");
								        		scanf(" %s",&dados[i].login);
								        		printf(" \n\n\t  5) Digite a senha: ");
								        		scanf(" %d",&dados[i].senha[i]);
								        		topo_tela();
								        		printf("\n\n\n\n\t\t\t\t\tFuncionario alterado com sucesso\n\n\n\n");
								        		system("cls");
											}
										}
							        pf=0;
							        sleep(2);
							        system("cls");		
										
								break;
							
							case 3:
								topo_tela();
						        printf(" \n\n\n\n\t\t\t\t\t\t  Consultar Funcionario");
						        printf(" \n\n\n\n\t  1) Total de funcionarios cadastrados:%d",cf);
						        	for(i=0;i<=cf;i++){
						        		printf("\n\t  %i] Funcionario :%s ",i,dados[i].nome);
									}
								printf(" \n\n\n\n\t  2) Deseja Visualizar a Ficha completa de algum funcionario?(S/N)");	
								scanf(" %c",&fim);
								system("cls");
									if(fim=='s'){
										topo_tela();
										printf(" \n\n\n\n\t  1) Digite o Código do funcionario: ");
										scanf(" %d",&pf);
										system("cls");
										if(pf>cf){
											topo_tela();
											erro();
											menu_cdr=5;
											}else{
												if(pf==0){
													topo_tela();
													printf(" \n\n\n\n\t  Você precisa saber suas próprias informações? ");
													sleep(5);
													}else{
														for(i=0;i<=cf;i++){
											        		if(i==pf){
											        			topo_tela();
														        printf("\n\n\n \tNome: %s \n \tCPF: %d \n \tTelefone: %d \n \tLogin: %s \n \tSenha: %d \n\tCódigo de Funcionario:%d",dados[i].nome,dados[i].cpf[i],dados[i].telefone[i],dados[i].login,dados[i].senha[i],i);
														        sleep(5);
															}else{
																topo_tela();
																erro();
																system("cls");
															}	
														}
														system("cls");	
													}
												system("cls");		
											}
										}else{
											menu_gerente=0;
											system("cls");
										}
						        
						        sleep(2);
						        system("cls");		
							
							break;
							
							case 4:
								topo_tela();
						        printf(" \n\n\n\n\t\t\t\t\t\t  Demitir Funcionario");
						        printf(" \n\n\n\n\t  1) Digite o Código do funcionario: ");
						        scanf(" %d",&pf);
						        system("cls");
							        if(pf==0){
							        	topo_tela();
										printf(" \n\n\n\n\t\t\t\t\t\t  Você não pode se demitir ");
										sleep(3);
										system("cls");	
									}else{
							        	if(pf>cf){
							        		topo_tela();
							        		erro();
										}else{
											for(i=0;i<=cf;i++){
												if(i==pf){
													topo_tela();
													printf(" \n\n\n\n\t\t\t\t\t\t  Demitir Funcionario: %s?(S/N)",dados[i].nome);
													scanf(" %c",&fim);
													system("cls");
													if (fim=='s'){
														strcpy(dados[i].nome, apagado);
														strcpy(dados[i].login, apagado);
														dados[i].telefone[i]=0;
														dados[i].senha[i]=0;
														dados[i].cpf[i]=0;
														topo_tela();
														printf(" \n\n\n\n\t\t\t\t\t\t  Demitido com sucesso ");
														sleep(5);
														system("cls");
														submenu=4;
													}else{
														menu_gerente=5;
														system("cls");
													}
												}
											}
										}
							    	}
							    	submenu=4;
									menu_gerente=0;
							        system("cls");		
							break;
							
							case 5:
								submenu=4;
								menu_gerente=0;
						        system("cls");
									
							break;
							
							default:
						    	topo_tela();
						        erro();
						        menu_gerente=1;
						        sleep(2);
						        system("cls");
				       		break;	
						}
					}
						case 2:
							submenu=0;
							menu_gerente=0;
							system("cls");	
				    	break;	

						default:
					    	topo_tela();
					        erro();
					        sleep(2);
					        system("cls");
			       		break;
			    }
					   }
				}else{
	   				topo_tela();
					printf(" \n\n\n\n\t\t\t\t\t\t Você Não tem autorização");
			}
				system("cls");	
        	break;
        	
        	case 5:
        		topo_tela();
        		printf(" \n\n\n\n\n\n\n\n\n\t\t\t\t\t\t  Obrigado e até a proxima :) \n\n\n\n\n\n");
        		system("PAUSE");
   				return 0;
			break;
			
        	
        	default :
		    	topo_tela();
		        erro();
		        sleep(2);
		        system("cls");
        	break;    	
        	
		}
        sleep(2);
    }
    system("PAUSE");
    return 0;
}
	int topo_tela(){
		printf("************************************************************************************************************************\n");
		printf("\t\t\t\t\t\t MARCCIELLO PIZZARIA "); 
}
	int erro(){
	printf(" \n\n\n\n\t\t\t\t\t\t  Você Digitou Uma opção invalida");
}
