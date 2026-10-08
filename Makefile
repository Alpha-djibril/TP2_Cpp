# Compilateur et options
CXX      = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -g -I.

# Nom de l'exécutable
TARGET   = catalogue

# Fichiers sources et objets
SRCS = main.cpp \
       Catalogue.cpp \
	   Trajet.cpp \
       TrajetCompose.cpp \
       TrajetSimple.cpp

OBJS = $(SRCS:.cpp=.o)

# Règle par défaut
all: $(TARGET)

# Édition de liens
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilation des .cpp en .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Dépendances sur les en-têtes
main.o:          Catalogue.hpp Liste.hpp Cell.hpp TrajetSimple.hpp Trajet.hpp Transport.hpp
Catalogue.o:     Catalogue.hpp Liste.hpp Cell.hpp TrajetSimple.hpp Trajet.hpp Transport.hpp
Liste.o:         Liste.hpp Cell.hpp TrajetSimple.hpp Trajet.hpp Transport.hpp
TrajetCompose.o: TrajetCompose.hpp Liste.hpp Cell.hpp TrajetSimple.hpp Trajet.hpp Transport.hpp
TrajetSimple.o:  TrajetSimple.hpp Trajet.hpp Transport.hpp

# Exécution
run: $(TARGET)
	./$(TARGET)

# Nettoyage
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all run clean