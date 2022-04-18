/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Input Mono:style=Regular:pixelsize=10:antialias=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char foreground[]      = "#D8DEE9";
static const char background[]      = "#2E3440";
static const char color0[]          = "#3B4252";
static const char color1[]          = "#BF616A";
static const char color2[]          = "#A3BE8C";
static const char color3[]          = "#EBCB8B";
static const char color4[]          = "#81A1C1";
static const char color5[]          = "#B48EAD";
static const char color6[]          = "#88C0D0";
static const char color7[]          = "#E5E9F0";
static const char color8[]          = "#4C566A";
static const char color9[]          = "#BF616A";
static const char color10[]         = "#A3BE8C";
static const char color11[]         = "#EBCB8B";
static const char color12[]         = "#81A1C1";
static const char color13[]         = "#B48EAD";
static const char color14[]         = "#8FBCBB";
static const char color15[]         = "#ECEFF4";
static const char *colors[SchemeLast][2] = {
	/*                        fg         bg       */
	[SchemeNorm] =          { foreground, background },
	[SchemeSel] =           { background, foreground },
	[SchemeSelHighlight] =  { background, foreground },
	[SchemeNormHighlight] = { foreground, background },
	[SchemeOut] =           { background, foreground },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
