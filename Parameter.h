#ifndef PARAMETER_H
#define PARAMETER_H

#include <fstream>

class Parameter
{
private:
        int _LatticeSize, _ParticleNo, _SweepNo;
        int _D;
public:

        double Energy;
        const int& LatticeSize()const{return _LatticeSize;};
        const int& ParticleNo()const{return _ParticleNo;};
        const int& D()const{return _D;};
        const int& SweepNo()const{return _SweepNo;};

        Parameter(){};
        Parameter(const Parameter& para):
        _LatticeSize(para._LatticeSize),
        _ParticleNo(para._ParticleNo),
        _D(para._D),
        _SweepNo(para._SweepNo)
        {};


        const Parameter& operator=(const Parameter& para)
        {
                _LatticeSize=para._LatticeSize;
                _ParticleNo=para._ParticleNo;
                _D=para._D;
                _SweepNo=para._SweepNo;
        }

        ~Parameter(){};

        Parameter(const int& size, const int& num, const int& dimension, const int& sweep):
        _LatticeSize(size),
        _ParticleNo(num),
        _D(dimension),
        _SweepNo(sweep)
        {Energy=0;};
        void changepara(const int& size, const int& num, const int& dimension, const int& sweep)
        {
                _LatticeSize=size;
                _ParticleNo=num;
                _D=dimension;
                _SweepNo=sweep;
        };
};




#endif // PARAMETER_H

