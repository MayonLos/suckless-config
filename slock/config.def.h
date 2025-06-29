/* user and group to drop privileges to */ static const char *user  = "nobody";
static const char *group = "nobody";
/*Font settings for the time text*/
static const float textsize=64.0;
static const char* textfamily="serif";
static const double textcolorred=255;
static const double textcolorgreen=255;
static const double textcolorblue=255;

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] = "red",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 0;
