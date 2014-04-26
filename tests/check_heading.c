

START_TEST (test_Heading_Validity)
{
	cgps_heading_t h = CGPS_HEADING_INVALID;
	ck_assert ( ! CGPS_IsValidHeading(h));
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

	return s;
}
