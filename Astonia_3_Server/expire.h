/*

$Id: expire.h,v 1.1 2005/09/24 09:55:48 ssim Exp $

$Log: expire.h,v $
Revision 1.1  2005/09/24 09:55:48  ssim
Initial revision

Revision 1.2  2003/10/13 14:12:13  sam
Added RCS tags


*/

#ifndef _ASTONIA_EXPIRE_H_
#define _ASTONIA_EXPIRE_H_

int set_expire(int in,int duration);
int set_expire_body(int in,int duration);

#endif
