CC=gcc
AFLAGS=-Wall -g
LDFLAGS= -lmysqlclient
OBJS= add.cgi del.cgi mod.cgi sel.cgi del_c.cgi add_c.cgi del_cc.cgi mod_c.cgi sel_c.cgi teacher.cgi student.cgi sel_s.cgi

all:$(OBJS)

$(OBJS):%.cgi:%.c
	$(CC) $(AFLAGS) $< cgic.c -o $@ $(LDFLAGS)

.PHONY:clean
clean:
	rm ./*.cgi
install:
		cp *.cgi /usr/lib/cgi-bin/sx
		cp head.html footer.html index_t.html index_s.html /usr/lib/cgi-bin/sx/
