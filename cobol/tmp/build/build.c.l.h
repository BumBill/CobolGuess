/* Generated by           cobc 3.0-rc1.0 */
/* Generated from         cob/main.cob */
/* Generated at           nov 13 2021 15:52:00 */
/* GnuCOBOL build date    Nov 10 2021 12:07:47 */
/* GnuCOBOL package date  Apr 22 2018 22:26:54 UTC */
/* Compile command        cobc -K emscripten_sleep -K setElementProperty -K startup -C -x -free -o tmp/build/build.c cob/main.cob */

/* Program local variables for 'guess-the-number' */

/* Module initialization indicator */
static unsigned int	initialized = 0;

/* Module structure pointer */
static cob_module	*module = NULL;

/* Global variable pointer */
cob_global		*cob_glob_ptr;

/* Decimal structures */
cob_decimal	*d0 = NULL;
cob_decimal	*d1 = NULL;
cob_decimal	*d2 = NULL;

/* Define external subroutines being called statically */
#ifndef startup
extern void startup ();
#endif
#ifndef emscripten_sleep
extern void emscripten_sleep ();
#endif
#ifndef setElementProperty
extern int setElementProperty ();
#endif

/* Call parameters */
cob_field		*cob_procedure_params[3];

/* Perform frame stack */
struct cob_frame	*frame_ptr;
struct cob_frame	frame_stack[255];


/* Data storage */
static int	b_2;	/* RETURN-CODE */
static cob_u8_t	b_6[1] __attribute__((aligned));	/* random-nb */
static cob_u8_t	b_7[1] __attribute__((aligned));	/* guess */
static cob_u8_t	b_8[3] __attribute__((aligned));	/* counter */
static cob_u8_t	b_9[1] __attribute__((aligned));	/* started */
static cob_u8_t	b_10[1] __attribute__((aligned));	/* win */
static cob_u8_t	b_11[1] __attribute__((aligned));	/* done */
static cob_u8_t	b_12[3] __attribute__((aligned));	/* btn-id */
static cob_u8_t	b_13[1] __attribute__((aligned));	/* from-prompt */

/* End of data storage */


/* Fields */
static cob_field f_6	= {1, b_6, &a_1};	/* random-nb */
static cob_field f_7	= {1, b_7, &a_1};	/* guess */
static cob_field f_8	= {3, b_8, &a_4};	/* counter */
static cob_field f_12	= {3, b_12, &a_3};	/* btn-id */
static cob_field f_13	= {1, b_13, &a_3};	/* from-prompt */

/* End of fields */

