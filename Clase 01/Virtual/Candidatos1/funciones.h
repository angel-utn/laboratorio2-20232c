#pragma once

void cargarDatos(int vCandidatos[], int *vMunicipios);
void puntoA(int *vCandidatos, int cantidadCantidatos);
void puntoB(int vMunicipios[], int cantidadMunicipios);

/**
 * Busca el valor más grande dentro del vector y devuelve su índice.
 * @param int[] El vector a buscar el máximo
 * @param int cantidad La cantidad de elementos del vector
 * @returns El índice correspondiente a el valor más grande del vector.
*/
int buscarIndiceMaximo(int vectorBusqueda[], int cantidad);

/**
 * Cuenta cuántos elementos dentro del vector son mayores a valorReferencia
 * @param int El vector de búsqueda
 * @param int La cantidad de elementos del vector
 * @param int El valor de referencia para contabilizar los elementos del vector
 * @returns La cantidad de elementos del vector mayores al valor referencia
*/
int contarMayoresAReferencia(int vectorBusqueda[], int cantidad, int valorReferencia);