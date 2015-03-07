#
#	Copyright abandoned, 1983, The Rand Corporation
#

# Rand Editor with LA package
#
#       MAKEFILE FOR RAND "LA" LINE-ACCESS I/O PACKAGE
#
CFLAGS = -O -I. -I../include

ALL=center fill run
all: $(ALL)
center: center.c
	$(CC) $(CFLAGS) -o $@ $@.c

fill: fill.c
	$(CC) $(CFLAGS) -o $@ $@.c

run: run.c
	$(CC) $(CFLAGS) -o $@ $@.c

clean:
	rm -f $(ALL) ,* .e?[1-9] .e?[1-9].* core *.bak *.BAK

depend:
	makedepend -- $(CFLAGS) -- center.c fill.c run.c
