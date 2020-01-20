//**************************************************************************
// Practica 1
//
// SERGIO AGUILERA RAMÍREZ  Grupo: A3
//
//**************************************************************************
#include "tetrahedron.h"

////// COONSTRUCTOR DE TETRAHEDRON ////////////////

 tetrahedron::tetrahedron(){

     triangulos = { { 0, 1, 3 }, { 1, 2, 3 },
                  { 2, 0, 3 }, { 0, 2, 1 },
                } ;

     vertices =  {  { -0.5, -0.5, -0.5 }, 
                  { 0, -0.5, +0.5 }, 
                  { +0.5, -0.5, -0.5 }, 
                  { 0, +0.5, 0 }, 
               };

               //divide lados pares e impares con sus respectivos colores
               IndicarColorAjedrez();

  }