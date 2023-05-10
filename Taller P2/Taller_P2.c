#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Operaciones_taller.h"

// Users y pass definidos
#define max_users 3
#define max_longitud_user 20
#define max_longitud_contra 20

int main(){
    int resultado_login = Login();
    if (resultado_login == 0){
       menu(); 
    }
    return 0;
}
