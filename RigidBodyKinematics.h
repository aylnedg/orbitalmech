/*
 *  RigidBodyKinematics.h
 *
 *
 *  Created by Hanspeter Schaub on Thu Nov 10 2005.
 *  Copyright (c) 2005 Hanspeter Schaub. All rights reserved.
 *
 */
#include <stdio.h>
#include <math.h>
#include "vector3D.h"

#ifndef RIGIDBODYKINEMATICS
#define RIGIDBODYKINEMATICS

#ifdef __cplusplus
extern "C"  {
#endif

    void addEP(double *, double *, double *);
    void addEuler121(double *, double *, double *);
    void addEuler123(double *, double *, double *);
    void addEuler131(double *, double *, double *);
    void addEuler132(double *, double *, double *);
    void addEuler212(double *, double *, double *);
    void addEuler213(double *, double *, double *);
    void addEuler231(double *, double *, double *);
    void addEuler232(double *, double *, double *);
    void addEuler312(double *, double *, double *);
    void addEuler313(double *, double *, double *);
    void addEuler321(double *, double *, double *);
    void addEuler323(double *, double *, double *);
    void addGibbs(double *, double *, double *);
    void addMRP(double *, double *, double *);
    void addPRV(double *, double *, double *);
    void BinvEP(double *q, double B[4][5]);
    void BinvEuler121(double *q, double B[4][4]);
    void BinvEuler123(double *q, double B[4][4]);
    void BinvEuler131(double *q, double B[4][4]);
    void BinvEuler132(double *q, double B[4][4]);
    void BinvEuler212(double *q, double B[4][4]);
    void BinvEuler213(double *q, double B[4][4]);
    void BinvEuler231(double *q, double B[4][4]);
    void BinvEuler232(double *q, double B[4][4]);
    void BinvEuler312(double *q, double B[4][4]);
    void BinvEuler313(double *q, double B[4][4]);
    void BinvEuler321(double *q, double B[4][4]);
    void BinvEuler323(double *q, double B[4][4]);
    void BinvGibbs(double *q, double B[4][4]);
    void BinvMRP(double *q, double B[4][4]);
    void BinvPRV(double *q, double B[4][4]);
    void BmatEP(double *q, double B[5][4]);
    void BmatEuler121(double *q, double B[4][4]);
    void BmatEuler131(double *q, double B[4][4]);
    void BmatEuler123(double *q, double B[4][4]);
    void BmatEuler132(double *q, double B[4][4]);
    void BmatEuler212(double *q, double B[4][4]);
    void BmatEuler213(double *q, double B[4][4]);
    void BmatEuler231(double *q, double B[4][4]);
    void BmatEuler232(double *q, double B[4][4]);
    void BmatEuler312(double *q, double B[4][4]);
    void BmatEuler313(double *q, double B[4][4]);
    void BmatEuler321(double *q, double B[4][4]);
    void BmatEuler323(double *q, double B[4][4]);
    void BmatGibbs(double *q, double B[4][4]);
    void BmatMRP(double *q, double B[4][4]);
    void BmatPRV(double *q, double B[4][4]);
    void C2EP(double C[4][4], double b[5]);
    void C2Euler121(double C[4][4], double *q);
    void C2Euler123(double C[4][4], double *q);
    void C2Euler131(double C[4][4], double *q);
    void C2Euler132(double C[4][4], double *q);
    void C2Euler212(double C[4][4], double *q);
    void C2Euler213(double C[4][4], double *q);
    void C2Euler231(double C[4][4], double *q);
    void C2Euler232(double C[4][4], double *q);
    void C2Euler312(double C[4][4], double *q);
    void C2Euler313(double C[4][4], double *q);
    void C2Euler321(double C[4][4], double *q);
    void C2Euler323(double C[4][4], double *q);
    void C2Gibbs(double C[4][4], double *q);
    void C2MRP(double C[4][4], double *q);
    void C2PRV(double C[4][4], double *q);
    void dEP(double *q, double *w, double *dq);
    void dEuler121(double *q, double *w, double *dq);
    void dEuler123(double *q, double *w, double *dq);
    void dEuler131(double *q, double *w, double *dq);
    void dEuler132(double *q, double *w, double *dq);
    void dEuler212(double *q, double *w, double *dq);
    void dEuler213(double *q, double *w, double *dq);
    void dEuler231(double *q, double *w, double *dq);
    void dEuler232(double *q, double *w, double *dq);
    void dEuler312(double *q, double *w, double *dq);
    void dEuler313(double *q, double *w, double *dq);
    void dEuler321(double *q, double *w, double *dq);
    void dEuler323(double *q, double *w, double *dq);
    void dGibbs(double *q, double *w, double *dq);
    void dMRP(double *q, double *w, double *dq);
    void dPRV(double *q, double *w, double *dq);
    void elem2PRV(double *r, double *q);
    void EP2C(double *q, double C[4][4]);
    void EP2Euler121(double *q, double *e);
    void EP2Euler123(double *q, double *e);
    void EP2Euler131(double *q, double *e);
    void EP2Euler132(double *q, double *e);
    void EP2Euler212(double *q, double *e);
    void EP2Euler213(double *q, double *e);
    void EP2Euler231(double *q, double *e);
    void EP2Euler232(double *q, double *e);;
    void EP2Euler312(double *q, double *e);
    void EP2Euler313(double *q, double *e);
    void EP2Euler321(double *q, double *e);
    void EP2Euler323(double *q, double *e);
    void EP2Gibbs(double *q1, double *q);
    void EP2MRP(double *q1, double *q);
    void EP2PRV(double *q1, double *q);
    void Euler1(double x, double m[4][4]);
    void Euler2(double x, double m[4][4]);
    void Euler3(double x, double m[4][4]);
    void Euler1212C(double *q, double C[4][4]);
    void Euler1212EP(double *e, double *q);
    void Euler1212Gibbs(double *e, double *q);
    void Euler1212MRP(double *e, double *q);
    void Euler1212PRV(double *e, double *q);
    void Euler1232C(double *q, double C[4][4]);
    void Euler1232EP(double *e, double *q);
    void Euler1232Gibbs(double *e, double *q);
    void Euler1232MRP(double *e, double *q);
    void Euler1232PRV(double *e, double *q);
    void Euler1312C(double *q, double C[4][4]);
    void Euler1312EP(double *e, double *q);
    void Euler1312Gibbs(double *e, double *q);
    void Euler1312MRP(double *e, double *q);
    void Euler1312PRV(double *e, double *q);
    void Euler1322C(double *q, double C[4][4]);
    void Euler1322EP(double *e, double *q);
    void Euler1322Gibbs(double *e, double *q);
    void Euler1322MRP(double *e, double *q);
    void Euler1322PRV(double *e, double *q);
    void Euler2122C(double *q, double C[4][4]);
    void Euler2122EP(double *e, double *q);
    void Euler2122Gibbs(double *e, double *q);
    void Euler2122MRP(double *e, double *q);
    void Euler2122PRV(double *e, double *q);
    void Euler2132C(double *q, double C[4][4]);
    void Euler2132EP(double *e, double *q);
    void Euler2132Gibbs(double *e, double *q);
    void Euler2132MRP(double *e, double *q);
    void Euler2132PRV(double *e, double *q);
    void Euler2312C(double *q, double C[4][4]);
    void Euler2312EP(double *e, double *q);
    void Euler2312Gibbs(double *e, double *q);
    void Euler2312MRP(double *e, double *q);
    void Euler2312PRV(double *e, double *q);
    void Euler2322C(double *q, double C[4][4]);
    void Euler2322EP(double *e, double *q);
    void Euler2322Gibbs(double *e, double *q);
    void Euler2322MRP(double *e, double *q);
    void Euler2322PRV(double *e, double *q);
    void Euler3122C(double *q, double C[4][4]);
    void Euler3122EP(double *e, double *q);
    void Euler3122Gibbs(double *e, double *q);
    void Euler3122MRP(double *e, double *q);
    void Euler3122PRV(double *e, double *q);
    void Euler3132C(double *q, double C[4][4]);
    void Euler3132EP(double *e, double *q);
    void Euler3132Gibbs(double *e, double *q);
    void Euler3132MRP(double *e, double *q);
    void Euler3132PRV(double *e, double *q);
    void Euler3212C(double *q, double C[4][4]);
    void Euler3212EP(double *e, double *q);
    void Euler3212Gibbs(double *e, double *q);
    void Euler3212MRP(double *e, double *q);
    void Euler3212PRV(double *e, double *q);
    void Euler3232C(double *q, double C[4][4]);
    void Euler3232EP(double *e, double *q);
    void Euler3232Gibbs(double *e, double *q);
    void Euler3232MRP(double *e, double *q);
    void Euler3232PRV(double *e, double *q);
    void Gibbs2C(double *q, double C[4][4]);
    void Gibbs2EP(double *q1, double *q);
    void Gibbs2Euler121(double *q, double *e);
    void Gibbs2Euler123(double *q, double *e);
    void Gibbs2Euler131(double *q, double *e);
    void Gibbs2Euler132(double *q, double *e);
    void Gibbs2Euler212(double *q, double *e);
    void Gibbs2Euler213(double *q, double *e);
    void Gibbs2Euler231(double *q, double *e);
    void Gibbs2Euler232(double *q, double *e);
    void Gibbs2Euler312(double *q, double *e);
    void Gibbs2Euler313(double *q, double *e);
    void Gibbs2Euler321(double *q, double *e);
    void Gibbs2Euler323(double *q, double *e);
    void Gibbs2MRP(double *q1, double *q);
    void Gibbs2PRV(double *q1, double *q);
    void MRP2C(double *q, double C[4][4]);
    void MRP2EP(double *q1, double *q);
    void MRP2Euler121(double *q, double *e);
    void MRP2Euler123(double *q, double *e);
    void MRP2Euler131(double *q, double *e);
    void MRP2Euler132(double *q, double *e);
    void MRP2Euler212(double *q, double *e);
    void MRP2Euler213(double *q, double *e);
    void MRP2Euler231(double *q, double *e);
    void MRP2Euler232(double *q, double *e);
    void MRP2Euler312(double *q, double *e);
    void MRP2Euler313(double *q, double *e);
    void MRP2Euler321(double *q, double *e);
    void MRP2Euler323(double *q, double *e);
    void MRP2Gibbs(double *q1, double *q);
    void MRP2PRV(double *q1, double *q);
    void MRPswitch(double *q, double s2, double *s);
    double Picheck(double x);
    void PRV2C(double *q, double C[4][4]);
    void PRV2elem(double *r, double *q);
    void PRV2EP(double *q0, double *q);
    void PRV2Euler121(double *q, double *e);
    void PRV2Euler123(double *q, double *e);
    void PRV2Euler131(double *q, double *e);
    void PRV2Euler132(double *q, double *e);
    void PRV2Euler212(double *q, double *e);
    void PRV2Euler213(double *q, double *e);
    void PRV2Euler231(double *q, double *e);
    void PRV2Euler232(double *q, double *e);
    void PRV2Euler312(double *q, double *e);
    void PRV2Euler313(double *q, double *e);
    void PRV2Euler321(double *q, double *e);
    void PRV2Euler323(double *q, double *e);
    void PRV2Gibbs(double *q0, double *q);
    void PRV2MRP(double *q0, double *q);
    void subEP(double *b1, double *b2, double *q);
    void subEuler121(double *e, double *e1, double *e2);
    void subEuler123(double *e, double *e1, double *e2);
    void subEuler131(double *e, double *e1, double *e2);
    void subEuler132(double *e, double *e1, double *e2);
    void subEuler212(double *e, double *e1, double *e2);
    void subEuler213(double *e, double *e1, double *e2);
    void subEuler231(double *e, double *e1, double *e2);
    void subEuler232(double *e, double *e1, double *e2);
    void subEuler312(double *e, double *e1, double *e2);
    void subEuler313(double *e, double *e1, double *e2);
    void subEuler321(double *e, double *e1, double *e2);
    void subEuler323(double *e, double *e1, double *e2);
    void subGibbs(double *q1, double *q2, double *q);
    void subMRP(double *q1, double *q2, double *q);
    void subPRV(double *q10, double *q20, double *q);
    void Mi(double angle, int axis, double C[4][4]);

    void omega_from_mrp_mrpdot (double* , double* , double* );

    /*
      common conversions
    */
#ifndef M_PI
#define M_PI     3.141592653589793
#endif

#ifndef D2R
#define D2R         M_PI/180.
#endif
#ifndef R2D
#define R2D         180./M_PI
#endif

#ifdef __cplusplus
}
#endif

#endif
