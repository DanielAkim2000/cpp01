DIRS = ex00 ex01 ex02 ex03 ex04 ex05 ex06

all clean re fclean:
	for dir in $(DIRS); do \
		$(MAKE) -C $$dir $@; \
	done

.PHONY: all clean re fclean

