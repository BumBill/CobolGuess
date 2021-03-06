/* Generated by           cobc 3.0-rc1.0 */
/* Generated from         cob/main.cob */
/* Generated at           nov 13 2021 15:52:00 */
/* GnuCOBOL build date    Nov 10 2021 12:07:47 */
/* GnuCOBOL package date  Apr 22 2018 22:26:54 UTC */
/* Compile command        cobc -K emscripten_sleep -K setElementProperty -K startup -C -x -free -o tmp/build/build.c cob/main.cob */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <math.h>
#define  COB_KEYWORD_INLINE __inline
#include <libcob.h>

#define  COB_SOURCE_FILE		"cob/main.cob"
#define  COB_PACKAGE_VERSION		"3.0-rc1"
#define  COB_PATCH_LEVEL		0
#define  COB_MODULE_FORMATTED_DATE	"nov 13 2021 15:52:00"
#define  COB_MODULE_DATE		20211113
#define  COB_MODULE_TIME		155200

/* Global variables */
#include "build.c.h"

/* Function prototypes */

static int		guess__the__number ();
static int		guess__the__number_ (const int);

/* Main function */
int
main (int argc, char **argv)
{
  cob_init (argc, argv);
  cob_stop_run (guess__the__number ());
}

/* Functions */

/* PROGRAM-ID 'guess-the-number' */

/* ENTRY 'guess__the__number' */

static int
guess__the__number ()
{
  return guess__the__number_ (0);
}

