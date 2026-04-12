srcs= main.cpp Data.cpp Serializer.cpp

header= Data.hpp Serializer.hpp

cc= c++

Flags= -Wall -Wextra -Werror -std=c++98

Name= serializer

all:$(Name)

$(Name) : $(srcs) $(header)
	$(cc) $(Flags) $(srcs) -o $(Name)

clean:
	rm -rf $(Name)

fclean: clean

re:clean all

.Phony: re all clean fclean