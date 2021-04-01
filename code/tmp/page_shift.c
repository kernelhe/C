#include <stdio.h>

#define PAGE_SHIFT	12
#define PAGE_SIZE	(1UL << PAGE_SHIFT)
#define PAGE_MASK	(~(PAGE_SIZE - 1))

int main()
{
	unsigned long nr_page_mask;
	unsigned long nr_page_shift;	
	unsigned long nr_page_size;

	nr_page_mask = 0x5606c5b02260 & PAGE_MASK;			/* 页对齐操作，地址对齐到页边界 */
	nr_page_shift = 0x5606c5b02260 >> PAGE_SHIFT;			/* 得到页号 */
	nr_page_size = (unsigned long)(0x5606c5b02260 / PAGE_SIZE);	/* 得到页号 */

	printf("nr_page_mask: %#lx\n", nr_page_mask);
	printf("nr_page_shift:%#lx\n", nr_page_shift);
	printf("nr_page_size: %#lx\n", nr_page_size);
	
	return 0;
}

