#ifndef __STAT_C_H__
#define __STAT_C_H__

#include "arpackdef.h"

/*Reset timers*/
extern void sstats_c();
extern void sstatn_c();
extern void cstatn_c();

/*Get timers*/
extern void stat_c(a_int *   nopx_c, a_int *    nbx_c, a_int * nrorth_c, a_int * nitref_c, a_int * nrstrt_c,
                   float * tsaupd_c, float * tsaup2_c, float * tsaitr_c, float * tseigt_c, float * tsgets_c, float * tsapps_c, float * tsconv_c,
                   float * tnaupd_c, float * tnaup2_c, float * tnaitr_c, float * tneigh_c, float * tngets_c, float * tnapps_c, float * tnconv_c,
                   float * tcaupd_c, float * tcaup2_c, float * tcaitr_c, float * tceigh_c, float * tcgets_c, float * tcapps_c, float * tcconv_c,
                   float * tmvopx_c, float *  tmvbx_c, float * tgetv0_c, float * titref_c, float *  trvec_c);

#endif
