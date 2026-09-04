/* dwmblocks config.h — USG Engineering Theme
 * Luke's dwmblocks format: icon, command, interval, signal
 * signal numbers are SIGRTMIN+N, keep N between 1-15
 */

static const Block blocks[] = {
	/* icon    command          interval   signal */
	{ "",     "sb-music",          5,         1 },
	{ "",     "sb-cpu",            2,         2 },
	{ "",     "sb-memory",         2,         3 },
	{ "",     "sb-disk",          60,         4 },
	{ "",     "sb-ip",           300,         5 },
	{ "",     "sb-uptime",        60,         6 },
	{ "",     "sb-temp",          10,         7 },
	{ "",     "sb-volume",         0,         8 },
	{ "",     "sb-datetime",      30,         9 },
};

static char *delim = "  ";
static unsigned int delimLen = 2;
