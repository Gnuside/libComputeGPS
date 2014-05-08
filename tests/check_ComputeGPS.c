#include <stdlib.h>
#include <check.h>
#include <libComputeGPS.h>


// include your c files here
#include "check_heading.c"
#include "check_adafruit.c"


int main() {
	int number_failed;
	Suite *s = heading_suite ();
	SRunner *sr = srunner_create (s);
	srunner_run_all (sr, CK_NORMAL);
	number_failed = srunner_ntests_failed (sr);
	srunner_free (sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
