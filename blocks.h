//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" ", 	"cat /tmp/recordingicon 2>/dev/null",	0,			9},
	/*{"  ", "~/.local/bin/statusbar/blevel",	0,			11},*/
	{" ",  	"~/.local/bin/statusbar/volume",	0,			10},
	/*{" ", "~/.local/bin/statusbar/battery",	5,			0},*/
	{" ",  	"~/.local/bin/statusbar/clock",		60,			0},
	{"  ", "~/.local/bin/statusbar/cpu",		5,			0},
	{" ",  	"~/.local/bin/statusbar/internet",	5,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '/';
