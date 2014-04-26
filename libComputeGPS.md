libComputeGPS
=============

Here we describe the usage and function of the library.

Git usage
---------

Use git-flow patterns to add branches and develop on this library.
See http://yakiloo.com/getting-started-git-flow/ for reference.

General Idea
------------

This library intend to make approximated computation. Being efficient in
computational and memory usage are both considered critical.

The goal of this library is to being used on arduino or other very small
micro-controlers (µC).

Those are fastly improoving there performance, but at the same time, there is a
need to be less and less consuming. Combining those two, make optimisations
still at the heart of programming needs.

Please when you submit work take care of those aspects.

Compilation
-----------

I choosed to put general functions and declarations in the libComputeGPS.c file.
Other functions are put in a specific file (one function by file). This allow to
have a smart granularity of what you want to include or not during the
compilation.

Modern compiler are able to remove unused function codes when they are not
accessed. But even with that I find clearer to specify yourself which function
you intend to use or not.

Naming and programmation conventions
------------------------------------

- width maximum on a line is fixed to 80 letters
  - reject pull-request if one line is more than 120 letters wide
  - reject pull-request if too many lines are more than 80 letters wide
  - mesured with tabulation equivalent to 4 spaces
- tabulations must be used for indentation
  - space are refused because anyone visual confort can be managed with tab
  - when functions declaration needs to take several lines, former indentation
  is done with spaces.
- every global elements are preceded by `CGPS_` :
  - functions
  - constants
  - global variable if any (shouldn't have any)
  - type definitions
- functions are named with capital letters on each words
  - argument words may be separeted by `_`
  - return statement must be called once by function
  - goto usage must be reduce to the minimum and JUSTIFIED (comments and
  explanation MANDATORY)
  - arguments unaltered structures are passed as const type * to allow constant
  usage in function calling
- constants use uppercase letters only, and words are separated by `_`
- global variables use downcase letters only (including `cgps_` prefix) and
words are separated with `_`
- type definition use the same as variable convention, except that a `_t` is
added at the end of the type name.

Examples :

  int cgps_global_variable;

  static int const CGPS_CONSTANT_DEFINITION 3; // prefere this declaration for
  // constants instead of macro :
  #define CGPS_CONSTANT_DEFINITION 3
  // The principal reason is that because it is type safe.

  typedef struct {
  	int something_stored;
  	float something_else_stored;
  } cgps_type_name_t;

  int CGPS_FunctionWithSeveralWords(int first_argument, float second_argument) {
  	/* indentation with tabulations */
  	...
  	return result; // only one return statement and must be the last instruction
  }

  int CGPS_FunctionWithALotOfArgumentsAndALongName(
  	  //one indentation + 2 spaces
		  int first_argument,
		  float second_argument,
		  const int *third_argument
		  ) {
		// We return to normal indentation
		// third argument won't be altered so
		...
		return result;
	}

Unit test
---------

Unit testing is made a central point in this library. The sources of the
library are stored in `src/` and the corresponding tests files are in `tests/`.

A new function without a test file will not be accepted. Please take existing
ones as reference to make yours.

Types
=====

cgps_coord_t
------------

This type allow to store latitude and longitude.

cgps_position_t
---------------

This type allow to store latitude, longitude and altitude.

cgps_heading_t
--------------

This allow to store a heading direction.
This has a precision of 1/16th of 360° :
- 0 => 0° => North
- 1 => 22.5° => North-North-East
- 2 => 45° => North-East
- 3 => 67.5° => North-East-East
....
- 15 => 337.5° => North-North-West

Check CGPS_HEADING_* constants

Functions
=========

CGPS_IsValidHeading
-------------------

### Arguments :
- cgps_heading_t heading

### Result :

Return true if heading value is correct.

CGPS_ApproxHeadingFromStartToArrival
-----------------------------------

### Arguments :
- const cgps_coord_t *start
- const cgps_coord_t *arrival

### Result :
- cpgs_heading_t

### Validity :

This function gives a correct heading when the distance from start to arrival is
relatively small regarding earth circumference (<= 500 km).

For greater distances, you still can use this function, but update regularly
your start coordinate, to update the resulting heading. Regularly depends on the
speed at which you reach the point, but every 500 km may be a good enough.

### description :

Compute the heading allowing to reach a GPS coordinate (arrival) from an other
(start).

To do so, we simply make a difference between :
- arrival latitude (la1) and start latitude (la0), called `dla`
- arrival longitude (lo1) and start longitude (lo1), called `dlo`


