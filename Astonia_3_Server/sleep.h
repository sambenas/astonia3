/*

$Id: sleep.h,v 1.1 2005/09/24 09:55:48 ssim Exp $

$Log: sleep.h,v $
Revision 1.1  2005/09/24 09:55:48  ssim
Initial revision

Revision 1.2  2003/10/13 14:12:48  sam
Added RCS tags


*/

#ifndef _ASTONIA_SLEEP_H_
#define _ASTONIA_SLEEP_H_

extern int cidle_avg;
void tick_sleep(int show_idle);
long long timel(void);

#endif