# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 15:43:43 by jjane-ta          #+#    #+#              #
#    Updated: 2023/02/15 19:15:12 by jjane-ta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test_deep_copy

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp 
OBJ = $(addprefix .,$(addsuffix .o,$(basename $(SRC))))
DEP = $(addprefix .,$(addsuffix .d,$(basename $(SRC))))

CXX = c++ -std=c++98 -pedantic -Wno-shadow
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

