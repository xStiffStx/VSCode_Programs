#include <stdio.h>
#include <stdlib.h>

float Calc_precio_ruta(int tipo_ruta, float dis){
    float precio_km;
    switch (tipo_ruta){
	    case 1:
	        precio_km = dis * 0.10;
	        break;
	    case 2:
	        precio_km = dis * 0.15;
	        break;
	    case 3:
	        precio_km = dis * 0.20;
	        break;    
	    default:
	        printf("Tipo de ruta invalido...");
            return 0;
	        break;
    }
    return precio_km;
}

float calcularDescuento(float costoTotal, float dis){
    float descuento =0.0;
    if (dis < 50){
        descuento = 0.0;
    }else if (dis < 100){
        descuento = costoTotal * 0.05;
    }else if (dis < 500) {
        descuento =costoTotal * 0.1;
    }else {
        descuento = costoTotal * 0.2;
    }
    return descuento;
}