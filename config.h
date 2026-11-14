//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"cat /tmp/recordingicon 2>/dev/null",	0,	9},

	{"",		"music",				0,	11},

	{"",		"timeout 2 nowplaying",			5,	13},

	{"",		"pacpackages",				0,	8},

	// {"",		"torrent",				20,	7},

	{"",		"mail-status unipi",			0,	12},
	{"",		"mail-status unipi-ta",			0,	14},
	{"",		"mail-status gmail",			0,	15},

	{"",		"volume",				0,	10},

	{"",		"battery",				5,	3},

	{"",		"clock",				10,	1},

	{"",		"internet",				5,	4},
};

//Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " ";
