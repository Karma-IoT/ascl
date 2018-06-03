#ifndef ASCL_TIME_H
#define ASCL_TIME_H

#include "ascl.h"

#define ASCL_TIME_TYPE_SFT 0x01
#define ASCL_TIME_TYPE_RTC 0x02

typedef struct ascl_time_t ascl_time_t;

typedef void (*ascl_time_cb)(ascl_time_t *time,
        uint64_t time,
        uint64_t current);

void ascl_time_init(ascl_t *ascl, 
        ascl_time_t *time,
        int type);

void ascl_time_handle(ascl_time_t *time,
        ascl_time_cb time_cb,
        void *context);

void *ascl_time_get_context(ascl_time_t *time);

int ascl_time_start(ascl_time_t *time,
        uint64_t timeout,
        uint64_t repeat);

int ascl_time_stop(ascl_time_t *time);

int ascl_time_again(ascl_time_t *time, uint64_t repeat);

uint64_t ascl_time_get_current(ascl_time_t *time);

#endif
