#include "md4c/md4c.h"
#include <stdio.h>
#include <string.h>

int enter_block(MD_BLOCKTYPE type, void * detail, void* userdata)
{
	return 0;
}

int leave_block(MD_BLOCKTYPE type, void * detail, void* userdata)
{
	return 0;
}

int enter_span(MD_SPANTYPE type, void * detail, void* userdata)
{
	return 0;
}

int leave_span(MD_SPANTYPE type, void * detail, void* userdata)
{
	return 0;
}

int text(MD_TEXTTYPE type, const MD_CHAR* text, MD_SIZE size, void* userdata)
{
	// only text callback receive the actual content that should be rendererd
	printf("%s: %d\n", text, size);
	return 0;
}


int main()
{
	MD_CHAR* test_text = "I'm a `test`";
	MD_PARSER parser = {
		.flags = MD_FLAG_STRIKETHROUGH,
		.enter_block = enter_block,
		.leave_block = leave_block,
		.enter_span = enter_span,
		.leave_span = leave_span,
		.text = text
	};
	md_parse(test_text, strlen(test_text), &parser, NULL);

	return 0;
}