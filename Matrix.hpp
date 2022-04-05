#include <iostream>
using namespace std;
#include <vector>
#pragma once

namespace zich{
    class Matrix{
    public:
        int row, col;
        vector<double> mat;
        Matrix(vector<double> mat, int row, int col);
        Matrix operator + (Matrix const &mat);
        void operator += (Matrix const &mat);
        Matrix operator + (double const a);
        Matrix operator + ();
        Matrix operator ++ ();

        Matrix operator - (Matrix const &mat);
        void operator -= (Matrix const &mat);
        Matrix operator - (double const a);
        Matrix operator - ();
        Matrix operator -- ();

        Matrix operator * (Matrix const &mat);
        Matrix operator * (double const &a);

        void operator *= (double const a);

        bool operator > (Matrix const &mat);
        bool operator >= (Matrix const &mat);
        bool operator < (Matrix const &mat);
        bool operator <= (Matrix const &mat);
        bool operator == (Matrix const &mat);
        bool operator != (Matrix const &mat);
    
        friend Matrix operator* (double num, Matrix const &mat);
    };

    inline Matrix operator* (double num, Matrix const &mat){return mat;}

    inline ostream& operator << (ostream &out, const Matrix &mat){
            out << "Stam Mashu" << endl;
            return out;
        }

    inline istream& operator >> (istream &in, Matrix *mat){
            in >> mat->col >> mat->row;
            return in;
        }
};


