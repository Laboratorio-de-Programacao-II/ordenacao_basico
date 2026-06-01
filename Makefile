# Variáveis de configuração
CC      = gcc
CFLAGS  = -Wall -std=c99 -O0
LIBS    = -lm
TARGET  = prog
SRCS    = $(wildcard *.c)
OBJS    = $(SRCS:.c=.o)

# Regra padrão
all: $(TARGET)

# Compilação do executável
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS) $(LIBS)

# Regra para compilar os arquivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra de execução (lê da entrada padrão)
run: $(TARGET)
	./$(TARGET)

# Limpeza
clean:
	rm -f $(TARGET) $(OBJS) ordenados.txt

.PHONY: all run clean
