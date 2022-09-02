#pragma once
struct Poligonos
{
	double areatria(int trian1, int trian2)
	{
		int resultado1;

		resultado1 = (trian1 * trian2) / 2;
		return resultado1;

	}
	double peritria(int trian1)
	{
		int resultado;
		resultado = trian1 + trian1 + trian1;
		return resultado;
	}
	double pericudri(int cuadri1)
	{
		int resultado;
		resultado = cuadri1 * cuadri1;
		return resultado;
	}
	double areacudri(int cuadri1)
	{
		int resultado;
		resultado = cuadri1 + cuadri1 + cuadri1 + cuadri1;
		return resultado;
	}
	double areapenta(int penta1, int penta2)
	{
		int resultado, peri;
		peri = penta1 * 5;
		resultado = (peri * penta2) / 2;
		return resultado;
	}
	double peripenta(int penta1)
	{
		int resultado;
		resultado = penta1 * 5;
		return resultado;
	}
	double perihexa(int hexa1)
	{
		int resultado;
		resultado = hexa1 * 6;
		return resultado;
	}
	double areahexa(int hexa1, int hexa2)
	{
		int resultado;
		resultado = (hexa1 * hexa2 * 6) / 2;
		return resultado;
	}
	double perihepta(int hep1)
	{
		int resultado;
		resultado = hep1 * 7;
		return resultado;
	}
	double areahepta(int hep1, int hep2)
	{
		int resultado;
		resultado = (7 * hep1 * hep2) / 2;
		return resultado;
	}
	double periocta(int oct1)
	{
		int resultado;
		resultado = oct1 * 8;
		return resultado;
	}
	double areaocta(int oct1, int oct2)
	{
		int resultado;
		resultado = (oct1 * oct1 * 8) / 2;
		return resultado;
	}
	double periene(int ene1)
	{
		int resultado;
		resultado = ene1 * 9;
		return resultado;

	}
	double areaene(int ene1, int ene2)
	{
		int resultado;
		resultado = (ene1 * ene2 * 9) / 2;
		return resultado;
	}
	double perideca(int deca1)
	{
		int resultado;
		resultado = deca1 * 10;
		return resultado;

	}
	double areadeca(int deca1, int deca2)
	{
		int resultado;
		resultado = (deca1 * deca2 * 10) / 2;
		return resultado;
	}
};