static int
guess__the__number_ (const int entry)
{
  /* Program local variables */
  #include "build.c.l.h"

  /* Start of function code */

  /* CANCEL callback */
  if (unlikely(entry < 0)) {
  	if (entry == -10)
  		goto P_dump;
  	if (entry == -20)
  		goto P_clear_decimal;
  	goto P_cancel;
  }

  /* Check initialized, check module allocated, */
  /* set global pointer, */
  /* push module stack, save call parameter count */
  if (cob_module_global_enter (&module, &cob_glob_ptr, 0, entry, 0))
  	return -1;

  /* Set address of module parameter list */
  module->cob_procedure_params = cob_procedure_params;

  /* Set frame stack pointer */
  frame_ptr = frame_stack;
  frame_ptr->perform_through = 0;
  frame_ptr->return_address_ptr = &&P_cgerror;

  /* Initialize rest of program */
  if (unlikely(initialized == 0)) {
  	goto P_initialize;
  }
  P_ret_initialize:

  /* Allocate decimal numbers */
  cob_decimal_alloc (3, &d0, &d1, &d2);

  /* Increment module active */
  module->module_active++;

  /* Entry dispatch */
  goto l_2;

  /* PROCEDURE DIVISION */

  /* Line: 20        : Entry     guess-the-number        : cob/main.cob */
  l_2:;

  /* Line: 21        : Paragraph main                    : cob/main.cob */

  /* Line: 22        : CALL               : cob/main.cob */
  cob_glob_ptr->cob_call_params = 0;
  cob_glob_ptr->cob_stmt_exception = 0;
  if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
  startup ();
  b_2 = 0;

  /* Line: 23        : PERFORM            : cob/main.cob */
  for (;;)
  {
    if (((int)cob_cmp_numdisp (b_9, 1, 1LL, 0) == 0))
      break;
    /* PERFORM check-prompt */
    frame_ptr++;
    frame_ptr->perform_through = 5;
    frame_ptr->return_address_ptr = &&l_11;
    goto l_5;
    l_11:
    frame_ptr--;
  }

  /* Line: 24        : COMPUTE            : cob/main.cob */
  cob_decimal_set_llint (d0, 1LL);
  cob_decimal_set_llint (d1, 9LL);
  cob_decimal_set_field (d2, cob_intr_random (1, cob_intr_current_date (15, 2)));
  cob_decimal_mul (d1, d2);
  cob_decimal_add (d0, d1);
  cob_decimal_get_field (d0, &f_6, 0);

  /* Line: 25        : DISPLAY            : cob/main.cob */
  cob_display (0, 1, 1, &f_6);

  /* Line: 26        : PERFORM            : cob/main.cob */
  for (;;)
  {
    if ((((int)cob_cmp_numdisp (b_11, 1, 1LL, 0) == 0) || 
        ((int)cob_cmp_numdisp (b_8, 3, 0LL, 0) == 0)))
      break;
    /* PERFORM check-guess */
    frame_ptr++;
    frame_ptr->perform_through = 7;
    frame_ptr->return_address_ptr = &&l_12;
    goto l_7;
    l_12:
    frame_ptr--;
  }

  /* Line: 27        : PERFORM            : cob/main.cob */
  /* PERFORM update-ui */
  frame_ptr++;
  frame_ptr->perform_through = 9;
  frame_ptr->return_address_ptr = &&l_13;
  goto l_9;
  l_13:
  frame_ptr--;

  /* Line: 28        : STOP RUN           : cob/main.cob */
  cob_stop_run (b_2);

  /* Line: 31        : Paragraph check-prompt            : cob/main.cob */
  l_5:;

  /* Line: 32        : CALL               : cob/main.cob */
  cob_procedure_params[0] = (cob_field *)&c_1;
  cob_glob_ptr->cob_call_params = 1;
  cob_glob_ptr->cob_stmt_exception = 0;
  if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
  emscripten_sleep ((cob_s32_t)10LL);
  b_2 = 0;

  /* Line: 33        : ACCEPT             : cob/main.cob */
  cob_accept (&f_13);

  /* Line: 34        : IF                 : cob/main.cob */
  if ((((int)(int)(*(b_13) - 49) >= 0) && 
      ((int)(int)(*(b_13) - 57) <= 0)))
  {

    /* Line: 35        : MOVE               : cob/main.cob */
    cob_move (&f_13, &f_7);
  }
  else
  {
    /* ELSE */

    /* Line: 37        : IF                 : cob/main.cob */
    if (((int)(int)(*(b_13) - 68) == 0))
    {

      /* Line: 38        : EVALUATE           : cob/main.cob */

      /* Line: 39        : WHEN               : cob/main.cob */

      if (((int)(int)(*(b_13) - 68) == 0))
      {

        /* Line: 40        : MOVE               : cob/main.cob */
        *(b_9) = 49;
        goto l_6;
      }

      /* End EVALUATE */
      l_6:;

      /* Line: 45        : PERFORM            : cob/main.cob */
      /* PERFORM update-ui */
      frame_ptr++;
      frame_ptr->perform_through = 9;
      frame_ptr->return_address_ptr = &&l_14;
      goto l_9;
      l_14:
      frame_ptr--;
    }
    else
    {
      /* ELSE */

      /* Line: 47        : CONTINUE           : cob/main.cob */
      ;
    }
  }

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 5)
    goto *frame_ptr->return_address_ptr;

  /* Line: 52        : Paragraph check-guess             : cob/main.cob */
  l_7:;

  /* Line: 53        : PERFORM            : cob/main.cob */
  /* PERFORM check-prompt */
  frame_ptr++;
  frame_ptr->perform_through = 5;
  frame_ptr->return_address_ptr = &&l_15;
  goto l_5;
  l_15:
  frame_ptr--;

  /* Line: 54        : IF                 : cob/main.cob */
  if ((((int)(int)(*(b_13) - 49) >= 0) && 
      ((int)(int)(*(b_13) - 57) <= 0)))
  {

    /* Line: 55        : IF                 : cob/main.cob */
    if (((int)memcmp (b_7, b_6, 1) == 0))
    {

      /* Line: 56        : MOVE               : cob/main.cob */
      *(b_11) = 49;

      /* Line: 57        : MOVE               : cob/main.cob */
      *(b_10) = 49;
    }
  }

  /* Line: 60        : PERFORM            : cob/main.cob */
  /* PERFORM update-counter */
  frame_ptr++;
  frame_ptr->perform_through = 8;
  frame_ptr->return_address_ptr = &&l_16;
  goto l_8;
  l_16:
  frame_ptr--;

  /* Line: 61        : PERFORM            : cob/main.cob */
  /* PERFORM update-ui */
  frame_ptr++;
  frame_ptr->perform_through = 9;
  frame_ptr->return_address_ptr = &&l_17;
  goto l_9;
  l_17:
  frame_ptr--;

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 7)
    goto *frame_ptr->return_address_ptr;

  /* Line: 64        : Paragraph update-counter          : cob/main.cob */
  l_8:;

  /* Line: 65        : ADD                : cob/main.cob */
  cob_add_int (&f_8, -1, 0);

  /* Line: 66        : IF                 : cob/main.cob */
  if (((int)cob_cmp_numdisp (b_8, 3, 1LL, 0) < 0))
  {

    /* Line: 67        : MOVE               : cob/main.cob */
    *(b_11) = 49;
  }

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 8)
    goto *frame_ptr->return_address_ptr;

  /* Line: 71        : Paragraph update-ui               : cob/main.cob */
  l_9:;

  /* Line: 73        : IF                 : cob/main.cob */
  if (((int)cob_cmp_numdisp (b_9, 1, 1LL, 0) == 0))
  {

    /* Line: 74        : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_2;
    cob_procedure_params[1] = (cob_field *)&c_3;
    cob_procedure_params[2] = (cob_field *)&c_4;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#begin", (cob_u8_ptr)"style.visibility", (cob_u8_ptr)"visible");

    /* Line: 75        : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_5;
    cob_procedure_params[1] = (cob_field *)&c_3;
    cob_procedure_params[2] = (cob_field *)&c_4;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)".counter", (cob_u8_ptr)"style.visibility", (cob_u8_ptr)"visible");

    /* Line: 76        : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_6;
    cob_procedure_params[1] = (cob_field *)&c_3;
    cob_procedure_params[2] = (cob_field *)&c_4;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#numbers", (cob_u8_ptr)"style.visibility", (cob_u8_ptr)"visible");

    /* Line: 77        : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_7;
    cob_procedure_params[1] = (cob_field *)&c_8;
    cob_procedure_params[2] = (cob_field *)&c_9;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#draw", (cob_u8_ptr)"style.display", (cob_u8_ptr)"none");

    /* Line: 79        : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_10;
    cob_procedure_params[1] = (cob_field *)&c_11;
    cob_procedure_params[2] = &f_8;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#count", (cob_u8_ptr)"innerHTML", b_8);
  }

  /* Line: 83        : IF                 : cob/main.cob */
  if ((((int)(int)(*(b_13) - 49) >= 0) && 
      ((int)(int)(*(b_13) - 57) <= 0)))
  {

    /* Line: 84        : STRING             : cob/main.cob */
    cob_string_init (&f_12, NULL);
    cob_string_delimited (NULL);
    cob_string_append ((cob_field *)&c_12);
    cob_string_append (&f_7);
    cob_string_finish ();

    /* Line: 85        : CALL               : cob/main.cob */
    cob_procedure_params[0] = &f_12;
    cob_procedure_params[1] = (cob_field *)&c_13;
    cob_procedure_params[2] = (cob_field *)&c_14;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty (b_12, (cob_u8_ptr)"disabled", (cob_u8_ptr)"true");

    /* Line: 86        : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_15;
    cob_procedure_params[1] = (cob_field *)&c_3;
    cob_procedure_params[2] = (cob_field *)&c_4;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#result", (cob_u8_ptr)"style.visibility", (cob_u8_ptr)"visible");

    /* Line: 87        : IF                 : cob/main.cob */
    if (((int)cob_cmp_numdisp (b_10, 1, 0LL, 0) == 0))
    {

      /* Line: 88        : CALL               : cob/main.cob */
      cob_procedure_params[0] = (cob_field *)&c_16;
      cob_procedure_params[1] = (cob_field *)&c_8;
      cob_procedure_params[2] = (cob_field *)&c_17;
      cob_glob_ptr->cob_call_params = 3;
      cob_glob_ptr->cob_stmt_exception = 0;
      if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
      b_2 = setElementProperty ((cob_u8_ptr)"#lost", (cob_u8_ptr)"style.display", (cob_u8_ptr)"block");

      /* Line: 89        : CALL               : cob/main.cob */
      cob_procedure_params[0] = &f_12;
      cob_procedure_params[1] = (cob_field *)&c_18;
      cob_procedure_params[2] = (cob_field *)&c_19;
      cob_glob_ptr->cob_call_params = 3;
      cob_glob_ptr->cob_stmt_exception = 0;
      if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
      b_2 = setElementProperty (b_12, (cob_u8_ptr)"style.color", (cob_u8_ptr)"red");
    }
    else
    {
      /* ELSE */

      /* Line: 91        : CALL               : cob/main.cob */
      cob_procedure_params[0] = (cob_field *)&c_20;
      cob_procedure_params[1] = (cob_field *)&c_8;
      cob_procedure_params[2] = (cob_field *)&c_21;
      cob_glob_ptr->cob_call_params = 3;
      cob_glob_ptr->cob_stmt_exception = 0;
      if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
      b_2 = setElementProperty ((cob_u8_ptr)"#win", (cob_u8_ptr)"style.display", (cob_u8_ptr)"inline");

      /* Line: 92        : CALL               : cob/main.cob */
      cob_procedure_params[0] = (cob_field *)&c_16;
      cob_procedure_params[1] = (cob_field *)&c_8;
      cob_procedure_params[2] = (cob_field *)&c_9;
      cob_glob_ptr->cob_call_params = 3;
      cob_glob_ptr->cob_stmt_exception = 0;
      if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
      b_2 = setElementProperty ((cob_u8_ptr)"#lost", (cob_u8_ptr)"style.display", (cob_u8_ptr)"none");

      /* Line: 93        : CALL               : cob/main.cob */
      cob_procedure_params[0] = &f_12;
      cob_procedure_params[1] = (cob_field *)&c_18;
      cob_procedure_params[2] = (cob_field *)&c_22;
      cob_glob_ptr->cob_call_params = 3;
      cob_glob_ptr->cob_stmt_exception = 0;
      if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
      b_2 = setElementProperty (b_12, (cob_u8_ptr)"style.color", (cob_u8_ptr)"green");
    }
  }

  /* Line: 98        : IF                 : cob/main.cob */
  if (((int)cob_cmp_numdisp (b_11, 1, 1LL, 0) == 0))
  {

    /* Line: 99        : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_23;
    cob_procedure_params[1] = (cob_field *)&c_3;
    cob_procedure_params[2] = (cob_field *)&c_4;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#end", (cob_u8_ptr)"style.visibility", (cob_u8_ptr)"visible");

    /* Line: 100       : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_24;
    cob_procedure_params[1] = (cob_field *)&c_3;
    cob_procedure_params[2] = (cob_field *)&c_4;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#Yes", (cob_u8_ptr)"style.visibility", (cob_u8_ptr)"visible");

    /* Line: 101       : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_25;
    cob_procedure_params[1] = (cob_field *)&c_3;
    cob_procedure_params[2] = (cob_field *)&c_4;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#No", (cob_u8_ptr)"style.visibility", (cob_u8_ptr)"visible");

    /* Line: 103       : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_2;
    cob_procedure_params[1] = (cob_field *)&c_3;
    cob_procedure_params[2] = (cob_field *)&c_26;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#begin", (cob_u8_ptr)"style.visibility", (cob_u8_ptr)"hidden");

    /* Line: 104       : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_27;
    cob_procedure_params[1] = (cob_field *)&c_11;
    cob_procedure_params[2] = &f_6;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#nb", (cob_u8_ptr)"innerHTML", b_6);
  }

  /* Line: 112       : EVALUATE           : cob/main.cob */

  /* Line: 113       : WHEN               : cob/main.cob */

  if (((int)cob_cmp_numdisp (b_8, 3, 1LL, 0) < 0))
  {

    /* Line: 114       : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_23;
    cob_procedure_params[1] = (cob_field *)&c_3;
    cob_procedure_params[2] = (cob_field *)&c_4;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#end", (cob_u8_ptr)"style.visibility", (cob_u8_ptr)"visible");

    /* Line: 115       : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_24;
    cob_procedure_params[1] = (cob_field *)&c_3;
    cob_procedure_params[2] = (cob_field *)&c_4;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#Yes", (cob_u8_ptr)"style.visibility", (cob_u8_ptr)"visible");

    /* Line: 116       : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_25;
    cob_procedure_params[1] = (cob_field *)&c_3;
    cob_procedure_params[2] = (cob_field *)&c_4;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#No", (cob_u8_ptr)"style.visibility", (cob_u8_ptr)"visible");

    /* Line: 118       : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_28;
    cob_procedure_params[1] = (cob_field *)&c_8;
    cob_procedure_params[2] = (cob_field *)&c_21;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#late", (cob_u8_ptr)"style.display", (cob_u8_ptr)"inline");

    /* Line: 119       : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_10;
    cob_procedure_params[1] = (cob_field *)&c_8;
    cob_procedure_params[2] = (cob_field *)&c_9;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#count", (cob_u8_ptr)"style.display", (cob_u8_ptr)"none");

    /* Line: 120       : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_2;
    cob_procedure_params[1] = (cob_field *)&c_3;
    cob_procedure_params[2] = (cob_field *)&c_26;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#begin", (cob_u8_ptr)"style.visibility", (cob_u8_ptr)"hidden");

    /* Line: 121       : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_16;
    cob_procedure_params[1] = (cob_field *)&c_8;
    cob_procedure_params[2] = (cob_field *)&c_9;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#lost", (cob_u8_ptr)"style.display", (cob_u8_ptr)"none");
    goto l_10;
  }

  /* Line: 122       : WHEN               : cob/main.cob */

  if (((int)cob_cmp_numdisp (b_8, 3, 250LL, 0) < 0))
  {

    /* Line: 123       : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_10;
    cob_procedure_params[1] = (cob_field *)&c_18;
    cob_procedure_params[2] = (cob_field *)&c_19;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#count", (cob_u8_ptr)"style.color", (cob_u8_ptr)"red");
    goto l_10;
  }

  /* Line: 124       : WHEN               : cob/main.cob */

  if (((int)cob_cmp_numdisp (b_8, 3, 500LL, 0) < 0))
  {

    /* Line: 125       : CALL               : cob/main.cob */
    cob_procedure_params[0] = (cob_field *)&c_10;
    cob_procedure_params[1] = (cob_field *)&c_18;
    cob_procedure_params[2] = (cob_field *)&c_29;
    cob_glob_ptr->cob_call_params = 3;
    cob_glob_ptr->cob_stmt_exception = 0;
    if (unlikely((cob_glob_ptr->cob_exception_code & 0x0b00) == 0x0b00)) cob_glob_ptr->cob_exception_code = 0;
    b_2 = setElementProperty ((cob_u8_ptr)"#count", (cob_u8_ptr)"style.color", (cob_u8_ptr)"orange");
    goto l_10;
  }

  /* End EVALUATE */
  l_10:;

  /* Implicit PERFORM return */
  if (frame_ptr->perform_through == 9)
    goto *frame_ptr->return_address_ptr;

  /* Program exit */

  /* Decrement module active count */
  if (module->module_active) {
  	module->module_active--;
  }

  /* Pop module stack */
  cob_module_leave (module);

  /* Program return */
  return b_2;
  P_cgerror:
   cob_fatal_error (COB_FERROR_CODEGEN);


  /* Program initialization */
  P_initialize:

  cob_check_version (COB_SOURCE_FILE, COB_PACKAGE_VERSION, COB_PATCH_LEVEL);

  cob_module_path = cob_glob_ptr->cob_main_argv0;

  /* Initialize module structure */
  module->module_name = "guess-the-number";
  module->module_formatted_date = COB_MODULE_FORMATTED_DATE;
  module->module_source = COB_SOURCE_FILE;
  module->module_entry.funcptr = (void *(*)())guess__the__number;
  module->module_cancel.funcptr = (void *(*)())guess__the__number_;
  module->collating_sequence = NULL;
  module->crt_status = NULL;
  module->cursor_pos = NULL;
  module->module_ref_count = NULL;
  module->module_path = &cob_module_path;
  module->module_active = 0;
  module->module_date = COB_MODULE_DATE;
  module->module_time = COB_MODULE_TIME;
  module->module_type = 0;
  module->module_param_cnt = 0;
  module->ebcdic_sign = 0;
  module->decimal_point = '.';
  module->currency_symbol = '$';
  module->numeric_separator = ',';
  module->flag_filename_mapping = 1;
  module->flag_binary_truncate = 1;
  module->flag_pretty_display = 1;
  module->flag_host_sign = 0;
  module->flag_no_phys_canc = 1;
  module->flag_main = 1;
  module->flag_fold_call = 0;
  module->flag_exit_program = 0;
  module->flag_debug_trace = 0;
  module->flag_dump_ready = 0;
  module->module_stmt = 0;
  module->module_sources = st_source_files;

  /* Initialize cancel callback */
  cob_set_cancel (module);

  /* Initialize WORKING-STORAGE */
  b_2 = 0;
  *(cob_u8_ptr)(b_6) = 48;
  *(b_7) = 48;
  memset (b_8, 57, 3);
  *(b_9) = 48;
  *(b_10) = 48;
  *(b_11) = 48;
  memset (b_12, 32, 3);
  *(cob_u8_ptr)(b_13) = 32;

  if (0 == 1) goto P_cgerror;
  initialized = 1;
  goto P_ret_initialize;

  P_dump:
  return 0;


  /* CANCEL callback handling */
  P_cancel:

  if (!initialized) {
  	return 0;
  }
  if (module->module_active) {
  	cob_fatal_error (COB_FERROR_CANCEL);
  }

  initialized = 0;

  P_clear_decimal:

  return 0;

}

/* End PROGRAM-ID 'guess-the-number' */

/* End functions */

