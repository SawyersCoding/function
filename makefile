
CC=g++
CFLAGS=-lm

SRC = src
OPDIR = src/operator

FUNCLIB=funclib.a
OFILES = $(OPDIR)/addition_operator.o $(OPDIR)/division_operator.o $(OPDIR)/exponentiation_operator.o $(SRC)/function.o $(SRC)/invalid_infix_exception.o $(OPDIR)/multiplication_operator.o $(OPDIR)/operator_argument_exception.o $(OPDIR)/operator_factory.o $(OPDIR)/subtraction_operator.o

%.o: %.cpp
	$(CC) -c -MD -MP -o $@ $< $(CFLAGS)

$(FUNCLIB): $(OFILES)
	ar rcs $@ $^ $(CFLAGS)

clean:
	rm -f $(OFILES) $(FUNCLIB)

-include $(OFILES:.o=.d)