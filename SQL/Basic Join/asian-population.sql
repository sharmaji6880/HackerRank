SELECT SUM(CITY.POPULATION) FROM CITY JOIN COUNTRY ON CITY.CountryCode=COUNTRY.Code WHERE CONTINENT="ASIA";
