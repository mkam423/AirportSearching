/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PLACES_H_RPCGEN
#define _PLACES_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAXLEN 255

typedef char *nametype;

typedef struct airNode_place *airList_place;


struct geoLocation_place {
	double longitude;
	double latitude;
};
typedef struct geoLocation_place geoLocation_place;

struct airportInfo {
	nametype code;
	nametype name;
	nametype state;
	double dist;
	geoLocation_place loc;
};
typedef struct airportInfo airportInfo;

struct airNode_place {
	airportInfo p;
	airList_place next;
};
typedef struct airNode_place airNode_place;

struct place {
	nametype city;
	nametype state;
};
typedef struct place place;

struct location_and_airports {
	airList_place x;
	geoLocation_place coord;
	place search_location;
};
typedef struct location_and_airports location_and_airports;

struct nearest_results_place {
	int err;
	union {
		location_and_airports info;
	} nearest_results_place_u;
};
typedef struct nearest_results_place nearest_results_place;

typedef struct CityOrTown CityOrTown;
struct CityOrTown
{
	nametype cityOrTownName;
	double latitude;
	double longitude;
};

typedef struct State State;
struct State
{
	nametype stateName;
	nametype stateAbbreviation;
	int numberOfCityOrTown;
};

static int ifNotInitialized = 0;
static State listOfState[52];
static CityOrTown listOfCityOrTownByState[52][2000];

#define placesProgram 0x12345678
#define places_version 1

#if defined(__STDC__) || defined(__cplusplus)
#define getNearest_place 1
extern  nearest_results_place * getnearest_place_1(place *, CLIENT *);
extern  nearest_results_place * getnearest_place_1_svc(place *, struct svc_req *);
extern int placesprogram_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define getNearest_place 1
extern  nearest_results_place * getnearest_place_1();
extern  nearest_results_place * getnearest_place_1_svc();
extern int placesprogram_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_nametype (XDR *, nametype*);
extern  bool_t xdr_airList_place (XDR *, airList_place*);
extern  bool_t xdr_location_and_airports (XDR *, location_and_airports*);
extern  bool_t xdr_geoLocation_place (XDR *, geoLocation_place*);
extern  bool_t xdr_airportInfo (XDR *, airportInfo*);
extern  bool_t xdr_airNode_place (XDR *, airNode_place*);
extern  bool_t xdr_place (XDR *, place*);
extern  bool_t xdr_nearest_results_place (XDR *, nearest_results_place*);

#else /* K&R C */
extern bool_t xdr_nametype ();
extern bool_t xdr_airList_place ();
extern bool_t xdr_location_and_airports ();
extern bool_t xdr_geoLocation_place ();
extern bool_t xdr_airportInfo ();
extern bool_t xdr_airNode_place ();
extern bool_t xdr_place ();
extern bool_t xdr_nearest_results_place ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PLACES_H_RPCGEN */