/**
* Nunca comparar float con doubles y viceversa debido a la representación 32/64 bits.
* Siempre definir con un epsilon como margen de error.
* Esto ocurre por el casteo. En algo de 32 bits se extenderá a 64 bits ocupando la diferencia con valores que pueden llegar a ser basura.
* Que algo sea infinito en base10 no significa que lo sea en base2.
* printf("%.50f\n", 0.26 - 0.26f);
* 
* 
**/
