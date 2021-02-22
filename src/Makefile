OBJS= mainui.o tokenizer.c

CFLAGS=-g -O3

all: tokenizer

tokenizer: $(OBJS)
	cc -o tokenizer $(CLFAGS) $(OBJS)

$(OBJS): history.h tokenizer.h

clean:
	rm -f *.o tokenizer

run: tokenizer
	./tokenizer
