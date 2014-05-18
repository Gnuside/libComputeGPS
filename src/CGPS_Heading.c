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

#include <libComputeGPS.h>

const cgps_heading_t CGPS_HEADING_INVALID = 0x80;
const cgps_heading_t CGPS_HEADING_NORTH            =  0;
const cgps_heading_t CGPS_HEADING_NORTH_NORTH_EAST =  1;
const cgps_heading_t CGPS_HEADING_NORTH_EAST       =  2;
const cgps_heading_t CGPS_HEADING_NORTH_EAST_EAST  =  3;
const cgps_heading_t CGPS_HEADING_EAST             =  4;
const cgps_heading_t CGPS_HEADING_SOUTH_EAST_EAST  =  5;
const cgps_heading_t CGPS_HEADING_SOUTH_EAST       =  6;
const cgps_heading_t CGPS_HEADING_SOUTH_SOUTH_EAST =  7;
const cgps_heading_t CGPS_HEADING_SOUTH            =  8;
const cgps_heading_t CGPS_HEADING_SOUTH_SOUTH_WEST =  9;
const cgps_heading_t CGPS_HEADING_SOUTH_WEST       = 10;
const cgps_heading_t CGPS_HEADING_SOUTH_WEST_WEST  = 11;
const cgps_heading_t CGPS_HEADING_WEST             = 12;
const cgps_heading_t CGPS_HEADING_NORTH_WEST_WEST  = 13;
const cgps_heading_t CGPS_HEADING_NORTH_WEST       = 14;
const cgps_heading_t CGPS_HEADING_NORTH_NORTH_WEST = 15;


boolean CGPS_IsValidHeading(cgps_heading_t heading) {
	return ((heading >= CGPS_HEADING_NORTH)
	  && (heading <= CGPS_HEADING_NORTH_WEST));
}

float CGPS_HeadingToDegree(cgps_heading_t heading) {
	float res = 0;
	switch(heading) {
		case 0: //CGPS_HEADING_NORTH:
			res = 0.0;
			break;
		case 1: //CGPS_HEADING_NORTH_NORTH_EAST:
			res = 22.5;
			break;
		case 2: //CGPS_HEADING_NORTH_EAST:
			res = 45.0;
			break;
		case 3: //CGPS_HEADING_NORTH_EAST_EAST:
			res = 67.5;
			break;
		case 4: //CGPS_HEADING_EAST:
			res = 90.0;
			break;
		case 5: //CGPS_HEADING_SOUTH_EAST_EAST:
			res = 112.5;
			break;
		case 6: //CGPS_HEADING_SOUTH_EAST:
			res = 135.0;
			break;
		case 7: //CGPS_HEADING_SOUTH_SOUTH_EAST:
			res = 157.5;
			break;
		case 8: //CGPS_HEADING_SOUTH:
			res = 180.0;
			break;
		case 9: //CGPS_HEADING_SOUTH_SOUTH_WEST:
			res = 202.5;
			break;
		case 10: //CGPS_HEADING_SOUTH_WEST:
			res = 225.0;
			break;
		case 11: //CGPS_HEADING_SOUTH_WEST_WEST:
			res = 247.5;
			break;
		case 12: //CGPS_HEADING_WEST:
			res = 270.0;
			break;
		case 13: //CGPS_HEADING_NORTH_WEST_WEST:
			res = 292.5;
			break;
		case 14: //CGPS_HEADING_NORTH_WEST:
			res = 315.0;
			break;
		case 15: //CGPS_HEADING_NORTH_NORTH_WEST:
			res = 337.5;
			break;
		default:
			res = 0.0/0.0;
	}
	return res;
}
