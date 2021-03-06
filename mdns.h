#ifndef _MDNS_H
#define _MDNS_H

extern int mdns_pid;

void mdns_unregister(void);
void mdns_register(void);

#define MDNS_RECORD  "tp=UDP", "sm=false", "ek=1", "et=0,1", "cn=0,1", "ch=2", \
                "ss=16", "sr=44100", "vn=3", "txtvers=1", \
                config.password ? "pw=true" : "pw=false"

#endif // _MDNS_H
