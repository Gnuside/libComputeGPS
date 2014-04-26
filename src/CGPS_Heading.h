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

#ifndef __CGPS_HEADING_H__
#define __CGPS_HEADING_H__

/***** types definition *****/
// cgps_heading_t
typedef u8 cgps_heading_t;

// invalid heading
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


/***** Functions declarations *****/
// see their descriptions in their file or in libComputeGPS.md
extern boolean CGPS_IsValidHeading(cgps_heading_t heading);
extern cgps_heading_t CGPS_ApproxHeadingFromStartToArrival(
	  const cgps_coord_t *start,
	  const cgps_coord_t *arrival
	);

#endif // __CGPS_HEADING_H__
