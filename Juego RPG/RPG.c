#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>


int main() {
    int vida = 200; 
    int sit1 , sit2, pos1, pos2, ataque;
    char nombre[50];
    char opcion;
    char armas;

    do { // 1er menú
        printf("\n--- JUEGO RPG ---\n");
        printf("a. Iniciar\n");
        printf("b. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%c", &opcion);
        getchar();
        

        switch (opcion){
            case 'a':
            	printf("Bienvenido al Juego\n");
				printf("Inserte el nombre de su personaje: ");
				gets(nombre);
				system("cls");
				printf("El nombre de su personaje es %s\n", nombre);
				printf("Seleccione el arma que llevara su personaje");
				printf("\n1.Espada (dano 40)");
				printf("\n2.Arco   (dano 30)");
				printf("\n3.Hacha (dano 35)");
				printf("\nSeleccione su arma(1-3): ");
				scanf("%d", &armas);
				system("cls");
				switch(armas){
					case 1:
						ataque = 40;
						printf("\nSeleccionaste la espada\n");
						printf("\nSu daño es de %d\n", ataque);
					break;
					case 2:
						ataque = 30;
						printf("\nnSeleccionaste el arco");
						printf("\nSu dano es de %d\n", ataque);
					break;
					case 3:
						ataque = 35;
						printf("\nnSeleccionaste el Hacha");
						printf("\nSu danoño es de %d\n", ataque);
					break;
					default:
						printf("\nArma invalida, Se termino el juego");		
				}
				
				system("cls");
				printf("\n");
				printf("\nInician los Juegos del Hambre\n");
				printf("\n  Bienvenido a la Masacre %s\n", nombre);
				printf("\n");
				
				srand(time(NULL));
				sit1 = rand() %5+1; 
			 	do{
				sit2 = rand() %5+1;
			  	}while (sit1==sit2);
			  	
			  	switch(sit1){ 
			  		case 1:
			  			system("cls");
			  			printf("Te sorprende el Demonio de Tasmania");
			            printf("Que quieres hacer?\n");
			            printf("1.Correr por tu vida\n");
			            printf("2.Enfrentarlo\n");
			            scanf("%d",&pos1);
						switch(pos1){ 
							case 1:
								printf("Al intentar correr \n");
					            printf("El demonio te alcanza y te embiste\n");
								vida -= 25;
								printf("Te quedan %d puntos de vida",vida);
							break;
							case 2:
								printf("Al enfrentarlo saliste golpeado pero victorioso\n");
								vida -=10;
								printf("Te quedan %d puntos de vida\n", vida);
							break;
						}
					break;
					case 2: 
					    system("cls");
						printf("Se presenta Goofy\n");
			            printf("Que procede?\n");
			            printf("1.Pegarle un izquierdazo\n");
			            printf("2.Llamar a Ochurus\n");
						scanf("%d",&pos1);
						switch(pos1){
							case 1:
								printf(" Te golpea con su Oreja derecha\n");
								printf(" Y te golpea por Bblon\n");
								ataque -= 20;
								printf("Te quedan %d puntos de vida\n", vida);
							break;
							case 2:
								printf("\nSale la Mouseke herramienta misteriosa\n");
								printf("\nGanas 30 puntos de vida\n");
								vida +=30;
								printf("Te quedan %d puntos de vida\n", vida);
							break;
						}
					break;
					case 3:
					    system("cls"); 
						printf("Te ecuentras con RUGAL\n");
			            printf("Que quieres hacer?\n");
			            printf("1.Sacar un oculto\n");
			            printf("2.Teletransportarte\n");
			            scanf("%d",&pos1);
						switch(pos1){
							case 1:
								if(ataque >= 40 ){
									printf("Derrotas a Rugal y sacas historia\n");
								}else{
									vida -=20;
									printf("No logras matar a Rugal y pierdes puntos de vida\n");
									printf("Te quedan %d puntos de vida\n", vida);
								}	
							break;
							case 2:
								printf("\nAl Teletransportarte\n");
								printf("\nPierdes 10 puntos de vida\n");
								vida -=10;
								printf("Te quedan %d puntos de vida\n", vida);
							break;
						}
					break;
					case 4: 
						system("cls");
						printf("\nTe adentras en tu armario\n");
						printf("\nRepentinamente, sales a NARNIA \n");
			            printf("1.Te enfrentas a la Mancha andante\n");
			            printf("2.Te enfrentas a la Transparentosa\n");
						scanf("%d",&pos1);
						switch(pos1){
							case 1:
								if(ataque >= 40 ){
									printf("Logras derrotar a la Mancha andante y se aleja la oscuridad \n");
									printf("\nRecuperas 20 de vida\n");
									vida +=20;
								}else{
									vida -=20;
									printf("No logras derrotar a la Mancha andante y te transmite su oscuridad\n");
									printf("Te quedan %d puntos de vida\n", vida);
								}	
							break;
							case 2:
								vida -=20;
									printf("La Transparentosa te contagia su enfermedad\n");
									printf("Te quedan %d puntos de vida\n", vida);
							break;
						}
					break;
					case 5:
						system("cls");
						printf("\nTe encuentras a Frinky\n");
			            printf("\nY se te pega su demencia\n");
			            printf("\nPor lo que te toca pelear con los chapas\n");
			            printf("\nQue quieres hacer?\n");
			            printf("1.Decirles: Quieto ahi CTM \n");
			            printf("2.Afrontar a los chapas\n");
						scanf("%d",&pos1);
						switch(pos1){
							case 1:
								printf("Al Decirles: Quieto ahi CTM\n");
								printf("Logras asustarlos pero te detienen\n");
								vida -= 80;
								printf("Te quedan %d puntos de vida\n", vida);
							break;
							case 2:
								printf("\nAl afrontar a los chapas\n");
								printf("\nMatas al jefe sin recibir nada de daño");	
							break;
						}
					break;
				  }
				  
				// segunda alternativa
				switch(sit2){
			  		case 1:
			  			system("cls");
						printf("Te encuentras con una Pandilla \n");
			            printf("\nQue decides hacer?\n");
			            printf("1.Huir\n");
			            printf("2.Defenderte\n");
						scanf("%d",&pos2);
						switch(pos2){
							case 1:
								printf("Huyes con exito\n");
							break;
							case 2:
								if(ataque >= 40 ){
									printf("Logras derrotar a un integrante pero sales malherido 10 de daño\n");
									printf("Te quitan 35 puntos de vida");
									vida -=35;
									printf("Te quedan %d puntos de vida\n", vida);
								}else{
									vida -=190;
									printf("No logras defenderte, te infringen 190 de daño\n");
									printf("Te quedan %d puntos de vida\n", vida);
								}	
							break;
						}
					break;
					case 2:
						system("cls");
						printf("Entras a una selva\n");
			            printf("\nQue decides hacer?\n");
			            printf("1.Acampar\n");
			            printf("2.Explorar\n");
						scanf("%d",&pos2);
						switch(pos2){
							case 1:
								printf("Al acamapar, consigues un desayuno gold y ganas puntos de Vida\n");
								vida += 20;
								printf("Tu vida ahora es de %d\n",vida);
							break;
							case 2:
								printf("Al explorar, te pierdes\n");
			            		printf("Y te pica una arana venenosa\n");
								printf("\nPierdes 60 puntos de vida por veneno\n");
								vida -=60;
								printf("Te quedan %d puntos de vida\n", vida);
							break;
						}
					break;
					case 3:
						system("cls");
						printf("Te encuentras en un Camal\n");
			            printf("\nQue decides hacer?\n");
			            printf("1.Alimentar a las vacas\n");
			            printf("2.Sacrificarlas\n");
						scanf("%d",&pos2);
						switch(pos2){
							case 1:
								printf("\nAl entrar al Camal, alimetas a las vacas\n");
			            		printf("\nPero las vacas se enferman\n");
			            		vida -= 80;
								printf("Tienes %d puntos de Vida\n", vida);
							break;
							case 2:
								printf("\nPor sacrificarlas\n");
			            		printf("\nY no hacerlas sufrir ganas puntos de vida\n");
			            		vida += 10;
								printf("Tienes %d puntos de HP\n", vida);
							break;
						}
					break;
					case 4:
						system("cls");
					    printf("Vas manejando tu Buggy\n");
			            printf("\nQue haces?\n");
			            printf("1.Acelerar a tope para transmutar al futuro\n");
			            printf("2.Ir en reversa para ir al pasado\n");
						scanf("%d",&pos2);
						switch(pos2){
							case 1:
								printf("\nTe encuentras a terminators\n");
			            		printf("\nY sacas tu arma para enfrentarlos\n");
			            		printf("\nPor lo que pierdes vida\n");
			            		vida -= 50;
								printf("Tienes %d puntos de vida\n", vida);
							break;
							case 2:
								printf("\nAl llegar al pasado\n");
			            		printf("\nLos policias te detienen\n");
			            		printf("\nTienes que enfrentarlos con tu Gun por corruptos\n");
			            		vida -= 45;
								printf("Tienes %d puntos de HP\n", vida);
							break;
						}
					break;
					case 5:
						system("cls");
						printf("Repentinamente llegas al mundo de Tinker bell\n");
			            printf("\nQue haces?\n");
			            printf("1.Cuadrarte al monje misterioso\n");
			            printf("2.Sacartela por la Tan\n");
						scanf("%d",&pos2);
						switch(pos2){
							case 1:
								printf("\nAl pelearte con el monje\n");
			            		printf("\nSales perjudicado pero no pierdes vida\n");
							break;
							case 2:
								printf("\nYa que te la sacas\n");
			            		printf("\nY no peleas con tu Gun, te restamos puntos de vida\n");
			            		vida -= 25;
								printf("Tienes %d puntos de vida\n", vida);
							break;
						}
					break;
				  }
				if (vida >= 1){
				 printf("\nAcabas de ganar el juego BEBELYN \n");
				}else {
			 		printf ("\nAcabas de perder\n"); 
			  	}
               
            break;
            case 'b':
            	
                printf("Saliendo del programa...\n");
                break;  
            default:
                printf("Opcion no valida. Intente nuevamente.\n");
                break;    
		}getchar();
	}while(opcion != 'b');
    return 0;
}