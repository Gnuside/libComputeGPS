#include <libComputeGPS.h>

cgps_heading_t CGPS_ApproxHeadingFromStartToArrival(
	  const cgps_coord_t *start,
	  const cgps_coord_t *arrival) {
	cgps_latitude_t dla = arrival->lat - start->lat;
	cgps_longitude_t dlo = arrival->lon - start->lon;
	float rD = (float)dlo / (float)dla; // convert to float lat and lon to allow
	// ratio computation
	cgps_heading_t result;

	if (dla >= 0) {
		// Heading North
		if (rD > 5.0) {
			result = CGPS_HEADING_EAST;
		} else if (rD > 1.5) {
			result = CGPS_HEADING_NORTH_EAST_EAST;
		} else if (rD > 0.66) {
			result = CGPS_HEADING_NORTH_EAST;
		} else if (rD > 0.2) {
			result = CGPS_HEADING_NORTH_NORTH_EAST;
		} else if (rD > -0.2) {
			result = CGPS_HEADING_NORTH;
		} else if (rD > -0.66) {
			result = CGPS_HEADING_NORTH_NORTH_WEST;
		} else if (rD > -1.5) {
			result = CGPS_HEADING_NORTH_WEST;
		} else if (rD > -5) {
			result = CGPS_HEADING_NORTH_WEST_WEST;
		} else { // rD <= -5
			result = CGPS_HEADING_WEST;
		}
	} else {
		// Heading South
		if (rD > 5.0) {
			result = CGPS_HEADING_WEST;
		} else if (rD > 1.5) {
			result = CGPS_HEADING_SOUTH_WEST_WEST;
		} else if (rD > 0.66) {
			result = CGPS_HEADING_SOUTH_WEST;
		} else if (rD > 0.2) {
			result = CGPS_HEADING_SOUTH_SOUTH_WEST;
		} else if (rD > -0.2) {
			result = CGPS_HEADING_SOUTH;
		} else if (rD > -0.66) {
			result = CGPS_HEADING_SOUTH_SOUTH_EAST;
		} else if (rD > -1.5) {
			result = CGPS_HEADING_SOUTH_EAST;
		} else if (rD > -5) {
			result = CGPS_HEADING_SOUTH_EAST_EAST;
		} else { // rD <= -5
			result = CGPS_HEADING_EAST;
		}
	}
	return result;
}

