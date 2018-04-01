# MACROS

CPP        = g++
INCLUDE    = ./include
SRC        = ./src
OBJ	   = ./obj
CPPFLAGS   = -g -I$(INCLUDE)

DEPS_NY_STORE = $(INCLUDE)/NYStylePizzaStore.hpp \
   		$(INCLUDE)/NYStyleCheesePizza.hpp \
		$(INCLUDE)/NYStyleClamPizza.hpp \
		$(INCLUDE)/NYStylePepperoniPizza.hpp \
		$(INCLUDE)/NYStyleVeggiePizza.hpp \
		
DEPS_CA_STORE = $(INCLUDE)/CaliforniaStylePizzaStore.hpp \
		$(INCLUDE)/CaliforniaStyleCheesePizza.hpp \
		$(INCLUDE)/CaliforniaStyleClamPizza.hpp \
		$(INCLUDE)/CaliforniaStylePepperoniPizza.hpp \
		$(INCLUDE)/CaliforniaStyleVeggiePizza.hpp 

DEPS_CH_STORE = $(INCLUDE)/ChicagoStylePizzaStore.hpp \
		$(INCLUDE)/ChicagoStyleCheesePizza.hpp \
		$(INCLUDE)/ChicagoStyleClamPizza.hpp \
		$(INCLUDE)/ChicagoStylePepperoniPizza.hpp \
		$(INCLUDE)/ChicagoStyleVeggiePizza.hpp

DEPS_MAIN = $(INCLUDE)/PizzaStore.hpp \
	    $(INCLUDE)/NYStylePizzaStore.hpp \
	    $(INCLUDE)/ChicagoStylePizzaStore.hpp \
	    $(INCLUDE)/CaliforniaStylePizzaStore.hpp \
	    $(INCLUDE)/Pizza.hpp

DEPS_OBJ = main.o \
	   PizzaStore.o \
	   NYStylePizzaStore.o \
	   NYStyleCheesePizza.o \
	   NYStyleClamPizza.o \
	   NYStylePepperoniPizza.o \
	   NYStyleVeggiePizza.o \
	   ChicagoStylePizzaStore.o \
	   ChicagoStyleCheesePizza.o \
	   ChicagoStyleClamPizza.o \
	   ChicagoStylePepperoniPizza.o \
	   ChicagoStyleVeggiePizza.o \
	   CaliforniaStylePizzaStore.o \
           CaliforniaStyleCheesePizza.o \
	   CaliforniaStyleClamPizza.o \
	   CaliforniaStylePepperoniPizza.o \
           CaliforniaStyleVeggiePizza.o

# TARGETS

main: $(DEPS_OBJ)
	@(echo "Building " $@ " ...")
	@($(CPP) $(CPPFLAGS) -o $@ $^; rm -f $(DEPS_OBJ))

main.o: $(SRC)/main.cpp $(DEPS_MAIN)
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

PizzaStore.o: $(SRC)/PizzaStore.cpp $(INCLUDE)/PizzaStore.hpp
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

NYStylePizzaStore.o: $(SRC)/NYStylePizzaStore.cpp \
		     $(DEPS_NY_STORE)
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

NYStyleCheesePizza.o: $(SRC)/NYStyleCheesePizza.cpp \
		      $(INCLUDE)/NYStyleCheesePizza.hpp
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

NYStyleClamPizza.o: $(SRC)/NYStyleClamPizza.cpp \
		    $(INCLUDE)/NYStyleClamPizza.hpp
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

NYStylePepperoniPizza.o: $(SRC)/NYStylePepperoniPizza.cpp \
			 $(INCLUDE)/NYStylePepperoniPizza.hpp
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

NYStyleVeggiePizza.o: $(SRC)/NYStyleVeggiePizza.cpp \
		      $(INCLUDE)/NYStyleVeggiePizza.hpp
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

CaliforniaStylePizzaStore.o: $(SRC)/CaliforniaStylePizzaStore.cpp $(DEPS_CA_STORE)
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

CaliforniaStyleCheesePizza.o: $(SRC)/CaliforniaStyleCheesePizza.cpp $(INCLUDE)/CaliforniaStyleCheesePizza.hpp
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

CaliforniaStyleClamPizza.o: $(SRC)/CaliforniaStyleClamPizza.cpp $(INCLUDE)/CaliforniaStyleClamPizza.hpp
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

CaliforniaStylePepperoniPizza.o: $(SRC)/CaliforniaStylePepperoniPizza.cpp $(INCLUDE)/CaliforniaStylePepperoniPizza.hpp
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

CaliforniaStyleVeggiePizza.o: $(SRC)/CaliforniaStyleVeggiePizza.cpp $(INCLUDE)/CaliforniaStyleVeggiePizza.hpp
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

ChicagoStylePizzaStore.o: $(SRC)/ChicagoStylePizzaStore.cpp $(DEPS_CH_STORE)
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

ChicagoStyleCheesePizza.o: $(SRC)/ChicagoStyleCheesePizza.cpp $(INCLUDE)/ChicagoStyleCheesePizza.hpp
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

ChicagoStyleClamPizza.o: $(SRC)/ChicagoStyleClamPizza.cpp $(INCLUDE)/ChicagoStyleClamPizza.hpp
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

ChicagoStylePepperoniPizza.o: $(SRC)/ChicagoStylePepperoniPizza.cpp $(INCLUDE)/ChicagoStylePepperoniPizza.hpp
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

ChicagoStyleVeggiePizza.o: $(SRC)/ChicagoStyleVeggiePizza.cpp $(INCLUDE)/ChicagoStyleVeggiePizza.hpp
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

.PHONY: clean

clean:
	rm -f $(OBJ)/*.o main
