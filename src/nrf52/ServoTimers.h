#ifndef __SERVO_TIMERS_H__
#define __SERVO_TIMERS_H__

/**
 * NRF52 Only definitions
 * ---------------------
 */

#define MIN_PULSE 55
#define MAX_PULSE 284

// define one timer in order to have MAX_SERVOS = 12
typedef enum { _timer1, _Nbr_16timers } timer16_Sequence_t;

#endif   // __SERVO_TIMERS_H__
