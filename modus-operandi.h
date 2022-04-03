/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#ffffff", // bg_main
	"#a60000", // red
	"#005e00", // green
	"#813e00", // yellow
	"#0031a9", // blue
	"#721045", // magenta
	"#00538b", // cyan
	"#000000", // fg_main

	/* 8 bright colors */
	"#f2eff3", // bg_hl_line
	"#a60000", // red_alt_other
        "#005e00", // green_alt_other
	"#863927", // yellow_alt_other
	"#0000c0", // blue_alt_other
	"#5317ac", // magenta_alt_other
	"#005a5f", // cyan_alt_other
	"#505050", // fg_alt

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#000000",
	"#ffffff",
	"#000000", /* default foreground colour */
	"#ffffff", /* default background colour */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

