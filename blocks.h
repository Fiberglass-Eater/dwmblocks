//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/				/*Update Interval*/	/*Update Signal*/
	
	{"", 		"~/bin/monero-bar",				1,		11},

	{"| ", 	"~/bin/clock",			        	1,		11},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
