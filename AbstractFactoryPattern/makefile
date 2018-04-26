# MACROS

GCC = g++
SRC = ./src
INCLUDE = ./include
CPPFLAG = -g -I$(INCLUDE)

# TARGETS

DEP_NY_INGREDIENT_FACTORY = $(INCLUDE)/NYPizzaIngredientFactory.hpp \
			    $(INCLUDE)/ThinCrustDough.hpp \
			    $(INCLUDE)/MarinaraSauce.hpp \
			    $(INCLUDE)/ReggianaCheese.hpp \
			    $(INCLUDE)/SlicedPepperoni.hpp \
			    $(INCLUDE)/FreshClams.hpp \
			    $(INCLUDE)/Garlic.hpp \
			    $(INCLUDE)/Onion.hpp \
			    $(INCLUDE)/Mushroom.hpp \
			    $(INCLUDE)/RedPepper.hpp

DEP_CA_INGREDIENT_FACTORY = $(INCLUDE)/CaliforniaPizzaIngredientFactory.hpp \
			    $(INCLUDE)/VeryThinCrustDough.hpp \
			    $(INCLUDE)/BruschettaSauce.hpp \
			    $(INCLUDE)/GoatCheese.hpp \
			    $(INCLUDE)/CamarlClams.hpp

DEP_CH_INGREDIENT_FACTORY = $(INCLUDE)/ChicagoPizzaIngredientFactory.hpp \
			    $(INCLUDE)/ThickCrustDough.hpp \
			    $(INCLUDE)/PlumTomatoSauce.hpp \
			    $(INCLUDE)/MozzarellaCheese.hpp \
			    $(INCLUDE)/SlicedPepperoni.hpp \
			    $(INCLUDE)/FrozenClams.hpp \
			    $(INCLUDE)/Spinach.hpp \
			    $(INCLUDE)/EggPlant.hpp \
			    $(INCLUDE)/BlackOlive.hpp

DEP_NY_STORE = $(INCLUDE)/NYStylePizzaStore.hpp \
	       $(INCLUDE)/CheesePizza.hpp \
	       $(INCLUDE)/ClamPizza.hpp \
	       $(INCLUDE)/PepperoniPizza.hpp \
	       $(INCLUDE)/VeggiePizza.hpp \
	       $(INCLUDE)/PizzaIngredientFactory.hpp \
	       $(INCLUDE)/NYPizzaIngredientFactory.hpp

DEP_CH_STORE = $(INCLUDE)/ChicagoStylePizzaStore.hpp \
	       $(INCLUDE)/CheesePizza.hpp \
	       $(INCLUDE)/ClamPizza.hpp \
	       $(INCLUDE)/PepperoniPizza.hpp \
	       $(INCLUDE)/VeggiePizza.hpp \
	       $(INCLUDE)/PizzaIngredientFactory.hpp \
	       $(INCLUDE)/ChicagoPizzaIngredientFactory.hpp

DEP_CA_STORE = $(INCLUDE)/CaliforniaStylePizzaStore.hpp \
	       $(INCLUDE)/CheesePizza.hpp \
	       $(INCLUDE)/ClamPizza.hpp \
	       $(INCLUDE)/PepperoniPizza.hpp \
	       $(INCLUDE)/VeggiePizza.hpp \
	       $(INCLUDE)/PizzaIngredientFactory.hpp \
	       $(INCLUDE)/CaliforniaPizzaIngredientFactory.hpp

DEP_MAIN = $(INCLUDE)/PizzaStore.hpp \
	   $(INCLUDE)/NYStylePizzaStore.hpp \
	   $(INCLUDE)/ChicagoStylePizzaStore.hpp \
	   $(INCLUDE)/CaliforniaStylePizzaStore.hpp \
	   $(INCLUDE)/Pizza.hpp

DEP_OBJ = main.o \
	  NYStylePizzaStore.o \
	  ChicagoStylePizzaStore.o \
	  CaliforniaStylePizzaStore.o \
	  PizzaStore.o \
	  ChicagoPizzaIngredientFactory.o \
	  CaliforniaPizzaIngredientFactory.o \
	  NYPizzaIngredientFactory.o \
	  VeggiePizza.o \
	  PepperoniPizza.o \
	  ClamPizza.o \
	  CheesePizza.o \
	  Spinach.o \
	  RedPepper.o \
	  Onion.o \
 	  Mushroom.o \
	  Garlic.o \
	  EggPlant.o \
	  BlackOlive.o \
	  SlicedPepperoni.o \
	  FrozenClams.o \
	  FreshClams.o \
	  CamarlClams.o \
	  PlumTomatoSauce.o \
	  MarinaraSauce.o \
	  BruschettaSauce.o \
 	  VeryThinCrustDough.o \
	  ThinCrustDough.o \
	  ThickCrustDough.o \
	  MozzarellaCheese.o \
	  ReggianaCheese.o \
	  GoatCheese.o 

