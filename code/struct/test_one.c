#include <stdio.h>

#define NODE_DATA_ADDR 0xffffffff9ce44420

enum zone_type {
	ZONE_DMA,
	ZONE_DMA32,
	ZONE_NORMAL,
	ZONE_HIGHMEM,
	ZONE_DEVICE,
	MAX_NR_ZONES
};

struct zone {
	struct pglist_data *zone_pgdata;
};

struct zoneref {
	struct zone *zone;
	int zone_idx;
};

struct zonelist {
	struct zoneref _zonerefs[6];	
};

typedef struct pglist_data {
	struct zone node_zones[MAX_NR_ZONES];
	struct zonelist node_zonelists[2];
} pg_data_t;

#define zone_idx(zone) ((zone) - (zone)->zone_pgdata->node_zones)

static void zoneref_set_zone(struct zone *zone, struct zoneref *zoneref) 
{
	zoneref->zone = zone;
	zoneref->zone_idx = zone_idx(zone);
}

static int build_zonerefs_node(pg_data_t *pgdat, struct zoneref *zonerefs)
{
	struct zone *zone;
	enum zone_type zone_type = MAX_NR_ZONES;
	int nr_zones = 0;

	do {
		zone_type--;
		zone = pgdat->node_zones + zone_type;
		
		zoneref_set_zone(zone, &zonerefs[nr_zones++]);
	} while (zone_type);

	return nr_zones;
}	

int main()
{
	pg_data_t *node = *((pg_data_t *)NODE_DATA_ADDR);
	struct zoneref *zonerefs;

	zonerefs = node->node_zonelists[0]._zonerefs;

	int nr_zones = build_zonerefs_node(node, zonerefs);
	printf("nr_zones value:%d", nr_zones);

	printf("node_idx: %d", node->node_zonelists[0]._zonerefs[0].zone_idx);
	
	return 0;
}

