const MAXLEN = 255;
typedef string nametype<MAXLEN>;
typedef struct airNode_place* airList_place;
  
  struct geoLocation_place{
         double longitude;
         double latitude;
  };

  struct airportInfo{
         nametype code;
         nametype name;
         double dist;
         geoLocation_place loc;
  };

  struct airNode_place{
      	 airportInfo p;
    	   airList_place next;
  };
 

  struct place{
      	 nametype city;
    	   nametype state;
  };

  union nearest_results_place switch (int err) {
  	case 0:
	     airList_place x; 
	default:
		void;
  }; 

program placesProgram{
  version places_version{
  	  nearest_results_place getNearest_place(place) = 1;
  } = 1;
} = 0x12345678;
