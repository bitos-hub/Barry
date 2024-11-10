#pragma once
using namespace System;
namespace Barry {
    [Serializable] public ref class DispensadorDisponible
    {
    public:
        String^ Marca;
        String^ Modelo;
        String^ Color;
        double Largo;
        double Ancho;
        double Alto;
        String^ Capacidad;
        String^ Material;
        String^ FuenteAlimentacion;
        
        DispensadorDisponible(String^ marca, String^ modelo, String^ color, double largo, double ancho, double alto,
            String^ capacidad, String^ material, String^ fuenteAlimentacion) {
            Marca = marca;
            Modelo = modelo;
            Color = color;
            Largo = largo;
            Ancho = ancho;
            Alto = alto;
            Capacidad = capacidad;
            Material = material;
            FuenteAlimentacion = fuenteAlimentacion;
        }
        DispensadorDisponible() {};
    };
}


