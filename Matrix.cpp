#include <iostream>
#include <stdexcept>
#include "Matrix.hpp"
#include <vector>
#include <string>
using namespace std;
using namespace zich;

Matrix::Matrix(vector<double> mat, int row, int col){
    this->col = col;
    this->mat = mat;
    this->row = row;    
}

Matrix Matrix::operator + (Matrix const &mat){return *this;}

// void Matrix::operator += (Matrix const &mat){}

Matrix Matrix::operator + (double const a){return *this;}

Matrix Matrix::operator + (){return *this;}

Matrix Matrix::operator ++ (){return *this;} 

Matrix Matrix:: operator - (Matrix const &mat){return *this;}

void Matrix:: operator -= (Matrix const &mat){}

Matrix Matrix:: operator - (double const a){return *this;}

Matrix Matrix:: operator - (){return *this;}

Matrix Matrix:: operator -- (){return *this;}

Matrix Matrix:: operator * (const Matrix& mat){return mat;}

Matrix Matrix:: operator * (double const &a){return *this;}

void Matrix:: operator *= (double const a){}

bool Matrix:: operator > (Matrix const &mat){
    if(this->col != mat.col || this->row != mat.row){
        throw invalid_argument("Size of matrixes is different");
    }
    return true;}

bool Matrix:: operator >= (Matrix const &mat){
    if(this->col != mat.col || this->row != mat.row){
        throw invalid_argument("Size of matrixes is different");
    }
    return true;}

bool Matrix:: operator < (Matrix const &mat){
    if(this->col != mat.col || this->row != mat.row){
        throw invalid_argument("Size of matrixes is different");
    }
    return true;}

bool Matrix:: operator <= (Matrix const &mat){
    if(this->col != mat.col || this->row != mat.row){
        throw invalid_argument("Size of matrixes is different");
    }
    return true;}

bool Matrix:: operator == (Matrix const &mat){
    if(this->col != mat.col || this->row != mat.row){
        throw invalid_argument("Size of matrixes is different");
    }
    return true;}

bool Matrix:: operator != (Matrix const &mat){
    if(this->col != mat.col || this->row != mat.row){
        throw invalid_argument("Size of matrixes is different");
    }
    return true;}