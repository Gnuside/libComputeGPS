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

#include <math.h>
#include <libComputeGPS.h>



cgps_latitude_t CGPS_adaLatToCgpsLat(float lat) {
	cgps_latitude_t result;
	float f_result;

	f_result = fmod(lat, 100); // get the minutes part
	f_result = f_result / 60; // convert to degree
	if (lat >= 0) { // get the degree part
		f_result = f_result + floor(lat / 100);
	} else {
		f_result = f_result + ceil(lat / 100);
	}
	f_result = f_result * 1000000; // convert to 1/1000000 th of degree
	result = (u32)f_result;

	return result;
}

cgps_longitude_t CGPS_adaLonToCgpsLon(float lon) {
	cgps_longitude_t result;
	float f_result;

	f_result = fmod(lon, 100); // get the minutes part
	f_result = f_result / 60; // convert to degree
	if (lon >= 0) { // get the degree part
		f_result = f_result + floor(lon / 100);
	} else {
		f_result = f_result + ceil(lon / 100);
	}
	f_result = f_result * 1000000; // convert to 1/1000000 th of degree
	result = (u32)f_result;

	return result;

}
