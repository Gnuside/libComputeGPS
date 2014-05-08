
#include "check_adafruit_conversion.c"

	Suite *
adafruit_suite (void)
{
	Suite *s = suite_create ("Adafruit");

	/* Core test case */
	TCase *tc_core = tcase_create ("Conversion");
	tcase_add_test (tc_core, test_Adafruit_Conversion_lat);
	tcase_add_test (tc_core, test_Adafruit_Conversion_lon);
	suite_add_tcase (s, tc_core);

	return s;
}
