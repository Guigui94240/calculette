variable:

CC= gcc
CFLAGS = -Wall -Wextra
SRCS = main.c addition.c multiplication.c division.c soustraction.c
TARGET = tryMAKE
SRCSTEST=addition.c multiplication.c division.c soustraction.c test.c
TARGETTEST= testMAKE



build: $(SRCS)

	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)


test:$(SRCSTEST)

	$(CC) $(CFLAGS) -o $(TARGETTEST) $(SRCSTEST)

.PHONY: deploy

deploy: $(TARGET)
	mkdir -p deploy
	mv $(TARGET) deploy