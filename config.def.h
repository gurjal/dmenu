/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Fira Mono:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char foreground[]      = "#d0d0d0";
static const char background[]      = "#181418";
static const char color0[]          = "#4e4e4e";
static const char color1[]          = "#d68787";
static const char color2[]          = "#5f865f";
static const char color3[]          = "#d8af5f";
static const char color4[]          = "#85add4";
static const char color5[]          = "#d7afaf";
static const char color6[]          = "#87afaf";
static const char color7[]          = "#d0d0d0";
static const char color8[]          = "#626262";
static const char color9[]          = "#d75f87";
static const char color10[]         = "#87af87";
static const char color11[]         = "#ffd787";
static const char color12[]         = "#add4fb";
static const char color13[]         = "#ffafaf";
static const char color14[]         = "#87d7d7";
static const char color15[]         = "#e4e4e4";
static const char *colors[SchemeLast][2] = {
	/*                        fg         bg       */
	[SchemeNorm] =          { foreground, background },
	[SchemeSel] =           { background, color2 },
	[SchemeSelHighlight] =  { background, color6 },
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
