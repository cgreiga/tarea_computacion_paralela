#ifndef _crear_matriz_h
#define _crear_matriz_h
#include <iostream>
#include <chrono>
#include <omp.h>
#include <vector>
#include <filesystem>
#include <list>
#include <fstream>
#include <typeinfo>
#include <filesystem>
#include <cmath>


using namespace std;

using MatrixS = vector<vector<int>>;

int** crearMatriz(int rows, int cols, int k) {
    // se pide memoria
    int** matrix = new int* [rows];

    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = (i + k) * (j + k); // se crean datos para las matrices
        }
    }


    return matrix;
}
#endif