/******************************************************************************/
/*                              libComputeGPS                                 */
/*                                                                            */
/* Global declarations and tools functions                                    */
/*                                                                            */
/* Author: Roland Laurès (roland.laures@gnuside.com                           */
/* Licence: AGPL                                                              */
/* Contributors:                                                              */
/*   - ..                                                                     */
/*                                                                            */
/* Created 04/26/2014                                                         */
/*                                                                            */
/******************************************************************************/

#ifndef __CGPS_H__
#define __CGPS_H__

/***** Basic types redefinition *****/
/* FIXME: */
// here we suppose that we are on a small processor platform.
// We should adjust if we are compiling for Cortex for example.
#ifndef s32
#define s32
// signed 32 bits integer definition
typedef signed long s32;
#endif // s32

#ifndef u32
#define u32
// unsigned 32 bits integer definition
typedef unsigned long u32;
#endif // u32

#ifndef s16
#define s16
// signed 16 bits integer definition
typedef signed short s16;
#endif // s16

#ifndef u16
#define u16
// unsigned 16 bits integer definition
typedef unsigned short u16;
#endif // u16

#ifndef s8
#define s8
// signed 8 bits integer definition
typedef signed char s8;
#endif // s8

#ifndef u8
#define u8
// unsigned 8 bits integer definition
typedef unsigned char u8;
#endif // u8

#ifndef boolean
#define boolean bool
#endif




/***** Type declarations and corresponding constants *****/

// Here we use only extern declarations.

// cgps_latitude_t
typedef s32 cgps_latitude_t;
// invalid latitude
extern const cgps_latitude_t cgps_lat_invalid = 0x80000000;

// cgps_longitude_t
typedef s32 cgps_longitude_t;
// invalid longitude
extern const cgps_longitude_t cgps_lon_invalid = 0x80000000;

// cgps_coord_t
typedef struct {
	cgps_latitude_t lat;
	// latitude, expressed in 1/1000000th
	cgps_lon_t lon;
	// longitude, expressed in 1/1000000th
} cgps_coord_t;

// cgps_position_t
typedef struct {
	cgps_latitude_t lat;
	// latitude, expressed in 1/1000000th
	cgps_lon_t lon;
	// longitude, expressed in 1/1000000th
	s32 alt;
	// altitude, expressed in meters
} cgps_position_t;


#include <CGPS_Heading.h>

#endif // __CGPS_H__
