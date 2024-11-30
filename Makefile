TARGET := bitrev

OBJECTS := obj/main.o obj/bits.o

$(TARGET): $(OBJECTS)
	gcc -o $@ $^

$(OBJECTS): obj/%.o : src/%.c
	gcc -std=c99 -I inc/ -c -o $@ $^

clean:
	rm $(OBJECTS) $(TARGET)
