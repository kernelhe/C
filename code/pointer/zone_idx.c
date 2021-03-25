#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct zone {
		int a;
		int b;
		int c;
		int d;
	};
	
	enum zone_type {
		ZONE_DEVICE,
		ZONE_DMA,
		ZONE_DMA32,
		ZONE_MOVABLE,
		ZONE_NORMAL,
		__MAX_NR_ZONES
	};
	
	struct zone node_zones[__MAX_NR_ZONES];
	struct zone * zonep = &node_zones[4];
	/* 用数组第5个元素的指针减去数组的地址得到的是数组第5个元素到第1个元素的偏移量 */
	unsigned long long idx = zonep - node_zones;
	
	printf("idx value:%llu\n", idx);	
	
	return 0;
}
