static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* treat pressing control keys while input is cleared like a wrong
 * password (effective only when failonclear is set) */
static const int failonctrlkey = 1;

/* time in seconds before the monitor shuts down (-1 = do not set dpms) */
static const int dpmstime = 10;