main: $(DEP_OBJ)
	@(echo "Compiling " $@ " ...")
	@($(GCC) $(CPPFLAG) -o $@ $^; rm -rf ./*.o)

main.o : $(SRC)/main.cpp $(DEP_MAIN)
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

################################## PizzaStore ###################################

NYStylePizzaStore.o : $(SRC)/NYStylePizzaStore.cpp $(DEP_NY_STORE)
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

ChicagoStylePizzaStore.o : $(SRC)/ChicagoStylePizzaStore.cpp $(DEP_CH_STORE)
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

CaliforniaStylePizzaStore.o : $(SRC)/CaliforniaStylePizzaStore.cpp $(DEP_CA_STORE)
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

PizzaStore.o : $(SRC)/PizzaStore.cpp $(INCLUDE)/PizzaStore.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

############################ PizzaIngredientFactory #############################

ChicagoPizzaIngredientFactory.o : $(SRC)/ChicagoPizzaIngredientFactory.cpp $(DEP_CH_INGREDIENT_FACTORY)
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

CaliforniaPizzaIngredientFactory.o : $(SRC)/CaliforniaPizzaIngredientFactory.cpp $(DEP_CA_INGREDIENT_FACTORY)
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

NYPizzaIngredientFactory.o : $(SRC)/NYPizzaIngredientFactory.cpp $(DEP_NY_INGREDIENT_FACTORY)
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

##################################### Pizza #####################################

VeggiePizza.o : $(SRC)/VeggiePizza.cpp $(INCLUDE)/VeggiePizza.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

PepperoniPizza.o : $(SRC)/PepperoniPizza.cpp $(INCLUDE)/PepperoniPizza.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

ClamPizza.o : $(SRC)/ClamPizza.cpp $(INCLUDE)/ClamPizza.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

CheesePizza.o : $(SRC)/CheesePizza.cpp $(INCLUDE)/CheesePizza.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

##################################### Veggies #####################################

Spinach.o : $(SRC)/Spinach.cpp $(INCLUDE)/Spinach.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

RedPepper.o : $(SRC)/RedPepper.cpp $(INCLUDE)/RedPepper.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

Onion.o : $(SRC)/Onion.cpp $(INCLUDE)/Onion.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

Mushroom.o : $(SRC)/Mushroom.cpp $(INCLUDE)/Mushroom.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

Garlic.o : $(SRC)/Garlic.cpp $(INCLUDE)/Garlic.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

EggPlant.o : $(SRC)/EggPlant.cpp $(INCLUDE)/EggPlant.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

BlackOlive.o : $(SRC)/BlackOlive.cpp $(INCLUDE)/BlackOlive.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

##################################### Pepperoni #####################################

SlicedPepperoni.o : $(SRC)/SlicedPepperoni.cpp $(INCLUDE)/SlicedPepperoni.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

##################################### Clams #####################################

FrozenClams.o : $(SRC)/FrozenClams.cpp $(INCLUDE)/FrozenClams.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

FreshClams.o : $(SRC)/FreshClams.cpp $(INCLUDE)/FreshClams.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

CamarlClams.o : $(SRC)/CamarlClams.cpp $(INCLUDE)/CamarlClams.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

##################################### Sauce #####################################

PlumTomatoSauce.o : $(SRC)/PlumTomatoSauce.cpp $(INCLUDE)/PlumTomatoSauce.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

MarinaraSauce.o : $(SRC)/MarinaraSauce.cpp $(INCLUDE)/MarinaraSauce.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

BruschettaSauce.o : $(SRC)/BruschettaSauce.cpp $(INCLUDE)/BruschettaSauce.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

##################################### Dough #####################################

VeryThinCrustDough.o : $(SRC)/VeryThinCrustDough.cpp $(INCLUDE)/VeryThinCrustDough.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)


ThinCrustDough.o : $(SRC)/ThinCrustDough.cpp $(INCLUDE)/ThinCrustDough.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

ThickCrustDough.o : $(SRC)/ThickCrustDough.cpp $(INCLUDE)/ThickCrustDough.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

##################################### Cheese #####################################

MozzarellaCheese.o : $(SRC)/MozzarellaCheese.cpp $(INCLUDE)/MozzarellaCheese.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

ReggianaCheese.o : $(SRC)/ReggianaCheese.cpp $(INCLUDE)/ReggianaCheese.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)


GoatCheese.o : $(SRC)/GoatCheese.cpp $(INCLUDE)/GoatCheese.hpp
	@(echo "Generating " $@ " ...")
	@($(GCC) $(CPPFLAG) -c -o $@ $<)

clean:
	@(echo "Remove object and executable files...")
	@(rm -rf main)
