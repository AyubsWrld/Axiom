/*
 * Expands to 1 if anything is passed, otherwise expands to 0.
 */

#ifndef DETAIL_AXM_HEADER_PREPROC_ANY
#	define DETAIL_AXM_HEADER_PREPROC_ANY
#
#	define AXM_ANY(...) DETAIL_AXM_ANY##__VA_OPT__(_)
#
#	define DETAIL_AXM_ANY 0
#	define DETAIL_AXM_ANY_ 1
#endif
