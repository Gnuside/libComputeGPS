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
/* Created 05/08/2014                                                         */
/*                                                                            */
/******************************************************************************/

#ifndef __CGPS_ADAFRUITCONVERSION_H__
#define __CGPS_ADAFRUITCONVERSION_H__

extern cgps_latitude_t CGPS_adaLatToCgpsLat(float lat);
extern cgps_longitude_t CGPS_adaLonToCgpsLon(float lon);

#endif // __CGPS_ADAFRUITCONVERSION_H__
