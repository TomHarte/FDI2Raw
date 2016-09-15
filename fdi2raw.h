#ifndef __FDI2RAW_H
#define __FDI2RAW_H

#include <stdint.h>
#include <stdio.h>

typedef struct fdi FDI;

#ifdef __cplusplus
extern "C" {
#endif

extern FDI *fdi2raw_header(FILE *);
extern void fdi2raw_header_free (FDI *);

extern int fdi2raw_loadtrack (FDI *, uint16_t *mfmbuf, uint16_t *tracktiming, int track, int *tracklength, int *indexoffset, int *multirev, int mfm);
extern int fdi2raw_loadrevolution (FDI *, uint16_t *mfmbuf, uint16_t *tracktiming, int track, int *tracklength, int mfm);

extern int fdi2raw_get_type (FDI *);
extern int fdi2raw_get_bit_rate (FDI *);
extern int fdi2raw_get_rotation (FDI *);
extern int fdi2raw_get_write_protect (FDI *);

extern int fdi2raw_get_last_track(FDI *);
extern int fdi2raw_get_last_head(FDI *);
extern int fdi2raw_get_num_sector (FDI *);

#ifdef __cplusplus
}
#endif

#endif
