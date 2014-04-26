

START_TEST (test_Heading_approxHeadingFromStartToArrival)
{
	cgps_coord_t s = { lat : 48848397, lon : 2395919 },
							 // center Place de la Nation
							 a[] = {
								 { lat: 48851927, lon: 2396155},
								 // North of Place de la Nation
								 { lat: 48850741, lon: 2397142},
								 // North-North-East of Place de la Nation
								 { lat: 48850162, lon: 2397829},
								 // North-East of Place de la Nation
								 { lat: 48848785, lon: 2397338},
								 // North-East-East of Place de la Nation
								 { lat: 48848407, lon: 2397462},
								 // East of Place de la Nation
								 { lat: 48847863, lon: 2397821},
								 // South-East-East of Place de la Nation
								 { lat: 48847560, lon: 2397102},
								 // South-East of Place de la Nation
								 { lat: 48847267, lon: 2396635},
								 // South-South-East of Place de la Nation
								 { lat: 48847292, lon: 2395874},
								 // South of Place de la Nation
								 { lat: 48847352, lon: 2395300},
								 // South-South-West of Place de la Nation
								 { lat: 48847563, lon: 2394661},
								 // South-West of Place de la Nation
								 { lat: 48847969, lon: 2394366},
								 // South-West-West of Place de la Nation
								 { lat: 48848425, lon: 2394297},
								 // West of Place de la Nation
								 { lat: 48848778, lon: 2394339},
								 // North-West-West of Place de la Nation
								 { lat: 48849155, lon: 2394618},
								 // North-West of Place de la Nation
								 { lat: 48849357, lon: 2395402}
								 // North-North-West of Place de la Nation
								};
	cgps_heading_t res,
								 expected[] = {
								 	 CGPS_HEADING_NORTH,
								 	 CGPS_HEADING_NORTH_NORTH_EAST,
								 	 CGPS_HEADING_NORTH_EAST,
								 	 CGPS_HEADING_NORTH_EAST_EAST,
								 	 CGPS_HEADING_EAST,
								 	 CGPS_HEADING_SOUTH_EAST_EAST,
								 	 CGPS_HEADING_SOUTH_EAST,
								 	 CGPS_HEADING_SOUTH_SOUTH_EAST,
								 	 CGPS_HEADING_SOUTH,
								 	 CGPS_HEADING_SOUTH_SOUTH_WEST,
								 	 CGPS_HEADING_SOUTH_WEST,
								 	 CGPS_HEADING_SOUTH_WEST_WEST,
								 	 CGPS_HEADING_WEST,
								 	 CGPS_HEADING_NORTH_WEST,
								 	 CGPS_HEADING_NORTH_NORTH_WEST
								 };


	int i, max = sizeof(expected);
	for(i = 0; i < max ; i++) {
		res = CGPS_ApproxHeadingFromStartToArrival(&s, &a[i]);
		ck_assert_int_eq(res, expected[i]);
	}
}
END_TEST
