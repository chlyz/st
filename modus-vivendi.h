/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#000000", // bg_main
	"#ff8059", // red
	"#44bc44", // green
	"#d0bc00", // yellow
	"#2fafff", // blue
	"#feacd0", // magenta
	"#00d3d0", // cyan
	"#ffffff", // fg_main

	/* 8 bright colors */
	"#505050", // bg_alt
	"#a60000", // red_alt_other
        "#005e00", // green_alt_other
	"#863927", // yellow_alt_other
	"#0000c0", // blue_alt_other
	"#5317ac", // magenta_alt_other
	"#005a5f", // cyan_alt_other
	"#f2eff3", // bg_hl_line

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#ffffff",
	"#000000",
	"#ffffff", /* default foreground colour */
	"#000000", /* default background colour */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

