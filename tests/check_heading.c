
#include "check_heading_approxHeadingFromStartToArrival.c"

START_TEST (test_Heading_Validity)
{
	cgps_heading_t h = CGPS_HEADING_INVALID;
	// Valide invalid
	ck_assert ( ! CGPS_IsValidHeading(h));

	h = CGPS_HEADING_NORTH;
	while (h < CGPS_HEADING_NORTH_NORTH_WEST) {
		ck_assert (CGPS_IsValidHeading(h));
		h = h + 1;
	}

	while (h != CGPS_HEADING_NORTH) {
		ck_assert ( ! CGPS_IsValidHeading(h));
		h = h + 1;
	}
}
END_TEST

	Suite *
heading_suite (void)
{
	Suite *s = suite_create ("Heading");

	/* Core test case */
	TCase *tc_core = tcase_create ("Core");
	tcase_add_test (tc_core, test_Heading_Validity);
	suite_add_tcase (s, tc_core);

	TCase *tc_aHFSTA = tcase_create ("approxHeadingFromStartToArrival");
	tcase_add_test (tc_aHFSTA, test_Heading_approxHeadingFromStartToArrival);
	suite_add_tcase (s, tc_aHFSTA);

	return s;
}
