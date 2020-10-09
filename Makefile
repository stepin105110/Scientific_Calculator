SRC = unity/unity.c\
src/cal.c\
test/test_cal.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = CAL.exe

$(PROJECT_NAME) : $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)
	
run: $(PROJECT_NAME)
	./${PROJECT_NAME}
