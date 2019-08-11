#include "LibroCalificaciones.h"

/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
 *
 *    Description:  Clase de Libro Calificaciones
 *
 *        Created:  2019-08-05
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
LibroCalificaciones::LibroCalificaciones() {}

LibroCalificaciones::LibroCalificaciones(float monto) : monto(monto) {}

int LibroCalificaciones::CalcularTiempoEnMeses(std::string tiempoTXT) {
    return 0;
}

float LibroCalificaciones::obtenerPorcentaje(std::string porcentajeTXT) {
    return 0;
}

float LibroCalificaciones::calcularInteresMensual(float balance, float tasaAnual) {
    return 0;
}

float LibroCalificaciones::getMonto() const {
    return monto;
}

void LibroCalificaciones::setMonto(float monto) {
    LibroCalificaciones::monto = monto;
}

string LibroCalificaciones::reportCalculoPrestamos(std::string tiempoTXT, std::string porcentajeTXT) {
    return std::__cxx11::string();
}
