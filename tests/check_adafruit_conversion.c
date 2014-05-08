
START_TEST (test_Adafruit_Conversion_lat)
{
	float lats[] = {
		4850.9887,
		25.5,
		-258.0
	};
	cgps_latitude_t
		expected[] = {
			48849811,
			425000,
			2966666
		},
		res;


	int i, max = sizeof(expected);
	for(i = 0; i < max ; i++) {
		res = CGPS_adaLatToCgpsLat(lats[i]);
		ck_assert_int_eq(res, expected[i]);
	}
}
END_TEST

START_TEST (test_Adafruit_Conversion_lon)
{
	float lons[] = {
		4850.9887,
		25.5,
		-258.0
	};
	cgps_longitude_t
		expected[] = {
			48849811,
			425000,
			2966666
		},
		res;


	int i, max = sizeof(expected);
	for(i = 0; i < max ; i++) {
		res = CGPS_adaLonToCgpsLon(lons[i]);
		ck_assert_int_eq(res, expected[i]);
	}
}
END_TEST
