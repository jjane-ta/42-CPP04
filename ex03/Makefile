# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/19 16:11:04 by jjane-ta          #+#    #+#              #
#    Updated: 2023/02/22 15:07:14 by jjane-ta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_interface

SRC = main.cpp Slot.cpp  AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp 
OBJ = $(addprefix .,$(addsuffix .o,$(basename $(SRC))))
DEP = $(addprefix .,$(addsuffix .d,$(basename $(SRC))))

CXX = c++ -std=c++98 -pedantic
CXXFLAGS = -Wall -Wextra -Werror -MMD -MP

.%.o : %.cpp Makefile
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

-include $(DEP)
$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean : 
	$(RM) $(OBJ) $(DEP)

fclean : clean
	$(RM) $(NAME)

re : fclean
	$(MAKE) all

.PHONY : re clean fclean

