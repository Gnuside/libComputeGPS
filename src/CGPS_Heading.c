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

#include <CGPS_Heading.h>

extern const cgps_heading_t CGPS_HEADING_INVALID = 0x80;
extern const cgps_heading_t CGPS_HEADING_NORTH            =  0;
extern const cgps_heading_t CGPS_HEADING_NORTH_NORTH_EAST =  1;
extern const cgps_heading_t CGPS_HEADING_NORTH_EAST       =  2;
extern const cgps_heading_t CGPS_HEADING_NORTH_EAST_EAST  =  3;
extern const cgps_heading_t CGPS_HEADING_EAST             =  4;
extern const cgps_heading_t CGPS_HEADING_SOUTH_EAST_EAST  =  5;
extern const cgps_heading_t CGPS_HEADING_SOUTH_EAST       =  6;
extern const cgps_heading_t CGPS_HEADING_SOUTH_SOUTH_EAST =  7;
extern const cgps_heading_t CGPS_HEADING_SOUTH            =  8;
extern const cgps_heading_t CGPS_HEADING_SOUTH_SOUTH_WEST =  9;
extern const cgps_heading_t CGPS_HEADING_SOUTH_WEST       = 10;
extern const cgps_heading_t CGPS_HEADING_SOUTH_WEST_WEST  = 11;
extern const cgps_heading_t CGPS_HEADING_WEST             = 12;
extern const cgps_heading_t CGPS_HEADING_NORTH_WEST_WEST  = 13;
extern const cgps_heading_t CGPS_HEADING_NORTH_WEST       = 14;
extern const cgps_heading_t CGPS_HEADING_NORTH_NORTH_WEST = 15;


boolean CGPS_IsValidHeading(cgps_heading_t heading) {
	return ((heading >= CGPS_HEADING_NORTH)
	  && (heading <= CGPS_HEADING_NORTH_WEST));
}
