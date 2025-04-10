SOURCES = $(wildcard src/*.html)
TARGETS = $(patsubst src/%.html,%.txt,$(SOURCES))

all: $(TARGETS)

list:
	@echo Sources: $(SOURCES)
	@echo Targets: $(TARGETS)

# Crude way to remove HTML tags with a regex
%.txt: src/%.html
	sed 's/<.*>//' $< > $@

clean:
	rm -f $(TARGETS)

.PHONY: all clean list
