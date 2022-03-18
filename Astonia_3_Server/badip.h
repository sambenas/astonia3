/*
    badip.h
*/

#ifndef _ASTONIA_BADIP_H_
#define _ASTONIA_BADIP_H_

int is_badpass_ip(MYSQL *mysql,unsigned int ip);
void add_badpass_ip(MYSQL *mysql,unsigned int ip);
void clean_badpass_ips(MYSQL *mysql);

#endif