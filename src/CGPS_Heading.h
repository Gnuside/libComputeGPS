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
extern const cgps_heading_t CGPS_HEADING_INVALID;
extern const cgps_heading_t CGPS_HEADING_NORTH;
extern const cgps_heading_t CGPS_HEADING_NORTH_NORTH_EAST;
extern const cgps_heading_t CGPS_HEADING_NORTH_EAST;
extern const cgps_heading_t CGPS_HEADING_NORTH_EAST_EAST;
extern const cgps_heading_t CGPS_HEADING_EAST;
extern const cgps_heading_t CGPS_HEADING_SOUTH_EAST_EAST;
extern const cgps_heading_t CGPS_HEADING_SOUTH_EAST;
extern const cgps_heading_t CGPS_HEADING_SOUTH_SOUTH_EAST;
extern const cgps_heading_t CGPS_HEADING_SOUTH;
extern const cgps_heading_t CGPS_HEADING_SOUTH_SOUTH_WEST;
extern const cgps_heading_t CGPS_HEADING_SOUTH_WEST;
extern const cgps_heading_t CGPS_HEADING_SOUTH_WEST_WEST;
extern const cgps_heading_t CGPS_HEADING_WEST;
extern const cgps_heading_t CGPS_HEADING_NORTH_WEST_WEST;
extern const cgps_heading_t CGPS_HEADING_NORTH_WEST;
extern const cgps_heading_t CGPS_HEADING_NORTH_NORTH_WEST;


/***** Functions declarations *****/
// see their descriptions in their file or in libComputeGPS.md
//extern boolean CGPS_IsValidHeading (cgps_heading_t heading);
extern cgps_heading_t CGPS_ApproxHeadingFromStartToArrival(
	  const cgps_coord_t *start,
	  const cgps_coord_t *arrival
	);

#endif // __CGPS_HEADING_H__
