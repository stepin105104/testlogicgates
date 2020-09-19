SRC = unity/unity.c\
src/logic_gates.c\
test/test_logicgates.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = logic_gates.exe

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
