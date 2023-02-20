OBJS = ui.o history.o tokenizer.o

CFLAGS = -g -O3 -Wall -Wextra

all: ui

ui: $(OBJS)
	cc -o ui $(CFLAGS) $(OBJS)

$(OBJS): history.h tokenizer.h

clean:
	rm -f *.o tokenizer ui history

run: ui
	./ui