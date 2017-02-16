const MAXLEN = 255;
typedef string nametype_air<MAXLEN>;
typedef struct airNode_air* airList_air;

  struct geoLocation{
         double longitude;
         double latitude;
  };

  struct nearAirport{
         nametype_air code;
         nametype_air name;
         double dist;
         geoLocation loc;
  };

  struct airNode_air{
         nearAirport p;
         airList_air next;
  };


  union nearest_results_air switch (int err) {
        case 0:
             airList_air x;
        default:
                void;
  };
program airportProgram{
  version airport_version{
  	  nearest_results_air getNearest_air(geoLocation) = 1;
  } = 1;

} = 0x12345679;
