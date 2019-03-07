/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {"mono:size=11:antialias=true:autohint=true"};
static const char *prompt  = NULL;      /* -p  option; prompt to the left of input field */

static const char prim_bg[]         = "#ffffff";
static const char prim_hl[]         = "#1faaaa";
static const char secd_bg[]         = "#e0e0e0";
static const char prim_tx[]         = "#151515";

static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { prim_tx, prim_bg },
	[SchemeSel] = { prim_hl, secd_bg },
	[SchemeOut] = { prim_bg, prim_hl },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
