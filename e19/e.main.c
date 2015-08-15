#ifdef COMMENT
--------
file e.main.c
    main() only
#endif

#ifdef COMMENT
	Copyright abandoned, 1983, The Rand Corporation
#endif

#include "e.h"
#include "e.t.h"

#include "../include/c_env.h"
#include "../include/localenv.h"
#include <stdio.h>
#include <features.h>
#include <sys/cdefs.h>
#include <gnu/stubs.h>
#include <stddef.h>
#include <bits/types.h>
#include <libio.h>
#include <_G_config.h>
#include <wchar.h>
#include <bits/wchar.h>
#include <gconv.h>
#include <stdarg.h>
#include <bits/stdio_lim.h>
#include <string.h>
#include <unistd.h>
#include <bits/posix_opt.h>
#include <bits/confname.h>
#include <sys/types.h>
#include <time.h>
#include "../la1/la.h"
#include "../ff3/ff.h"
#include <limits.h>

extern void main1 ();
extern void mainloop ();

#ifdef COMMENT
void
main (argc, argv)
    int     argc;
    char   *argv[];
.
    The main routine.
    First it does all of the startup stuff by calling main1, then it calls
    mainloop.  This is structured this way so that if overlays are to be
    implemented, all of the main1 stuff can be in one startup overlay that
    is discarded when it is time to call mainloop.
#endif
int
main (argc, argv)
int     argc;
char   *argv[];
{
    main1 (argc, argv);

    mainloop ();
    /* NOTREACHED */
    return 0;
}

