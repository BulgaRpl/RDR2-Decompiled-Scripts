#region Local Var
	struct<368> Local_0 = { 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 3, 0, 0, 0, 0, 0, 0 } ;
	struct<17> Local_368[32];
	struct<1081> Local_913 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1161527296, 0, 0, 0, 0, 6, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 7, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1994 = 7;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = -1;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	struct<37> Local_2010 = { 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 24;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	float fLocal_2150 = 0f;
	float fLocal_2151 = 0f;
	struct<18> Local_2152 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_2170 = 255;
	var uLocal_2171 = 255;
	var uLocal_2172 = 255;
	var uLocal_2173 = 255;
	var uLocal_2174 = 255;
	var uLocal_2175 = 255;
	var uLocal_2176 = 255;
	var uLocal_2177 = 255;
	var uLocal_2178 = 255;
	var uLocal_2179 = 255;
	var uLocal_2180 = 255;
	var uLocal_2181 = 255;
	var uLocal_2182 = 255;
	var uLocal_2183 = 255;
	var uLocal_2184 = 255;
	var uLocal_2185 = 255;
	var uLocal_2186 = 255;
	var uLocal_2187 = 255;
	var uLocal_2188 = 255;
	var uLocal_2189 = 255;
	var uLocal_2190 = 255;
	var uLocal_2191 = 255;
	var uLocal_2192 = 255;
	var uLocal_2193 = 255;
	var uLocal_2194 = 255;
	var uLocal_2195 = 255;
	var uLocal_2196 = 255;
	var uLocal_2197 = 255;
	var uLocal_2198 = 255;
	var uLocal_2199 = 255;
	var uLocal_2200 = 255;
	var uLocal_2201 = 255;
	struct<6> Local_2202[32];
	struct<1442> Local_2395 = { -1, -1, 0, 0, 0, 255, 0, -1, -1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 404851220, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, -1, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1224195223, 1825312110, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	struct<8> ScriptParam_0 = { -1, -1, 0, 0, 0, 255, 0, -1 } ;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_2150 = 1f;
	fLocal_2151 = 1f;
	iVar0 = ScriptParam_0;
	func_1(iVar0);
	func_2(&ScriptParam_0);
	while (!func_3(ScriptParam_0.f_7))
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_2152, 50, 46);
	func_9(NETWORK::_0xBA24095EA96DFE17(&Local_2152), 50, "m_baseHostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_2202, 193, 47);
	func_10(NETWORK::_0x690806BC83BC8CA2(Local_2202[0 /*6*/]), 193, "m_baseClientData");
	func_11();
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(int iParam0)
{
	func_13(iParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
	}
}

int func_3(struct<2> Param0)
{
	if (func_15(0, 0))
	{
		return 1;
	}
	else if (func_16(Param0, 0, 128))
	{
		return 1;
	}
	else if (!func_17())
	{
		return 1;
	}
	else if (func_18(Local_2395, 64))
	{
		return 1;
	}
	else if (Local_2395.f_10 == 9)
	{
		return 1;
	}
	return 0;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_19();
	}
	func_20();
}

void func_5()
{
	NETWORK::_0x236905C700FDB54D();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
	{
		func_21();
	}
	func_22();
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_6();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_6();
		}
		if (func_23() == 0)
		{
			if (func_24())
			{
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	return 1;
}

int func_9(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_10(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_11()
{
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 368, 38);
	func_9(NETWORK::_0xBA24095EA96DFE17(&Local_0), 368, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_368, 545, 39);
	func_10(NETWORK::_0x690806BC83BC8CA2(Local_368[0 /*17*/]), 545, "m_clientData");
}

void func_12(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::_GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::_0x236905C700FDB54D();
		}
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return;
		}
		if (MISC::_GET_SYSTEM_TIME() >= iVar0)
		{
			func_6();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_13(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	vector3 vVar22;

	Local_2395 = { *iParam0 };
	Local_2395.f_1332 = NETWORK::PARTICIPANT_ID_TO_INT();
	Local_2395.f_1336 = MISC::GET_GAME_TIMER();
	Local_2395.f_1268 = func_25(iParam0->f_1) + 1000;
	Local_2395.f_1269 = func_26(iParam0->f_1, iParam0->f_2, iParam0->f_3) + 1000;
	Local_2395.f_1338 = { func_27(iParam0->f_1, iParam0->f_3) };
	Local_2395.f_1346 = { func_28(iParam0->f_1, iParam0->f_3) };
	Local_2395.f_1293 = func_29(iParam0->f_1, iParam0->f_2);
	Local_2395.f_1294 = func_30(iParam0->f_1, iParam0->f_2);
	Local_2395.f_1295 = func_31(iParam0->f_1, iParam0->f_2);
	Local_2395.f_1399 = { func_32(iParam0->f_1, iParam0->f_2) };
	func_34(func_33(iParam0->f_1, iParam0->f_2));
	func_35(1619021308);
	if (func_36(&Var0, iParam0->f_1))
	{
		Var5 = { Var0 };
		if (func_37(&Var5) && func_38(&Var5, iParam0->f_3))
		{
			Local_2395.f_1273 = 1;
			func_39(Var5, 1189568052, &(Local_2395.f_1273), 0);
			Local_2395.f_1275 = 2;
			func_39(Var5, -1755025897, &(Local_2395.f_1275), 0);
			Local_2395.f_1274 = 2;
			func_39(Var5, 948567928, &(Local_2395.f_1274), 0);
			Local_2395.f_1276 = 28;
			func_39(Var5, -823479386, &(Local_2395.f_1276), 1);
			Local_2395.f_1387 = joaat("standard");
			func_40(Var5, -467067774, &iVar10, 1);
			func_41(iVar10);
			func_42(Var5, -13272314, &bVar11, 0);
			if (bVar11)
			{
				func_43(134217728);
			}
		}
		Var5 = { Var0 };
		if (((func_44(&Var5) && func_45(&Var5, Local_2395.f_2)) && func_37(&Var5)) && func_38(&Var5, iParam0->f_3))
		{
			if (Local_2395.f_9 != -785841056)
			{
				func_40(Var5, 511429636, &iVar12, 0);
				iVar13 = iVar12;
				if (iVar13 != 0)
				{
					MISC::_0xBE83CAE8ED77A94F(iVar12);
				}
				iVar14 = -1;
				func_39(Var5, -1102158142, &iVar14, 0);
				if (iVar14 >= 0 && iVar14 < 24)
				{
					NETWORK::_NETWORK_CLOCK_TIME_OVERRIDE(iVar14, 0, 0, 0, false);
				}
			}
		}
	}
	if (func_46(iParam0->f_1, iParam0->f_3, &iVar15))
	{
		iVar16 = func_48(func_47(-1892463704, iVar15));
		iVar17 = func_48(func_47(1374282888, iVar15));
		Local_2395.f_1277 = (iVar16 + iVar17);
	}
	iVar18 = func_49(iParam0->f_1);
	if (iVar18 != 0)
	{
		if (func_50(iVar18, &(Local_2395.f_1391), 600, -1, 0, 0))
		{
			func_51();
		}
	}
	func_52();
	func_53();
	func_54();
	if (Local_2395.f_9 != -785841056)
	{
		func_55(9999.9f);
		GRAPHICS::_0x5199405EABFBD7F0(func_56());
		GRAPHICS::_0x5199405EABFBD7F0(func_57());
		GRAPHICS::_0x5199405EABFBD7F0(func_58());
		Local_2395.f_1417 = GRAPHICS::_0x842CCC9491FFCD9B(func_59());
		GRAPHICS::_0xF3E039322BFBD4D8(Local_2395.f_1417);
		func_60(&(Local_2395.f_1421), 1, 0);
		Local_2395.f_1421.f_2 = -1812916243;
		func_61(&(Local_2395.f_1421), 0);
		if (func_62(255))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_63(1);
		}
		AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", true);
		AUDIO::START_AUDIO_SCENE("rdro_ambient_ped_intensity_zero_scene");
	}
	else if (_NAMESPACE26::_0x9BE7DCB22D32CCBE(iParam0->f_6, PLAYER::PLAYER_ID()))
	{
		func_43(131072);
	}
	func_64();
	if (func_65(131072))
	{
		vVar19 = { func_66(iParam0->f_1, iParam0->f_2) };
		vVar22 = { func_67(iParam0->f_1, iParam0->f_2) };
		if (func_68(vVar19))
		{
		}
		else
		{
			func_69(vVar19, vVar22);
		}
		func_70(1);
	}
	if (Local_2395.f_9 != -785841056)
	{
		func_71();
	}
}

void func_14()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_2152.f_17[iVar0] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		iVar0++;
	}
	func_72();
}

int func_15(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887->f_12)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::_0xF2CBC969C4F090C7())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 0:
				return 1;
			case 1:
				return 1;
			case 2:
				if (!bParam0)
				{
					return 1;
				}
				break;
			case 4:
				return 1;
			case 3:
				return 1;
			default:
				return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 1976253964)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_16(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265331->f_124445.f_134 & 8 != 0)
	{
		Global_1070356->f_26837 = 1;
		return 1;
	}
	if (func_73(*Global_1051163) && !func_74(*Global_1051163, Param0))
	{
		Global_1070356->f_26837 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_75(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_76(iParam3, 255))
	{
		Global_1070356->f_26837 = 4;
		return 1;
	}
	if (Global_262996[&Global_1275573 /*70*/] > 2)
	{
		Global_1070356->f_26837 = 5;
		return 1;
	}
	if (&Global_262155 >= 1)
	{
		Global_1070356->f_26837 = 6;
		return 1;
	}
	if (func_77())
	{
		Global_1070356->f_26837 = 7;
		return 1;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_73(*Global_1051163))
		{
			Global_1070356->f_26837 = 8;
			return 1;
		}
	}
	if (Global_265331->f_124602 != 0 && SCRIPTS::_DOES_THREAD_EXIST(Global_265331->f_124602))
	{
		Global_1070356->f_26837 = 9;
		return 1;
	}
	Global_1070356->f_26837 = 0;
	return 0;
}

int func_17()
{
	if (NETWORK::_0xDD73C9838CE7181D())
	{
		return 1;
	}
	return 0;
}

bool func_18(int iParam0, int iParam1)
{
	return func_78((Global_1185132->f_66[iParam0 /*20*/])->f_6, iParam1);
}

void func_19()
{
	switch (Local_2152)
	{
		case 0:
			func_79();
			break;
		case 1:
			func_80();
			break;
		case 3:
			func_81();
			break;
		case 4:
			func_82();
			break;
		case 5:
			func_83();
			break;
		case 6:
			func_84();
			break;
		case 7:
			func_85();
			break;
		case 8:
			func_86();
			break;
	}
}

void func_20()
{
	func_87();
	func_53();
	func_88();
	func_89();
	func_54();
	func_90();
	func_91();
	func_92();
	func_93();
	switch (Local_2395.f_10)
	{
		case 0:
			func_94();
			break;
		case 1:
			func_95();
			break;
		case 2:
			func_96();
			break;
		case 3:
			func_97();
			break;
		case 4:
			func_98();
			break;
		case 5:
			func_99();
			break;
		case 6:
			func_100();
			break;
		case 7:
			func_101();
			break;
		case 8:
			func_102();
			break;
	}
}

void func_21()
{
	if (Local_2152 > 5)
	{
		NETWORK::_0x78335E12DB0BF961(664);
	}
	func_103();
}

void func_22()
{
	bool bVar0;

	func_104();
	func_105(1);
	func_106();
	func_107();
	func_108();
	func_109();
	func_110();
	func_112(func_111(Local_2395.f_1));
	func_113(1);
	func_61(&(Local_2395.f_1421), 0);
	if (DATAFILE::_0x7907969497EA92F5(Local_2395.f_1391))
	{
		DATAFILE::_DATAFILE_UNLOAD(Local_2395.f_1391);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(Local_2395.f_1392))
	{
		VOLUME::_0x43F867EF5C463A53(Local_2395.f_1392);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(Local_2395.f_1393))
	{
		VOLUME::_0x43F867EF5C463A53(Local_2395.f_1393);
	}
	if (func_114())
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
	GRAPHICS::_0x37D7BDBA89F13959(func_56());
	GRAPHICS::_0x37D7BDBA89F13959(func_57());
	GRAPHICS::_0x37D7BDBA89F13959(func_58());
	if (Local_2395.f_9 != -785841056)
	{
		func_115(Local_2395.f_1337);
		MISC::CLEAR_OVERRIDE_WEATHER();
		NETWORK::_0x65F040D91001ED4B(0);
		func_116();
		HUD::_0x8BC7C1F929D07BF3(690901814);
		func_117(&(Local_2395.f_1421));
		if (GRAPHICS::_0xEEF83A759AE06A27(Local_2395.f_1417) && !func_118())
		{
			GRAPHICS::_0x71845905BCCDE781(Local_2395.f_1417);
			GRAPHICS::_0xEDA5CBECF56E1386(Local_2395.f_1417);
			GRAPHICS::_0x38D9D50F2085E9B3(Local_2395.f_1417);
		}
		if (CAM::DOES_CAM_EXIST(Local_2395.f_1415))
		{
			CAM::DESTROY_CAM(Local_2395.f_1415, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2395.f_1416))
		{
			PED::DELETE_PED(&(Local_2395.f_1416));
		}
		AUDIO::_0x2E399EAFBEEA74D5();
	}
	AUDIO::_0x531A78D6BF27014B(func_119());
	AUDIO::_0x9D746964E0CF2C5F(func_120(), func_121());
	AUDIO::_0x9D746964E0CF2C5F(func_122(), func_123());
	func_124();
	func_125();
	func_126(1, 1);
	func_127(0);
	if (func_65(131072))
	{
		func_70(0);
		func_128();
	}
	if (Local_2395.f_9 == -785841056)
	{
		if (func_130(func_129(Local_2395.f_1)))
		{
			func_131(Local_2395.f_1, Local_2395.f_2);
			func_132(func_129(Local_2395.f_1));
			func_133();
		}
	}
	else
	{
		AUDIO::SET_AUDIO_FLAG("MusicIgnoreDeathArrest", false);
		AUDIO::STOP_AUDIO_SCENE("rdro_ambient_ped_intensity_zero_scene");
	}
	if (func_134(4096) || func_134(8192))
	{
		bVar0 = func_134(8192);
		func_135(Local_2395, Local_2395.f_1, Local_2395.f_7, bVar0);
	}
	else if (func_134(16384))
	{
		func_136(Local_2395, Local_2395.f_1, Local_2395.f_7);
	}
	else
	{
		func_137(Local_2395, Local_2395.f_7, 0);
	}
	func_138();
	func_139(Local_2395.f_9, Local_2395.f_4);
}

int func_23()
{
	return Global_1572887->f_13;
}

bool func_24()
{
	return Global_1051202->f_8;
}

int func_25(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 120000;
	if (func_36(&Var1, iParam0))
	{
		func_39(Var1, -463492762, &iVar0, 0);
	}
	return iVar0;
}

int func_26(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 300000;
	if ((((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_37(&Var1)) && func_38(&Var1, uParam2))
	{
		func_39(Var1, 1576411076, &iVar0, 0);
	}
	return iVar0;
}

struct<8> func_27(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_140(&Var8))
	{
		func_141(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

struct<8> func_28(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_140(&Var8))
	{
		func_141(Var8, -1771940760, &Var0, 0);
	}
	return Var0;
}

float func_29(int iParam0, var uParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = 200f;
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_142(Var1, 1168414437, &fVar0, 0);
	}
	return fVar0;
}

float func_30(int iParam0, var uParam1)
{
	var uVar0;
	struct<5> Var1;

	uVar0 = func_29(iParam0, uParam1);
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_142(Var1, -1393462640, &uVar0, 0);
	}
	return uVar0;
}

float func_31(int iParam0, var uParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = -1f;
	if ((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1))
	{
		func_142(Var1, 2005647695, &fVar0, 0);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (func_30(iParam0, uParam1) + 200f);
	}
	return fVar0;
}

Vector3 func_32(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_143(Var3, 221135615, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_33(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_143(Var3, 2060397848, &vVar0, 0);
	}
	return vVar0;
}

void func_34(vector3 vParam0)
{
	if (!func_144(Local_2395.f_1396, vParam0))
	{
		Local_2395.f_1396 = { vParam0 };
	}
}

int func_35(int iParam0)
{
	if (Local_2395.f_1384 != iParam0)
	{
		Local_2395.f_1384 = iParam0;
		return 1;
	}
	return 0;
}

bool func_36(var uParam0, int iParam1)
{
	if (!DATAFILE::_0x7907969497EA92F5(Global_1185132->f_443))
	{
		return false;
	}
	*uParam0 = Global_1185132->f_443;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_145(iParam1);
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_37(var uParam0)
{
	uParam0->f_2 = -310067910;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_38(var uParam0, var uParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_39(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_40(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_41(int iParam0)
{
	if (Local_2395.f_1387 != iParam0)
	{
		Local_2395.f_1387 = iParam0;
	}
}

int func_42(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_BOOL(bParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_43(int iParam0)
{
	func_146(&(Local_2395.f_1334), iParam0);
}

bool func_44(var uParam0)
{
	*uParam0 = Global_1185132->f_443;
	uParam0->f_2 = -1782115362;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_45(var uParam0, var uParam1)
{
	uParam0->f_2 = 454625570;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_46(int iParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	var uVar5;

	if ((func_36(&Var0, iParam0) && func_37(&Var0)) && func_38(&Var0, uParam1))
	{
		if (func_40(Var0, 915697271, &uVar5, 1))
		{
			*iParam2 = uVar5;
			return 1;
		}
	}
	return 0;
}

struct<2> func_47(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_48(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_49(int iParam0)
{
	var uVar0;
	struct<5> Var1;

	if (func_36(&Var1, iParam0))
	{
		func_40(Var1, 733859289, &uVar0, 0);
	}
	return uVar0;
}

int func_50(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_0xD97D8D905F1562F2(iParam0);
	while ((!DATAFILE::_0x603AC35FD4602C76(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887->f_13 != -1)
		{
			bVar1 = func_15(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887->f_13 != -1)
	{
		bVar1 = func_15(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_6();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_51()
{
	func_147(-1821940596, "activity/locations/location(id=%x)");
	func_147(-1565098061, "variations/variation(id=%x)");
	func_147(248801409, "spawn_locations/spawn_location(%i)");
	func_147(848477026, "spawn_locations");
	func_147(1569801402, "wagon_spawn_locations/spawn_location(%i)");
	func_147(1402798501, "wagon_spawn_locations");
	func_147(507396013, "volumes/volume(%i)");
	func_147(799854665, ":shape");
	func_147(-271347703, "peds/ped(%i)");
	func_147(2092065245, "peds");
	func_147(-1541287538, ":location");
	func_147(38344341, ":rotation");
	func_147(2083652982, ":scale");
	func_147(1114662700, ":heading");
	func_147(-1444225750, ":model");
	func_147(1973872946, ":type");
	func_147(-1626963905, ":task");
	func_147(-1860090745, ":target_count");
}

void func_52()
{
	struct<2> Var0;

	if (func_18(Local_2395, 256))
	{
		func_148(0, Local_2395.f_1332);
		return;
	}
	else if (func_18(Local_2395, 512) && !func_149())
	{
		func_148(0, Local_2395.f_1332);
		func_150(&(Local_2395.f_1383), 8);
	}
	else if (func_151(&Local_2395))
	{
		func_148(0, Local_2395.f_1332);
		func_150(&(Local_2395.f_1383), 3);
	}
	else
	{
		Var0 = { func_152() };
		if (func_73(Var0))
		{
			if (!func_74(Var0, Local_2395.f_7))
			{
				func_148(0, Local_2395.f_1332);
				if (func_150(&(Local_2395.f_1383), 1))
				{
				}
			}
			else
			{
				func_148(2, Local_2395.f_1332);
				func_150(&(Local_2395.f_1383), 0);
			}
		}
		else
		{
			func_148(1, Local_2395.f_1332);
			func_150(&(Local_2395.f_1383), 0);
		}
	}
}

void func_53()
{
	if (func_153(Local_2395.f_1332))
	{
		if (!func_134(256))
		{
			if (Local_2395.f_9 != -785841056)
			{
				func_154(-2121539959, 0);
			}
			else
			{
				func_154(-1256206172, 0);
			}
			func_43(256);
		}
	}
	else
	{
		func_104();
	}
}

void func_54()
{
	struct<35> Var0;
	struct<12> Var58;

	if (!func_153(Local_2395.f_1332))
	{
		return;
	}
	if (func_155())
	{
		return;
	}
	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	Var0.f_16.f_3 = 1;
	Var0.f_21 = 1;
	Var0.f_22 = 1;
	Var0.f_22.f_1 = -1082130432;
	Var0.f_22.f_2 = 1;
	Var0.f_25 = -1;
	Var0.f_25.f_1 = -1;
	Var0.f_25.f_2 = -1;
	Var0.f_25.f_3 = -1;
	Var0.f_25.f_4 = -1;
	Var0.f_25.f_5 = -1;
	Var0.f_25.f_6 = -1;
	Var0.f_25.f_7 = -1;
	Var0.f_25.f_8 = -1;
	Var0.f_34 = 4;
	Var0.f_34.f_1.f_1 = -1;
	Var0.f_34.f_1.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_1 = -1;
	Var0.f_34.f_1.f_3.f_3.f_3.f_1 = -1;
	if (Local_2395.f_9 == -785841056)
	{
		func_43(512);
	}
	else if (!func_134(512))
	{
		Var58.f_1 = -1;
		Var58.f_3 = -1082130432;
		Var58.f_4 = 2;
		Var58.f_5 = -1082130432;
		Var58.f_7 = -1082130432;
		Var58.f_9 = -1082130432;
		Var58.f_11 = -1082130432;
		if (!func_156(&(Local_2395.f_1310)))
		{
			Var58.f_6 = 0;
			Var58.f_4 = 2;
			Var58.f_2 = 2;
			Var58 = 0;
			Var58.f_10 = 2;
			Var58.f_8 = 0;
			func_157(&Var0, Var58, 3);
		}
		func_158(&Var0, -2121539959, 0, 0);
		func_159(&Var0, 1);
		func_160(&Var0, 1);
		func_161(&Var0, 1);
		func_162(&Var0, Local_2395.f_7, 1, 1);
		func_163();
	}
}

void func_55(float fParam0)
{
	if (Global_1070356->f_21175 != fParam0)
	{
		if (fParam0 >= 0f)
		{
			Global_1070356->f_21175 = fParam0;
		}
	}
}

char* func_56()
{
	return "MP_FreeRoamCountdown";
}

char* func_57()
{
	return "MP_MatchEndPulseWinner";
}

char* func_58()
{
	return "MP_MatchEndPulseLoser";
}

char* func_59()
{
	return "MP_Trans_SceneToPhoto";
}

void func_60(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-434015292);
	}
	else if (bParam2)
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(1781462046);
	}
	else
	{
		*uParam0 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-242590942);
	}
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
}

void func_61(var uParam0, bool bParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_11))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bParam1);
	}
	else
	{
		uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3, "showTransitionScreen", bParam1);
	}
}

bool func_62(int iParam0)
{
	return func_164(1, iParam0);
}

void func_63(bool bParam0)
{
	if (!bParam0)
	{
		func_165(17);
	}
	else
	{
		func_166(17);
	}
}

void func_64()
{
	Local_913.f_41 = Local_2395.f_3;
	Local_913.f_97 = Local_2395.f_1;
	Local_913.f_1 = func_167();
	Local_913.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
	Local_913.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
	Local_913.f_4 = (Local_913.f_1 - (Local_913.f_2 + Local_913.f_3));
	Local_913.f_1080 = func_168();
	func_169();
	func_41(1229355466);
	func_170(524288);
	Local_2395.f_1420 = 0;
	func_170(131072);
	func_43(1073741824 /* Float: 2f */);
}

bool func_65(int iParam0)
{
	return func_78(Local_2395.f_1335, iParam0);
}

Vector3 func_66(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_143(Var3, -135059083, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_67(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1))
	{
		func_143(Var3, -1922656805, &vVar0, 0);
	}
	return vVar0;
}

int func_68(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_69(vector3 vParam0, vector3 vParam3)
{
	bool bVar0;

	bVar0 = false;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1099294->f_26.f_21))
	{
		bVar0 = true;
	}
	else if (!func_144(ENTITY::GET_ENTITY_COORDS(Global_1099294->f_26.f_21, false, false), vParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		Global_1099294->f_26.f_25 = { vParam0 };
		Global_1099294->f_26.f_31 = { vParam3 };
		Global_1099294->f_26.f_22 = 1;
		STREAMING::REQUEST_MODEL(joaat("a_c_owl_01"), false);
	}
}

void func_70(bool bParam0)
{
	if (bParam0)
	{
		func_171(4096);
	}
	else
	{
		func_172(4096);
	}
}

void func_71()
{
	var uVar0;

	if (Local_2395.f_1295 <= 0f)
	{
		return;
	}
	Local_2395.f_1394 = VOLUME::_0xB3FB80A32BAE3065(Local_2395.f_1396, 0f, 0f, 0f, Local_2395.f_1295, Local_2395.f_1295, Local_2395.f_1295);
	if (VOLUME::_0x92A78D0BEDB332A3(Local_2395.f_1394))
	{
		uVar0 = func_173();
		POPULATION::_0x2161278C6322F740(uVar0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(Local_2395.f_1394, uVar0, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(Local_2395.f_1394, uVar0, 0, 0, -1, -1, 0);
		PATHFIND::_0xB03944057FD735BA(Local_2395.f_1394, 4, 0);
	}
}

void func_72()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		(Local_0.f_67[iVar0 /*40*/])->f_1 = 255;
		(Local_0.f_67[iVar0 /*40*/])->f_2 = 255;
		iVar0++;
	}
	if (Local_0.f_1 == 0)
	{
		Local_0.f_1 = Local_913.f_1;
	}
}

int func_73(struct<2> Param0)
{
	if (!func_174(Param0))
	{
		return 0;
	}
	if (Param0.f_1 < 0)
	{
		return 0;
	}
	if (Param0.f_1 >= func_175(Param0))
	{
		return 0;
	}
	return 1;
}

bool func_74(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_75(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1185962->f_1 && iParam0) != 0;
}

bool func_76(int iParam0, int iParam1)
{
	if (!Global_1070356->f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1185577[iParam1 /*12*/] && iParam0) != 0;
}

int func_77()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_2883584)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (!func_73(*Global_1051163) && Global_1572887->f_7 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_78(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_79()
{
	if (func_176(2, Local_2395.f_1332))
	{
		if (!func_177(2))
		{
			if (func_178())
			{
				func_179(2);
			}
		}
		else
		{
			func_180();
			func_181(1);
		}
	}
}

void func_80()
{
	if (!func_177(4))
	{
		if (func_182())
		{
			func_179(4);
		}
	}
	else if (func_183(4))
	{
		func_184(&(Local_2152.f_1), 0);
		func_181(3);
	}
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_185();
	if (func_156(&(Local_2152.f_1)))
	{
		iVar0 = func_186(&(Local_2152.f_1));
		iVar1 = (Local_2395.f_1268 - iVar0);
		if (func_68(Local_2395.f_1399))
		{
			iVar2 = func_187();
		}
		else
		{
			iVar2 = BUILTIN::CEIL((IntToFloat(func_187()) * 0.5f));
		}
		if (iVar1 <= iVar2)
		{
			func_181(4);
		}
		else if (Local_2395.f_9 != -785841056 && iVar1 >= 16000)
		{
			iVar3 = func_188(2);
			if (iVar3 >= Local_2395.f_1276 && func_183(8))
			{
				func_189(&(Local_2152.f_1), (Local_2395.f_1268 - 16000));
			}
		}
	}
}

void func_82()
{
	int iVar0;
	int iVar1;

	iVar0 = func_186(&(Local_2152.f_1));
	iVar1 = (Local_2395.f_1268 - iVar0);
	if (!func_177(16))
	{
		if (iVar1 <= func_190())
		{
			if (func_191())
			{
				func_179(16);
			}
		}
	}
	else if (iVar1 <= 1000)
	{
		func_192();
		func_193(1, Local_2395.f_1275);
		func_194(1);
		func_195();
		if (Local_2152.f_12 != 0)
		{
			func_196();
			func_181(6);
		}
		else
		{
			Local_2152.f_16 = func_188(2);
			func_197(0);
			func_179(2048);
			func_181(5);
		}
	}
}

void func_83()
{
	func_198();
	func_197(1);
	func_193(0, -1);
	func_194(0);
	if ((func_199() || func_200() > Local_2395.f_1269) || Local_2152.f_12 != 0)
	{
		func_196();
	}
}

void func_84()
{
	if (func_183(32))
	{
		if (!func_156(&(Local_2152.f_7)))
		{
			func_201(&(Local_2152.f_7));
		}
		else if (func_186(&(Local_2152.f_7)) > 500)
		{
			func_202();
			func_181(7);
		}
	}
}

void func_85()
{
	func_181(8);
}

void func_86()
{
	if (func_203())
	{
		func_181(9);
	}
}

void func_87()
{
	if (!func_65(262144))
	{
		if (ENTITY::IS_ENTITY_DEAD(Global_34))
		{
			if (func_204())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
			}
			func_170(262144);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		func_205(262144);
	}
}

void func_88()
{
	(Global_1185132->f_66[Local_2395 /*20*/])->f_2 = Local_2395.f_10 >= 3;
	(Global_1185132->f_66[Local_2395 /*20*/])->f_1 = &Local_2202[Local_2395.f_1332 /*6*/];
	if (&Local_2202[Local_2395.f_1332 /*6*/] != 2)
	{
		return;
	}
	if (func_206())
	{
		func_207();
	}
	else if (func_208())
	{
		func_209(1);
	}
}

void func_89()
{
	(Global_1185132->f_66[Local_2395 /*20*/])->f_2 = Local_2395.f_10 >= 3;
	(Global_1185132->f_66[Local_2395 /*20*/])->f_1 = &Local_2202[Local_2395.f_1332 /*6*/];
	if (&Local_2202[Local_2395.f_1332 /*6*/] != 2)
	{
		return;
	}
	switch (Local_2395.f_1)
	{
		case 15:
			func_211(func_210(), Local_2395.f_7, 1, 0);
			break;
	}
}

void func_90()
{
	if (func_153(Local_2395.f_1332) && func_134(134217728))
	{
		func_212(0);
	}
}

void func_91()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_213(iVar0);
				break;
			case 1741908893:
				func_214(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_92()
{
	int iVar0;

	if (Local_2395.f_1419 == -1)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (&Local_2152.f_17[iVar0] == PLAYER::PLAYER_ID())
			{
				Local_2395.f_1419 = iVar0;
			}
			iVar0++;
		}
	}
}

void func_93()
{
}

void func_94()
{
	bool bVar0;

	if (Local_2152 >= 6)
	{
		func_215();
		func_216(6);
		return;
	}
	func_217();
	if (!func_176(2, Local_2395.f_1332))
	{
		bVar0 = true;
		if (!func_218(func_111(Local_2395.f_1)))
		{
			bVar0 = false;
		}
		if (func_114())
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				bVar0 = false;
			}
		}
		if ((!AUDIO::_0xD9130842D7226045(func_119(), 0) || !AUDIO::_0xE368E8422C860BA7(func_120(), func_121(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_122(), func_123(), -2))
		{
			bVar0 = false;
		}
		if (Local_2395.f_9 != -785841056)
		{
			if (!func_221(&(Local_2395.f_1337), func_219(PED::IS_PED_MALE(Global_34)), func_220()))
			{
				bVar0 = false;
			}
			if (!func_222(&(Local_2395.f_1421)))
			{
				bVar0 = false;
			}
		}
		if (!func_223())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_224(2, Local_2395.f_1332);
		}
		else if (Local_2395.f_1336 == -1 || (MISC::GET_GAME_TIMER() - Local_2395.f_1336) > Global_1901929->f_295.f_177)
		{
			if (Local_2395.f_1336 == -1)
			{
			}
			func_224(2, Local_2395.f_1332);
		}
	}
	else if (Local_2152 > 0)
	{
		if (Local_2395.f_9 != -785841056)
		{
			func_113(0);
		}
		StringCopy(&(Local_2395.f_13.f_950), MISC::_CREATE_VAR_STRING(2, &(Local_2395.f_1338)), 64);
		func_52();
		func_216(1);
	}
}

void func_95()
{
	if (Local_2152 >= 6)
	{
		func_215();
		func_216(6);
		return;
	}
	func_217();
	if (!func_176(4, Local_2395.f_1332))
	{
		if (func_225())
		{
			func_224(4, Local_2395.f_1332);
		}
	}
	else if (Local_2152 > 1)
	{
		func_226();
		if (Local_2395.f_9 == -785841056)
		{
			func_216(3);
		}
		else
		{
			func_216(2);
		}
	}
}

void func_96()
{
	if (Local_2152 >= 6)
	{
		func_215();
		func_216(6);
		return;
	}
	func_227();
	func_228();
	if (!func_134(2097152))
	{
		if (func_134(1))
		{
			if (func_229() || func_230())
			{
				if (func_62(255))
				{
					return;
				}
				func_231();
			}
			else if (func_62(255) || CAM::IS_SCREEN_FADED_OUT())
			{
				if (!func_156(&(Local_2395.f_1319)))
				{
					func_201(&(Local_2395.f_1319));
				}
				else if (func_186(&(Local_2395.f_1319)) > 30000)
				{
					func_231();
				}
			}
		}
	}
	else if (!func_62(255))
	{
		if (!func_232(67108864))
		{
			func_233(67108864);
		}
		func_234(1);
		AUDIO::_0x2E399EAFBEEA74D5();
		func_235(0, 1, 0, 0, 0, 0, 0, 0, 0);
		func_224(8, Local_2395.f_1332);
		func_216(3);
	}
}

void func_97()
{
	if (Local_2152 >= 6)
	{
		func_215();
		func_216(6);
		return;
	}
	func_227();
	func_236();
	func_228();
	func_237();
	func_238();
	func_239();
	if (Local_2152 > 3)
	{
		func_240();
		func_241();
		func_216(4);
	}
}

void func_98()
{
	int iVar0;
	int iVar1;

	if (Local_2152 >= 6)
	{
		func_215();
		func_242(Local_2395, 2);
		func_216(6);
		return;
	}
	func_227();
	func_236();
	func_228();
	func_239();
	if (!func_176(16, Local_2395.f_1332))
	{
		iVar0 = func_186(&(Local_2152.f_1));
		iVar1 = (Local_2395.f_1268 - iVar0);
		if (iVar1 <= func_190())
		{
			if (func_243())
			{
				func_224(16, Local_2395.f_1332);
			}
		}
	}
	else if (Local_2152 > 4)
	{
		func_244();
		func_245();
		func_246();
		func_52();
		func_247();
		func_248(&(Local_2395.f_1005), 1);
		func_249();
		func_250();
		func_251();
		func_242(Local_2395, 2);
		func_216(5);
	}
}

void func_99()
{
	if (Local_2152 >= 8)
	{
		func_216(8);
		return;
	}
	func_252();
	if (Local_2152 > 5)
	{
		func_215();
		return;
	}
	else if (func_134(8192))
	{
		func_215();
		func_216(6);
		return;
	}
	func_227();
	func_236();
	func_253();
	func_254();
	func_246();
	func_255();
	func_256();
	if (!func_257())
	{
		func_258();
	}
	func_259();
	func_260();
	func_261();
}

void func_100()
{
	NETWORK::_0x236905C700FDB54D();
	if (!func_262())
	{
		func_263();
	}
	func_264();
	func_265();
	func_266();
	if (!func_153(Local_2395.f_1332))
	{
		func_216(8);
		return;
	}
	if (!func_176(32, Local_2395.f_1332))
	{
		func_224(32, Local_2395.f_1332);
	}
	else if (Local_2152 > 6 || func_134(8192))
	{
		if (!func_134(268435456))
		{
			func_267(Local_2152.f_10);
			if (func_153(Local_2395.f_1332))
			{
				if (!MISC::IS_BIT_SET(Local_2395.f_13.f_11.f_158, 0))
				{
					func_268(&(Local_2395.f_13));
					func_269(&(Local_2395.f_13));
					func_272(func_270(), func_271(), Local_2395.f_11, Local_2395.f_12, 30000);
				}
				func_273();
				func_274();
			}
		}
		else if (!func_134(536870912))
		{
			if (Local_2395.f_1282 >= Local_2395.f_1281)
			{
				func_43(536870912);
			}
			else if (!func_156(&(Local_2395.f_1313)))
			{
				func_184(&(Local_2395.f_1313), 0);
			}
			else if (func_186(&(Local_2395.f_1313)) > 500)
			{
				func_43(536870912);
			}
		}
		else
		{
			func_275();
			func_216(7);
		}
	}
}

void func_101()
{
	var uVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	var uVar10;
	char cVar11[64];
	char cVar19[64];
	int iVar27;
	var uVar28;
	bool bVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;

	NETWORK::_0x236905C700FDB54D();
	func_266();
	func_276();
	if (!func_153(Local_2395.f_1332))
	{
		func_126(1, 1);
		func_216(8);
		return;
	}
	func_264();
	func_277();
	if (func_278())
	{
		if (func_279())
		{
			if (!func_280())
			{
				Local_2395.f_1384 = 1310067901;
			}
		}
		else if (func_65(8192))
		{
			Local_2395.f_1384 = joaat("leaderboard");
		}
		else
		{
			Local_2395.f_1384 = 0;
		}
		func_272(func_270(), func_271(), Local_2395.f_11, Local_2395.f_12, 30000);
	}
	else if (func_279())
	{
		Local_2395.f_1384 = 1310067901;
		func_272(0, func_271(), 0, 0, 30000);
	}
	else
	{
		func_281();
	}
	if (!func_65(32))
	{
		if (func_282())
		{
			func_283(&(Local_2395.f_1005));
			uVar0 = func_284();
			if (func_134(4096))
			{
				GRAPHICS::_0x3A9A281FF71249E9(func_57(), uVar0);
			}
			else
			{
				GRAPHICS::_0x3A9A281FF71249E9(func_58(), uVar0);
			}
			if (!func_279() || Local_2395.f_9 == -785841056)
			{
				func_248(&(Local_2395.f_1005), 1);
			}
			func_170(32);
		}
	}
	else if (!func_65(64))
	{
		func_285();
		if (Local_2395.f_9 == -785841056)
		{
			if (!func_286(Local_2395.f_1287))
			{
				func_287();
				iVar1 = 6000;
				if (Local_2152.f_12 != 0 || !func_288(Local_2395.f_1384))
				{
					iVar1 = 1000;
				}
				if (!func_156(&(Local_2395.f_1316)))
				{
					func_201(&(Local_2395.f_1316));
				}
				else if (func_186(&(Local_2395.f_1316)) > iVar1)
				{
					if (func_289())
					{
						return;
					}
					func_281();
					func_170(64);
					func_216(8);
				}
			}
		}
		else if (((!func_286(Local_2395.f_1287) && !func_290()) && !func_291()) && !func_292())
		{
			if (UIAPPS::_IS_ANY_APP_RUNNING())
			{
				if (!func_156(&(Local_2395.f_1322)))
				{
					func_201(&(Local_2395.f_1322));
				}
				else if (func_186(&(Local_2395.f_1322)) > 10000)
				{
					func_293();
					func_294(&(Local_2395.f_1322));
				}
			}
			else
			{
				func_287();
				if (!func_156(&(Local_2395.f_1316)))
				{
					func_201(&(Local_2395.f_1316));
				}
				else if (func_186(&(Local_2395.f_1316)) > 1000 && !func_286(Local_2395.f_1289))
				{
					func_127(0);
					func_170(64);
				}
			}
		}
		else
		{
			if (func_156(&(Local_2395.f_1316)))
			{
				func_294(&(Local_2395.f_1316));
			}
			if (func_156(&(Local_2395.f_1322)))
			{
				func_294(&(Local_2395.f_1322));
			}
		}
	}
	else if (!func_65(128))
	{
		func_285();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT() && !func_62(255))
			{
				CAM::DO_SCREEN_FADE_OUT(250);
				AUDIO::_0x9B1FC259187C97C0("winners_pose");
			}
		}
		else if (func_285() && func_295())
		{
			GRAPHICS::ANIMPOSTFX_STOP(func_57());
			GRAPHICS::ANIMPOSTFX_STOP(func_58());
			if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
			{
				if (PED::_0x3AA24CCC0D451379(Global_34))
				{
					TASK::_0x79559BAD83CCD038(Global_34, 3, 0, 0, 0, 1090519040);
				}
				if (PED::_0x0E99E3BF11BB6367(Global_34))
				{
					iVar2 = PED::_0xD0B7AEB56229D317(Global_34);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2)) && PED::IS_PED_A_PLAYER(iVar2))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
						PED::_0x789DABD18E9024DB(Global_34, 32768, 1);
						TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
					}
				}
				if (PED::_0x3BDFCF25B58B0415(Global_34))
				{
					PED::_0x789DABD18E9024DB(Global_34, 4096, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2395.f_1416))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_2395.f_1416, true, false) };
					if (!func_68(vVar3))
					{
						vVar6 = { func_296(vVar3, 10f, 0.25f) };
						ENTITY::SET_ENTITY_COORDS(Global_34, vVar6, true, false, true, true);
					}
				}
			}
			if (Local_2152.f_12 != 0 || !ENTITY::DOES_ENTITY_EXIST(Local_2395.f_1416))
			{
				func_216(8);
				return;
			}
			func_297();
			func_298();
			func_170(128);
		}
	}
	else if (!func_65(512))
	{
		func_298();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				if (CAM::DOES_CAM_EXIST(Local_2395.f_1415) && !CAM::IS_CAM_ACTIVE(Local_2395.f_1415))
				{
					CAM::SET_CAM_ACTIVE(Local_2395.f_1415, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2395.f_1416) && !ENTITY::IS_ENTITY_DEAD(Local_2395.f_1416))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_2395.f_1416, true);
				}
				func_299();
				HUD::_0x4CC5F2FC1332577F(690901814);
				CAM::DO_SCREEN_FADE_IN(250);
			}
		}
		else
		{
			func_294(&(Local_2395.f_1316));
			Local_2395.f_1418 = 1500;
			if (!func_300())
			{
				if (Local_2152.f_10 != 255)
				{
					iVar9 = func_301();
					Local_2395.f_1418 = func_302(iVar9);
					uVar10 = func_303(iVar9);
					func_304(Local_2395.f_1416, iVar9, 2, 0, 0, uVar10);
				}
			}
			func_170(512);
		}
	}
	else if (!func_65(1024))
	{
		func_298();
		if (!func_156(&(Local_2395.f_1316)))
		{
			StringCopy(&cVar11, func_305(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar11))
			{
				StringCopy(&cVar11, MISC::_CREATE_VAR_STRING(2, "FME_SHARD_OUTRO_TITLE_WINNER"), 64);
			}
			cVar19 = { func_306() };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
			{
				cVar19 = { Local_2395.f_1406 };
			}
			if (func_134(8192) || func_65(524288))
			{
				func_311(&(Local_2395.f_1421), &cVar19, func_307(), func_308(), func_310(func_309(&(Local_2395.f_13), 0)), "", "", Local_2395.f_1414);
			}
			else if (Local_2152.f_10 == 255)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(func_312()))
				{
					func_311(&(Local_2395.f_1421), "", "", MISC::_CREATE_VAR_STRING(2, "FME_SHARD_OUTRO_PRIMARY_EXPIRED"), "", "", "", joaat("COLOR_PURE_WHITE"));
				}
				else
				{
					func_311(&(Local_2395.f_1421), "", "", func_312(), "", "", "", joaat("COLOR_PURE_WHITE"));
				}
			}
			else if (Local_2152.f_10 == PLAYER::PLAYER_ID())
			{
				func_311(&(Local_2395.f_1421), &cVar11, &cVar19, func_310(func_309(&(Local_2395.f_13), 0)), "", "", "", Local_2395.f_1414);
			}
			else
			{
				func_311(&(Local_2395.f_1421), &cVar11, &cVar19, func_313(Local_2395.f_1406, Local_2395.f_1414, func_309(&(Local_2395.f_13), 0)), "", "", "", Local_2395.f_1414);
			}
			func_201(&(Local_2395.f_1316));
		}
		else
		{
			iVar27 = Local_2395.f_1418;
			func_314(&iVar27);
			if (func_315() || (iVar27 > 0 && func_186(&(Local_2395.f_1316)) > iVar27))
			{
				AUDIO::_0x9B1FC259187C97C0("photograph");
				GRAPHICS::_0x9B8D5D4CB8AF58B3(Local_2395.f_1417);
				GRAPHICS::_0xE75CDDEBF618C8FF(Local_2395.f_1417);
				func_170(1024);
			}
		}
	}
	else if (!func_65(2048))
	{
		func_298();
		if (GRAPHICS::_0x9AB192A9EF980EED(Local_2395.f_1417, 2, 0, &uVar28))
		{
			bVar29 = true;
		}
		if (bVar29 || func_186(&(Local_2395.f_1316)) > 4000)
		{
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			AUDIO::PLAY_SOUND_FRONTEND(func_122(), func_123(), true, 0);
			func_61(&(Local_2395.f_1421), 1);
			func_201(&(Local_2395.f_1316));
			func_170(2048);
		}
	}
	else if (!func_65(4096))
	{
		func_298();
		if (func_316(&(Local_2395.f_1421)) || func_186(&(Local_2395.f_1316)) > 8000)
		{
			func_201(&(Local_2395.f_1316));
			func_170(4096);
		}
	}
	else if (!func_65(8192))
	{
		func_298();
		if (func_186(&(Local_2395.f_1316)) > 5000)
		{
			if (!func_317())
			{
				func_117(&(Local_2395.f_1421));
			}
			func_35(func_318());
			func_294(&(Local_2395.f_1316));
			func_170(8192);
		}
	}
	else if (!func_65(16384))
	{
		func_298();
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_2395.f_13.f_11))
		{
			if (Local_2395.f_1283 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_2395.f_13.f_11, "info_value_07", func_319(Local_2395.f_1283));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_2395.f_13.f_11, "info_value_07", true);
				Local_2395.f_1283 = 0;
			}
			if (Local_2395.f_1285 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_2395.f_13.f_11, "info_visible_08", func_319(Local_2395.f_1285));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_2395.f_13.f_11, "info_visible_08", true);
				Local_2395.f_1285 = 0;
			}
			if (Local_2395.f_1284 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(Local_2395.f_13.f_11, "info_visible_06", func_319(Local_2395.f_1284));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Local_2395.f_13.f_11, "info_visible_06", true);
				Local_2395.f_1284 = 0;
			}
			if (Local_2395.f_1286 > 0)
			{
				Local_2395.f_1286 = 0;
			}
		}
		if (!func_156(&(Local_2395.f_1316)))
		{
			func_201(&(Local_2395.f_1316));
		}
		else if (func_186(&(Local_2395.f_1316)) > 2000)
		{
			iVar30 = 0;
			iVar31 = 0;
			iVar32 = 0;
			iVar33 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if ((!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar33) || _NAMESPACE26::_0x149A2751AB66AC02(iVar33) <= 1) || !_NAMESPACE26::_0x93A91A351A07360E(iVar33))
			{
				iVar30 = 1;
				if (func_176(512, Local_2395.f_1332))
				{
					iVar31++;
				}
				if (func_176(1024, Local_2395.f_1332))
				{
					iVar32++;
				}
			}
			else
			{
				iVar36 = 0;
				iVar36 = 0;
				while (iVar36 <= 31)
				{
					iVar34 = PLAYER::INT_TO_PLAYERINDEX(iVar36);
					if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar34) && _NAMESPACE26::_0x9BE7DCB22D32CCBE(iVar33, iVar34)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar34))
					{
						iVar35 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar34);
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar35))
						{
							iVar30++;
							if (func_176(512, iVar35))
							{
								iVar31++;
							}
							if (func_176(1024, iVar35))
							{
								iVar32++;
							}
							if ((_NAMESPACE26::_0x424B17A7DC5C90BC(iVar34) && iVar34 != PLAYER::PLAYER_ID()) && func_176(1024, iVar35))
							{
								iVar31 = 7;
							}
						}
					}
					iVar36++;
				}
			}
			if (iVar31 > iVar30)
			{
				iVar31 = iVar30;
			}
			if (iVar32 > iVar30)
			{
				iVar32 = iVar30;
			}
			if (!func_320(Local_2395.f_1297))
			{
				if (iVar30 > 1)
				{
					Local_2395.f_1297 = func_321(MISC::_CREATE_VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar31, iVar30), joaat("INPUT_GAME_MENU_ACCEPT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
				else
				{
					Local_2395.f_1297 = func_321("FME_PROMPT_RETURN_TO_FREE_ROAM", joaat("INPUT_GAME_MENU_ACCEPT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				}
			}
			if (func_320(Local_2395.f_1297))
			{
				if (iVar30 > 1)
				{
					func_322(Local_2395.f_1297, MISC::_CREATE_VAR_STRING(2, "FME_PROMPT_RETURN_TO_FREE_ROAM_POSSE", iVar31, iVar30), 1);
				}
				else
				{
					func_322(Local_2395.f_1297, "FME_PROMPT_RETURN_TO_FREE_ROAM", 1);
				}
				if (!func_176(512, Local_2395.f_1332))
				{
					if (func_323(Local_2395.f_1297, 1))
					{
						func_224(512, Local_2395.f_1332);
						func_324(Local_2395.f_1297, 0, 1, 1);
					}
				}
			}
			if (!func_176(1024, Local_2395.f_1332))
			{
				if (iVar31 >= iVar30 || func_186(&(Local_2395.f_1316)) > 62000)
				{
					func_224(1024, Local_2395.f_1332);
				}
			}
			else if (iVar32 >= iVar30)
			{
				func_325(&(Local_2395.f_1297), 1, 1);
				func_294(&(Local_2395.f_1316));
				func_170(16384);
			}
		}
	}
	else if (!func_65(32768))
	{
		if (func_317())
		{
			func_117(&(Local_2395.f_1421));
		}
		func_298();
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				AUDIO::_0x9B1FC259187C97C0("fade_to_black");
				CAM::DO_SCREEN_FADE_OUT(250);
			}
		}
		else
		{
			func_170(32768);
			func_216(8);
		}
	}
}

void func_102()
{
	NETWORK::_0x236905C700FDB54D();
	if (func_326())
	{
		func_216(9);
	}
}

void func_103()
{
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < 2)
	{
		func_327();
	}
}

void func_104()
{
	if (func_134(256))
	{
		func_328(0);
		func_329(256);
	}
}

void func_105(bool bParam0)
{
	if (func_134(512))
	{
		if (Local_2395.f_9 == -785841056)
		{
		}
		func_330(1, bParam0);
		func_329(512);
	}
}

void func_106()
{
	func_331(4);
	func_331(16);
}

void func_107()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_332(iVar0);
		iVar0++;
	}
	if (func_176(16384, Local_2395.f_1332))
	{
		if (func_333())
		{
			func_334();
			func_335(16384, Local_2395.f_1332);
		}
	}
	if (func_176(8192, Local_2395.f_1332))
	{
		if (!func_336(Global_1275573->f_15))
		{
			func_337(1, 0, 0);
			func_335(8192, Local_2395.f_1332);
		}
	}
}

void func_108()
{
	if (func_134(1))
	{
		func_338();
		func_339(0);
		func_329(1);
	}
}

void func_109()
{
	if (func_134(1024))
	{
		func_340(1);
		func_329(1024);
	}
}

void func_110()
{
	if (func_134(2048))
	{
		if (Local_2395.f_9 == -785841056)
		{
			func_341(0);
		}
		else
		{
			func_342(1);
			LAW::_0x710448D44A64C213(1);
			LAW::_0xC805EB785824F712(1);
		}
		func_329(2048);
	}
}

struct<8> func_111(int iParam0)
{
	struct<8> Var0;
	struct<5> Var8;

	if (func_36(&Var8, iParam0) && func_140(&Var8))
	{
		func_141(Var8, -874721119, &Var0, 1);
	}
	return Var0;
}

void func_112(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (HUD::_0xD0976CC34002DB57(func_343()))
	{
		HUD::_0xAA03F130A637D923(func_343());
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0) && HUD::_0xD0976CC34002DB57(&uParam0))
	{
		HUD::_0xAA03F130A637D923(&uParam0);
	}
}

void func_113(bool bParam0)
{
	Global_1939067->f_15 = !bParam0;
}

int func_114()
{
	return 0;
}

void func_115(int iParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(iParam0, 1, 0))
	{
		return;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iParam0);
}

void func_116()
{
	if (Global_1070356->f_21175 >= 0f)
	{
		Global_1070356->f_21175 = -1f;
	}
}

void func_117(var uParam0)
{
	var uVar0;

	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0))
	{
		uVar0 = *uParam0;
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY_AND_CLEAR(&uVar0);
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(uParam0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_3);
	}
}

bool func_118()
{
	return Global_1070356->f_27136.f_62.f_42 != 0;
}

char* func_119()
{
	return "RDRO_Out_Of_Bounds_Sounds";
}

char* func_120()
{
	return "Toast_On";
}

char* func_121()
{
	return "HUD_Toast_Soundset";
}

char* func_122()
{
	return "photograph";
}

char* func_123()
{
	return "rdro_gamemode_transition_sounds";
}

void func_124()
{
	if (!func_176(65536, Local_2395.f_1332))
	{
		return;
	}
	if (!func_176(32768, Local_2395.f_1332))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_344(Local_2395.f_1437, Local_2395.f_1441))
	{
		func_335(32768, Local_2395.f_1332);
	}
}

void func_125()
{
	func_345();
	AUDIO::TRIGGER_MUSIC_EVENT("MP_OWC_END");
}

void func_126(bool bParam0, bool bParam1)
{
	func_249();
	if (bParam0)
	{
		func_281();
	}
	if (bParam1)
	{
		func_346();
		func_347();
	}
	func_348();
	func_349();
	func_350();
	func_351();
	func_352();
	func_250();
	func_353();
}

void func_127(bool bParam0)
{
	if (bParam0)
	{
		if ((func_65(131072) && func_354() == 4) && !func_354() == 10)
		{
			func_355(10);
		}
	}
	else if ((func_65(131072) && func_354() == 4) || func_354() == 10)
	{
		if (!func_354() == 0)
		{
			func_356(0, 0, 0, 1);
		}
	}
}

void func_128()
{
	Global_1099294->f_26.f_25 = { 0f, 0f, 0f };
	Global_1099294->f_26.f_31 = { 0f, 0f, 0f };
	Global_1099294->f_26.f_24 = 1;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 7;
		case 12:
			return 10;
		case 13:
			return 8;
		case 14:
			return 9;
		default:
			break;
	}
	return -1;
}

bool func_130(int iParam0)
{
	return Global_1102099->f_935.f_27 == iParam0;
}

void func_131(int iParam0, int iParam1)
{
	if (iParam0 != -1 && (Global_1185132->f_1[iParam0 /*4*/])->f_2 != iParam1)
	{
		(Global_1185132->f_1[iParam0 /*4*/])->f_2 = iParam1;
	}
}

void func_132(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 11)
	{
		Global_1102099->f_935.f_5[iParam0] = Global_1275573->f_21;
	}
}

void func_133()
{
	if (Global_1102099->f_935.f_27 != -1)
	{
		Global_1102099->f_935.f_27 = -1;
	}
}

bool func_134(int iParam0)
{
	return func_78(Local_2395.f_1334, iParam0);
}

int func_135(int iParam0, var uParam1, struct<2> Param2, bool bParam4)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 0;
	}
	if (!func_357(Param2) && !func_358(Param2))
	{
		return 0;
	}
	if (bParam4)
	{
		func_359(Param2, 0, 4, 0);
	}
	else
	{
		func_359(Param2, 0, 0, 0);
	}
	func_360(iParam0, Param2);
	if (func_18(iParam0, 64))
	{
		return 1;
	}
	func_242(iParam0, 128);
	func_242(iParam0, 64);
	return 1;
}

int func_136(int iParam0, var uParam1, struct<2> Param2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 0;
	}
	if (!func_357(Param2) && !func_358(Param2))
	{
		return 0;
	}
	func_359(Param2, 0, 1, 0);
	func_360(iParam0, Param2);
	if (func_18(iParam0, 64))
	{
		return 0;
	}
	func_242(iParam0, 256);
	func_242(iParam0, 64);
	return 1;
}

int func_137(int iParam0, struct<2> Param1, bool bParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
	if (!func_357(Param1) && !func_358(Param1))
	{
		return 0;
	}
	if (bParam3 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		if (_NAMESPACE26::_0x0F99F6436528A089(iVar0) && _NAMESPACE26::_0x149A2751AB66AC02(iVar0) > 1)
		{
			func_361(1);
		}
	}
	if (func_18(iParam0, 32))
	{
		func_359(Param1, 0, 2, 0);
	}
	else
	{
		func_359(Param1, 0, -1, 0);
	}
	func_360(iParam0, Param1);
	if (func_18(iParam0, 64))
	{
		return 0;
	}
	func_242(iParam0, 64);
	return 1;
}

void func_138()
{
	func_362(2048);
}

int func_139(int iParam0, int iParam1)
{
	if (iParam0 == -785841056)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return 0;
	}
	DECORATOR::DECOR_SET_INT(Global_34, "iFmeLastEventPlayed", iParam1);
	return 1;
}

bool func_140(var uParam0)
{
	uParam0->f_2 = 1701407264;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_141(vector3 vParam0, int iParam3, var uParam4, int iParam5, char[4] cParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_STRING(cParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_142(vector3 vParam0, int iParam3, var uParam4, int iParam5, float fParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_FLOAT(fParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_143(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (DATAFILE::_DATAFILE_GET_VECTOR(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_144(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 12:
			return -596286663;
		case 13:
			return 923956646;
		case 14:
			return 1459450644;
		case 15:
			return -2071675432;
		case 7:
			return -552339597;
		case 9:
			return 2144670272;
		case 8:
			return 996459079;
		case 10:
			return 1996177174;
		case 11:
			return -1702168032;
		default:
			break;
	}
	return 0;
}

void func_146(var uParam0, int iParam1)
{
	func_363(uParam0, iParam1);
}

void func_147(int iParam0, char* sParam1)
{
	int iVar0;

	iVar0 = iParam0;
	DATAFILE::_DATAFILE_REGISTER_QUERY(Local_2395.f_1391, iVar0, sParam1);
}

void func_148(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (&Local_2202[iParam1 /*6*/] != iParam0)
	{
		if (iParam0 == 0 && &Local_2202[iParam1 /*6*/] == 2)
		{
			func_137(Local_2395, Local_2395.f_7, 1);
		}
		Local_2202[iParam1 /*6*/] = iParam0;
	}
}

bool func_149()
{
	return Global_1572887->f_106.f_75 != 1;
}

int func_150(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return 1;
	}
	return 0;
}

int func_151(int iParam0)
{
	return 0;
}

struct<2> func_152()
{
	if (Global_1184439->f_129 <= 0)
	{
		return func_364(0);
	}
	if (Global_1184439->f_130 < 0 || Global_1184439->f_131 == 0)
	{
		return func_364(0);
	}
	return ((*Global_1184439)[Global_1184439->f_130 /*4*/])->f_1;
}

bool func_153(int iParam0)
{
	return &Local_2202[iParam0 /*6*/] == 2;
}

int func_154(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar4 = 0;
	if (iParam0 == 0)
	{
		return 0;
	}
	if (Global_1132968->f_4641.f_676 == iParam0)
	{
		return 1;
	}
	Global_1132968->f_4641.f_671.f_1 = 0;
	Global_1132968->f_4641.f_671.f_2 = 1613014828;
	Global_1132968->f_4641.f_671.f_3 = iParam0;
	Global_1132968->f_4641.f_671.f_4 = 0;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1132968->f_4641.f_671)))
	{
		return 0;
	}
	Global_1132968->f_4641.f_676 = iParam0;
	iVar4 = 0;
	while (iVar4 < 99)
	{
		iVar2 = func_365(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1132968->f_4641.f_671.f_4 = iVar1;
				Global_1132968->f_4641.f_671.f_2 = -239316549;
				if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar0, &(Global_1132968->f_4641.f_671)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_366(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1132968->f_4641.f_671.f_2 = 1242520881;
					if (DATAFILE::_DATAFILE_GET_BOOL(&bVar3, &(Global_1132968->f_4641.f_671)))
					{
					}
					else
					{
						bVar3 = true;
					}
					(Global_1132968->f_4641.f_2[func_367(iVar2, 1) /*4*/])->f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

int func_155()
{
	if (func_134(512))
	{
		return 0;
	}
	if (((Local_2395.f_9 == -785841056 && Local_2395.f_1 == 13) && func_292()) && !func_134(512))
	{
		func_368();
		return 1;
	}
	if (Local_2395.f_9 == -785841056 && func_369(Global_34))
	{
		func_370(&(Local_2395.f_1270), 1);
		return 1;
	}
	if ((Local_2395.f_9 == -785841056 && func_371(&(Local_2395.f_1270))) && func_372(&(Local_2395.f_1270)) < 2f)
	{
		return 1;
	}
	return 0;
}

bool func_156(var uParam0)
{
	return func_373(*uParam0, 1);
}

void func_157(var uParam0, struct<12> Param1, int iParam13)
{
	Global_1954472->f_1465.f_117.f_12 = iParam13;
	func_374(&(Global_1954472->f_1465.f_117), Param1, Param1.f_1);
	func_375(&(Global_1954472->f_1465.f_117), Param1.f_2, Param1.f_3);
	func_376(&(Global_1954472->f_1465.f_117), Param1.f_4, Param1.f_5);
	func_377(&(Global_1954472->f_1465.f_117), Param1.f_6, Param1.f_7);
	func_378(&(Global_1954472->f_1465.f_117), Param1.f_8, Param1.f_9);
	func_379(&(Global_1954472->f_1465.f_117), Param1.f_10, Param1.f_11);
	uParam0->f_8 = 1;
	func_380(uParam0);
}

void func_158(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_10 = 1;
	uParam0->f_54 = iParam1;
	uParam0->f_54.f_1 = iParam2;
	uParam0->f_54.f_2 = iParam3;
}

void func_159(var uParam0, bool bParam1)
{
	if (!bParam1 && (uParam0->f_5 || func_381(2)))
	{
		return;
	}
	uParam0->f_7 = bParam1;
	if (!bParam1)
	{
		return;
	}
	func_380(uParam0);
}

void func_160(var uParam0, int iParam1)
{
	uParam0->f_11 = 1;
	uParam0->f_57 = iParam1;
}

void func_161(var uParam0, int iParam1)
{
	uParam0->f_2 = 1;
	uParam0->f_21 = iParam1;
}

void func_162(var uParam0, struct<2> Param1, bool bParam3, int iParam4)
{
	if (bParam3)
	{
		func_382(uParam0, Param1, iParam4);
		func_165(111);
	}
	else
	{
		Global_1132968->f_5583 = { *uParam0 };
		Global_1132968->f_5583.f_13 = { Param1 };
		func_166(111);
	}
}

void func_163()
{
	bool bVar0;

	bVar0 = false;
	if (func_383(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 0, 0) > 0)
	{
		bVar0 = true;
	}
	INVENTORY::_0x644CCB76A76CFBD6(1, 1, 1, 1, 1, 1);
	if (bVar0)
	{
		func_384(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1, 752097756);
		WEAPON::_0x83B8D50EB9446BBA(Global_34, 1);
	}
	if (Local_2395.f_1 == 12)
	{
		if (!func_384(201475512, 1, 752097756))
		{
		}
	}
	func_43(512);
	func_385();
}

int func_164(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_386(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 == func_387())
	{
		return func_386(&(Global_1099294->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1275573->f_22[iParam1])
	{
		return func_386(&(((*Global_1097610)[iParam1 /*51*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_165(int iParam0)
{
	if (func_388(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_166(int iParam0)
{
	if (func_389(&(Global_1099294->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_167()
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 3;
	if (func_390(&Var0))
	{
		func_39(Var0, -1860090745, &iVar5, 0);
	}
	return iVar5;
}

int func_168()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_391(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 1)
	{
		return 1;
	}
	return iVar5;
}

void func_169()
{
	int iVar0;

	func_35(1086838518);
	Local_2395.f_1259 = joaat("COLLECT");
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		func_392(iVar0, 0, 1);
		func_393(iVar0, 1);
		iVar0++;
	}
}

void func_170(int iParam0)
{
	func_146(&(Local_2395.f_1335), iParam0);
}

void func_171(int iParam0)
{
	if (func_394(iParam0))
	{
		return;
	}
	Global_1099294->f_26.f_9 = (Global_1099294->f_26.f_9 || iParam0);
}

void func_172(int iParam0)
{
	if (!func_395(iParam0))
	{
		return;
	}
	Global_1099294->f_26.f_9 = (Global_1099294->f_26.f_9 - (Global_1099294->f_26.f_9 && iParam0));
}

int func_173()
{
	return 10208;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1070356->f_634.f_601;
		case 3:
			return Global_1070356->f_634.f_2103;
		case 4:
			return Global_1070356->f_634.f_12605;
		case 5:
			return Global_1070356->f_634.f_12907;
		case 6:
			return Global_1070356->f_634.f_15909;
		case 7:
			return Global_1070356->f_634.f_15980;
		case 8:
			return Global_1070356->f_634.f_17182;
		default:
			break;
	}
	return -1;
}

bool func_176(int iParam0, int iParam1)
{
	return func_78((Local_2202[iParam1 /*6*/])->f_1, iParam0);
}

bool func_177(int iParam0)
{
	return func_78(Local_2152.f_13, iParam0);
}

int func_178()
{
	return 1;
}

void func_179(int iParam0)
{
	func_146(&(Local_2152.f_13), iParam0);
}

void func_180()
{
}

void func_181(int iParam0)
{
	Local_2152 = iParam0;
}

int func_182()
{
	if (!func_396())
	{
		return 0;
	}
	if (!func_397())
	{
		return 0;
	}
	return 1;
}

int func_183(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !func_78((Local_2202[iVar0 /*6*/])->f_1, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_184(var uParam0, bool bParam1)
{
	if (bParam1 || !func_156(uParam0))
	{
		func_201(uParam0);
	}
}

void func_185()
{
}

int func_186(var uParam0)
{
	if (!func_156(uParam0))
	{
		return 0;
	}
	if (func_398(uParam0))
	{
		return uParam0->f_2;
	}
	return func_399(uParam0->f_1);
}

int func_187()
{
	return 5000;
}

int func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && &Local_2202[iVar2 /*6*/] >= iParam0)
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

void func_189(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_400(uParam0, 1);
	func_401(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_190()
{
	return 3000;
}

int func_191()
{
	if (func_402(8192, 1))
	{
		if (!func_403(256))
		{
			func_404();
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (!func_403(2))
	{
		if (!func_405())
		{
			return 0;
		}
		if (!func_406())
		{
			return 0;
		}
		func_407(2);
	}
	return 1;
}

void func_192()
{
	if (!func_156(&(Local_2152.f_4)))
	{
		func_184(&(Local_2152.f_4), 0);
	}
}

void func_193(bool bParam0, int iParam1)
{
	if (!bParam0 && !func_408(2, 30))
	{
		return;
	}
	func_410(func_409(iParam1));
}

void func_194(bool bParam0)
{
	int iVar0;

	if (!bParam0 && !func_408(2, 60))
	{
		return;
	}
	Local_2152.f_14++;
	iVar0 = func_188(2);
	Local_2152.f_15 = (Local_2152.f_15 + iVar0);
}

void func_195()
{
	func_411();
}

void func_196()
{
	func_194(1);
	func_412();
	func_181(6);
}

void func_197(bool bParam0)
{
	int iVar0;

	if (!func_177(64))
	{
		if (Local_2395.f_1387 == joaat("standard") && (Local_2395.f_9 == joaat("standard") || Local_2395.f_9 == joaat("themed")))
		{
			iVar0 = func_413(2);
			if (iVar0 <= 1)
			{
				func_179(64);
				if (bParam0)
				{
					func_179(128);
				}
			}
		}
		else if ((Local_2395.f_1387 == 1839318411 && Local_2395.f_9 == joaat("standard")) && Local_2395.f_3 == 1455184052)
		{
			func_179(64);
			if (bParam0)
			{
				func_179(128);
			}
		}
	}
}

void func_198()
{
	if (Local_2395.f_9 == 1038512660 || Local_2395.f_9 == -785841056)
	{
		return;
	}
	if (Local_2395.f_13.f_11.f_2 == 0)
	{
		return;
	}
	if (func_309(&(Local_2395.f_13), 0) > 0f && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_2395.f_13.f_210[0 /*23*/])->f_14))
	{
		func_414((Local_2395.f_13.f_210[0 /*23*/])->f_14);
	}
}

int func_199()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_415(2);
	iVar1 = func_188(2);
	if (func_416() || iVar0 == iVar1)
	{
		return 1;
	}
	iVar2 = Local_0.f_5;
	iVar3 = (Local_0.f_67[iVar2 /*40*/])->f_7;
	if (iVar3 != -1)
	{
		switch (iVar3)
		{
			case 3:
				func_417(iVar2);
				break;
			case 4:
				func_418(iVar2);
				break;
			case 5:
				func_419(iVar2);
				break;
		}
		func_420(iVar2);
	}
	Local_0.f_5++;
	if (Local_0.f_5 >= 7)
	{
		Local_0.f_5 = 0;
	}
	return 0;
}

int func_200()
{
	if (!func_156(&(Local_2152.f_4)))
	{
		return 0;
	}
	return func_186(&(Local_2152.f_4));
}

void func_201(var uParam0)
{
	func_189(uParam0, 0);
}

void func_202()
{
	bool bVar0;

	if (Local_2395.f_9 == 1038512660)
	{
		func_421(&bVar0);
		if (bVar0)
		{
			func_179(256);
		}
	}
	else if (Local_2395.f_9 == -785841056)
	{
		if (Local_2152.f_12 != 1 && Local_2152.f_12 != 4)
		{
			func_422();
			func_410(0);
		}
	}
	else
	{
		func_422();
		if (func_177(2048))
		{
			func_410(0);
		}
	}
}

int func_203()
{
	return 1;
}

bool func_204()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

void func_205(int iParam0)
{
	func_423(&(Local_2395.f_1335), iParam0);
}

int func_206()
{
	switch (Local_2395.f_1)
	{
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 1:
			return func_424();
		default:
			break;
	}
	return 0;
}

void func_207()
{
	Global_1132968->f_6289.f_22 = MISC::GET_FRAME_COUNT();
}

int func_208()
{
	switch (Local_2395.f_1)
	{
		case 11:
			return 1;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_209(int iParam0)
{
	if (!func_425(Global_1132968->f_6289.f_97, iParam0))
	{
		func_146(&(Global_1132968->f_6289.f_97), iParam0);
	}
}

int func_210()
{
	return Global_1102099->f_34.f_772;
}

void func_211(int iParam0, struct<2> Param1, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam3)
	{
		if (!func_73(Param1))
		{
			return;
		}
		if (func_426(Param1, 1))
		{
			return;
		}
		if (func_427(Param1))
		{
			return;
		}
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	func_428(iVar0);
	if (Global_1102099->f_34.f_353[iVar0 /*6*/] && (Global_1102099->f_34.f_353[iVar0 /*6*/])->f_5 == -1)
	{
		return;
	}
	if (!func_358(Param1) || !bParam3)
	{
		Global_1102099->f_34.f_353[iVar0 /*6*/] = 1;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_1 = iParam0;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_5 = 5;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_4 = Global_1275573->f_21;
		if (bParam4)
		{
			((*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97 = 1;
		}
		if (bParam3)
		{
			(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_2 = { Param1 };
		}
		*(Global_1102099->f_34.f_546[iVar0 /*7*/]) = { func_429(iParam0) };
	}
	else
	{
		Global_1102099->f_34.f_353[iVar0 /*6*/] = 1;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_1 = iParam0;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_2 = { Param1 };
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_5 = -1;
		(Global_1102099->f_34.f_353[iVar0 /*6*/])->f_4 = Global_1275573->f_21;
		*(Global_1102099->f_34.f_546[iVar0 /*7*/]) = { func_429(iParam0) };
		if (bParam4)
		{
			((*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97 = 1;
		}
	}
	if ((Global_1102099->f_34[iVar0 /*11*/])->f_6)
	{
		func_430(iVar0);
	}
}

void func_212(bool bParam0)
{
	if (bParam0)
	{
		Global_1903929->f_485[1] = 1;
	}
	Global_1903929->f_485[0] = 1;
	MISC::SET_BIT(&(Global_1956131->f_1), 0);
}

void func_213(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 56:
			func_431(iParam0);
			break;
		case 3:
			func_432(iParam0);
			break;
	}
}

void func_214(int iParam0)
{
	struct<10> Var0;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 12))
	{
		return;
	}
	iVar12 = Var0.f_5;
	if (Var0.f_4 == -1)
	{
		return;
	}
	if ((iVar12 == -116590068 && func_433(&(Local_2395.f_1362))) && func_434(&(Local_2395.f_1362), &Var0))
	{
		func_435(&(Local_2395.f_1362));
		Local_2395.f_1282++;
		Local_2395.f_1283 = (Local_2395.f_1283 + Var0.f_8);
		Local_2395.f_1285 = (Local_2395.f_1285 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_2395.f_1, Local_2395.f_3, &iVar13))
			{
				func_436(func_47(-1901704681, iVar13), Var0.f_8);
			}
		}
	}
	if ((iVar12 == -2069558689 && func_433(&(Local_2395.f_1366))) && func_434(&(Local_2395.f_1366), &Var0))
	{
		func_435(&(Local_2395.f_1366));
		Local_2395.f_1282++;
		Local_2395.f_1283 = (Local_2395.f_1283 + Var0.f_8);
		Local_2395.f_1285 = (Local_2395.f_1285 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_2395.f_1, Local_2395.f_3, &iVar14))
			{
				func_436(func_47(-1901704681, iVar14), Var0.f_8);
			}
		}
	}
	if ((iVar12 == 1172622856 && func_433(&(Local_2395.f_1370))) && func_434(&(Local_2395.f_1370), &Var0))
	{
		func_435(&(Local_2395.f_1370));
		Local_2395.f_1282++;
		Local_2395.f_1283 = (Local_2395.f_1283 + Var0.f_8);
		Local_2395.f_1285 = (Local_2395.f_1285 + Var0.f_6);
		if (Var0.f_8 > 0)
		{
			if (func_46(Local_2395.f_1, Local_2395.f_3, &iVar15))
			{
				func_436(func_47(-1901704681, iVar15), Var0.f_8);
			}
		}
	}
	if ((((((iVar12 == -309190573 || iVar12 == 1440367028) || iVar12 == -697003817) || iVar12 == -252981337) || iVar12 == -926779719) || iVar12 == 1387750829) || ((iVar12 == 1519614621 && func_433(&(Local_2395.f_1374))) && func_434(&(Local_2395.f_1374), &Var0)))
	{
		func_435(&(Local_2395.f_1374));
		Local_2395.f_1282++;
	}
	if (((iVar12 != 0 && iVar12 == Local_2395.f_1382) && func_433(&(Local_2395.f_1378))) && func_434(&(Local_2395.f_1378), &Var0))
	{
		func_435(&(Local_2395.f_1378));
		Local_2395.f_1282++;
		Local_2395.f_1284 = (Local_2395.f_1284 + Var0.f_9);
		if (Var0.f_9 > 0)
		{
			if (func_46(Local_2395.f_1, Local_2395.f_3, &iVar16))
			{
				func_436(func_47(1532301684, iVar16), Var0.f_9);
			}
		}
	}
}

void func_215()
{
	func_437();
	func_438();
	func_216(Local_2152);
}

void func_216(int iParam0)
{
	Local_2395.f_10 = iParam0;
}

void func_217()
{
	if (!func_408(1, 30))
	{
		return;
	}
	func_52();
}

int func_218(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;

	iVar0 = 1;
	HUD::_0xF66090013DE648D5(func_343());
	if (!HUD::_0xD0976CC34002DB57(func_343()))
	{
		iVar0 = 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam0))
	{
		HUD::_0xF66090013DE648D5(&uParam0);
		if (!HUD::_0xD0976CC34002DB57(&uParam0))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

char* func_219(bool bParam0)
{
	if (!bParam0)
	{
		return "script@mp@endflow@endcelebration@FME@Female";
	}
	return "script@mp@endflow@endcelebration@FME@Male";
}

char* func_220()
{
	return "LIVE";
}

int func_221(var uParam0, char* sParam1, char* sParam2)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam0))
	{
		if (ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
		{
			return 1;
		}
	}
	else
	{
		*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, 0, sParam2, false, true);
		return 0;
	}
	if (!ANIMSCENE::_0x59606519FF9D3EC2(*uParam0, 1) && !ANIMSCENE::_0x477122B8D05E7968(*uParam0, 1, 0))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
	}
	return 0;
}

int func_222(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return 0;
	}
	UISTATEMACHINE::_UIFLOWBLOCK_ENTER(*uParam0, uParam0->f_1);
	if (!UISTATEMACHINE::_UISTATEMACHINE_EXISTS(*uParam0))
	{
		UISTATEMACHINE::_UISTATEMACHINE_CREATE(*uParam0, *uParam0);
	}
	return 1;
}

int func_223()
{
	if (!func_439())
	{
		return 0;
	}
	AUDIO::TRIGGER_MUSIC_EVENT("MC_SUSPENSE_HIGH");
	return 1;
}

void func_224(int iParam0, int iParam1)
{
	func_146(&((Local_2202[iParam1 /*6*/])->f_1), iParam0);
}

int func_225()
{
	return 1;
}

void func_226()
{
}

void func_227()
{
	func_217();
	func_440();
	func_441();
	func_442();
	func_443();
	func_444();
	func_445();
	func_266();
	func_446();
	if (Local_2395.f_9 != -785841056)
	{
		func_447();
		func_448();
	}
	else
	{
		func_449();
	}
	func_450();
}

void func_228()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	struct<8> Var5;
	struct<8> Var13;
	struct<8> Var21;
	struct<8> Var29;
	char cVar37[64];

	NETWORK::_0x236905C700FDB54D();
	if (!func_153(Local_2395.f_1332))
	{
		bVar0 = true;
		if (Local_2395.f_9 == -785841056 && &Local_2202[Local_2395.f_1332 /*6*/] == 1)
		{
			bVar0 = false;
		}
		func_126(1, bVar0);
		return;
	}
	if (func_156(&(Local_2152.f_1)))
	{
		iVar1 = func_186(&(Local_2152.f_1));
		iVar2 = (Local_2395.f_1268 - iVar1);
		iVar3 = (iVar2 / 1000);
		if (iVar3 < 21)
		{
			func_241();
		}
		if (func_451())
		{
			func_452(&(Local_2395.f_1005), iVar2, 0, -1, 0);
			if (iVar3 < 4)
			{
				if (!func_65(16))
				{
					func_170(16);
					GRAPHICS::ANIMPOSTFX_PLAY(func_56());
					func_453(&(Local_2395.f_1260));
				}
				if (iVar3 < 1)
				{
					iVar3 = 1;
				}
			}
		}
	}
	if (!func_286(Local_2395.f_1288))
	{
		func_454(0, "", -1, 0);
	}
	if (((func_65(16) || !func_455(255)) || !ENTITY::DOES_ENTITY_EXIST(Global_34)) || ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		func_454(0, "", -1, 0);
	}
	else if (((func_68(Local_2395.f_1396) || (func_68(Local_2395.f_1399) && func_456(Global_35, Local_2395.f_1396) <= Local_2395.f_1293)) || (!func_68(Local_2395.f_1399) && func_456(Global_35, Local_2395.f_1399) <= Local_2395.f_1293)) || !func_457(Local_2395.f_1))
	{
		if (Local_2395.f_1266 != 4)
		{
			if (Local_2395.f_9 == -785841056)
			{
				sVar4 = func_458();
				if (MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
				{
					func_454(4, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_WAIT_POSSE_VERSUS", &(Local_2395.f_1338)), -1, 0);
				}
				else
				{
					func_454(4, sVar4, -1, 0);
				}
			}
			else
			{
				Var5 = { Local_2395.f_1346 };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var5))
				{
					Var5 = { Local_2395.f_1338 };
				}
				if (func_65(1048576))
				{
					func_454(4, MISC::_CREATE_VAR_STRING(2, "FME_OBJECTIVE_WAIT_ST"), -1, 0);
				}
				else if (Local_2395.f_1 == 1)
				{
					func_454(4, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_WAIT_CHALLENGES", &Var5), -1, 0);
				}
				else
				{
					func_454(4, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_WAIT", &Var5), -1, 0);
				}
			}
		}
	}
	else if ((func_134(131072) && !func_134(1048576)) && func_320(Local_2395.f_1296))
	{
		if (Local_2395.f_1266 != 2)
		{
			func_454(2, MISC::_CREATE_VAR_STRING(10, "FME_OBJECTIVE_FAST_TRAVEL_POSSE_VERSUS", &(Local_2395.f_1338)), 7500, 0);
			func_43(1048576);
		}
	}
	else if (Local_2395.f_1266 != 3)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_459()))
		{
			func_454(3, func_459(), -1, 0);
		}
		else if (Local_2395.f_9 == -785841056)
		{
			func_454(3, "FME_OBJECTIVE_ENTER_AREA_POSSE_VERSUS", -1, 0);
		}
		else
		{
			func_454(3, "FME_OBJECTIVE_ENTER_AREA", -1, 0);
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Local_2395.f_1325))
	{
		if (!func_68(Local_2395.f_1396) && func_457(Local_2395.f_1))
		{
			func_460(&(Local_2395.f_1325));
		}
	}
	if (!func_451())
	{
		return;
	}
	if (!func_134(2))
	{
		if (((((func_48(func_461(415667248)) >= func_462() || Local_2395.f_9 != joaat("standard")) || Local_2395.f_9 != joaat("themed")) || func_463()) || !_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))) || _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) < 2)
		{
			func_43(2);
		}
		else if (func_464(Local_2395.f_1289))
		{
			Var13 = { Local_2395.f_1346 };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
			{
				Var13 = { Local_2395.f_1338 };
			}
			Local_2395.f_1289 = func_465(MISC::_CREATE_VAR_STRING(10, "FME_HELP_SCORE", &Var13));
			func_436(func_461(415667248), 1);
			func_43(2);
		}
	}
	else if (!func_134(4))
	{
		if (Local_2395.f_1277 >= func_462())
		{
			func_43(4);
		}
		else if (func_464(Local_2395.f_1289))
		{
			Var21 = { func_466(Local_2395.f_1, Local_2395.f_3) };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var21))
			{
				Local_2395.f_1289 = func_465(&Var21);
			}
			func_43(4);
		}
	}
	else if (!func_134(8))
	{
		if (Local_2395.f_1277 >= func_462())
		{
			func_43(8);
		}
		else if (func_464(Local_2395.f_1289))
		{
			Var29 = { func_467(Local_2395.f_1, Local_2395.f_3) };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var29))
			{
				Local_2395.f_1289 = func_465(&Var29);
			}
			func_43(8);
		}
	}
	else if (!func_134(16))
	{
		if (func_134(8388608) && func_464(Local_2395.f_1289))
		{
			StringCopy(&cVar37, func_468(), 64);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar37))
			{
				Local_2395.f_1289 = func_465(&cVar37);
			}
			func_43(16);
		}
	}
}

int func_229()
{
	if (Global_1070356->f_27136.f_62.f_42 >= 9)
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - Global_1070356->f_27136.f_105);
	if (iVar1 < Global_1901929->f_1.f_36)
	{
		return 0;
	}
	return 1;
}

void func_231()
{
	vector3 vVar0;
	var uVar3;
	int iVar4;

	func_469(1, 0, 0);
	func_63(0);
	func_43(2097152);
	func_470(&vVar0, &uVar3, &iVar4);
	if (!func_68(vVar0) && !iVar4 == -1)
	{
		if ((!func_134(134217728) && !func_471(Local_2395.f_1, Local_2395.f_3)) && func_472(Local_2395.f_1, Local_2395.f_3))
		{
			func_473(1, 0);
		}
		func_474(vVar0, uVar3, 1);
	}
	else
	{
		func_475(1, 1);
	}
}

bool func_232(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

void func_233(int iParam0)
{
	func_476(&(Global_1572887->f_106.f_15), iParam0);
}

void func_234(bool bParam0)
{
	if (Global_1070356->f_27244.f_1 != SCRIPTS::GET_ID_OF_THIS_THREAD() && !bParam0)
	{
		return;
	}
	if (Global_1070356->f_27244.f_1 == 0)
	{
		return;
	}
	func_476(&(Global_1070356->f_27244.f_2), 2);
}

void func_235(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1070356->f_27136.f_62.f_28 = 1;
		Global_1070356->f_27136.f_62.f_29 = iParam3;
		Global_1070356->f_27136.f_62.f_26 = iParam6;
		Global_1070356->f_27136.f_62.f_27 = iParam8;
		if (bParam7)
		{
			MISC::SET_BIT(&(Global_1070356->f_27136.f_62.f_8), 18);
		}
	}
	else
	{
		Global_1070356->f_27136.f_62.f_30 = 1;
		Global_1070356->f_27136.f_62.f_33 = !bParam1;
		Global_1070356->f_27136.f_62.f_31 = iParam2;
		Global_1070356->f_27136.f_62.f_32 = iParam4;
		Global_1070356->f_27136.f_62.f_35 = iParam5;
		if (MISC::IS_BIT_SET(Global_1070356->f_27136.f_62.f_8, 18))
		{
			MISC::CLEAR_BIT(&(Global_1070356->f_27136.f_62.f_8), 18);
		}
	}
}

void func_236()
{
	float fVar0;
	float fVar1;

	if (Local_2395.f_9 != -785841056 || !func_457(Local_2395.f_1))
	{
		return;
	}
	if ((!func_153(Local_2395.f_1332) || !func_134(131072)) || func_68(Local_2395.f_1396))
	{
		func_477();
		return;
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34)) || PED::_0xB655DB7582AEC805(Global_34)) || func_478()) || Global_1915180->f_20142)
	{
		func_477();
		return;
	}
	fVar0 = func_456(Global_35, Local_2395.f_1396);
	fVar1 = (Local_2395.f_1294 + 35f);
	if (Local_2395.f_10 > 3)
	{
		if (func_134(262144) || (Local_2395.f_1293 > 0f && fVar0 <= fVar1))
		{
			func_329(131072);
			func_477();
			return;
		}
	}
	if (fVar0 < fVar1)
	{
		func_477();
		return;
	}
	if (!func_320(Local_2395.f_1296) && !PED::_0xA911EE21EDF69DAF(Global_34))
	{
		Local_2395.f_1296 = func_479("FM_FAST_TRAVEL", joaat("INPUT_CONTEXT_Y"), Global_34, 2, 0, 0, 0, 5, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		if (!func_134(524288))
		{
			func_43(524288);
		}
	}
	if (func_320(Local_2395.f_1296))
	{
		if (PED::_0xA911EE21EDF69DAF(Global_34))
		{
			if (func_480(Local_2395.f_1296, 0))
			{
				func_325(&(Local_2395.f_1296), 0, 1);
			}
		}
		else
		{
			if (!func_480(Local_2395.f_1296, 0))
			{
				func_324(Local_2395.f_1296, 1, 1, 1);
			}
			if (func_481(Local_2395.f_1296, 0))
			{
				func_475(1, 1);
				func_43(262144);
			}
		}
		if (Local_2395.f_1266 == 2 && func_482(Local_2395.f_1288))
		{
			func_483(Local_2395.f_1296, 0, 1);
		}
		else
		{
			func_483(Local_2395.f_1296, 1, 1);
		}
	}
}

void func_237()
{
	int iVar0;
	char[] cVar1[8];
	vector3 vVar2;

	if (!func_153(Local_2395.f_1332))
	{
		return;
	}
	if (Local_2395.f_9 != joaat("standard") && Local_2395.f_9 != joaat("themed"))
	{
		return;
	}
	if (func_68(Local_2395.f_1399))
	{
		return;
	}
	if (!func_484() > 0f)
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_2395.f_1327))
	{
		Local_2395.f_1327 = MAP::_0x45F13B7E0A15C880(-188007767, Local_2395.f_1399, func_484());
	}
	else
	{
		MAP::SET_BLIP_COORDS(Local_2395.f_1327, Local_2395.f_1399);
	}
	if (func_156(&(Local_2395.f_1307)) && func_186(&(Local_2395.f_1307)) > 1500)
	{
		if ((((!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(Local_2395.f_1260) && !UISTATEMACHINE::_UISTATEMACHINE_EXISTS(190275865)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_2395.f_1260.f_2)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_2395.f_1260.f_1)) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_485()))
		{
			func_294(&(Local_2395.f_1307));
		}
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34)) || func_62(255)) || func_286(Local_2395.f_1287)) || func_156(&(Local_2395.f_1307)))
	{
		func_331(4);
		func_486();
		func_249();
		return;
	}
	if (func_487())
	{
		func_488(4);
		if (!func_156(&(Local_2395.f_1304)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("OOB_start", func_119(), true, 0);
			func_454(5, "FME_OBJECTIVE_ABANDON_LOBBY_WARNING", -1, 0);
			func_201(&(Local_2395.f_1304));
		}
		else
		{
			iVar0 = func_187();
			cVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar0 - func_186(&(Local_2395.f_1304)))) * 0.001f));
			if (cVar1 < 0)
			{
				cVar1 = 0;
			}
			vVar2 = { Local_2395.f_1399 };
			vVar2.f_2 = (vVar2.z + 10f);
			func_489(&(Local_2395.f_1260), cVar1, vVar2, func_484(), 1, 0, 0, 1);
			if (func_186(&(Local_2395.f_1304)) > iVar0)
			{
				func_490();
				func_491(Global_34, 0, 0);
				if (ENTITY::IS_ENTITY_DEAD(Global_34))
				{
					AUDIO::PLAY_SOUND_FRONTEND("OOB_death", func_119(), true, 0);
					func_331(4);
					func_486();
					func_249();
				}
			}
		}
	}
	else
	{
		if (Local_2395.f_1266 == 5)
		{
			func_201(&(Local_2395.f_1307));
			AUDIO::PLAY_SOUND_FRONTEND("OOB_return", func_119(), true, 0);
		}
		func_240();
	}
}

void func_238()
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;

	if (func_176(65536, Local_2395.f_1332))
	{
		return;
	}
	iVar0 = func_492();
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == joaat("weapon_fishingrod"))
	{
		return;
	}
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (!WEAPON::_0xF29A186ED428B552(Global_34, iVar0))
	{
		return;
	}
	WEAPON::_0x6929E22158E52265(Global_34, 0, &Var1);
	WEAPON::_0x6929E22158E52265(Global_34, 1, &Var5);
	if (func_344(Var1, Var5))
	{
		func_224(65536, Local_2395.f_1332);
	}
}

void func_239()
{
}

void func_240()
{
	if (func_68(Local_2395.f_1399))
	{
		return;
	}
	if (Local_2395.f_1266 == 5)
	{
		if (func_286(Local_2395.f_1289))
		{
			_NAMESPACE71::_0x2F901291EF177B02(Local_2395.f_1289, 0);
		}
		func_454(0, "", -1, 0);
	}
	func_331(4);
	func_486();
	func_249();
}

void func_241()
{
	if (Local_2395.f_9 == -785841056)
	{
		return;
	}
	if (func_134(8192))
	{
		return;
	}
	if (!func_134(4194304))
	{
		NETWORK::_0xE546BDA1B3E288EE(512);
		func_43(4194304);
	}
}

void func_242(int iParam0, int iParam1)
{
	func_146(&((Global_1185132->f_66[iParam0 /*20*/])->f_6), iParam1);
}

int func_243()
{
	if (!func_493(8192))
	{
		func_494();
		return 0;
	}
	if (!func_495(128))
	{
		func_496();
		func_497(128);
	}
	switch (Local_2395.f_2)
	{
		case -1983139019:
			if (!func_495(512))
			{
				if (func_498(385812466) && func_498(-1201452352))
				{
					func_499(385812466, 0, 0, 0, 1, 0, 0, 0);
					func_499(-1201452352, 0, 0, 0, 1, 0, 0, 0);
					func_497(512);
				}
			}
			break;
	}
	return 1;
}

void func_244()
{
	Local_2395.f_1279 = func_48(func_500(-190907223));
}

void func_245()
{
	Local_2395.f_1280 = func_48(func_500(-1048906573));
}

int func_246()
{
	if (Local_2395.f_1387 == joaat("standard") && func_177(64))
	{
		func_41(-1477057661);
		func_52();
		func_247();
		return 1;
	}
	return 0;
}

void func_247()
{
	switch (Local_2395.f_1387)
	{
		case joaat("standard"):
		case -669315698:
			func_501(0);
			break;
		case 142723591:
		case 1229355466:
			func_502();
			break;
		case -1893775542:
		case -1869754940:
			func_503();
			break;
		case -1477057661:
		case -1323241207:
			func_501(1);
			break;
		case -1130541276:
		case 1839318411:
			func_504(1);
			break;
	}
}

void func_248(var uParam0, bool bParam1)
{
	struct<14> Var0;

	if (uParam0->f_2 > 0)
	{
		_NAMESPACE71::_0xDD1232B332CBB9E7(12, 1, 0);
		if (bParam1)
		{
			func_283(uParam0);
			func_505();
		}
		func_506(uParam0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_6);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5);
		HUD::_0xF1E6979C0B779985(&(uParam0->f_4));
		uParam0->f_9 = 0;
		func_507(0);
		func_508(0);
		_NAMESPACE71::_0xDD1232B332CBB9E7(2, 1, 0);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		MISC::_COPY_MEMORY(uParam0, &Var0, 15);
	}
}

void func_249()
{
	func_509(&(Local_2395.f_1260), 1);
}

void func_250()
{
	if (MAP::DOES_BLIP_EXIST(Local_2395.f_1325))
	{
		MAP::REMOVE_BLIP(&(Local_2395.f_1325));
	}
	if (MAP::DOES_BLIP_EXIST(Local_2395.f_1326))
	{
		MAP::REMOVE_BLIP(&(Local_2395.f_1326));
	}
	if (MAP::DOES_BLIP_EXIST(Local_2395.f_1327))
	{
		MAP::REMOVE_BLIP(&(Local_2395.f_1327));
	}
}

void func_251()
{
	if (MAP::DOES_BLIP_EXIST(Local_2395.f_1325))
	{
		MAP::REMOVE_BLIP(&(Local_2395.f_1325));
	}
	func_510();
	func_511();
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_0.f_367), Local_913.f_1056);
	AUDIO::TRIGGER_MUSIC_EVENT("MC_DEFENDING");
}

void func_252()
{
	int iVar0;

	iVar0 = Local_2395.f_1269;
	if (func_156(&(Local_2152.f_4)))
	{
		iVar0 = (iVar0 - func_186(&(Local_2152.f_4)));
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 < 15000)
	{
		PED::SET_PED_RESET_FLAG(Global_34, 134, true);
	}
	Local_2395.f_1267 = iVar0;
}

void func_253()
{
	bool bVar0;
	struct<8> Var1;
	bool bVar9;
	char cVar10[64];
	bool bVar18;
	char cVar19[64];
	int iVar27;
	int iVar28;
	struct<8> Var29;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	int iVar40;

	func_277();
	if (!func_153(Local_2395.f_1332))
	{
		bVar0 = true;
		if (Local_2395.f_9 == -785841056 && &Local_2202[Local_2395.f_1332 /*6*/] == 1)
		{
			bVar0 = false;
		}
		func_126(1, bVar0);
		return;
	}
	if (!func_65(2))
	{
		if (func_512())
		{
			func_272(func_270(), func_271(), 0, 0, 30000);
		}
		Var1 = { func_513() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			StringCopy(&Var1, func_514(Local_2395.f_1338), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_515()))
		{
			cVar10 = { func_516(Local_2395.f_1, Local_2395.f_3) };
		}
		else
		{
			bVar9 = true;
		}
		if (func_177(64))
		{
			iVar27 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if (_NAMESPACE26::_0x0F99F6436528A089(iVar27) && _NAMESPACE26::_0x149A2751AB66AC02(iVar27) > 1)
			{
				StringCopy(&cVar19, "FME_SHARD_PRIMARY_POSSE_DISBANDED", 64);
				func_170(8);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(func_517()))
		{
			bVar18 = true;
		}
		if (bVar9 || bVar18)
		{
			if (bVar9 && bVar18)
			{
				Local_2395.f_1287 = func_520(&Var1, func_515(), func_517(), func_518(), func_519());
			}
			else if (bVar9)
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					Local_2395.f_1287 = func_521(&Var1, func_515(), func_518(), func_519());
				}
				else
				{
					Local_2395.f_1287 = func_520(&Var1, func_515(), &cVar19, func_518(), func_519());
				}
			}
			else if (bVar18)
			{
				Local_2395.f_1287 = func_520(&Var1, &cVar10, func_517(), func_518(), func_519());
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
		{
			Local_2395.f_1287 = func_521(&Var1, &cVar10, func_518(), func_519());
		}
		else
		{
			Local_2395.f_1287 = func_520(&Var1, &cVar10, &cVar19, func_518(), func_519());
		}
		func_170(2);
	}
	else if (!func_65(4))
	{
		if (func_512())
		{
			func_272(func_270(), func_271(), 0, 0, 30000);
		}
		if (!func_286(Local_2395.f_1287))
		{
			func_170(4);
		}
	}
	else
	{
		func_272(func_270(), func_271(), 0, 0, 30000);
		if (((Local_2395.f_1005.f_2 != 2 || Local_2395.f_1005.f_1 != 2) || !UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729)) || !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_2395.f_13.f_11.f_2))
		{
			return;
		}
		if (!func_65(8) && func_177(64))
		{
			if (!func_286(Local_2395.f_1287) && func_464(Local_2395.f_1289))
			{
				iVar28 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
				if (_NAMESPACE26::_0x0F99F6436528A089(iVar28) && _NAMESPACE26::_0x149A2751AB66AC02(iVar28) > 1)
				{
					Var29 = { func_513() };
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var29))
					{
						Var29 = { Local_2395.f_1338 };
					}
					Local_2395.f_1287 = func_521(&Var29, "FME_SHARD_PRIMARY_POSSE_DISBANDED", 0, 0);
				}
				func_170(8);
			}
		}
		else if (!func_134(32))
		{
			bVar37 = true;
			bVar38 = false;
			func_522(Local_2395.f_1325, &bVar37, &bVar38);
			if (Local_2395.f_1277 >= func_462() && !bVar38)
			{
				func_43(32);
			}
			else if (!func_286(Local_2395.f_1287) && func_464(Local_2395.f_1289))
			{
				if (bVar37)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(func_522(Local_2395.f_1325, &bVar37, &bVar38)))
					{
						Local_2395.f_1289 = func_465(func_522(Local_2395.f_1325, &bVar37, &bVar38));
					}
					func_43(32);
				}
			}
		}
		else if (!func_134(128))
		{
			if ((func_48(func_461(-470974965)) >= 5 || !func_288(Local_2395.f_1384)) || !func_523())
			{
				func_43(64);
				func_43(128);
			}
			else if (!func_286(Local_2395.f_1287) && func_464(Local_2395.f_1289))
			{
				if (!func_134(64))
				{
					Local_2395.f_1289 = func_465("FME_HELP_SCOREBOARD_1");
					func_43(64);
				}
				else
				{
					Local_2395.f_1289 = func_465("FME_HELP_SCOREBOARD_2");
					func_436(func_461(-470974965), 1);
					func_43(128);
				}
			}
		}
		else if (!func_134(65536))
		{
			if (func_48(func_461(1769987584)) >= func_462())
			{
				func_43(65536);
			}
			else if ((((func_278() && func_523()) && !func_286(Local_2395.f_1287)) && func_464(Local_2395.f_1289)) && (Local_2202[Local_2395.f_1332 /*6*/])->f_2 > 0f)
			{
				bVar39 = false;
				if (func_271() & 1024 == 1024)
				{
					bVar39 = true;
				}
				if (func_524(bVar39, 1, &iVar40))
				{
					if (!func_156(&(Local_2395.f_1301)))
					{
						func_201(&(Local_2395.f_1301));
					}
					else if (func_186(&(Local_2395.f_1301)) >= 2000)
					{
						Local_2395.f_1289 = func_465(MISC::_CREATE_VAR_STRING(10, "FME_HELP_SCORE_DRAW", func_526(PLAYER::GET_PLAYER_NAME(iVar40), func_525(iVar40, 1, -1, 0))));
						func_436(func_461(1769987584), 1);
						func_43(65536);
					}
				}
				else if (func_156(&(Local_2395.f_1301)))
				{
					func_294(&(Local_2395.f_1301));
				}
			}
		}
	}
}

void func_254()
{
	if (Local_2395.f_9 == -785841056)
	{
		return;
	}
	if (func_153(Local_2395.f_1332))
	{
		func_488(16);
	}
	else
	{
		func_331(16);
	}
}

void func_255()
{
	if (func_153(Local_2395.f_1332))
	{
		func_527();
	}
}

void func_256()
{
	int iVar0;
	char[] cVar1[8];
	vector3 vVar2;

	if (!func_153(Local_2395.f_1332))
	{
		return;
	}
	if (Local_2395.f_9 != joaat("standard") && Local_2395.f_9 != joaat("themed"))
	{
		return;
	}
	if (func_354() == 4)
	{
		return;
	}
	if (func_68(Local_2395.f_1396))
	{
		return;
	}
	if (!func_528())
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_2395.f_1327))
	{
		Local_2395.f_1327 = func_529();
	}
	else
	{
		MAP::SET_BLIP_COORDS(Local_2395.f_1327, Local_2395.f_1396);
	}
	if (func_156(&(Local_2395.f_1307)) && func_186(&(Local_2395.f_1307)) > 1500)
	{
		if ((((!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(Local_2395.f_1260) && !UISTATEMACHINE::_UISTATEMACHINE_EXISTS(190275865)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_2395.f_1260.f_2)) && !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_2395.f_1260.f_1)) && !GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_485()))
		{
			func_294(&(Local_2395.f_1307));
		}
	}
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_34) || ENTITY::IS_ENTITY_DEAD(Global_34)) || func_62(255)) || func_286(Local_2395.f_1287)) || func_156(&(Local_2395.f_1307)))
	{
		func_331(4);
		func_486();
		func_249();
		return;
	}
	if (func_530())
	{
		func_488(4);
		if (!MAP::DOES_BLIP_EXIST(Local_2395.f_1326))
		{
			Local_2395.f_1326 = MAP::_0x554D9D53F696D002(408396114, Local_2395.f_1396);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_2395.f_1326, "FME_OBJECTIVE_ABANDON_BLIP_NAME");
			MAP::_0x662D364ABF16DE2F(Local_2395.f_1326, 231194138);
		}
		else
		{
			MAP::SET_BLIP_COORDS(Local_2395.f_1326, Local_2395.f_1396);
		}
		if (!func_156(&(Local_2395.f_1304)))
		{
			AUDIO::PLAY_SOUND_FRONTEND("OOB_start", func_119(), true, 0);
			func_454(5, "FME_OBJECTIVE_ABANDON_WARNING", -1, 0);
			func_201(&(Local_2395.f_1304));
		}
		else
		{
			iVar0 = func_531();
			cVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar0 - func_186(&(Local_2395.f_1304)))) * 0.001f));
			if (cVar1 < 0)
			{
				cVar1 = 0;
			}
			vVar2 = { Local_2395.f_1396 };
			vVar2.f_2 = (vVar2.z + 10f);
			func_489(&(Local_2395.f_1260), cVar1, vVar2, Local_2395.f_1294, 1, 0, 0, 1);
			if (func_186(&(Local_2395.f_1304)) > iVar0)
			{
				func_490();
				func_491(Global_34, 0, 0);
				if (ENTITY::IS_ENTITY_DEAD(Global_34))
				{
					AUDIO::PLAY_SOUND_FRONTEND("OOB_death", func_119(), true, 0);
					func_331(4);
					func_486();
					func_249();
				}
			}
		}
	}
	else
	{
		if (Local_2395.f_1266 == 5)
		{
			func_201(&(Local_2395.f_1307));
			AUDIO::PLAY_SOUND_FRONTEND("OOB_return", func_119(), true, 0);
			if (func_286(Local_2395.f_1289))
			{
				_NAMESPACE71::_0x2F901291EF177B02(Local_2395.f_1289, 0);
			}
			func_454(0, "", -1, 0);
		}
		if (MAP::DOES_BLIP_EXIST(Local_2395.f_1326))
		{
			MAP::REMOVE_BLIP(&(Local_2395.f_1326));
		}
		func_331(4);
		func_486();
		func_249();
	}
}

int func_257()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_48(func_500(-1048906573));
	iVar0 = (iVar0 - Local_2395.f_1280);
	if (iVar0 != (Local_2202[Local_2395.f_1332 /*6*/])->f_4)
	{
		(Local_2202[Local_2395.f_1332 /*6*/])->f_4 = iVar0;
	}
	iVar8 = 0;
	while (iVar8 <= 8)
	{
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar7 = Local_2395.f_1389;
		iVar5 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		iVar6 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
		{
			fVar1 = (Local_2202[iVar7 /*6*/])->f_2;
			fVar2 = BUILTIN::TO_FLOAT((Local_2202[iVar7 /*6*/])->f_3);
			fVar3 = BUILTIN::TO_FLOAT((Local_368[iVar7 /*17*/])->f_14);
			fVar4 = (fVar2 + fVar3);
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5);
		}
		func_532(&(Local_2395.f_13), fVar1, iVar6, Local_2395.f_971[iVar7], !func_153(iVar7), fVar4, fVar2, 0, fVar3, 0);
		Local_2395.f_1389++;
		if (Local_2395.f_1389 >= 32)
		{
			Local_2395.f_1389 = 0;
		}
		iVar8++;
	}
	func_533(&(Local_2395.f_13));
	return 1;
}

void func_258()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = func_48(func_500(-190907223));
	iVar0 = (iVar0 - Local_2395.f_1279);
	if (iVar0 != (Local_2202[Local_2395.f_1332 /*6*/])->f_3)
	{
		(Local_2202[Local_2395.f_1332 /*6*/])->f_3 = iVar0;
	}
	iVar1 = func_48(func_500(-1048906573));
	iVar1 = (iVar1 - Local_2395.f_1280);
	if (iVar1 != (Local_2202[Local_2395.f_1332 /*6*/])->f_4)
	{
		(Local_2202[Local_2395.f_1332 /*6*/])->f_4 = iVar1;
	}
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 8)
	{
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		fVar5 = -1f;
		fVar6 = -1f;
		iVar9 = Local_2395.f_1389;
		iVar7 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar9);
		iVar8 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar7))
		{
			fVar2 = (Local_2202[iVar9 /*6*/])->f_2;
			fVar3 = BUILTIN::TO_FLOAT((Local_2202[iVar9 /*6*/])->f_3);
			fVar4 = BUILTIN::TO_FLOAT((Local_2202[iVar9 /*6*/])->f_4);
			iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar7);
			fVar5 = BUILTIN::TO_FLOAT((Local_2202[iVar9 /*6*/])->f_5);
			fVar6 = BUILTIN::TO_FLOAT(NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar8));
		}
		func_532(&(Local_2395.f_13), fVar2, iVar8, Local_2395.f_971[iVar9], !func_153(iVar9), fVar3, fVar4, 0, fVar5, fVar6);
		Local_2395.f_1389++;
		if (Local_2395.f_1389 >= 32)
		{
			Local_2395.f_1389 = 0;
		}
		iVar10++;
	}
	func_534(&(Local_2395.f_13));
}

void func_259()
{
	char* sVar0;
	int iVar1;

	if ((Local_2395.f_9 == 1038512660 || Local_2395.f_9 == -785841056) || !func_535())
	{
		return;
	}
	if (Local_2152.f_11 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2152.f_11))
	{
		if (Local_2152.f_11 != Local_2395.f_1004)
		{
			if (Local_2395.f_1004 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2395.f_1004))
			{
				func_536(Local_2395.f_1004);
			}
			if (Local_2395.f_1004 == 255)
			{
			}
			Local_2395.f_1004 = Local_2152.f_11;
			if ((func_153(Local_2395.f_1332) && !func_286(Local_2395.f_1287)) && !func_65(2097152))
			{
				if (Local_2395.f_1004 == PLAYER::PLAYER_ID())
				{
					iVar1 = joaat("COLOR_WHITE");
					sVar0 = "FME_GAME_UPDATE_NEW_LEADER_SELF";
				}
				else
				{
					iVar1 = func_525(Local_2395.f_1004, 1, -1, 0);
					sVar0 = MISC::_CREATE_VAR_STRING(10, "FME_GAME_UPDATE_NEW_LEADER", func_526(PLAYER::GET_PLAYER_NAME(Local_2395.f_1004), iVar1));
				}
				Local_2395.f_1291 = func_537(sVar0, iVar1);
			}
		}
		if (Local_2395.f_1004 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2395.f_1004))
		{
			func_538(Local_2395.f_1004, joaat("trophy"));
		}
	}
}

void func_260()
{
	if (func_156(&(Local_2395.f_1310)) && func_186(&(Local_2395.f_1310)) > 120000)
	{
		func_294(&(Local_2395.f_1310));
		func_105(0);
		func_54();
	}
}

void func_261()
{
	int iVar0;
	int iVar1;

	func_539();
	if (func_153(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		func_540();
	}
	else
	{
		func_345();
	}
	func_541();
	iVar0 = Local_913.f_7;
	iVar1 = &Local_913.f_50[iVar0 /*4*/];
	func_542(iVar0);
	if (iVar1 != -1)
	{
		switch (iVar1)
		{
			case 3:
				func_543(iVar0);
				break;
			case 4:
				func_544(iVar0);
				break;
			case 5:
				func_545(iVar0);
				break;
		}
		func_546(iVar0);
	}
	if (iVar1 != (Local_0.f_67[iVar0 /*40*/])->f_7)
	{
		Local_913.f_50[iVar0 /*4*/] = (Local_0.f_67[iVar0 /*40*/])->f_7;
	}
	Local_913.f_7++;
	if (Local_913.f_7 >= 7)
	{
		Local_913.f_7 = 0;
	}
}

int func_262()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_48(func_500(-1048906573));
	iVar0 = (iVar0 - Local_2395.f_1280);
	if (iVar0 != (Local_2202[Local_2395.f_1332 /*6*/])->f_4)
	{
		(Local_2202[Local_2395.f_1332 /*6*/])->f_4 = iVar0;
	}
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= 31)
	{
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar5 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		iVar6 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
		{
			fVar1 = (Local_2202[iVar7 /*6*/])->f_2;
			fVar2 = BUILTIN::TO_FLOAT((Local_2202[iVar7 /*6*/])->f_3);
			fVar3 = BUILTIN::TO_FLOAT((Local_368[iVar7 /*17*/])->f_14);
			fVar4 = (fVar2 + fVar3);
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5);
		}
		func_532(&(Local_2395.f_13), fVar1, iVar6, Local_2395.f_971[iVar7], !func_153(iVar7), fVar4, fVar2, 0, fVar3, 0);
		iVar7++;
	}
	func_533(&(Local_2395.f_13));
	return 1;
}

void func_263()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= 31)
	{
		fVar0 = 0f;
		fVar1 = 0f;
		fVar2 = 0f;
		fVar3 = -1f;
		fVar4 = -1f;
		iVar5 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar7);
		iVar6 = 255;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
		{
			fVar0 = (Local_2202[iVar7 /*6*/])->f_2;
			fVar1 = BUILTIN::TO_FLOAT((Local_2202[iVar7 /*6*/])->f_3);
			fVar2 = BUILTIN::TO_FLOAT((Local_2202[iVar7 /*6*/])->f_4);
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar5);
			fVar3 = BUILTIN::TO_FLOAT((Local_2202[iVar7 /*6*/])->f_5);
			fVar4 = fVar1;
		}
		func_532(&(Local_2395.f_13), fVar0, iVar6, Local_2395.f_971[iVar7], !func_153(iVar7), fVar1, fVar2, 0, fVar3, fVar4);
		iVar7++;
	}
	func_534(&(Local_2395.f_13));
}

void func_264()
{
	if (Local_2395.f_9 == -785841056)
	{
		return;
	}
	_NAMESPACE79::_0x1C38C3577901AF1F();
	func_547();
}

void func_265()
{
	if (!func_153(Local_2395.f_1332))
	{
		func_126(1, 1);
		return;
	}
	func_277();
	func_272(func_270(), func_271(), Local_2395.f_11, Local_2395.f_12, 30000);
}

void func_266()
{
	if (!func_548(2, -1))
	{
		return;
	}
	if ((func_354() != 4 && func_354() != 10) && func_354() != 0)
	{
		return;
	}
	func_549();
}

int func_267(int iParam0)
{
	if (iParam0 == 255)
	{
		return 0;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	StringCopy(&(Local_2395.f_1406), func_550(iParam0), 64);
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		Local_2395.f_1414 = joaat("COLOR_PURE_WHITE");
	}
	else
	{
		Local_2395.f_1414 = func_525(iParam0, 1, -1, 0);
	}
	return 1;
}

void func_268(var uParam0)
{
	uParam0->f_947 = 1;
}

void func_269(var uParam0)
{
	uParam0->f_948 = 1;
}

int func_270()
{
	return func_551();
}

int func_271()
{
	return 1081345;
}

void func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	Local_2395.f_11 = iParam2;
	Local_2395.f_12 = iParam3;
	iVar0 = 551037070;
	iVar1 = joaat("COLOR_PURE_WHITE");
	iVar2 = joaat("COLOR_RED");
	iVar3 = joaat("COLOR_PURE_WHITE");
	if (Local_2395.f_1387 == joaat("standard"))
	{
		iVar0 = joaat("COLOR_PURE_WHITE");
		iVar1 = joaat("COLOR_BLACK");
		iVar2 = joaat("COLOR_RED");
		iVar3 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_2395.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_2395.f_13.f_11.f_159), 16);
		}
	}
	else if (func_552())
	{
		iVar2 = 551037070;
		iVar3 = joaat("COLOR_BLACK");
		iVar0 = joaat("COLOR_WHITE");
		iVar1 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_2395.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_2395.f_13.f_11.f_159), 16);
		}
	}
	else if (func_553())
	{
		iVar2 = 551037070;
	}
	if (Local_2395.f_1 == 7)
	{
		iVar0 = joaat("COLOR_PURE_WHITE");
		iVar1 = joaat("COLOR_BLACK");
		iVar2 = joaat("COLOR_RED");
		iVar3 = joaat("COLOR_BLACK");
		if (!MISC::IS_BIT_SET(Local_2395.f_13.f_11.f_159, 16))
		{
			MISC::SET_BIT(&(Local_2395.f_13.f_11.f_159), 16);
		}
	}
	else if (Local_2395.f_1 == 6 || Local_2395.f_1 == 5)
	{
		if ((func_309(&(Local_2395.f_13), 0) > 0f && (Local_2395.f_13.f_210[0 /*23*/])->f_14 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_2395.f_13.f_210[0 /*23*/])->f_14))
		{
			if (Local_2395.f_13.f_210[0 /*23*/])->f_14 == PLAYER::PLAYER_ID()
			{
				if ((((func_309(&(Local_2395.f_13), 1) > 0f && (Local_2395.f_13.f_210[1 /*23*/])->f_14 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_2395.f_13.f_210[1 /*23*/])->f_14)) && _NAMESPACE26::_0x81FB74C83C2ED69F((Local_2395.f_13.f_210[1 /*23*/])->f_14)) && !func_554((Local_2395.f_13.f_210[1 /*23*/])->f_14, 1))
				{
					iVar2 = 551037070;
				}
			}
			else if (_NAMESPACE26::_0x81FB74C83C2ED69F((Local_2395.f_13.f_210[0 /*23*/])->f_14) && !func_554((Local_2395.f_13.f_210[0 /*23*/])->f_14, 1))
			{
				iVar2 = 551037070;
			}
		}
	}
	uVar4 = 1;
	switch (Local_2395.f_1384)
	{
		case joaat("timer"):
			func_452(&(Local_2395.f_1005), iParam0, 0, iParam4, func_555());
			break;
		case 1310067901:
			func_556(&(Local_2395.f_1005), &(Local_2395.f_13), &uVar4, iParam1, 1);
			break;
		case joaat("leaderboard"):
			func_556(&(Local_2395.f_1005), &(Local_2395.f_13), &uVar4, iParam1 | 256, 1);
			break;
		case -2065086408:
			func_557(&(Local_2395.f_1005), &(Local_2395.f_13), &uVar4, iParam0, 0, iParam4, func_555(), iParam1 | 2048, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 1619021308:
			func_558(&(Local_2395.f_1005), &(Local_2395.f_13), &uVar4, iParam0, 0, iParam4, func_555(), iParam1, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 524681:
			func_559(&(Local_2395.f_1005), &(Local_2395.f_1020), iParam0, 0, iParam4, func_555(), Local_2395.f_1259, 0, 0, 0, 0);
			break;
		case -1828147615:
			func_560(&(Local_2395.f_1005), &(Local_2395.f_1020), &(Local_2395.f_13), &uVar4, iParam0, 0, iParam4, func_555(), 404851220, 0, iParam1, iVar0, iVar2, iVar1, iVar3, 1);
			break;
		case 227643027:
			func_561(&(Local_2395.f_1005), &(Local_2395.f_1020), &(Local_2395.f_13), iParam0, &uVar4, 0, iParam4, func_555(), 404851220, 0, 0, 1, 0, iParam1, 1, 551037070, joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"));
			break;
		case 1086838518:
			func_556(&(Local_2395.f_1005), &(Local_2395.f_13), &uVar4, iParam1, 1);
			func_559(&(Local_2395.f_1005), &(Local_2395.f_1020), iParam0, 0, iParam4, func_555(), Local_2395.f_1259, 0, 0, 0, 0);
			break;
	}
}

void func_273()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	bool bVar8;
	struct<5> Var9;
	vector3 vVar14;

	if (Local_2395.f_9 == -785841056)
	{
		return;
	}
	iVar0 = Local_2152.f_10;
	if (func_177(256))
	{
		iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		if (_NAMESPACE26::_0x0F99F6436528A089(iVar1))
		{
			iVar2 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar1);
			if (iVar2 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
				iVar0 = iVar2;
			}
		}
		else
		{
			iVar0 = PLAYER::PLAYER_ID();
		}
	}
	if (iVar0 == 255)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	if (iVar0 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar3 = PLAYER::GET_PLAYER_PED(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, false, false) };
			fVar7 = 0f;
			bVar8 = true;
			if (!func_562(&vVar4, &fVar7, &bVar8))
			{
				if (((func_36(&Var9, Local_2395.f_1) && func_44(&Var9)) && func_45(&Var9, Local_2395.f_2)) && func_563(&Var9))
				{
					func_143(Var9, 2060397848, &vVar4, 1);
					func_142(Var9, -185561597, &fVar7, 1);
				}
			}
			Local_2395.f_1402 = { vVar4 };
			Local_2395.f_1416 = PED::CLONE_PED(iVar3, 0f, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_2395.f_1416))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_2395.f_1416))
				{
					PED::RESURRECT_PED(Local_2395.f_1416);
				}
				else
				{
					ENTITY::_SET_ENTITY_HEALTH(Local_2395.f_1416, 100, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2395.f_1416, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_2395.f_1416, 0, 1);
				ENTITY::SET_ENTITY_COORDS(Local_2395.f_1416, vVar4, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Local_2395.f_1416, fVar7);
				if (bVar8)
				{
					ENTITY::_0x9587913B9E772D29(Local_2395.f_1416, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(Local_2395.f_1416, true);
				ENTITY::SET_ENTITY_COLLISION(Local_2395.f_1416, false, false);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_2395.f_1416, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_2395.f_1416, false);
				PED::CLEAR_PED_DECORATIONS(Local_2395.f_1416);
				PED::_0x2208438012482A1A(Local_2395.f_1416, true, true);
				if (func_564())
				{
					Local_2395.f_1415 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					if (CAM::DOES_CAM_EXIST(Local_2395.f_1415))
					{
						vVar14 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Local_2395.f_1416, true, false), ENTITY::GET_ENTITY_HEADING(Local_2395.f_1416), 0.3f, 2f, 0.3f) };
						CAM::SET_CAM_COORD(Local_2395.f_1415, vVar14);
						CAM::POINT_CAM_AT_ENTITY(Local_2395.f_1415, Local_2395.f_1416, 0.3f, 0f, 0.3f, true);
						CAM::SET_CAM_FOV(Local_2395.f_1415, 35f);
						ENTITY::SET_ENTITY_HEADING(Local_2395.f_1416, func_565(vVar4, vVar14, 1));
					}
				}
			}
		}
	}
}

void func_274()
{
	if (func_134(268435456))
	{
		return;
	}
	if (Local_2152.f_12 == 0)
	{
		func_566();
		if (Local_2395.f_9 == 1038512660)
		{
			if (func_177(256))
			{
				func_43(4096);
			}
			else
			{
				func_43(16384);
			}
		}
		else if (Local_2395.f_9 == -785841056)
		{
			if (func_134(32768))
			{
				func_43(4096);
			}
			else
			{
				func_43(16384);
			}
		}
		else if (Local_2152.f_10 == PLAYER::PLAYER_ID() || func_134(8192))
		{
			func_43(4096);
		}
		else
		{
			if ((Local_2202[Local_2395.f_1332 /*6*/])->f_2 <= 0f)
			{
				func_567((func_188(2) - 1));
			}
			func_43(16384);
		}
		if (func_134(4096) || func_134(8192))
		{
			func_568(Local_2395.f_1, Local_2395.f_3, Local_2395.f_1333);
		}
		else if (func_134(16384))
		{
			func_569(Local_2395.f_1, Local_2395.f_3, Local_2395.f_1333);
		}
		func_570();
	}
	if (Local_2152.f_12 == 4)
	{
		func_43(16384);
	}
	func_43(268435456);
}

void func_275()
{
}

void func_276()
{
	int iVar0;

	func_571();
	func_345();
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/]))))
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/])), false);
		}
		iVar0++;
	}
}

void func_277()
{
	if ((func_153(Local_2395.f_1332) && func_288(Local_2395.f_1384)) && Local_2152.f_12 == 0)
	{
		if (!func_18(Local_2395, 4096))
		{
			func_242(Local_2395, 4096);
		}
		if (!func_572())
		{
			func_242(Local_2395, 16384);
		}
	}
	else
	{
		if (func_18(Local_2395, 4096))
		{
			func_573(Local_2395, 4096);
		}
		if (func_18(Local_2395, 16384))
		{
			func_573(Local_2395, 16384);
		}
	}
}

bool func_278()
{
	return func_18(Local_2395, 4096);
}

int func_279()
{
	switch (Local_2395.f_1)
	{
		case 7:
		case 12:
		case 13:
		case 14:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_280()
{
	return 0;
}

void func_281()
{
	func_574(&(Local_2395.f_1020), 1, 0);
	func_575(&(Local_2395.f_13));
	func_248(&(Local_2395.f_1005), 1);
}

int func_282()
{
	struct<8> Var0;
	char cVar8[64];
	struct<8> Var16;
	char cVar24[64];
	bool bVar32;
	struct<8> Var33;
	char cVar41[64];

	if (func_62(255))
	{
		return 0;
	}
	_NAMESPACE71::_0xDD1232B332CBB9E7(11, 1, 0);
	if (func_576())
	{
		return 1;
	}
	Var0 = { func_513() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { Local_2395.f_1346 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			Var0 = { Local_2395.f_1338 };
		}
	}
	if (Local_2152.f_12 != 0)
	{
		StringCopy(&cVar8, func_577(), 64);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
		{
			if (Local_2395.f_9 == -785841056)
			{
				StringCopy(&cVar8, "FME_SHARD_OUTRO_TITLE_OVER_POSSE_VERSUS", 64);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_312()))
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
			{
				Local_2395.f_1287 = func_521(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_312(), func_578(), func_579());
			}
			else
			{
				Local_2395.f_1287 = func_521(&cVar8, func_312(), func_578(), func_579());
			}
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar8))
		{
			Local_2395.f_1287 = func_521(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_580(Local_2152.f_12), func_578(), func_579());
		}
		else
		{
			Local_2395.f_1287 = func_521(&cVar8, func_580(Local_2152.f_12), func_578(), func_579());
		}
	}
	else if (Local_2395.f_9 != -785841056)
	{
		Local_2395.f_1287 = func_581(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), func_578(), func_579());
	}
	else if (func_134(4096))
	{
		Var16 = { func_582() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var16))
		{
			StringCopy(&Var16, "FME_SHARD_OUTRO_TITLE_WINNER", 64);
		}
		StringCopy(&cVar24, func_583(), 64);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar24))
		{
			Local_2395.f_1287 = func_521(&Var16, func_310(func_309(&(Local_2395.f_13), 0)), func_578(), func_579());
		}
		else
		{
			Local_2395.f_1287 = func_520(&Var16, func_310(func_309(&(Local_2395.f_13), 0)), &cVar24, func_578(), func_579());
		}
	}
	else
	{
		bVar32 = false;
		Var33 = { func_584() };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var33))
		{
			if (!func_176(4096, Local_2395.f_1332) && Local_2395.f_1333 >= 0)
			{
				bVar32 = true;
			}
			else if (Local_2395.f_9 == -785841056)
			{
				StringCopy(&Var33, func_577(), 64);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var33))
				{
					StringCopy(&Var33, "FME_SHARD_OUTRO_TITLE_OVER_POSSE_VERSUS", 64);
				}
			}
			else
			{
				StringCopy(&Var33, "FME_SHARD_OUTRO_TITLE_OVER", 64);
			}
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_313(Local_2395.f_1406, Local_2395.f_1414, func_309(&(Local_2395.f_13), 0))))
		{
			if (bVar32)
			{
				Local_2395.f_1287 = func_581(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_585(Local_2395.f_1333)), func_578(), func_579());
			}
			else
			{
				Local_2395.f_1287 = func_581(&Var33, func_578(), func_579());
			}
		}
		else
		{
			StringCopy(&cVar41, func_583(), 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar41))
			{
				if (bVar32)
				{
					Local_2395.f_1287 = func_521(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_585(Local_2395.f_1333)), func_313(Local_2395.f_1406, Local_2395.f_1414, func_309(&(Local_2395.f_13), 0)), func_578(), func_579());
				}
				else
				{
					Local_2395.f_1287 = func_521(&Var33, func_313(Local_2395.f_1406, Local_2395.f_1414, func_309(&(Local_2395.f_13), 0)), func_578(), func_579());
				}
			}
			else if (bVar32)
			{
				Local_2395.f_1287 = func_520(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_PLACED", func_585(Local_2395.f_1333)), func_313(Local_2395.f_1406, Local_2395.f_1414, func_309(&(Local_2395.f_13), 0)), &cVar41, func_578(), func_579());
			}
			else
			{
				Local_2395.f_1287 = func_520(&Var33, func_313(Local_2395.f_1406, Local_2395.f_1414, func_309(&(Local_2395.f_13), 0)), &cVar41, func_578(), func_579());
			}
		}
	}
	return 1;
}

void func_283(var uParam0)
{
	if (uParam0->f_11 >= 0)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_11))
		{
			AUDIO::_0x3210BCB36AF7621B(uParam0->f_11);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_11);
		uParam0->f_11 = -1;
	}
}

int func_284()
{
	return 7000;
}

bool func_285()
{
	vector3 vVar0;
	bool bVar3;

	if (Local_2395.f_9 == -785841056)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_2395.f_1416))
	{
		return true;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_2395.f_1416, true, false) };
	if (func_68(vVar0))
	{
		return true;
	}
	if (func_62(255))
	{
		return false;
	}
	if (!STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x387AD749E3B69B70(vVar0, func_586(Local_2395.f_1415), 60f, 0);
		return false;
	}
	bVar3 = true;
	if (!STREAMING::_0x0909F71B5C070797())
	{
		bVar3 = false;
	}
	STREAMING::_0xA8432A14D4DC2101(vVar0);
	if (!STREAMING::_0xDA8B2EAF29E872E2(vVar0))
	{
		bVar3 = false;
	}
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
	if (!ENTITY::_0x6BFBDC46139C45AB(vVar0))
	{
		bVar3 = false;
	}
	if (!bVar3)
	{
		return false;
	}
	if (!func_587())
	{
		bVar3 = false;
	}
	return bVar3;
}

bool func_286(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_588(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
	}
	return iVar0 != 6;
}

void func_287()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if ((((!func_65(65536) && Local_2395.f_9 == -785841056) && func_278()) && func_523()) && func_464(Local_2395.f_1289))
	{
		bVar0 = false;
		if (func_271() & 1024 == 1024)
		{
			bVar0 = true;
		}
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 <= (Local_2395.f_1333 - 1))
		{
			iVar1 = (Local_2395.f_13.f_210[iVar2 /*23*/])->f_14;
			if (func_589(iVar1, bVar0, 0))
			{
				Local_2395.f_1289 = func_465("FME_HELP_SCORE_SURPASS");
				func_170(65536);
			}
			else
			{
				iVar2++;
			}
		}
	}
}

int func_288(int iParam0)
{
	switch (iParam0)
	{
		case joaat("timer"):
			return 0;
		default:
			break;
	}
	return 1;
}

int func_289()
{
	return 0;
}

bool func_290()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_291()
{
	int iVar0;

	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(7);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) <= 4);
}

bool func_292()
{
	return (func_590() && func_591());
}

void func_293()
{
	if (!UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_APPS();
}

void func_294(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

int func_295()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			iVar2 = PLAYER::_0xF49F14462F0AE27C(iVar1);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_VISIBLE(iVar2)) && func_592(iVar2, Local_2395.f_1402, 1) < 10f)
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, false);
				iVar0 = 0;
			}
		}
		iVar3++;
	}
	return iVar0;
}

Vector3 func_296(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_593(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

void func_297()
{
	return;
}

void func_298()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (iVar0 == PLAYER::PLAYER_ID())
			{
				NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(false);
			}
			else
			{
				NETWORK::SET_PLAYER_INVISIBLE_LOCALLY(iVar0, false);
			}
		}
		iVar1++;
	}
}

void func_299()
{
	if (!ANIMSCENE::_0x25557E324489393C(Local_2395.f_1337))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_2395.f_1416))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_2395.f_1337, ENTITY::GET_ENTITY_COORDS(Local_2395.f_1416, true, false), ENTITY::GET_ENTITY_ROTATION(Local_2395.f_1416, 2), 2);
	ANIMSCENE::START_ANIM_SCENE(Local_2395.f_1337);
}

int func_300()
{
	return 0;
}

int func_301()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 8))
	{
		case 0:
			return -1639456476 /* GXTEntry: "Shoot \'Em Up" */;
		case 1:
			return -2106738342 /* GXTEntry: "Spit" */;
		case 2:
			return 425751659 /* GXTEntry: "Thumbs Up" */;
		case 3:
			return -339257980 /* GXTEntry: "Wave" */;
		case 4:
			return -822629770 /* GXTEntry: "Nod Head" */;
		case 5:
			return -653113914 /* GXTEntry: "Shake Head" */;
		case 6:
			return 354512356 /* GXTEntry: "Damn You" */;
		case 7:
			return -166523388 /* GXTEntry: "What\'s The Smell?" */;
		default:
			break;
	}
	return 425751659 /* GXTEntry: "Thumbs Up" */;
}

int func_302(int iParam0)
{
	switch (iParam0)
	{
		case -1639456476: /* GXTEntry: "Shoot \'Em Up" */
			return 1500;
		case -2106738342: /* GXTEntry: "Spit" */
			return 1800;
		case 425751659: /* GXTEntry: "Thumbs Up" */
			return 1500;
		case -339257980: /* GXTEntry: "Wave" */
			return 1500;
		case -822629770: /* GXTEntry: "Nod Head" */
			return 1800;
		case -653113914: /* GXTEntry: "Shake Head" */
			return 1800;
		case 354512356: /* GXTEntry: "Damn You" */
			return 1400;
		case -166523388: /* GXTEntry: "What\'s The Smell?" */
			return 1800;
		default:
			break;
	}
	return 1500;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case -2106738342: /* GXTEntry: "Spit" */
		case -1639456476: /* GXTEntry: "Shoot \'Em Up" */
		case -402959: /* GXTEntry: "Hell Yeah" */
		case 486225122: /* GXTEntry: "Point" */
		case 1927505461: /* GXTEntry: "Blow Kiss" */
			return 1;
		case -339257980: /* GXTEntry: "Wave" */
		case 425751659: /* GXTEntry: "Thumbs Up" */
			return 3;
		case -822629770: /* GXTEntry: "Nod Head" */
		case -653113914: /* GXTEntry: "Shake Head" */
		case -110352861: /* GXTEntry: "I\'m Hit" */
		case 445839715: /* GXTEntry: "Yeehaw" */
		case 803206066: /* GXTEntry: "Point and Laugh" */
			return 0;
		case -166523388: /* GXTEntry: "What\'s The Smell?" */
		case -23808358:
		case 354512356: /* GXTEntry: "Damn You" */
		case 1533402397: /* GXTEntry: "Bring It On" */
			return 2;
		default:
			break;
	}
	return -1;
}

void func_304(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	if (!func_594(iParam1))
	{
		return;
	}
	TASK::_TASK_EMOTE(iParam0, uParam5, iParam2, iParam1, iParam3, iParam4, 0, 0);
}

char* func_305()
{
	return "";
}

struct<8> func_306()
{
	char cVar0[64];

	Local_2395.f_1414 = joaat("COLOR_PURE_WHITE");
	StringCopy(&cVar0, func_550(PLAYER::PLAYER_ID()), 64);
	return cVar0;
}

char* func_307()
{
	return MISC::_CREATE_VAR_STRING(2, "FME_RU_SHARD_OUTRO_PRIMARY_WON", (Local_2202[Local_2395.f_1332 /*6*/])->f_3);
}

char* func_308()
{
	return MISC::_CREATE_VAR_STRING(2, "FME_RU_SHARD_OUTRO_PRIMARY_LOST", (Local_368[Local_2395.f_1332 /*17*/])->f_14);
}

var func_309(var uParam0, int iParam1)
{
	return (uParam0->f_210[iParam1 /*23*/])->f_5;
}

char* func_310(char* sParam0)
{
	return MISC::_CREATE_VAR_STRING(6, "FME_SHARD_OUTRO_PRIMARY_WON", sParam0);
}

void func_311(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "transitionData");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_4, sParam1);
	}
	else
	{
		uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "gamerTag", sParam1);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_5))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_5, sParam2);
	}
	else
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "teamName", sParam2);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_12))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_12, iParam7);
	}
	else
	{
		uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_3, "teamNameColor", iParam7);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[0])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[0]), sParam3);
	}
	else
	{
		uParam0->f_6[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info0", sParam3);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[1])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[1]), sParam4);
	}
	else
	{
		uParam0->f_6[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info1", sParam4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[2])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[2]), sParam5);
	}
	else
	{
		uParam0->f_6[2] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info2", sParam5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_6[3])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam0->f_6[3]), sParam6);
	}
	else
	{
		uParam0->f_6[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3, "info3", sParam6);
	}
}

char* func_312()
{
	return "";
}

char* func_313(var uParam0, var uParam1, char[4] cParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, char[4] cParam9)
{
	return MISC::_CREATE_VAR_STRING(2, "FME_CE_SHARD_OUTRO_PRIMARY_FAILED");
}

void func_314(int iParam0)
{
}

int func_315()
{
	return 0;
}

int func_316(var uParam0)
{
	if (!UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(uParam0->f_15, 0))
	{
		return 1;
	}
	if (!UISTATEMACHINE::_0xF7C180F57F85D0B8(*uParam0))
	{
		func_222(uParam0);
		return 0;
	}
	UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(*uParam0, uParam0->f_2);
	MISC::SET_BIT(&(uParam0->f_15), 0);
	return 1;
}

int func_317()
{
	return 0;
}

int func_318()
{
	return joaat("leaderboard");
}

char* func_319(int iParam0)
{
	return MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(iParam0), 0);
}

bool func_320(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (((*Global_1949759)[iParam0 /*23*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3);
}

int func_321(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_595(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_596(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_322(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_320(iParam0))
	{
		return;
	}
	iVar0 = func_597(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949759)[iVar0 /*23*/])->f_3, sParam1);
}

bool func_323(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_320(iParam0))
	{
		return false;
	}
	iVar0 = func_597(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

void func_324(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_320(iParam0))
	{
		return;
	}
	iVar0 = func_597(iParam0);
	if (bParam1)
	{
		func_598(iParam0, 4);
		if (bParam3)
		{
			func_599(iVar0, 1);
		}
		func_600(iVar0, 1);
	}
	else
	{
		func_601(iParam0, 4);
		func_600(iVar0, 0);
	}
}

void func_325(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_320(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_597(*uParam0);
	if (((*Global_1949759)[iVar0 /*23*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_602(iVar0);
	*uParam0 = 0;
}

int func_326()
{
	func_571();
	if (func_495(512))
	{
		if (!func_498(385812466) && !func_498(-1201452352))
		{
			func_499(385812466, 1, 0, 0, 1, 0, 0, 0);
			func_499(-1201452352, 1, 0, 0, 1, 0, 0, 0);
		}
	}
	return 1;
}

void func_327()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		func_603(&(Local_0.f_67[iVar0 /*40*/]), iVar0);
		iVar0++;
	}
}

int func_328(bool bParam0)
{
	if (!func_154(joaat("freemode"), bParam0))
	{
		return 0;
	}
	return 1;
}

void func_329(int iParam0)
{
	func_423(&(Local_2395.f_1334), iParam0);
}

void func_330(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_604(&(Global_1132968->f_5525), bParam1);
		func_165(113);
	}
	else
	{
		func_166(113);
	}
}

void func_331(int iParam0)
{
	if (func_605(&Global_1903002, iParam0))
	{
		func_606(Global_1903002, iParam0);
	}
}

void func_332(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	func_607(iVar0, iParam0);
	func_608(iVar0, iParam0);
}

bool func_333()
{
	return func_609(256);
}

void func_334()
{
	if (func_609(256))
	{
		func_610(256);
	}
}

void func_335(int iParam0, int iParam1)
{
	func_423(&((Local_2202[iParam1 /*6*/])->f_1), iParam0);
}

int func_336(int iParam0)
{
	int iVar0;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (func_611(iVar0, 0, 1))
	{
		return 0;
	}
	if (func_612(iVar0, 32))
	{
		return 1;
	}
	return 0;
}

void func_337(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;

	if (func_333())
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (!func_612(PLAYER::PLAYER_ID(), 32))
		{
			func_613(32);
			if (iParam2 == 0)
			{
				sVar0 = MISC::_CREATE_VAR_STRING(2, "NG_PP_FF_ON");
				func_614(sVar0, -2, 0, 0, 0, 1);
			}
			if (iParam1 == 1)
			{
				func_615(iParam0, _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			}
		}
	}
	else if (func_612(PLAYER::PLAYER_ID(), 32))
	{
		func_616(32);
		if (iParam2 == 0)
		{
			sVar0 = MISC::_CREATE_VAR_STRING(2, "NG_PP_FF_OFF");
			func_614(sVar0, -2, 0, 0, 0, 1);
		}
		if (iParam1 == 1)
		{
			func_615(iParam0, _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		}
	}
}

void func_338()
{
	func_165(88);
}

void func_339(bool bParam0)
{
	if (bParam0)
	{
		func_166(48);
	}
	else
	{
		func_165(48);
	}
}

void func_340(bool bParam0)
{
	if (bParam0)
	{
		func_166(105);
		if (!Global_1275573->f_12)
		{
			func_617(16);
		}
	}
	else
	{
		func_165(105);
		if (!Global_1275573->f_12)
		{
			func_617(16);
		}
	}
}

void func_341(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

void func_342(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_618(Global_1939178, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_619(Global_1939178, 8388608);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

char* func_343()
{
	return "FMUI";
}

int func_344(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	bool bVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		bVar0 = true;
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&uParam4))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		WEAPON::_0xEC1F85DA51D3D6C4(PLAYER::PLAYER_PED_ID(), &uParam0, &uParam4);
		return 1;
	}
	return 0;
}

void func_345()
{
	if (!func_495(1))
	{
		func_620();
		func_621();
		func_622();
		func_497(1);
	}
}

void func_346()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_2395.f_1405))
	{
		func_623(Local_2395.f_1405);
	}
}

void func_347()
{
	if (func_286(Local_2395.f_1291))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_2395.f_1291, 0);
	}
}

void func_348()
{
	func_325(&(Local_2395.f_1296), 1, 1);
	func_325(&(Local_2395.f_1297), 1, 1);
}

void func_349()
{
	if (func_286(Local_2395.f_1289))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_2395.f_1289, 0);
	}
}

void func_350()
{
	if (func_286(Local_2395.f_1287))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_2395.f_1287, 0);
	}
}

void func_351()
{
	if (func_286(Local_2395.f_1288))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_2395.f_1288, 0);
	}
	Local_2395.f_1288 = 0;
	Local_2395.f_1266 = 0;
}

void func_352()
{
	if (func_286(Local_2395.f_1290))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_2395.f_1290, 0);
	}
}

void func_353()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_536(iVar0);
		iVar0++;
	}
}

int func_354()
{
	return Global_1099294->f_26.f_12;
}

void func_355(int iParam0)
{
	Global_1099294->f_26.f_12 = iParam0;
}

void func_356(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_355(iParam0);
	if (!func_624(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_625(128) && !func_626(18))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_627() == 4)
	{
		func_165(17);
	}
	func_171(1024);
}

bool func_357(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_628(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_358(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_628(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_359(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!func_73(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_358(Param0) && !func_357(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_629(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_628(Param0) == 3)
		{
			func_630(1, -1706799532);
		}
		else if (func_628(Param0) == 4)
		{
			func_630(0, -1706799532);
		}
	}
	if (func_628(Param0) == 3 || (func_628(Param0) == 1 && STATS::_0x01F4D242765C6B24(func_629(Param0))))
	{
		if (iParam3 != -1)
		{
			func_631(Param0, iParam3, iParam4);
		}
		else
		{
			func_631(Param0, 2, iParam4);
		}
	}
	func_632(Param0, 0);
	if (func_74(func_364(0), Param0))
	{
		func_342(1);
		func_633(0);
		func_634(0);
		func_635(1);
	}
	func_636(Param0);
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_637(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_360(int iParam0, struct<2> Param1)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	func_638(Param1, &Var0);
	func_639(0);
	func_640(1);
	if (func_641((Global_1185132->f_66[iParam0 /*20*/])->f_3) == -785841056)
	{
		SCRIPTS::_0x50B72A754EE64A71(784116709);
		STATS::_0xE5A680A5D8B1F687(0);
	}
	else
	{
		SCRIPTS::_0x50B72A754EE64A71(1638906956);
	}
}

void func_361(int iParam0)
{
	int iVar0;
	int iVar1;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		func_476(&(Global_1182289->f_3), 32);
		func_476(&(Global_1182289->f_4), 12);
		Global_1182289->f_496 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_476(&(Global_1182289->f_4), 2);
		}
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1182289->f_5[5] = 0;
		func_476(Global_1182289->f_5[5], 1);
	}
	Global_1182289->f_5[3] = 0;
	func_476(Global_1182289->f_5[3], 1);
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		func_476(Global_1182289->f_5[3], 6);
		return;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar1))
	{
		func_476(Global_1182289->f_5[3], 6);
		return;
	}
	_NAMESPACE26::_0x0A04A07BC3074EDB(iParam0);
}

void func_362(int iParam0)
{
	func_146(&(Global_1070356->f_27136.f_19.f_1), iParam0);
}

void func_363(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_364(int iParam0)
{
	return *(Global_1900718->f_1[iParam0 /*2*/]);
}

int func_365(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -1494363065;
		case 2:
			return -514316475;
		case 3:
			return 1257949393;
		case 4:
			return -1967078622;
		case 5:
			return -1854780893;
		case 6:
			return 477974086;
		case 7:
			return 618068466;
		case 8:
			return 499656970;
		case 9:
			return 1791948823;
		case 10:
			return -1634863390;
		case 11:
			return -1296513906;
		case 12:
			return -1030655937;
		case 13:
			return -1783181138;
		case 14:
			return 1250422342;
		case 15:
			return -634665876;
		case 16:
			return -1679013564;
		case 17:
			return -706075066;
		case 18:
			return -1152882498;
		case 19:
			return 2108116481;
		case 20:
			return -86995487;
		case 21:
			return -1315007749;
		case 22:
			return 449057693;
		case 23:
			return 81846499;
		case 24:
			return 385589027;
		case 25:
			return 1951290581;
		case 26:
			return 1316486837;
		case 27:
			return 120448958;
		case 28:
			return 1345888212;
		case 29:
			return 396837320;
		case 30:
			return -1408563730;
		case 31:
			return -757633599;
		case 32:
			return -1034424695;
		case 33:
			return 1841970554;
		case 34:
			return -789758703;
		case 35:
			return -210274020;
		case 36:
			return 633501950;
		case 37:
			return -1215742816;
		case 38:
			return 1971904853;
		case 39:
			return -1935655667;
		case 40:
			return 1898201469;
		case 41:
			return 300196727;
		case 42:
			return 242857368;
		case 43:
			return -1648877470;
		case 44:
			return -545299531;
		case 45:
			return -1598949067;
		case 46:
			return 478308321;
		case 47:
			return 440583097;
		case 48:
			return -1258163578;
		case 49:
			return -1376314322;
		case 50:
			return -1898294040;
		case 51:
			return -114666387;
		case 52:
			return 334700325;
		case 53:
			return -1399051227;
		case 54:
			return 1571096148;
		case 55:
			return 457103096;
		case 56:
			return -1930919582;
		case 57:
			return -985005225;
		case 58:
			return -1393798041;
		case 59:
			return 905156700;
		case 60:
			return 151445061;
		case 61:
			return -1983943039;
		case 62:
			return -1575244427;
		case 63:
			return -1930399868;
		case 64:
			return 353568324;
		case 65:
			return -469672732;
		case 66:
			return 1717813521;
		case 67:
			return 941437279;
		case 68:
			return -162385832;
		case 69:
			return -892848695;
		case 70:
			return -355092128;
		case 71:
			return 946732137;
		case 72:
			return -79139194;
		case 73:
			return 1382158532;
		case 74:
			return -379874384;
		case 75:
			return 2018657739;
		case 76:
			return 1427070667;
		case 77:
			return -682435976;
		case 78:
			return 1232224440;
		case 79:
			return 1889309476;
		case 80:
			return 1918774327;
		case 81:
			return -32613857;
		case 82:
			return 5611246;
		case 83:
			return 2078792148;
		case 84:
			return 630308764;
		case 85:
			return 1398164246;
		case 86:
			return 2002140369;
		case 87:
			return -1777144780;
		case 88:
			return -1098645728;
		case 89:
			return 640330073;
		case 90:
			return -1330378740;
		case 91:
			return -71551190;
		case 92:
			return 1248971179;
		case 93:
			return -2076515520;
		case 94:
			return 1872332830;
		case 95:
			return -326224139;
		case 96:
			return -2062348046;
		case 97:
			return -1924130593;
		case 98:
			return -479797100;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_366(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (&Global_1132968->f_4641.f_2[func_367(iParam0, 1) /*4*/] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_642(iParam0);
	}
	Global_1132968->f_4641.f_2[func_367(iParam0, 1) /*4*/] = bParam1;
}

int func_367(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2076515520:
			return 93;
		case -2062348046:
			return 96;
		case -1983943039:
			return 61;
		case -1967078622:
			return 4;
		case -1935655667:
			return 39;
		case -1930919582:
			return 56;
		case -1930399868:
			return 63;
		case -1924130593:
			return 97;
		case -1898294040:
			return 50;
		case -1854780893:
			return 5;
		case -1783181138:
			return 13;
		case -1777144780:
			return 87;
		case -1679013564:
			return 16;
		case -1648877470:
			return 43;
		case -1634863390:
			return 10;
		case -1598949067:
			return 45;
		case -1575244427:
			return 62;
		case -1494363065:
			return 1;
		case -1408563730:
			return 30;
		case -1399051227:
			return 53;
		case -1393798041:
			return 58;
		case -1376314322:
			return 49;
		case -1330378740:
			return 90;
		case -1315007749:
			return 21;
		case -1296513906:
			return 11;
		case -1258163578:
			return 48;
		case -1215742816:
			return 37;
		case -1152882498:
			return 18;
		case -1098645728:
			return 88;
		case -1034424695:
			return 32;
		case -1030655937:
			return 12;
		case -985005225:
			return 57;
		case -892848695:
			return 69;
		case -789758703:
			return 34;
		case -757633599:
			return 31;
		case -706075066:
			return 17;
		case -682435976:
			return 77;
		case -634665876:
			return 15;
		case -545299531:
			return 44;
		case -514316475:
			return 2;
		case -479797100:
			return 98;
		case -469672732:
			return 65;
		case -379874384:
			return 74;
		case -355092128:
			return 70;
		case -326224139:
			return 95;
		case -210274020:
			return 35;
		case -162385832:
			return 68;
		case -114666387:
			return 51;
		case -86995487:
			return 20;
		case -79139194:
			return 72;
		case -71551190:
			return 91;
		case -32613857:
			return 81;
		case -1:
			return 0;
		case 5611246:
			return 82;
		case 81846499:
			return 23;
		case 120448958:
			return 27;
		case 151445061:
			return 60;
		case 242857368:
			return 42;
		case 300196727:
			return 41;
		case 334700325:
			return 52;
		case 353568324:
			return 64;
		case 385589027:
			return 24;
		case 396837320:
			return 29;
		case 440583097:
			return 47;
		case 449057693:
			return 22;
		case 457103096:
			return 55;
		case 477974086:
			return 6;
		case 478308321:
			return 46;
		case 499656970:
			return 8;
		case 618068466:
			return 7;
		case 630308764:
			return 84;
		case 633501950:
			return 36;
		case 640330073:
			return 89;
		case 905156700:
			return 59;
		case 941437279:
			return 67;
		case 946732137:
			return 71;
		case 1232224440:
			return 78;
		case 1248971179:
			return 92;
		case 1250422342:
			return 14;
		case 1257949393:
			return 3;
		case 1316486837:
			return 26;
		case 1345888212:
			return 28;
		case 1382158532:
			return 73;
		case 1398164246:
			return 85;
		case 1427070667:
			return 76;
		case 1571096148:
			return 54;
		case 1717813521:
			return 66;
		case 1791948823:
			return 9;
		case 1841970554:
			return 33;
		case 1872332830:
			return 94;
		case 1889309476:
			return 79;
		case 1898201469:
			return 40;
		case 1918774327:
			return 80;
		case 1951290581:
			return 25;
		case 1971904853:
			return 38;
		case 2002140369:
			return 86;
		case 2018657739:
			return 75;
		case 2078792148:
			return 83;
		case 2108116481:
			return 19;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_368()
{
	if (func_292())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			if (func_643())
			{
				func_644();
				func_645();
				func_646();
			}
			else if (func_647(Global_34, 0, 0, 0) == joaat("weapon_fishingrod"))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				WEAPON::_0x94A3C1B804D291EC(Global_34, 0, 0, 0, 0);
			}
			return 0;
		}
	}
	return 1;
}

int func_369(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_370(var uParam0, bool bParam1)
{
	if (bParam1 || !func_371(uParam0))
	{
		func_648(uParam0);
	}
}

bool func_371(var uParam0)
{
	return func_373(*uParam0, 1);
}

float func_372(var uParam0)
{
	if (!func_371(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_649(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_650() - uParam0->f_1);
}

bool func_373(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_374(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = uParam1;
	uParam0->f_1 = uParam2;
}

void func_375(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
}

void func_376(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_4 = uParam1;
	uParam0->f_5 = uParam2;
}

void func_377(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_6 = uParam1;
	uParam0->f_7 = uParam2;
}

void func_378(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_8 = uParam1;
	uParam0->f_9 = uParam2;
}

void func_379(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_10 = uParam1;
	uParam0->f_11 = uParam2;
}

void func_380(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	uParam0->f_3 = 1;
}

bool func_381(int iParam0)
{
	return func_386(&(Global_1954472->f_1465), iParam0, 1);
}

void func_382(var uParam0, struct<2> Param1, bool bParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<2> Var5;

	func_651(uParam0, 84);
	if (!func_652(uParam0) && !bParam3)
	{
		return;
	}
	if (!func_73(Param1))
	{
		return;
	}
	iVar0 = Param1;
	if ((iVar0 != 7 && iVar0 != 2) && iVar0 != 6)
	{
		return;
	}
	if ((((((((((((((((SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("FM_Mission_Controller")) <= 0 && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("FM_Race_Controller")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("FM_Deathmatch_Controller")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("mp_intro")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_archery")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_challenges")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_condor_egg")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_dead_drop")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_escaped_convicts")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_golden_hat")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_hot_property")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_king_of_the_castle")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_king_of_the_rails")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_round_up")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_supply_train")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_treasure_hunt")) <= 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("fme_wreckage")) <= 0)
	{
		return;
	}
	if (Global_1132968->f_5525)
	{
		func_604(&(Global_1132968->f_5525), 1);
	}
	func_653(&(Global_1132968->f_5525));
	func_654(uParam0);
	func_655();
	func_656(0);
	Global_1132968->f_5525 = { *uParam0 };
	Global_1132968->f_5525.f_13 = { Param1 };
	Global_1132968->f_5525 = 1;
	if (INVENTORY::_0xB881CA836CC4B6D4(Global_17172.f_54.f_61[0 /*4*/]))
	{
		Var1 = { func_657(0, 1, 0, -1) };
	}
	func_661(&(Global_1132968->f_5525), func_658(&Var1, 0), func_659(&Var1, 0), -882137232, func_660(&Var1, 0));
	if (uParam0->f_10)
	{
		if (func_154(uParam0->f_54, uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_662();
		}
	}
	if (bParam3)
	{
		if (func_663(0) != 3)
		{
			func_664(1, uParam0->f_57);
		}
	}
	if (uParam0->f_1 && !uParam0->f_16.f_2)
	{
		Var5.f_1 = 0;
		if (uParam0->f_9)
		{
			Global_1132968->f_5525.f_51 = { uParam0->f_51 };
			Var5.f_1 = uParam0->f_51.f_1;
		}
		Var5 = uParam0->f_16.f_1;
		func_665(&Var5);
		if (!func_164(111, 255))
		{
			func_666();
		}
	}
	if (uParam0->f_3)
	{
		func_667(uParam0);
		func_668();
		func_669(0);
	}
	if (uParam0->f_6)
	{
		func_669(3);
	}
	if (uParam0->f_4)
	{
		func_669(1);
		func_670(uParam0->f_25, uParam0->f_25.f_1, uParam0->f_25.f_2);
		func_671(uParam0->f_25.f_3, 1);
		func_672(uParam0->f_25.f_4, 1);
		func_673(uParam0->f_25.f_5, 1);
	}
	else if (bParam3)
	{
		func_674();
	}
	if (uParam0->f_5)
	{
		func_669(2);
		func_675(0, uParam0->f_25.f_6, 1);
		func_675(2, uParam0->f_25.f_7, 1);
		func_675(1, uParam0->f_25.f_8, 1);
	}
	if (uParam0->f_7)
	{
		func_669(4);
	}
	if (uParam0->f_12)
	{
		func_669(5);
		func_676(&(uParam0->f_34[0 /*3*/]), (uParam0->f_34[0 /*3*/])->f_1, 0);
		func_676(&(uParam0->f_34[1 /*3*/]), (uParam0->f_34[1 /*3*/])->f_1, 1);
		func_676(&(uParam0->f_34[2 /*3*/]), (uParam0->f_34[2 /*3*/])->f_1, 2);
		func_676(&(uParam0->f_34[3 /*3*/]), (uParam0->f_34[3 /*3*/])->f_1, 3);
		func_677();
	}
	if (uParam0->f_8)
	{
		func_669(6);
		func_678(Global_1954472->f_1465.f_117);
	}
	else if (uParam0->f_4)
	{
		func_678(Global_1954472->f_1449);
	}
	else if (bParam3)
	{
		func_678(Global_1954472->f_1449);
	}
}

int func_383(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (func_679(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_663(bParam1), iParam0, iParam3);
}

int func_384(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_681(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_682(iParam0, iParam1, iParam2);
	}
	Var1 = { func_683(iParam0, 0, 1) };
	Var6 = { func_684(iParam0, Var1, Var1.f_4, 0) };
	return func_685(iParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

void func_385()
{
	func_166(115);
}

bool func_386(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_387()
{
	return Global_1099294->f_339;
}

bool func_388(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::CLEAR_BIT((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_389(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
	MISC::SET_BIT((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

int func_390(var uParam0)
{
	if (func_686(uParam0))
	{
		uParam0->f_2 = -1565098061;
		uParam0->f_3 = Local_2395.f_3;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return 0;
}

int func_391(var uParam0)
{
	if (func_686(uParam0))
	{
		uParam0->f_2 = 1402798501;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return 0;
}

void func_392(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	func_393(iParam0, 0);
	if (!func_687(iParam0) && !bParam2)
	{
		return;
	}
	if (iParam1 == func_688(iParam0))
	{
		return;
	}
	if (iParam0 <= -1 || iParam0 >= 7)
	{
		return;
	}
	if (iParam1 <= -1 || iParam1 >= 6)
	{
		return;
	}
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_2010.f_36, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 5;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 4:
			iVar0 = 7;
			break;
		case 5:
			iVar0 = 2;
			break;
	}
	func_689(&(Local_2395.f_1020), iVar0, iParam0);
}

void func_393(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 <= -1 || iParam0 >= 7)
	{
		return;
	}
	iVar0 = (Local_2395.f_1020[iParam0 /*34*/])->f_25;
	iVar1 = (Local_2395.f_1020[iParam0 /*34*/])->f_26;
	if (!func_687(iParam0) && !bParam1)
	{
		return;
	}
	iVar2 = 0;
	iVar3 = 0;
	if (func_690(iParam0) || bParam1)
	{
		iVar2 = joaat("blips");
		iVar3 = -907204276; /* GXTEntry: "Bounty Hunting" */
	}
	else
	{
		iVar2 = 672378911;
		iVar3 = -1998058959;
	}
	if (iVar0 == iVar2 && iVar1 == iVar3)
	{
		return;
	}
	func_691(&(Local_2395.f_1020), iVar2, iParam0);
	func_692(&(Local_2395.f_1020), iVar3, iParam0);
}

bool func_394(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) == iParam0;
}

bool func_395(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) != 0;
}

bool func_396()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6;
	int iVar7;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_366))
	{
		bVar0 = true;
	}
	iVar1 = Local_2395.f_2;
	if (iVar1 != -1573288601)
	{
		return true;
	}
	if (!bVar0)
	{
		iVar2 = -1772561076;
		vVar3 = { func_693() };
		uVar6 = func_694();
		if (func_695(iVar2))
		{
			if (func_696(&(Local_0.f_366), iVar2, vVar3, uVar6, 1, 0, 0, 0))
			{
				iVar7 = NETWORK::NET_TO_VEH(Local_0.f_366);
				VEHICLE::_0x63DC1F22C903B709(iVar7, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar7, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(NETWORK::NET_TO_ENT(Local_0.f_366), false);
				func_697(&iVar7, 1);
				bVar0 = true;
			}
		}
	}
	return bVar0;
}

bool func_397()
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	int iVar6;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_367))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		iVar1 = joaat("s_m_m_ambientlawrural_01");
		vVar2 = { func_698() };
		uVar5 = func_699();
		if (func_695(iVar1))
		{
			if (func_700(&(Local_0.f_367), iVar1, vVar2, uVar5, 1, 0, 1, 1, 1))
			{
				iVar6 = NETWORK::NET_TO_PED(Local_0.f_367);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar6, true);
				bVar0 = true;
			}
		}
	}
	return bVar0;
}

bool func_398(var uParam0)
{
	return func_373(*uParam0, 2);
}

int func_399(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_400(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_401(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_402(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_701(iVar0, 1, 1))
		{
			if (bParam1 && func_605((Local_368[iVar0 /*17*/])->f_13, 131072))
			{
			}
			else if (!func_605((Local_368[iVar0 /*17*/])->f_13, iParam0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_403(int iParam0)
{
	return func_605(Local_0.f_348, iParam0);
}

void func_404()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	var uVar15[3];
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<4> Var24;
	int iVar33[2];
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	var uVar47;
	var uVar48;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_403(256))
	{
		return;
	}
	iVar0 = 0;
	iVar1 = 15;
	if (iVar1 > func_702())
	{
		iVar1 = func_702();
		if (iVar1 < 1)
		{
		}
	}
	if (!func_403(512))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (func_703(&Local_368, iVar0))
			{
				func_704(iVar0);
				Local_0.f_349++;
			}
			iVar0++;
		}
		func_407(512);
		return;
	}
	while (Local_0.f_349 < Local_913.f_1)
	{
		func_704(func_705(Local_0.f_349, iVar1));
		Local_0.f_349++;
		return;
	}
	Var2 = 3;
	Var2.f_1 = 3;
	Var2.f_1.f_4 = 3;
	Var2.f_1.f_4.f_4 = 3;
	iVar19 = -1;
	iVar20 = 0;
	while (iVar20 < Local_913.f_1)
	{
		iVar19 = -1;
		if (iVar20 < Local_913.f_2)
		{
			iVar19 = 0;
			(Local_0.f_67[iVar20 /*40*/])->f_6 = joaat("high");
			(Local_0.f_67[iVar20 /*40*/])->f_39 = MISC::GET_RANDOM_INT_IN_RANGE(5, 7);
		}
		else if (iVar20 < (Local_913.f_2 + Local_913.f_3))
		{
			iVar19 = 1;
			(Local_0.f_67[iVar20 /*40*/])->f_6 = joaat("low");
			(Local_0.f_67[iVar20 /*40*/])->f_39 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
		}
		else
		{
			iVar19 = 2;
			(Local_0.f_67[iVar20 /*40*/])->f_6 = 1866880973;
			(Local_0.f_67[iVar20 /*40*/])->f_39 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
		}
		iVar22 = &uVar15[iVar19];
		(*Var2[iVar19 /*4*/])[iVar22] = iVar20;
		uVar15[iVar19] = &uVar15[iVar19] + 1;
		iVar20++;
	}
	Var24 = 2;
	Var24.f_1 = 3;
	Var24.f_1.f_4 = 3;
	iVar23 = -1 + 1;
	while (iVar23 <= (3 - 1))
	{
		iVar19 = iVar23;
		iVar36 = -1 + 1;
		while (iVar36 <= (2 - 1))
		{
			iVar33[iVar36] = 0;
			iVar36++;
		}
		iVar21 = 0;
		while (iVar21 < 3)
		{
			iVar37 = iVar21;
			switch (iVar19)
			{
				case 0:
					break;
				case 1:
					iVar37 += 5;
					break;
				case 2:
					iVar37 += 10;
					break;
			}
			iVar38 = -1;
			if (func_706(iVar37))
			{
				iVar38 = 1;
			}
			else
			{
				iVar38 = 0;
			}
			iVar39 = &iVar33[iVar38];
			(*Var24[iVar38 /*4*/])[iVar39] = iVar37;
			iVar33[iVar38] = &iVar33[iVar38] + 1;
			iVar21++;
		}
		iVar40 = 0;
		while (iVar40 < &uVar15[iVar19])
		{
			iVar41 = Var2[iVar19 /*4*/][iVar40];
			iVar42 = &iVar33[1];
			iVar43 = &iVar33[0];
			iVar44 = -1;
			if (iVar42 > 0)
			{
				iVar44 = 1;
			}
			else if (iVar43 > 0)
			{
				iVar44 = 0;
			}
			iVar45 = &iVar33[iVar44];
			iVar46 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar45);
			uVar47 = Var24[iVar44 /*4*/][iVar46];
			iVar21 = iVar46;
			while (iVar21 <= (iVar45 - 1))
			{
				if (iVar21 < (iVar45 - 1))
				{
					uVar48 = Var24[iVar44 /*4*/][iVar21 + 1];
					(*Var24[iVar44 /*4*/])[iVar21] = uVar48;
				}
				else
				{
					(*Var24[iVar44 /*4*/])[iVar21] = 0;
				}
				iVar21++;
			}
			iVar33[iVar44] = (&iVar33[iVar44] - 1);
			Local_0.f_350[iVar41] = uVar47;
			iVar40++;
		}
		iVar23++;
	}
	func_407(256);
}

int func_405()
{
	if (!func_403(256))
	{
		return 0;
	}
	if (Local_0.f_360 >= Local_913.f_1)
	{
		return 1;
	}
	if (Local_0.f_360 >= 7)
	{
		return 1;
	}
	func_707();
	if (Local_0.f_360 >= Local_913.f_1 || Local_0.f_360 >= 7)
	{
	}
	return 0;
}

int func_406()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = 0;
	while (iVar0 < Local_913.f_2)
	{
		iVar1 = 0;
		while (iVar1 < (Local_0.f_67[iVar0 /*40*/])->f_39)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&((Local_0.f_67[iVar0 /*40*/])->f_20[iVar1 /*3*/])))
			{
			}
			else
			{
				Var2 = { func_708(&(Local_0.f_350[iVar0]), iVar1) };
				if (func_144(Var2, 0f, 0f, 0f))
				{
				}
				else
				{
					func_709(iVar0, iVar1, Var2);
					return 0;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = Local_913.f_2;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < (Local_913.f_2 + Local_913.f_3))
	{
		iVar1 = 0;
		while (iVar1 < (Local_0.f_67[iVar0 /*40*/])->f_39)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&((Local_0.f_67[iVar0 /*40*/])->f_20[iVar1 /*3*/])))
			{
			}
			else
			{
				Var2 = { func_708(&(Local_0.f_350[iVar0]), iVar1) };
				if (func_144(Var2, 0f, 0f, 0f))
				{
				}
				else
				{
					func_709(iVar0, iVar1, Var2);
					return 0;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

void func_407(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!func_605(Local_0.f_348, iParam0))
	{
		func_476(&(Local_0.f_348), iParam0);
	}
}

int func_408(int iParam0, int iParam1)
{
	Local_2395.f_1328[iParam0] = &Local_2395.f_1328[iParam0] + 1;
	if (&Local_2395.f_1328[iParam0] >= iParam1)
	{
		Local_2395.f_1328[iParam0] = 0;
		return 1;
	}
	return 0;
}

int func_409(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_2395.f_9 == -785841056)
	{
		iVar0 = Local_2395.f_6;
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
		{
			return 1;
		}
		iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			return 1;
		}
	}
	iVar2 = func_188(2);
	if (iVar2 < Local_2395.f_1274)
	{
		return 3;
	}
	if (iParam0 > 0 && iVar2 < iParam0)
	{
		return 3;
	}
	if (Local_2395.f_1273 > 1 && func_413(2) < Local_2395.f_1273)
	{
		return 2;
	}
	return 0;
}

void func_410(int iParam0)
{
	if (Local_2152.f_12 != iParam0)
	{
		Local_2152.f_12 = iParam0;
	}
}

void func_411()
{
}

void func_412()
{
}

int func_413(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar4);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && &Local_2202[iVar4 /*6*/] >= iParam0)
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar3);
				if (((!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1) || !_NAMESPACE26::_0x0F99F6436528A089(iVar1)) || _NAMESPACE26::_0x149A2751AB66AC02(iVar1) <= 1) || _NAMESPACE26::_0x424B17A7DC5C90BC(iVar3))
				{
					iVar0++;
				}
			}
		}
		iVar4++;
	}
	return iVar0;
}

void func_414(int iParam0)
{
	if (Local_2152.f_11 != iParam0)
	{
		Local_2152.f_11 = iParam0;
	}
}

int func_415(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
		if (((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && &Local_2202[iVar2 /*6*/] >= iParam0) && (Local_2202[iVar2 /*6*/])->f_4 >= 1) && (Local_2202[iVar2 /*6*/])->f_4 >= Local_2395.f_1420)
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

int func_416()
{
	if (func_403(8))
	{
		func_407(32);
		return 1;
	}
	return 0;
}

void func_417(int iParam0)
{
	int iVar0;

	if (func_403(8))
	{
		return;
	}
	if (!func_403(2))
	{
		return;
	}
	func_710(iParam0);
	func_711(iParam0);
	func_712(iParam0);
	if (Local_0.f_1 == 0 || Local_0.f_2 >= 7)
	{
		if (!func_403(8))
		{
			func_407(8);
		}
		return;
	}
	iVar0 = func_713(1, iParam0, 1);
	if (iVar0 != func_714())
	{
		(Local_0.f_67[iParam0 /*40*/])->f_2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
		func_715(1, iParam0);
	}
	else
	{
		func_716(1, iParam0);
	}
	if (Local_0.f_3 >= 7)
	{
		if (!func_403(4096))
		{
			func_407(4096);
		}
	}
	else if (func_403(4096))
	{
		func_717(4096);
	}
	func_718(&Local_0, iParam0);
}

void func_418(int iParam0)
{
	func_719(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])));
	func_720(Local_913.f_80[iParam0]);
}

void func_419(int iParam0)
{
	if (func_721(16, iParam0, 1))
	{
		func_722(-1, iParam0);
	}
}

void func_420(int iParam0)
{
	int iVar0;

	if (!func_153(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (func_723(262144, iParam0))
	{
		(Local_0.f_67[iParam0 /*40*/])->f_8 = 3;
	}
	else if (func_723(4, iParam0))
	{
		(Local_0.f_67[iParam0 /*40*/])->f_8 = 1;
	}
	else if (func_723(2, iParam0))
	{
		(Local_0.f_67[iParam0 /*40*/])->f_8 = 2;
	}
	else if (PED::_0x3AA24CCC0D451379(iVar0))
	{
		(Local_0.f_67[iParam0 /*40*/])->f_8 = 0;
	}
	else if (PED::GET_PED_CONFIG_FLAG(iVar0, 11, false))
	{
		(Local_0.f_67[iParam0 /*40*/])->f_8 = 4;
	}
	else
	{
		(Local_0.f_67[iParam0 /*40*/])->f_8 = -1;
	}
}

void func_421(var uParam0)
{
	if (Local_0.f_2 >= 7)
	{
		*uParam0 = 1;
	}
}

void func_422()
{
	if (func_724(&(Local_2395.f_13)) > 0f)
	{
		func_725((Local_2395.f_13.f_210[0 /*23*/])->f_14);
	}
}

void func_423(var uParam0, int iParam1)
{
	func_726(uParam0, iParam1);
}

int func_424()
{
	return 0;
}

bool func_425(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

bool func_426(struct<2> Param0, bool bParam2)
{
	int iVar0;

	iVar0 = func_628(Param0);
	return (iVar0 == 5 || (iVar0 == 6 && bParam2));
}

bool func_427(struct<2> Param0)
{
	return func_628(Param0) == 7;
}

void func_428(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_1))
	{
		return;
	}
	if (!&Global_1102099->f_34.f_353[iParam0 /*6*/])
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_1))
	{
		func_727(iParam0);
		return;
	}
	if ((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_5 != -1)
	{
		if ((Global_1275573->f_21 - (Global_1102099->f_34.f_353[iParam0 /*6*/])->f_4) > (Global_1102099->f_34.f_353[iParam0 /*6*/])->f_5)
		{
			func_727(iParam0);
		}
		return;
	}
	if (func_358((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_2))
	{
		return;
	}
	if (!func_73((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_2))
	{
		func_727(iParam0);
		return;
	}
	if (!func_358((Global_1102099->f_34.f_353[iParam0 /*6*/])->f_2))
	{
		func_727(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Global_1102099->f_34.f_546[iParam0 /*7*/]) != (Global_1102099->f_34.f_353[iParam0 /*6*/])->f_1)
	{
		func_727(iParam0);
		return;
	}
}

struct<7> func_429(int iParam0)
{
	struct<7> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

void func_430(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (&Global_1102099->f_34.f_353[iParam0 /*6*/])
	{
		func_428(iParam0);
	}
	if (!(Global_1102099->f_34[iParam0 /*11*/])->f_6)
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		func_728(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_728(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Global_1102099->f_34.f_546[iParam0 /*7*/]) != iVar0)
	{
		func_728(iParam0);
		return;
	}
	if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar0))
	{
		func_729(iVar0, 0);
		return;
	}
	if (func_730(iParam0))
	{
		func_729(iVar0, 0);
		return;
	}
	if (((*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97)
	{
		func_729(iVar0, 0);
		return;
	}
	if (NETWORK::GET_TIME_DIFFERENCE((Global_1102099->f_34[iParam0 /*11*/])->f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 600000)
	{
		func_729(iVar0, 0);
		return;
	}
}

void func_431(int iParam0)
{
	struct<10> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 10))
	{
		return;
	}
	if (Var0.f_4 != Local_2395)
	{
		return;
	}
	switch (Var0.f_5)
	{
		case 1:
			func_731(Var0.f_6, Var0.f_9);
			break;
	}
}

void func_432(int iParam0)
{
	struct<5> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		return;
	}
	if (Var0.f_1 == PLAYER::PLAYER_ID())
	{
		switch (Var0.f_4)
		{
			case 5:
				if (Local_2395.f_9 != -785841056)
				{
					func_732();
				}
				break;
		}
	}
}

int func_433(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_434(var uParam0, var uParam1)
{
	if (((*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1) && uParam0->f_2 == uParam1->f_2) && uParam0->f_3 == uParam1->f_3)
	{
		return 1;
	}
	return 0;
}

void func_435(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_436(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

void func_437()
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::_0xB16223CB7DA965F0(iVar0))
	{
		PLAYER::_0xAE637BB8EF017875(iVar0, 1);
	}
	if (PLAYER::_0x45AB66D02B601FA7(iVar0))
	{
		PLAYER::_0x64FF4BF9AF59E139(iVar0, 1);
	}
	if (Local_2395.f_9 != -785841056)
	{
		if (func_478())
		{
			func_733();
		}
		if (func_734())
		{
			func_735();
		}
		if (UIAPPS::_IS_APP_RUNNING(joaat("abilities")) || UIAPPS::_IS_APP_ACTIVE(joaat("abilities")))
		{
			UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(joaat("abilities"));
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::SET_FRONTEND_ACTIVE(false);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34)) && PED::_0xB655DB7582AEC805(Global_34))
		{
			func_491(Global_34, 0, 0);
		}
	}
	func_241();
	func_106();
	func_108();
	func_126(0, 1);
	func_127(1);
	func_264();
	func_242(Local_2395, 4);
}

void func_438()
{
	AUDIO::TRIGGER_MUSIC_EVENT("MP_OWC_END");
}

int func_439()
{
	func_695(func_736());
	if (!STREAMING::HAS_MODEL_LOADED(func_736()))
	{
		return 0;
	}
	return 1;
}

void func_440()
{
	int iVar0;
	int iVar1;

	if (Local_2395.f_9 != -785841056)
	{
		return;
	}
	if (&Local_2202[Local_2395.f_1332 /*6*/] != 1)
	{
		func_346();
		return;
	}
	if ((_NAMESPACE26::_0xD6F6ACF4392187FB(Local_2395.f_6) && _NAMESPACE26::_0x9BE7DCB22D32CCBE(Local_2395.f_6, PLAYER::PLAYER_ID())) && !func_737())
	{
		if (func_738(Local_2395, Local_2395.f_7, Local_2395.f_3))
		{
			func_739(1);
			func_346();
		}
		return;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0) || (_NAMESPACE26::_0x149A2751AB66AC02(iVar0) == 1 && !func_740()))
	{
		return;
	}
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (((!func_65(1) && func_741(Local_2395)) && !func_742()) && func_464(Local_2395.f_1289))
		{
			Local_2395.f_1405 = func_743(Local_2395, Local_2395.f_1, Local_2395.f_3, Local_2395.f_7);
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Local_2395.f_1405))
			{
				if (func_744())
				{
					Local_2395.f_1289 = func_465("FME_HELP_RULES_POSSE_VERSUS");
				}
				func_745(Local_2395, Local_2395.f_7);
				func_170(1);
			}
		}
	}
	else
	{
		iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
		if (((iVar1 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)) && func_746(Local_2395, 64, iVar1)) && func_738(Local_2395, Local_2395.f_7, Local_2395.f_3))
		{
			if (func_747(0))
			{
				func_749(func_748(), 0);
			}
			func_739(1);
			func_346();
		}
	}
}

void func_441()
{
	float fVar0;

	if (!func_153(Local_2395.f_1332))
	{
		return;
	}
	if (!func_68(Local_2395.f_1396))
	{
		if (!ENTITY::_0x6BFBDC46139C45AB(Local_2395.f_1396))
		{
			STREAMING::REQUEST_COLLISION_AT_COORD(Local_2395.f_1396);
		}
		fVar0 = Local_2395.f_1294;
		if (fVar0 > 512f)
		{
			fVar0 = (512f - 1f);
		}
		PATHFIND::_0xCF213A5FC3ABFC08(Local_2395.f_1396, Local_2395.f_1396.f_1, fVar0);
	}
}

void func_442()
{
	if (func_153(Local_2395.f_1332) && (Local_2395.f_1387 == -1477057661 || !func_750()))
	{
		func_751();
	}
	else
	{
		func_109();
	}
}

void func_443()
{
	if (func_153(Local_2395.f_1332))
	{
		func_752();
	}
	else
	{
		func_110();
	}
}

void func_444()
{
	var uVar0;
	var uVar30;
	vector3 vVar39;
	float fVar42;
	var uVar43;
	var uVar44;
	vector3 vVar45;
	var uVar48;
	int iVar49;

	if (!func_153(Local_2395.f_1332) || !func_753(Local_2395))
	{
		func_108();
		return;
	}
	else
	{
		func_754();
	}
	if ((func_134(1) && func_755(255)) && func_756(255))
	{
		vVar39 = { Local_2395.f_1396 };
		if (func_68(vVar39))
		{
			vVar39 = { Global_35 };
		}
		if (Local_2395.f_10 < 4)
		{
			func_470(&vVar45, &uVar48, &iVar49);
			if ((func_134(1073741824 /* Float: 2f */) && !func_68(vVar45)) && !iVar49 == -1)
			{
				if ((!func_134(134217728) && !func_471(Local_2395.f_1, Local_2395.f_3)) && func_472(Local_2395.f_1, Local_2395.f_3))
				{
					func_473(1, 0);
				}
				func_757(vVar45, uVar48, 0f, 0f, 0f, 0);
				return;
			}
			else
			{
				fVar42 = Local_2395.f_1293;
				func_758(&uVar43, &uVar44, fVar42);
			}
		}
		else
		{
			fVar42 = Local_2395.f_1294;
			func_759(Local_2395.f_1, Local_2395.f_2, &uVar43, &uVar44, fVar42);
		}
		fVar42 = (fVar42 - 20f);
		if (func_760())
		{
			return;
		}
		func_761(Local_2395.f_1, Local_2395.f_3, vVar39, uVar43, uVar44, fVar42, &uVar0, &uVar30);
		func_762(fVar42, &uVar0, &uVar30);
		func_763(&uVar0, &(Local_2395.f_1392), &(Local_2395.f_1393));
		func_764(&uVar0, &uVar30);
	}
}

void func_445()
{
	switch (Local_2395.f_1387)
	{
		case joaat("standard"):
		case -669315698:
			func_765(0);
			break;
		case -1477057661:
		case -1323241207:
			func_766();
			func_765(1);
			break;
		case -1130541276:
		case 1839318411:
			func_767(1);
			break;
		case 142723591:
		case 1229355466:
			func_768();
			break;
		case -1893775542:
		case -1869754940:
			func_769();
			break;
	}
}

void func_446()
{
}

void func_447()
{
	int iVar0;

	iVar0 = func_173();
	POPULATION::_0xF45E46DEECF7DF6E(iVar0, 0, 0, -1, -1);
	if (iVar0 & 2016 == 2016)
	{
		PED::_0xC0258742B034DFAF(0f);
		PED::_0xDB48E99F8E064E56(0f);
	}
	if (iVar0 & 8192 == 8192)
	{
		PED::_0xBA0980B5C0A11924(0f);
		PED::_0x28CB6391ACEDD9DB(0f);
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

void func_448()
{
	if (!func_153(Local_2395.f_1332))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		WEAPON::_0x78030C7867D8B9B6(Global_34, 0);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Global_34, false);
	}
}

void func_449()
{
	if (!func_153(Local_2395.f_1332))
	{
		return;
	}
	if (Local_2395.f_1390 < 0)
	{
		Local_2395.f_1390 = 0;
		func_770(20f);
		return;
	}
	func_771(Local_2395.f_1390, 10f);
	Local_2395.f_1390++;
	if (Local_2395.f_1390 >= 32)
	{
		Local_2395.f_1390 = 0;
	}
}

void func_450()
{
}

int func_451()
{
	return 1;
}

void func_452(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	bool bVar0;

	if ((func_772(uParam0, &bVar0) && func_773(uParam0)) && func_774(uParam0, -1700692449, &bVar0))
	{
		func_775(uParam0, iParam1, bParam2, iParam3, sParam4);
	}
	if (bVar0)
	{
		func_248(uParam0, 1);
	}
}

void func_453(var uParam0)
{
	if (uParam0->f_5 < 0)
	{
		uParam0->f_5 = AUDIO::GET_SOUND_ID();
		AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_5, func_776(), func_777(), 1);
	}
}

int func_454(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (Local_2395.f_1288 == 0 || !func_286(Local_2395.f_1288))
	{
		func_351();
	}
	if (iParam0 >= 5 && (func_286(Local_2395.f_1287) && !bParam3))
	{
		func_351();
		return 0;
	}
	if (Local_2395.f_1266 == 5 && iParam0 >= 5)
	{
		return 0;
	}
	if (Local_2395.f_1266 != iParam0 || iParam0 == 1)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			func_351();
		}
		else
		{
			Local_2395.f_1288 = func_778(sParam1, iParam2, 0, 0, 1);
		}
		Local_2395.f_1266 = iParam0;
		return 1;
	}
	return 0;
}

bool func_455(int iParam0)
{
	return !func_62(iParam0);
}

float func_456(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_457(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
			return 0;
		default:
			break;
	}
	return 1;
}

char* func_458()
{
	return "";
}

char* func_459()
{
	return "";
}

void func_460(var uParam0)
{
	*uParam0 = MAP::_0x45F13B7E0A15C880(-47499173, Local_2395.f_1399, Local_2395.f_1293);
	MAP::_0x662D364ABF16DE2F(*uParam0, 453264060);
	MAP::SET_BLIP_SPRITE(*uParam0, -570710357, true);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, &(Local_2395.f_1338));
}

struct<2> func_461(int iParam0)
{
	struct<2> Var0;

	Var0.f_1 = iParam0;
	return Var0;
}

int func_462()
{
	return 2147483647;
}

int func_463()
{
	return 0;
}

int func_464(int iParam0)
{
	if (func_290())
	{
		return 0;
	}
	else if (func_286(iParam0))
	{
		return 0;
	}
	else if (func_286(Local_2395.f_1287))
	{
		return 0;
	}
	else if (func_62(255))
	{
		return 0;
	}
	else if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	return 1;
}

int func_465(char* sParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return 0;
	}
	return func_779(sParam0, 10000, 0, 0, 0, 1);
}

struct<8> func_466(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_140(&Var8))
	{
		func_141(Var8, 1777884256, &Var0, 0);
	}
	return Var0;
}

struct<8> func_467(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_140(&Var8))
	{
		func_141(Var8, -1996633489, &Var0, 0);
	}
	return Var0;
}

char* func_468()
{
	return "";
}

void func_469(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (func_780())
	{
		if (func_781(255))
		{
			if (!func_164(38, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_782(Global_1893575->f_2) && func_783(Global_1893575->f_2))
		{
			func_784(Global_1893575->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1893575->f_7 = iParam1;
				func_785(16);
			}
		}
		else if (func_782(Global_1893575->f_2) && !func_786(Global_1893575->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1893575->f_7 = 0;
		func_787(16);
		func_788(bParam2);
		if (bVar0)
		{
			func_787(1);
		}
	}
}

void func_470(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = { 0f, 0f, 0f };
	*uParam1 = 0f;
	*uParam2 = -1;
	*uParam2 = func_789(Local_2395.f_1, Local_2395.f_2);
	if (*uParam2 == -1)
	{
	}
	else if (*uParam2 > Local_2395.f_1276)
	{
	}
	else if (*uParam2 < (Local_2395.f_1276 - 1))
	{
	}
	if (!*uParam2 == -1)
	{
		*uParam0 = { func_790(Local_2395.f_1, Local_2395.f_2, Local_2395.f_1419) };
		*uParam1 = func_791(Local_2395.f_1, Local_2395.f_2, Local_2395.f_1419);
	}
}

int func_471(int iParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (((func_36(&Var1, iParam0) && func_37(&Var1)) && func_38(&Var1, uParam1)) && func_792(&Var1))
	{
		func_42(Var1, 1509074216, &iVar0, 0);
	}
	return iVar0;
}

int func_472(int iParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (((func_36(&Var1, iParam0) && func_37(&Var1)) && func_38(&Var1, uParam1)) && func_792(&Var1))
	{
		func_42(Var1, 2121037717, &iVar0, 0);
	}
	return iVar0;
}

void func_473(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_166(65);
		if (bParam1)
		{
			func_166(68);
		}
	}
	else
	{
		func_165(65);
		func_165(68);
	}
}

void func_474(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_793(vParam0, uParam3))
	{
		func_475(1, bParam4);
	}
}

void func_475(bool bParam0, bool bParam1)
{
	if (func_794(255) == 4)
	{
		return;
	}
	if (func_68(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_165(0);
	}
	else
	{
		if (bParam1)
		{
			func_356(0, 0, 0, 1);
		}
		func_166(0);
		func_795(&(Global_1099294->f_516));
		Global_1099294->f_516 = 0f;
		Global_1099294->f_516.f_5 = 1;
		Global_1099294->f_516.f_16 = 0;
		Global_1099294->f_516.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1099294->f_516.f_17.f_3 = { 0f, 0f, 0f };
		Global_1099294->f_516.f_17 = { Global_1901929->f_44.f_1, Global_1901929->f_44.f_1, Global_1901929->f_44.f_1 };
		Global_1099294->f_516.f_17.f_9 = -432403087;
		func_796(&(Global_1099294->f_555));
		Global_1099294->f_555.f_6 = { Global_1099294->f_516.f_17.f_6 };
		Global_1099294->f_555 = Global_1099294->f_516;
		Global_1099294->f_555.f_5 = 1;
		if (bParam1)
		{
			Global_1099294->f_26.f_18 = 0;
			Global_1099294->f_26.f_19 = 0;
		}
	}
	func_797(Global_1099294->f_516, 36);
	func_798(Global_1099294->f_555, 36);
}

void func_476(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_477()
{
	func_325(&(Local_2395.f_1296), 1, 1);
}

bool func_478()
{
	return Global_1896726->f_382;
}

int func_479(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_595(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1949759)[iVar0 /*23*/])->f_11 && iParam1 == ((*Global_1949759)[iVar0 /*23*/])->f_4)
				{
					if (iParam3 <= Global_1949759[iVar0 /*23*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_596(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}

bool func_480(int iParam0, bool bParam1)
{
	if (bParam1 && !func_320(iParam0))
	{
		return false;
	}
	return !func_595(iParam0, 4);
}

bool func_481(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_320(iParam0))
	{
		return false;
	}
	iVar0 = func_597(iParam0);
	if (HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iVar0 /*23*/])->f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::_GET_SYSTEM_TIME();
		}
		uVar2 = HUD::_0x81801291806DBC50(((*Global_1949759)[iVar0 /*23*/])->f_3);
		if (!HUD::_UIPROMPT_IS_ACTIVE(((*Global_1949759)[iVar0 /*23*/])->f_3))
		{
			iVar3 = (iVar1 - ((*Global_1949759)[iVar0 /*23*/])->f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(((*Global_1949759)[iVar0 /*23*/])->f_18) * (1f - ((*Global_1949759)[iVar0 /*23*/])->f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			((*Global_1949759)[iVar0 /*23*/])->f_21 = iVar1;
			((*Global_1949759)[iVar0 /*23*/])->f_22 = uVar2;
		}
	}
	if (HUD::_0xCD072523791DDC1B(((*Global_1949759)[iVar0 /*23*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1949759)[iVar0 /*23*/])->f_3);
}

int func_482(int iParam0)
{
	int iVar0;

	if (func_588(iParam0))
	{
		iVar0 = _NAMESPACE71::_0x59FA676177DBE4C9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return 0;
}

void func_483(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_320(iParam0))
	{
		return;
	}
	iVar0 = func_597(iParam0);
	func_599(iVar0, iParam1);
}

float func_484()
{
	return Local_2395.f_1293;
}

char* func_485()
{
	return "MP_OutofAreaDirectional";
}

void func_486()
{
	if (func_156(&(Local_2395.f_1304)))
	{
		func_294(&(Local_2395.f_1304));
	}
}

int func_487()
{
	float fVar0;

	fVar0 = func_456(Global_35, Local_2395.f_1399);
	if (fVar0 >= Local_2395.f_1293)
	{
		return 1;
	}
	return 0;
}

void func_488(int iParam0)
{
	if (!func_605(&Global_1903002, iParam0))
	{
		func_476(Global_1903002, iParam0);
	}
}

int func_489(var uParam0, char* sParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	bool bVar0;
	int iVar1;

	if (func_799(uParam0, sParam1, &bVar0, bParam6, vParam2, fParam5, 0))
	{
		func_800(uParam0, sParam1, bParam7, bParam8, bParam9);
		iVar1 = 1;
	}
	else
	{
		iVar1 = 0;
	}
	if (bVar0)
	{
		func_509(uParam0, 1);
	}
	return iVar1;
}

void func_490()
{
	if (!func_801(64))
	{
		func_802(64);
	}
}

void func_491(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_34 == iParam0)
		{
		}
		ENTITY::_SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

int func_492()
{
	return 0;
}

bool func_493(int iParam0)
{
	return func_605((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_13, iParam0);
}

void func_494()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	if (func_493(8192))
	{
		return;
	}
	iVar0 = Local_913.f_44.f_1;
	iVar1 = 0;
	if (iVar0 < 1)
	{
		iVar0 = 5;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (Local_913.f_5 < 15)
	{
		if (Local_913.f_5 >= func_702())
		{
		}
		else
		{
			if (iVar1 >= iVar0)
			{
				return;
			}
			iVar3 = Local_913.f_5;
			iVar2 = 0;
			while (iVar3 >= 32)
			{
				iVar3 = (iVar3 - 32);
				iVar2++;
			}
			if (iVar2 >= 3)
			{
				func_803(8192);
				return;
			}
			vVar4 = { func_804(Local_913.f_5) };
			if (func_805(vVar4))
			{
				MISC::SET_BIT((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_1[iVar2], iVar3);
			}
			Local_913.f_5++;
			iVar1++;
		}
	}
	func_803(8192);
}

bool func_495(int iParam0)
{
	return func_605(Local_913.f_42, iParam0);
}

void func_496()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar2 = func_806(iVar0);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = func_807(iVar0);
			vVar3 = { func_808(iVar0) };
			vVar6 = { func_809(iVar0) };
			vVar9 = { func_810(iVar0) };
			if (iVar1 == joaat("box"))
			{
				(Local_913.f_16[iVar2 /*4*/])->f_1 = VOLUME::_CREATE_VOLUME_BOX(vVar3, vVar6, vVar9);
			}
			else if (iVar1 == joaat("sphere"))
			{
				(Local_913.f_16[iVar2 /*4*/])->f_1 = VOLUME::_0xB3FB80A32BAE3065(vVar3, vVar6, vVar9);
			}
			else
			{
				(Local_913.f_16[iVar2 /*4*/])->f_1 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar3, vVar6, vVar9);
			}
			Local_913.f_16[iVar2 /*4*/] = iVar2;
		}
		iVar0++;
	}
}

void func_497(int iParam0)
{
	if (!func_605(Local_913.f_42, iParam0))
	{
		func_476(&(Local_913.f_42), iParam0);
	}
}

int func_498(int iParam0)
{
	func_811(iParam0, 0, 0);
	if (func_812(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return 0;
}

void func_499(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_811(iParam0, 0, 0);
	if (func_812(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_813(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_814(iParam0, 1);
			}
			else
			{
				func_815(iParam0, 1);
			}
		}
		else
		{
			func_816(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_0x276AAF0F1C7F2494(iParam0, 1);
		}
	}
	else if (func_817())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

struct<2> func_500(int iParam0)
{
	struct<2> Var0;

	Var0 = iParam0;
	return Var0;
}

void func_501(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_818(bParam0, iVar0);
		iVar0++;
	}
}

void func_502()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_819(iVar0);
		iVar0++;
	}
}

void func_503()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_820(iVar0);
		iVar0++;
	}
}

void func_504(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_821(iVar0, bParam0);
		iVar0++;
	}
}

void func_505()
{
	AUDIO::_0x9D746964E0CF2C5F(func_555(), func_822());
	AUDIO::_0x9D746964E0CF2C5F(func_823(), func_822());
	AUDIO::_0x9D746964E0CF2C5F(func_824(), func_822());
	AUDIO::_0x9D746964E0CF2C5F(func_825(), func_822());
	AUDIO::_0x9D746964E0CF2C5F(func_776(), func_777());
	AUDIO::_0x9D746964E0CF2C5F(func_826(), func_827());
}

void func_506(var uParam0)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_3));
	}
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1546991729);
	}
}

void func_507(int iParam0)
{
	if (Global_1903004->f_1 != iParam0)
	{
		Global_1903004->f_1 = iParam0;
	}
}

void func_508(int iParam0)
{
	Global_1903004 = iParam0;
}

void func_509(var uParam0, bool bParam1)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(*uParam0))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(uParam0);
	}
	if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(190275865))
	{
		UISTATEMACHINE::_UISTATEMACHINE_DESTROY(190275865);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2);
		uParam0->f_2 = 0;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3, false);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_3);
		uParam0->f_3 = 0;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_1);
		uParam0->f_1 = 0;
	}
	if (uParam0->f_4 >= 0)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_4))
		{
			AUDIO::_0x3210BCB36AF7621B(uParam0->f_4);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		uParam0->f_4 = -1;
	}
	if (uParam0->f_5 >= 0)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_5))
		{
			AUDIO::_0x3210BCB36AF7621B(uParam0->f_5);
		}
		AUDIO::RELEASE_SOUND_ID(uParam0->f_5);
		uParam0->f_5 = -1;
	}
	if (bParam1)
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(func_485()))
		{
			GRAPHICS::_0xC5CB91D65852ED7E(func_485());
			HUD::_0x8BC7C1F929D07BF3(-2124237476);
			GRAPHICS::_0x981C7D863980FA51();
		}
	}
}

void func_510()
{
	char cVar0[32];
	int iVar4;

	iVar4 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	StringCopy(&cVar0, "FME_SS_REL_EMENY", 32);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(Local_913.f_1057));
	func_828(6, Local_913.f_1057, iVar4);
	func_828(6, Local_913.f_1057, Local_913.f_1056);
	StringCopy(&cVar0, "FME_SS_REL_FRIENDLY", 32);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(Local_913.f_1056));
	func_828(2, Local_913.f_1056, iVar4);
	func_828(6, Local_913.f_1056, Local_913.f_1057);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), Local_913.f_1056);
}

void func_511()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iVar0 /*40*/])))
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_67[iVar0 /*40*/])))
		{
		}
		else
		{
			func_829(iVar0);
		}
		iVar0++;
	}
}

int func_512()
{
	switch (Local_2395.f_1)
	{
		case 7:
		case 12:
		case 13:
		case 14:
			return 1;
		default:
			break;
	}
	return 0;
}

struct<8> func_513()
{
	struct<8> Var0;

	return Var0;
}

char* func_514(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_515()
{
	return "";
}

struct<8> func_516(int iParam0, var uParam1)
{
	char cVar0[64];
	struct<5> Var8;

	StringCopy(&cVar0, "", 64);
	if (((func_36(&Var8, iParam0) && func_37(&Var8)) && func_38(&Var8, uParam1)) && func_140(&Var8))
	{
		func_141(Var8, 1220434501, &cVar0, 0);
	}
	return cVar0;
}

char* func_517()
{
	return "";
}

char* func_518()
{
	return "";
}

char* func_519()
{
	return "";
}

var func_520(char* sParam0, char[4] cParam1, char[4] cParam2, int iParam3, int iParam4)
{
	return func_830(sParam0, cParam1, cParam2, func_284(), iParam4, iParam3, 0, 1, 1, 1);
}

var func_521(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	return func_831(sParam0, sParam1, func_284(), iParam3, iParam2, 0, 1, 1);
}

char* func_522(var uParam0, bool bParam1, bool bParam2)
{
	*bParam1 = 1;
	*bParam2 = 0;
	return "";
}

int func_523()
{
	if (func_271() & 64 == 64)
	{
		return 0;
	}
	return 1;
}

int func_524(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		*iParam2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_589(*iParam2, bParam0, bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_525(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		if (iParam2 == -1)
		{
			return joaat("COLOR_GREYDARK");
		}
		else
		{
			return 636925055;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_358(func_364(0)) && func_637(func_364(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if ((Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_5 != 0)
	{
		return (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_5;
	}
	if (bParam3 && (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_6 != 0)
	{
		return (Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_832(iParam0);
			if (iVar6 == -1031763995 && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return joaat("COLOR_WHITE");
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_833(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_78((Global_1070356->f_19683.f_1[iVar2 /*8*/])->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_834(iParam0, 1);
	if (!bVar0)
	{
		if (func_835(iParam0, bParam1))
		{
			return func_833(iParam0);
		}
		else if (func_836(iParam0, bParam1))
		{
			if (func_554(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_832(iParam0);
	}
	else if (func_835(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return joaat("COLOR_WHITE");
		}
		else if (func_838(func_837(func_364(0)), 1) == 395262693)
		{
			return func_833(iParam0);
		}
		else
		{
			return func_833(iParam0);
		}
	}
	else if (func_836(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_526(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_0x5B6193813E03E4E9(sParam0);
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_839(MISC::_CREATE_VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

void func_527()
{
	Global_1939231->f_1433.f_7962 = 0;
	Global_1939231->f_1433.f_7963 = MISC::GET_GAME_TIMER() + 1000;
}

bool func_528()
{
	return Local_2395.f_1294 > 0f;
}

var func_529()
{
	return MAP::_0x45F13B7E0A15C880(-188007767, Local_2395.f_1396, Local_2395.f_1294);
}

int func_530()
{
	float fVar0;

	fVar0 = func_456(Global_35, Local_2395.f_1396);
	if (fVar0 >= Local_2395.f_1294)
	{
		return 1;
	}
	return 0;
}

int func_531()
{
	return 5000;
}

int func_532(var uParam0, float fParam1, int iParam2, var uParam3, bool bParam4, float fParam5, float fParam6, int iParam7, float fParam8, int iParam9)
{
	int iVar0;
	int iVar1;

	if ((*uParam3 >= 0 && *uParam3 < 32) && (uParam0->f_210[*uParam3 /*23*/])->f_14 != 255)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[*uParam3 /*23*/])->f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam0->f_210[*uParam3 /*23*/])->f_14))
		{
			func_840(uParam0, *uParam3);
		}
	}
	if (iParam2 == 255)
	{
		return 0;
	}
	iVar0 = *uParam3;
	if (((iVar0 < 0 || (uParam0->f_210[iVar0 /*23*/])->f_14 != iParam2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[iVar0 /*23*/])->f_14)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam0->f_210[iVar0 /*23*/])->f_14))
	{
		iVar0 = -1;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if ((uParam0->f_210[iVar1 /*23*/])->f_14 != 255)
			{
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[iVar1 /*23*/])->f_14) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam0->f_210[iVar1 /*23*/])->f_14))
				{
					func_269(uParam0);
					func_840(uParam0, iVar1);
				}
			}
			if ((uParam0->f_210[iVar1 /*23*/])->f_14 == iParam2)
			{
				func_269(uParam0);
				iVar0 = iVar1;
				Jump @336; //curOff = 286
			}
			else if ((uParam0->f_210[iVar1 /*23*/])->f_14 == 255 && iVar0 == -1)
			{
				func_269(uParam0);
				iVar0 = iVar1;
			}
			iVar1++;
		}
	}
	if (iVar0 >= 0)
	{
		if (bParam4)
		{
			func_269(uParam0);
			func_840(uParam0, iVar0);
			*uParam3 = 0;
		}
		else
		{
			if (((uParam0->f_210[iVar0 /*23*/])->f_5 != fParam1 || (uParam0->f_210[iVar0 /*23*/])->f_1 != fParam5) || (uParam0->f_210[iVar0 /*23*/])->f_2 != fParam6)
			{
				func_268(uParam0);
			}
			(uParam0->f_210[iVar0 /*23*/])->f_14 = iParam2;
			(uParam0->f_210[iVar0 /*23*/])->f_5 = fParam1;
			(uParam0->f_210[iVar0 /*23*/])->f_1 = fParam5;
			(uParam0->f_210[iVar0 /*23*/])->f_2 = fParam6;
			(uParam0->f_210[iVar0 /*23*/])->f_3 = fParam8;
			(uParam0->f_210[iVar0 /*23*/])->f_4 = iParam9;
			uParam0->f_210[iVar0 /*23*/] = iParam7;
			*uParam3 = iVar0;
		}
	}
	return 1;
}

void func_533(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	uVar0 = uParam0->f_210;
	iVar1 = 23;
	iVar2 = 1;
	iVar3 = 2;
	iVar4 = 1;
	iVar5 = 2;
	iVar6 = 2;
	iVar7 = 1;
	iVar8 = 3;
	iVar9 = 2;
	iVar10 = 1;
	NETWORK::_0x7E300B5B86AB1D1A(&(uParam0->f_210), uVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, iVar7, iVar8, iVar9, iVar10, 0, 0, 0);
}

void func_534(var uParam0)
{
	NETWORK::_0x7E300B5B86AB1D1A(&(uParam0->f_210), uParam0->f_210, 23, 5, 2, 1, 3, 2, 0, 4, 2, 0, 0, 0, 0);
}

int func_535()
{
	return 1;
}

void func_536(int iParam0)
{
	if ((Global_1070356->f_20209[iParam0 /*18*/])->f_5 != 0)
	{
		(Global_1070356->f_20209[iParam0 /*18*/])->f_5 = 0;
		func_841(iParam0);
	}
}

var func_537(char* sParam0, int iParam1)
{
	return func_842(sParam0, iParam1, -2, 0, 0, 0, 1);
}

void func_538(int iParam0, int iParam1)
{
	if ((Global_1070356->f_20209[iParam0 /*18*/])->f_5 != iParam1)
	{
		(Global_1070356->f_20209[iParam0 /*18*/])->f_5 = iParam1;
		func_841(iParam0);
	}
}

void func_539()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				func_843(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
}

void func_540()
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_844();
	func_845();
	func_846(iVar0);
	if (func_495(1))
	{
		func_847(1);
	}
	func_848();
	func_849();
	if (!func_495(1024) && func_464(Local_2395.f_1289))
	{
		Local_2395.f_1289 = func_465("FME_RU_HELP_OBJECTIVE");
		func_497(1024);
	}
	if (func_495(64))
	{
		if (func_592(PLAYER::PLAYER_PED_ID(), func_698(), 1) < 25f)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (func_495(2048))
				{
					if (!func_850())
					{
						Local_2395.f_1289 = func_465("FME_RU_HELP_DROP_APPROCH_ALIVE");
					}
					else
					{
						Local_2395.f_1289 = func_465("FME_RU_HELP_DROP_SAT_ALIVE");
					}
				}
				else if (!func_850())
				{
					Local_2395.f_1289 = func_465("FME_RU_HELP_DROP_APPROCH_DEAD");
				}
				else
				{
					Local_2395.f_1289 = func_465("FME_RU_HELP_DROP_SAT_DEAD");
				}
			}
			else if (!func_850())
			{
				Local_2395.f_1289 = func_465("FME_RU_HELP_DROP_APPROCH_WAGON");
			}
			else
			{
				Local_2395.f_1289 = func_465("FME_RU_HELP_DROP_SAT_WAGON");
			}
		}
	}
}

void func_541()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/]));
		ENTITY::_0xC3ABCFBC7D74AFA5(iVar1, 19, 1);
		iVar0++;
	}
	if (func_851())
	{
	}
}

void func_542(int iParam0)
{
	if (!func_852(16777216, iParam0, -1))
	{
		if (func_853(4194304, iParam0, 1))
		{
			func_854(905156700, 1, 0);
			func_855(16777216, iParam0);
		}
		else if (func_853(8388608, iParam0, 1))
		{
			func_854(-479797100, 1, 0);
			func_855(16777216, iParam0);
		}
	}
}

void func_543(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Local_2152 != 5 || func_403(8))
	{
		return;
	}
	func_856(iParam0);
	func_857(iParam0);
	func_858(iParam0);
	if (!func_495(1))
	{
		func_859(&Local_913, iParam0);
	}
	func_860(&Local_0, &Local_913, iParam0);
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	func_861(iVar1, 1, -1);
	if (func_862(iParam0) || ((((PED::_0x42429C674B61238B(iVar0) && func_863(iVar0) == iVar1) || ((PED::_0x9682F850056C9ADE(iVar1) && PED::_0x0C31C51168E80365(iVar1) == iVar0) && func_864(iVar1, 0))) && func_865(iParam0)) && !func_852(2, iParam0, -1)))
	{
		if (!func_852(1, iParam0, -1))
		{
			Local_913.f_6++;
			func_855(1, iParam0);
		}
	}
	else if (func_852(1, iParam0, -1))
	{
		Local_913.f_6 = (Local_913.f_6 - 1);
		func_866(1, iParam0, -1);
	}
	if (Local_913.f_6 > 0)
	{
		func_497(64);
		if (func_867(iParam0) && func_852(1, iParam0, -1))
		{
			if (!func_495(16384))
			{
				if (MAP::DOES_BLIP_EXIST((Local_913.f_16[0 /*4*/])->f_2))
				{
					func_720(&((Local_913.f_16[0 /*4*/])->f_2));
				}
				if (MAP::DOES_BLIP_EXIST((Local_913.f_16[2 /*4*/])->f_2))
				{
					func_720(&((Local_913.f_16[2 /*4*/])->f_2));
				}
				func_497(16384);
			}
		}
		if (func_864(iVar1, 0))
		{
			if (!func_495(8192))
			{
				func_497(8192);
			}
		}
		if (func_868(PLAYER::PLAYER_PED_ID(), iVar1) || func_869(iParam0))
		{
			if (!func_864(iVar1, 0))
			{
				if (!func_495(2048))
				{
					func_497(2048);
				}
			}
		}
	}
	else
	{
		if (func_495(64))
		{
			func_847(64);
		}
		if (func_495(2048))
		{
			func_847(2048);
		}
		if (func_495(8192))
		{
			func_847(8192);
		}
		if (func_495(16384))
		{
			func_847(16384);
		}
	}
}

void func_544(int iParam0)
{
	int iVar0;

	if (func_852(32, iParam0, -1))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iParam0 /*40*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_67[iParam0 /*40*/])))
		{
			iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
			ENTITY::_0x18FF3110CF47115D(iVar0, 1, 0);
			ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
			ENTITY::_0x18FF3110CF47115D(iVar0, 7, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar0, 1);
			PED::SET_PED_CAN_BE_TARGETTED(iVar0, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Local_913.f_1056);
			ENTITY::_0x18FF3110CF47115D(iVar0, 1, 0);
			ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
			ENTITY::_0x18FF3110CF47115D(iVar0, 3, 0);
			func_870(iVar0, -1);
		}
		func_720(Local_913.f_80[iParam0]);
	}
}

void func_545(int iParam0)
{
	int iVar0;

	if (func_852(32, iParam0, -1))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iParam0 /*40*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_67[iParam0 /*40*/])))
		{
			iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
			PED::DELETE_PED(&iVar0);
		}
		func_855(16, iParam0);
	}
}

void func_546(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	if (!func_153(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		return;
	}
	if ((Local_913.f_50[iParam0 /*4*/])->f_1 != (Local_0.f_67[iParam0 /*40*/])->f_8)
	{
		(Local_913.f_50[iParam0 /*4*/])->f_1 = (Local_0.f_67[iParam0 /*40*/])->f_8;
		if ((Local_0.f_67[iParam0 /*40*/])->f_8 == -1)
		{
			return;
		}
		iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
		switch ((Local_0.f_67[iParam0 /*40*/])->f_8)
		{
			case 0:
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(PED::_0x3D9F958834AB9C30(iVar0));
				break;
			case 1:
				iVar1 = (Local_0.f_67[iParam0 /*40*/])->f_1;
				func_855(32, iParam0);
				break;
			case 2:
				iVar1 = (Local_0.f_67[iParam0 /*40*/])->f_2;
				func_855(32, iParam0);
				break;
			case 3:
				iVar1 = (Local_0.f_67[iParam0 /*40*/])->f_2;
				func_855(32, iParam0);
				break;
			case 4:
				iVar1 = (Local_0.f_67[iParam0 /*40*/])->f_2;
				func_855(32, iParam0);
				break;
		}
		if ((Local_0.f_67[iParam0 /*40*/])->f_8 == 2 && iVar1 == PLAYER::GET_PLAYER_INDEX())
		{
			func_842("FME_RU_SHARD_UPDATE_LRETURNED", joaat("COLOR_WHITE"), -2, 0, 0, 0, 1);
		}
		else
		{
			sVar2 = func_526(func_550(iVar1), func_525(iVar1, 1, -1, 0));
			func_842(MISC::_CREATE_VAR_STRING(42, func_871((Local_0.f_67[iParam0 /*40*/])->f_8), sVar2, func_872(0)), joaat("COLOR_WHITE"), -2, 0, 0, 0, 1);
		}
	}
}

void func_547()
{
	if (Local_2395.f_9 == -785841056)
	{
		return;
	}
	func_873();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), true);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 28, 1);
	PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::GET_PLAYER_INDEX());
	if (func_874() && func_875())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34)) && TASK::_0x038B1F1674F0E242(Global_34))
		{
			TASK::CLEAR_PED_TASKS(Global_34, 1, 0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256, 0);
	}
}

int func_548(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Local_2395.f_1332;
	}
	if ((((func_65(131072) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1))) && &Local_2202[iParam1 /*6*/] >= iParam0) && (Local_2202[iParam1 /*6*/])->f_4 >= 1) && (Local_2202[iParam1 /*6*/])->f_4 >= Local_2395.f_1420)
	{
		return 1;
	}
	return 0;
}

void func_549()
{
}

char* func_550(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return "";
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return "";
	}
	return func_876(iVar0);
}

var func_551()
{
	return Local_2395.f_1267;
}

int func_552()
{
	switch (Local_2395.f_1387)
	{
		case -1893775542:
		case -1323241207:
		case -1130541276:
		case -669315698:
		case 142723591:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_553()
{
	switch (Local_2395.f_1387)
	{
		case -1869754940:
		case 1229355466:
		case 1839318411:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_554(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return 1;
		}
	}
	if (func_877(iParam0))
	{
		return 0;
	}
	if (func_878(iParam0))
	{
		return 0;
	}
	if (func_879(iParam0))
	{
		return 1;
	}
	return func_880(iParam0);
}

char* func_555()
{
	return "Match_End_Timer";
}

void func_556(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	bool bVar0;

	iParam3 |= 8;
	if (func_772(uParam0, &bVar0) && func_881(uParam0, uParam1, iParam3, 551037070, joaat("COLOR_RED"), joaat("COLOR_WHITE"), joaat("COLOR_WHITE"), iParam4))
	{
		func_882(uParam1, uParam2, iParam3 | 8, 551037070, joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"), iParam4);
	}
	if (bVar0)
	{
		func_575(uParam1);
		func_248(uParam0, 1);
	}
}

void func_557(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bool bVar0;

	if (((func_772(uParam0, &bVar0) && func_773(uParam0)) && func_881(uParam0, uParam1, iParam7 | 8, 551037070, joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"), iParam12)) && func_774(uParam0, -1700692449, &bVar0))
	{
		func_775(uParam0, iParam3, bParam4, iParam5, sParam6);
		func_882(uParam1, uParam2, iParam7 | 8, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (bVar0)
	{
		func_575(uParam1);
		func_248(uParam0, 1);
	}
}

void func_558(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	bool bVar0;

	if (((func_772(uParam0, &bVar0) && func_773(uParam0)) && func_881(uParam0, uParam1, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12)) && func_774(uParam0, 1133052843, &bVar0))
	{
		func_775(uParam0, iParam3, bParam4, iParam5, sParam6);
		func_882(uParam1, uParam2, iParam7, iParam8, iParam9, iParam10, iParam11, iParam12);
	}
	if (bVar0)
	{
		func_575(uParam1);
		func_248(uParam0, 1);
	}
}

void func_559(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;

	if (((func_772(uParam0, &bVar0) && func_773(uParam0)) && func_883(uParam0, uParam1, iParam7)) && func_774(uParam0, -213385216, &bVar0))
	{
		func_775(uParam0, iParam2, bParam3, iParam4, sParam5);
		func_884(uParam1, iParam6, iParam7, bParam8, bParam9, bParam10);
	}
	if (bVar0)
	{
		func_574(uParam1, 0, 0);
		func_248(uParam0, 1);
	}
}

void func_560(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	bool bVar0;

	if ((((func_772(uParam0, &bVar0) && func_773(uParam0)) && func_883(uParam0, uParam1, iParam9)) && func_881(uParam0, uParam2, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15)) && func_774(uParam0, 1133052843, &bVar0))
	{
		func_775(uParam0, iParam4, bParam5, iParam6, sParam7);
		func_884(uParam1, iParam8, iParam9, 0, 0, 0);
		func_882(uParam2, uParam3, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15);
	}
	if (bVar0)
	{
		func_575(uParam2);
		func_574(uParam1, 0, 0);
		func_248(uParam0, 1);
	}
}

void func_561(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
{
	bool bVar0;

	if ((((func_772(uParam0, &bVar0) && func_773(uParam0)) && func_883(uParam0, uParam1, iParam9)) && func_881(uParam0, uParam2, iParam13 | 8, 551037070, joaat("COLOR_RED"), joaat("COLOR_PURE_WHITE"), joaat("COLOR_PURE_WHITE"), iParam14)) && func_774(uParam0, 774310187, &bVar0))
	{
		func_775(uParam0, iParam3, bParam5, iParam6, sParam7);
		func_884(uParam1, iParam8, iParam9, bParam10, bParam11, bParam12);
		func_882(uParam2, uParam4, iParam13 | 8, iParam15, iParam16, iParam17, iParam18, iParam14);
	}
	if (bVar0)
	{
		func_574(uParam1, 0, 0);
		func_248(uParam0, 1);
		func_575(uParam2);
	}
}

int func_562(var uParam0, float fParam1, bool bParam2)
{
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) };
	*fParam1 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	*bParam2 = 1;
	return 1;
}

bool func_563(var uParam0)
{
	uParam0->f_2 = -171261332;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_564()
{
	return 1;
}

float func_565(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_566()
{
	func_567(&(Local_2395.f_971[Local_2395.f_1332]));
}

void func_567(int iParam0)
{
	if (iParam0 == -1)
	{
		func_224(4096, Local_2395.f_1332);
		iParam0 = (func_188(2) - 1);
	}
	Local_2395.f_1333 = iParam0;
}

void func_568(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_641(iParam0);
	if (iVar0 == -785841056)
	{
		func_436(func_47(-1892463704, -785841056), 1);
		if (iParam2 == 0)
		{
			func_436(func_500(1114562171), 1);
		}
	}
	else
	{
		func_436(func_47(-1892463704, -1666944573), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_436(func_500(1379845528), 1);
		}
	}
	if (func_46(iParam0, uParam1, &iVar1))
	{
		func_436(func_47(-1892463704, iVar1), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_436(func_47(-365215928, iVar1), 1);
		}
	}
}

void func_569(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_641(iParam0);
	if (iVar0 == -785841056)
	{
		func_436(func_47(1374282888, -785841056), 1);
		if (iParam2 == 0)
		{
			func_436(func_500(1114562171), 1);
		}
	}
	else
	{
		func_436(func_47(1374282888, -1666944573), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_436(func_500(1379845528), 1);
		}
	}
	if (func_46(iParam0, uParam1, &iVar1))
	{
		func_436(func_47(1374282888, iVar1), 1);
		if (iParam2 >= 0 && iParam2 < 3)
		{
			func_436(func_47(-365215928, iVar1), 1);
		}
	}
}

int func_570()
{
	struct<2> Var0;
	struct<2> Var13;
	struct<2> Var26;
	int iVar39;
	struct<2> Var40;

	if (!func_885())
	{
		return 1;
	}
	if (Local_2395.f_9 != -785841056 && !func_134(8192))
	{
		if (Local_2395.f_1 != 8)
		{
			Var0.f_1 = 11;
			func_886(&Var0, Local_2395.f_1333);
			func_887(&Var0);
			func_888(&Var0, Local_2152.f_4);
			func_889(&Var0);
			func_890(-116590068, &(Local_2395.f_1362), &Var0, 0, 255, 0, 0);
			Local_2395.f_1281++;
			Var13.f_1 = 11;
			func_892(&Var13, func_891());
			func_886(&Var13, Local_2395.f_1333);
			func_887(&Var13);
			func_888(&Var13, Local_2152.f_4);
			func_889(&Var13);
			func_890(-2069558689, &(Local_2395.f_1366), &Var13, 0, 255, 0, 0);
			Local_2395.f_1281++;
			Var26.f_1 = 11;
			func_887(&Var26);
			func_893(&Var26, Local_2152.f_4);
			func_894(&Var26);
			func_895(&Var26, Local_2395.f_1333);
			func_896(&Var26);
			func_889(&Var26);
			func_890(1172622856, &(Local_2395.f_1370), &Var26, 0, 255, 0, 0);
			Local_2395.f_1281++;
		}
		iVar39 = func_897(Local_2152.f_4);
		Var40.f_1 = 11;
		func_889(&Var40);
		if (iVar39 != 0)
		{
			func_890(iVar39, &(Local_2395.f_1378), &Var40, 0, 255, 0, 0);
			Local_2395.f_1382 = iVar39;
			Local_2395.f_1281++;
		}
	}
	func_898();
	return 1;
}

void func_571()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/]));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			PED::_0x6569F31A01B4C097(iVar1, 0, 0);
			ENTITY::_0x18FF3110CF47115D(iVar1, 2, 0);
			ENTITY::_0x18FF3110CF47115D(iVar1, 1, 0);
		}
		iVar0++;
	}
	func_899();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_736());
}

int func_572()
{
	return 1;
}

void func_573(int iParam0, int iParam1)
{
	func_423(&((Global_1185132->f_66[iParam0 /*20*/])->f_6), iParam1);
}

void func_574(var uParam0, bool bParam1, bool bParam2)
{
	struct<30> Var0;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	int iVar40;

	if ((uParam0[0 /*34*/] != 0 || bParam2) || (((*uParam0)[0 /*34*/])->f_23 != -1 && bParam1))
	{
		Var0.f_27 = -1;
		Var0.f_28 = -1;
		Var0.f_29 = -1082130432;
		iVar40 = 0;
		while (iVar40 <= 6)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_1);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_2);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_3);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_4);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_5);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_6);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_10);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_11);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_12);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_13);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_14);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_15);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_20);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_21);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_22);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_16);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_17);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_18);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar40 /*34*/])->f_19);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0[iVar40 /*34*/]);
			if (!bParam1)
			{
				uVar34 = ((*uParam0)[iVar40 /*34*/])->f_23;
				uVar35 = ((*uParam0)[iVar40 /*34*/])->f_25;
				uVar36 = ((*uParam0)[iVar40 /*34*/])->f_26;
				uVar37 = ((*uParam0)[iVar40 /*34*/])->f_27;
				uVar38 = ((*uParam0)[iVar40 /*34*/])->f_28;
				uVar39 = ((*uParam0)[iVar40 /*34*/])->f_29;
			}
			MISC::_COPY_MEMORY((*uParam0)[iVar40 /*34*/], &Var0, 34);
			if (!bParam1)
			{
				((*uParam0)[iVar40 /*34*/])->f_23 = uVar34;
				((*uParam0)[iVar40 /*34*/])->f_25 = uVar35;
				((*uParam0)[iVar40 /*34*/])->f_26 = uVar36;
				((*uParam0)[iVar40 /*34*/])->f_27 = uVar37;
				((*uParam0)[iVar40 /*34*/])->f_28 = uVar38;
				((*uParam0)[iVar40 /*34*/])->f_29 = uVar39;
			}
			iVar40++;
		}
	}
}

void func_575(var uParam0)
{
	struct<199> Var0;
	struct<15> Var199;
	int iVar222;

	if (uParam0->f_11.f_2 != 0)
	{
		func_900(&(uParam0->f_11));
		func_901(uParam0);
		func_902(&(uParam0->f_11), 1);
		Global_1939067->f_107 = 0;
		Var0.f_3 = 8;
		Var0.f_12 = 32;
		Var0.f_45 = 32;
		Var0.f_45.f_1 = 2;
		Var0.f_45.f_1.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_45.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 2;
		Var0.f_143 = 5;
		Var0.f_161 = -1;
		Var0.f_162 = 32;
		Var199.f_1 = -1082130432;
		Var199.f_2 = -1082130432;
		Var199.f_3 = -1082130432;
		Var199.f_4 = -1082130432;
		Var199.f_5 = -1082130432;
		Var199.f_14 = 255;
		uParam0->f_11 = { Var0 };
		iVar222 = 0;
		while (iVar222 <= 31)
		{
			MISC::_COPY_MEMORY(uParam0->f_210[iVar222 /*23*/], &Var199, 23);
			iVar222++;
		}
		uParam0->f_948 = 0;
	}
}

int func_576()
{
	struct<8> Var0;
	char* sVar8;
	char* sVar9;
	int iVar10;

	Var0 = { func_513() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { Local_2395.f_1346 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			Var0 = { Local_2395.f_1338 };
		}
	}
	sVar8 = (Local_2202[Local_2395.f_1332 /*6*/])->f_3;
	sVar9 = (Local_368[Local_2395.f_1332 /*17*/])->f_14;
	iVar10 = (Local_368[Local_2395.f_1332 /*17*/])->f_16;
	if (iVar10 == 0)
	{
		Local_2395.f_1287 = func_521(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), MISC::_CREATE_VAR_STRING(2, "FME_RU_SHARD_AD", sVar8, sVar9), func_578(), func_579());
	}
	else
	{
		Local_2395.f_1287 = func_521(MISC::_CREATE_VAR_STRING(10, "FME_SHARD_OUTRO_TITLE_OVER", &Var0), MISC::_CREATE_VAR_STRING(2, "FME_RU_SHARD_ADL", sVar8, sVar9, iVar10), func_578(), func_579());
	}
	return 1;
}

char* func_577()
{
	return "";
}

char* func_578()
{
	return "";
}

char* func_579()
{
	return "";
}

char* func_580(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "FME_SHARD_OUTRO_PRIMARY_INVALID_GANG";
		case 2:
			return "FME_SHARD_OUTRO_PRIMARY_EXPIRED_GANGS";
		case 3:
			return "FME_SHARD_OUTRO_PRIMARY_EXPIRED_PLAYERS";
		default:
			break;
	}
	return "FME_SHARD_OUTRO_PRIMARY_EXPIRED";
}

var func_581(char* sParam0, int iParam1, int iParam2)
{
	return func_903(sParam0, func_284(), iParam2, iParam1, 0, 1);
}

struct<8> func_582()
{
	struct<8> Var0;

	return Var0;
}

char* func_583()
{
	return "FME_RU_SHARD_OUTRO_PRIMARY_WON";
}

struct<8> func_584()
{
	struct<8> Var0;

	return Var0;
}

char* func_585(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FM_PLACE_1";
		case 1:
			return "FM_PLACE_2";
		case 2:
			return "FM_PLACE_3";
		case 3:
			return "FM_PLACE_4";
		case 4:
			return "FM_PLACE_5";
		case 5:
			return "FM_PLACE_6";
		case 6:
			return "FM_PLACE_7";
		case 7:
			return "FM_PLACE_8";
		case 8:
			return "FM_PLACE_9";
		case 9:
			return "FM_PLACE_10";
		case 10:
			return "FM_PLACE_11";
		case 11:
			return "FM_PLACE_12";
		case 12:
			return "FM_PLACE_13";
		case 13:
			return "FM_PLACE_14";
		case 14:
			return "FM_PLACE_15";
		case 15:
			return "FM_PLACE_16";
		case 16:
			return "FM_PLACE_17";
		case 17:
			return "FM_PLACE_18";
		case 18:
			return "FM_PLACE_19";
		case 19:
			return "FM_PLACE_20";
		case 20:
			return "FM_PLACE_21";
		case 21:
			return "FM_PLACE_22";
		case 22:
			return "FM_PLACE_23";
		case 23:
			return "FM_PLACE_24";
		case 24:
			return "FM_PLACE_25";
		case 25:
			return "FM_PLACE_26";
		case 26:
			return "FM_PLACE_27";
		case 27:
			return "FM_PLACE_28";
		case 28:
			return "FM_PLACE_29";
		case 29:
			return "FM_PLACE_30";
		case 30:
			return "FM_PLACE_31";
		case 31:
			return "FM_PLACE_32";
		default:
			break;
	}
	return "";
}

Vector3 func_586(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_904((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

int func_587()
{
	return 1;
}

bool func_588(int iParam0)
{
	return iParam0 != 0;
}

int func_589(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (((iParam0 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0)) && iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
		if (iVar0 >= 0 && iVar0 < 32)
		{
			if (bParam1)
			{
				if ((Local_2202[Local_2395.f_1332 /*6*/])->f_2 == (Local_2202[iVar0 /*6*/])->f_2 && (!bParam2 || (Local_2202[Local_2395.f_1332 /*6*/])->f_5 > (Local_2202[iVar0 /*6*/])->f_5))
				{
					return 1;
				}
			}
			else if (BUILTIN::FLOOR((Local_2202[Local_2395.f_1332 /*6*/])->f_2) == BUILTIN::FLOOR((Local_2202[iVar0 /*6*/])->f_2) && (!bParam2 || (Local_2202[Local_2395.f_1332 /*6*/])->f_5 > (Local_2202[iVar0 /*6*/])->f_5))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_590()
{
	return Global_1939178->f_38 == joaat("weapon_fishingrod");
}

int func_591()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(&Global_1902942, false))
	{
		return 1;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-506425016) > 0)
	{
		return 1;
	}
	if (func_23() == 0 && NETWORK::_0x1B89BC43B6E69107(-506425016, -1, 1, 0))
	{
		return 1;
	}
	return 0;
}

float func_592(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

Vector3 func_593(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_594(int iParam0)
{
	switch (func_905(iParam0))
	{
		case -2101244071:
		case -1070622585:
		case -1057349201:
		case -569548732:
		case 874188557:
			return 1;
	}
	return 0;
}

bool func_595(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1) != 0;
}

void func_596(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	((*Global_1949759)[iParam0 /*23*/])->f_4 = iParam1;
	(*Global_1949759)[iParam0 /*23*/] = iParam4;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1949759)[iParam0 /*23*/])->f_2 = iParam5;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { vParam6 };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = fParam9;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = iParam10;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = iParam11;
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_5 = iParam12;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 2;
	((*Global_1949759)[iParam0 /*23*/])->f_17 = -1;
	((*Global_1949759)[iParam0 /*23*/])->f_18 = iParam16;
	((*Global_1949759)[iParam0 /*23*/])->f_19 = iParam15;
	((*Global_1949759)[iParam0 /*23*/])->f_20 = bParam25;
	((*Global_1949759)[iParam0 /*23*/])->f_22 = 0f;
	if (bParam25)
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		((*Global_1949759)[iParam0 /*23*/])->f_21 = MISC::_GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 7:
			HUD::_0xA3F2149AA24F3D8E(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		case 8:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 13:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		case 15:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1949759)[iParam0 /*23*/])->f_3 = iVar0;
	func_599(iParam0, 1);
	func_600(iParam0, 1);
	func_601(iParam0, 128);
}

int func_597(int iParam0)
{
	return iParam0;
}

void func_598(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 - (((*Global_1949759)[iParam0 /*23*/])->f_1 && iParam1));
}

void func_599(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		if (((*Global_1949759)[iParam0 /*23*/])->f_5 == 5 && !func_595(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
		}
	}
}

void func_600(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1949759)[iParam0 /*23*/])->f_3, iParam1);
	}
}

void func_601(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1949759)[iParam0 /*23*/])->f_1 = (((*Global_1949759)[iParam0 /*23*/])->f_1 || iParam1);
}

void func_602(int iParam0)
{
	if (!func_906(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1949759)[iParam0 /*23*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1949759)[iParam0 /*23*/])->f_3);
	}
	((*Global_1949759)[iParam0 /*23*/])->f_4 = 0;
	(*Global_1949759)[iParam0 /*23*/] = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_16 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_1 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1949759)[iParam0 /*23*/])->f_9 = 0f;
	((*Global_1949759)[iParam0 /*23*/])->f_10 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_11 = 0;
	((*Global_1949759)[iParam0 /*23*/])->f_2 = 1;
	((*Global_1949759)[iParam0 /*23*/])->f_15 = -1f;
}

void func_603(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return;
	}
	func_907(&iParam0);
}

void func_604(var uParam0, bool bParam1)
{
	int iVar0;

	if (!func_652(uParam0))
	{
		return;
	}
	iVar0 = Global_1275573->f_8;
	func_908();
	func_656(0);
	if (uParam0->f_1)
	{
		func_909(iVar0, 1);
	}
	if (uParam0->f_10)
	{
		if (func_328(uParam0->f_54.f_1))
		{
		}
		if (uParam0->f_54.f_2)
		{
			func_662();
		}
	}
	if (uParam0->f_12)
	{
		func_910();
	}
	if (uParam0->f_8)
	{
		func_911(PLAYER::_0xDF66A37936D5F3D9(PLAYER::PLAYER_ID()));
		func_678(func_912());
	}
	else if (uParam0->f_4)
	{
		func_913();
		func_911(PLAYER::_0xDF66A37936D5F3D9(PLAYER::PLAYER_ID()));
		func_678(Global_1954472->f_1449);
	}
	if (uParam0->f_3)
	{
		func_914();
	}
	if (bParam1)
	{
		func_664(0, 0);
		func_915();
	}
	func_653(&(Global_1132968->f_5525));
}

bool func_605(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_606(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_607(int iParam0, int iParam1)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2395.f_1386), iParam1))
	{
		func_916(iParam0);
		if (Local_2395.f_9 != -785841056)
		{
			func_917(iParam1, 0);
		}
		SCRIPTS::_0xD426E2E3288469D6(&(Local_2395.f_1386), iParam1);
	}
}

void func_608(int iParam0, int iParam1)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2395.f_1385), iParam1))
	{
		func_918(iParam0);
		func_919(iParam0);
		func_920(iParam0);
		if (Local_2395.f_9 != -785841056)
		{
			func_917(iParam1, 0);
		}
		SCRIPTS::_0xD426E2E3288469D6(&(Local_2395.f_1385), iParam1);
	}
	if (func_134(33554432))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			func_334();
			func_329(33554432);
			if (func_134(67108864))
			{
				func_337(1, 0, 1);
				func_329(67108864);
			}
		}
	}
}

bool func_609(int iParam0)
{
	return func_605(Global_1182289->f_3, iParam0);
}

void func_610(int iParam0)
{
	func_606(&(Global_1182289->f_3), iParam0);
}

bool func_611(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return false;
	}
	if (iParam0 == &Global_1275573->f_154[&Global_1275573])
	{
		return ((Global_17172.f_2619.f_2 == 2 || (bParam1 && Global_17172.f_2619.f_2 == 1)) || (bParam2 && Global_17172.f_2619.f_2 == 3));
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return ((((*Global_1097610)[iVar0 /*51*/])->f_48 == 2 || (bParam1 && ((*Global_1097610)[iVar0 /*51*/])->f_48 == 1)) || (bParam2 && ((*Global_1097610)[iVar0 /*51*/])->f_48 == 3));
}

int func_612(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return func_78((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_7, iParam1);
}

void func_613(int iParam0)
{
	if (!func_78((Global_1070356->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7, iParam0))
	{
		func_146(&((Global_1070356->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7), iParam0);
	}
}

var func_614(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar17;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _NAMESPACE71::_0xB2920B9760F0F36B(&Var0, &Var13, iParam5);
	return uVar17;
}

void func_615(int iParam0, int iParam1)
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	struct<11> Var52;
	struct<7> Var63;
	int iVar70;

	iVar50 = _NAMESPACE26::_0xD1BF325C8252A982(iParam1, &Var0);
	Var63 = { func_921() };
	iVar70 = 0;
	while (iVar70 <= (iVar50 - 1))
	{
		if ((func_922(*(Var0[iVar70 /*7*/])) && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Var0[iVar70 /*7*/], &Var63)) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(Var0[iVar70 /*7*/]))
		{
			iVar51 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar70 /*7*/]);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar51))
			{
				Var52.f_4 = 7;
				Var52.f_5 = iParam1;
				Var52.f_10 = iParam0;
				func_923(&Var52, iVar51);
			}
		}
		iVar70++;
	}
}

void func_616(int iParam0)
{
	if (func_78((Global_1070356->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7, iParam0))
	{
		func_423(&((Global_1070356->f_19683.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/])->f_7), iParam0);
	}
}

int func_617(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1140484->f_1998), iParam0))
	{
		return 1;
	}
	if (Global_1140484->f_1997 >= 21)
	{
		return 0;
	}
	Global_1140484->f_1975[Global_1140484->f_1997] = iParam0;
	Global_1140484->f_1997++;
	return 1;
}

void func_618(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_619(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_620()
{
	int iVar0;

	if (!func_495(256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (MAP::DOES_BLIP_EXIST(&(Local_913.f_80[iVar0])))
		{
			func_720(Local_913.f_80[iVar0]);
		}
		iVar0++;
	}
	func_847(256);
}

void func_621()
{
	if (!func_588(Local_913.f_96))
	{
		return;
	}
	_NAMESPACE71::_0x2F901291EF177B02(Local_913.f_96, 0);
	Local_913.f_96 = 0;
	func_847(8);
}

void func_622()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[iVar0 /*4*/])->f_1))
		{
			if (MAP::DOES_BLIP_EXIST((Local_913.f_16[iVar0 /*4*/])->f_2))
			{
				func_720(&((Local_913.f_16[iVar0 /*4*/])->f_2));
			}
			VOLUME::_0x43F867EF5C463A53((Local_913.f_16[iVar0 /*4*/])->f_1);
		}
		iVar0++;
	}
}

void func_623(int iParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1939231->f_242.f_5, iParam0);
	func_924(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	func_925((Global_1939231->f_242.f_1186 - 1));
}

bool func_624(int iParam0)
{
	return (Global_1099294->f_26.f_7 && iParam0) != 0;
}

bool func_625(int iParam0)
{
	return (Global_1099294->f_26.f_9 && iParam0) != 0;
}

bool func_626(int iParam0)
{
	return (Global_1099294->f_4[Global_1100047[iParam0 /*2*/]] && ((*Global_1100047)[iParam0 /*2*/])->f_1) == ((*Global_1100047)[iParam0 /*2*/])->f_1;
}

int func_627()
{
	if (&Global_1099294 <= 5)
	{
		return &Global_1099294;
	}
	if (&Global_1099294 <= 22)
	{
		return 4;
	}
	if (&Global_1099294 <= 25)
	{
		return 3;
	}
	return 26;
}

int func_628(struct<2> Param0)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = func_926(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1070356->f_17817.f_1[iVar0 /*3*/])->f_2;
}

int func_629(struct<2> Param0)
{
	return func_927(Param0);
}

int func_630(bool bParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1099294->f_16)
	{
		return 0;
	}
	if (!func_928())
	{
		return 0;
	}
	if (!func_17())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_929(&Global_0, 8);
	}
	func_929(&Global_0, 1);
	return 1;
}

void func_631(struct<2> Param0, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	vector3 vVar2;

	uVar0 = func_930(func_637(Param0));
	iVar1 = func_629(Param0);
	vVar2.f_1 = iParam3;
	vVar2.x = 0;
	vVar2.f_2 = 0;
	if (func_23() == 0)
	{
		vVar2.x = Global_265331->f_124445.f_70.f_17;
		func_931(Param0, &vVar2);
	}
	STATS::_0xD5910ECF81A2278C(uVar0, iVar1, iParam2, &vVar2);
}

void func_632(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_932(Param0);
	}
	else
	{
		func_933(Param0, iParam2);
	}
	func_934();
}

void func_633(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_935(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_936(cVar2);
			}
			else
			{
				func_937();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_634(bool bParam0)
{
	if (!bParam0 && func_938(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(752193127, bParam0, 0);
	return 1;
}

void func_635(int iParam0)
{
	Global_1900718 = (Global_1900718 || iParam0);
}

int func_636(struct<2> Param0)
{
	return func_940(func_939(Param0));
}

int func_637(var uParam0, var uParam1)
{
	return uParam0;
}

int func_638(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = func_941(Param0);
	if (func_941(Param0) < 0)
	{
		return 0;
	}
	func_942(iVar0, uParam2);
	return 1;
}

void func_639(bool bParam0)
{
	int iVar0;

	if (Global_1900670->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_23() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900670->f_2 == 4 && Global_1900670->f_12 != Global_1900670->f_13) && !bParam0)
	{
		Global_1900670->f_1 = Global_1900670->f_2;
		Global_1900670->f_12 = Global_1900670->f_13;
		func_943(iVar0, Global_1900670->f_12);
	}
	else
	{
		Global_1900670->f_1 = 0;
		Global_1900670->f_7 = iVar0;
		Global_1900670->f_8 = func_944();
		Global_1900670->f_9 = func_945(Global_1893575->f_2);
		Global_1900670->f_11 = func_946(Global_1896610->f_41);
		if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
		{
			func_947(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
		else if (Global_1900670->f_11 != -1)
		{
			func_947(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
		}
		else
		{
			func_947(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
		}
	}
	Global_1900670->f_2 = 0;
}

void func_640(int iParam0)
{
	if (Global_1182289->f_440 != 2)
	{
		return;
	}
	if (Global_1182289->f_440.f_1 == 0)
	{
		return;
	}
	Global_1182289->f_440.f_1 = 0;
	POSSE::_0xC684FF658B2E55DA(iParam0);
}

int func_641(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1185132->f_1[iParam0 /*4*/]);
}

void func_642(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_948(Global_1132968->f_4641.f_2[func_367(iParam0, 1) /*4*/]);
}

int func_643()
{
	if ((Global_1902942->f_35 == 1 && Global_1902942->f_5 >= 2) && Global_1902942->f_5 != 9)
	{
		return 1;
	}
	return 0;
}

void func_644()
{
	if (func_949())
	{
		func_950(8);
	}
}

void func_645()
{
	if (func_951())
	{
		func_950(16);
	}
}

void func_646()
{
	if (func_952())
	{
		func_950(32);
	}
}

int func_647(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

void func_648(var uParam0)
{
	func_953(uParam0, 0f);
}

bool func_649(var uParam0)
{
	return func_373(*uParam0, 2);
}

float func_650()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_651(var uParam0, int iParam1)
{
	if (uParam0->f_1)
	{
		func_954(&(uParam0->f_16), 84);
	}
}

int func_652(var uParam0)
{
	if (uParam0->f_1)
	{
		return 1;
	}
	else if (uParam0->f_10)
	{
		return 1;
	}
	else if (uParam0->f_9)
	{
		return 1;
	}
	else if (uParam0->f_4)
	{
		return 1;
	}
	else if (uParam0->f_5)
	{
		return 1;
	}
	else if (uParam0->f_3)
	{
		return 1;
	}
	else if (uParam0->f_8)
	{
		return 1;
	}
	else if (uParam0->f_6)
	{
		return 1;
	}
	else if (uParam0->f_7)
	{
		return 1;
	}
	else if (uParam0->f_11)
	{
		return 1;
	}
	else if (uParam0->f_2)
	{
		return 1;
	}
	else if (uParam0->f_12)
	{
		return 1;
	}
	return 0;
}

void func_653(var uParam0)
{
	func_955(uParam0);
	func_956(&(uParam0->f_16));
	func_957(&(uParam0->f_21));
	func_958(&(uParam0->f_22));
	func_959(&(uParam0->f_25));
	func_960(&(uParam0->f_47));
	func_961(&(uParam0->f_51));
	func_962(&(uParam0->f_54));
	func_963(&(uParam0->f_57));
}

void func_654(var uParam0)
{
	if (uParam0->f_5 && !uParam0->f_7)
	{
		func_159(uParam0, 1);
	}
}

void func_655()
{
	func_964();
	func_965();
	func_911(PLAYER::_0xDF66A37936D5F3D9(PLAYER::PLAYER_ID()));
}

void func_656(bool bParam0)
{
	int iVar0;

	if (!bParam0 && Global_1954472->f_1331.f_108)
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ATTRIBUTE::_0x103C2F885ABEB00B(iVar0, 0))
	{
		Global_1954472->f_1331.f_108.f_1 = ATTRIBUTE::_0x4C9F782180712742(iVar0, 0);
	}
	else
	{
		Global_1954472->f_1331.f_108.f_1 = 0f;
	}
	if (ATTRIBUTE::_0x103C2F885ABEB00B(iVar0, 1))
	{
		Global_1954472->f_1331.f_108.f_3 = ATTRIBUTE::_0x4C9F782180712742(iVar0, 1);
	}
	else
	{
		Global_1954472->f_1331.f_108.f_3 = 0f;
	}
	if (ATTRIBUTE::_0x103C2F885ABEB00B(iVar0, 2))
	{
		Global_1954472->f_1331.f_108.f_2 = ATTRIBUTE::_0x4C9F782180712742(iVar0, 2);
	}
	else
	{
		Global_1954472->f_1331.f_108.f_2 = 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(iVar0, 0))
	{
		Global_1954472->f_1331.f_108.f_4 = ATTRIBUTE::_0xB429F58803D285B1(iVar0, 0);
	}
	else
	{
		Global_1954472->f_1331.f_108.f_4 = 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(iVar0, 1))
	{
		Global_1954472->f_1331.f_108.f_6 = ATTRIBUTE::_0xB429F58803D285B1(iVar0, 1);
	}
	else
	{
		Global_1954472->f_1331.f_108.f_6 = 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(iVar0, 2))
	{
		Global_1954472->f_1331.f_108.f_5 = ATTRIBUTE::_0xB429F58803D285B1(iVar0, 2);
	}
	else
	{
		Global_1954472->f_1331.f_108.f_5 = 0f;
	}
	Global_1954472->f_1331.f_108 = 1;
}

struct<4> func_657(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	int iVar34;
	struct<4> Var35;

	Var0.f_9 = -1591664384;
	if (!func_966(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_967() };
		if (func_968() && INVENTORY::_0xB881CA836CC4B6D4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var29, &Var0))
		{
			func_969(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_970(PLAYER::PLAYER_ID());
	}
	bVar33 = func_971(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_972(iParam3, 0);
	if (iVar34 != 3)
	{
		if (INVENTORY::_0xB881CA836CC4B6D4(Global_17172.f_54.f_61[iVar34 /*4*/]))
		{
			Var0 = { *(Global_17172.f_54.f_61[iVar34 /*4*/]) };
		}
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		if (!bParam1)
		{
			return func_973();
		}
		if (!func_974(&Var0, 0))
		{
			Var35 = { func_975(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

var func_658(var uParam0, int iParam1)
{
	func_976(uParam0, iParam1, 0, 0);
	return Global_1903929->f_11;
}

var func_659(var uParam0, int iParam1)
{
	func_976(uParam0, iParam1, 0, 0);
	return Global_1903929->f_22;
}

int func_660(var uParam0, int iParam1)
{
	var uVar0;

	if (!func_976(uParam0, iParam1, 0, 0))
	{
	}
	if (!func_977(Global_1903929))
	{
		return 0;
	}
	uVar0 = func_978(Global_1903929->f_11, Global_1903929->f_27);
	return uVar0;
}

void func_661(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	uParam0->f_47 = uParam1;
	uParam0->f_47.f_1 = uParam2;
	uParam0->f_47.f_2 = iParam3;
	uParam0->f_47.f_3 = uParam4;
}

void func_662()
{
	func_979(&(Global_1132968->f_4641.f_445));
}

int func_663(bool bParam0)
{
	if (func_23() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

void func_664(int iParam0, int iParam1)
{
	INVENTORY::_0xA6AA9F56BC6CFF58(iParam0, iParam1);
	func_980(&(Global_1272170->f_12));
	func_980(&(Global_1272170->f_16));
}

int func_665(var uParam0)
{
	var uVar0;

	if (!func_981(32))
	{
		func_982(&(Global_1951141->f_2228));
		func_983(32);
	}
	if (uParam0->f_1 == 0)
	{
		if (!func_984(*uParam0))
		{
			if (func_981(32))
			{
				func_909(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_985(&(Global_1951141->f_2228));
		if (!func_986(&(Global_1951141->f_1538), *uParam0, &uVar0, 0, 1, 0, 0, 0))
		{
			if (func_981(32))
			{
				func_909(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1);
			}
			return 0;
		}
		func_987(&(Global_1951141->f_1538));
	}
	func_988(33, Global_1132968->f_5509.f_4, 0, 0, 0);
	Global_1132968->f_5509.f_4 = *uParam0;
	Global_1132968->f_5509 = uParam0->f_1;
	func_988(30, 0, 0, 0, 0);
	func_988(27, 0, 0, 0, 0);
	func_988(32, Global_1132968->f_5509.f_4, 0, 0, 0);
	return 1;
}

void func_666()
{
	func_166(117);
}

void func_667(var uParam0)
{
	if (uParam0->f_4)
	{
		if (uParam0->f_25 == -1)
		{
			uParam0->f_25 = func_989(0, 0);
		}
		else if (uParam0->f_25 < 1)
		{
			uParam0->f_25 = 1;
		}
		else if (uParam0->f_25 > 10)
		{
			uParam0->f_25 = 10;
		}
		if (uParam0->f_25.f_1 == -1)
		{
			uParam0->f_25.f_1 = func_989(2, 0);
		}
		else if (uParam0->f_25.f_1 < 1)
		{
			uParam0->f_25.f_1 = 1;
		}
		else if (uParam0->f_25.f_1 > 10)
		{
			uParam0->f_25.f_1 = 10;
		}
		if (uParam0->f_25.f_2 == -1)
		{
			uParam0->f_25.f_2 = func_989(1, 0);
		}
		else if (uParam0->f_25.f_2 < 1)
		{
			uParam0->f_25.f_2 = 1;
		}
		else if (uParam0->f_25.f_2 > 10)
		{
			uParam0->f_25.f_2 = 10;
		}
		if (uParam0->f_25.f_3 == -1)
		{
			uParam0->f_25.f_3 = func_990(0);
		}
		else if (uParam0->f_25.f_3 < 1)
		{
			uParam0->f_25.f_3 = 1;
		}
		else if (uParam0->f_25.f_3 > 200)
		{
			uParam0->f_25.f_3 = 200;
		}
		if (uParam0->f_25.f_4 == -1)
		{
			uParam0->f_25.f_4 = func_991(0);
		}
		else if (uParam0->f_25.f_4 < 1)
		{
			uParam0->f_25.f_4 = 1;
		}
		else if (uParam0->f_25.f_4 > 200)
		{
			uParam0->f_25.f_4 = 200;
		}
		if (uParam0->f_25.f_5 == -1)
		{
			uParam0->f_25.f_5 = func_992(0);
		}
		else if (uParam0->f_25.f_5 < 1)
		{
			uParam0->f_25.f_5 = 1;
		}
		else if (uParam0->f_25.f_5 > 200)
		{
			uParam0->f_25.f_5 = 200;
		}
	}
	if (uParam0->f_5)
	{
		if (uParam0->f_25.f_6 == -1)
		{
		}
		else if (uParam0->f_25.f_6 > 18000)
		{
			uParam0->f_25.f_6 = 18000;
		}
		if (uParam0->f_25.f_7 == -1)
		{
		}
		else if (uParam0->f_25.f_7 > 18000)
		{
			uParam0->f_25.f_7 = 18000;
		}
		if (uParam0->f_25.f_8 == -1)
		{
		}
		else if (uParam0->f_25.f_8 > 18000)
		{
			uParam0->f_25.f_8 = 18000;
		}
	}
}

void func_668()
{
	func_993();
}

int func_669(int iParam0)
{
	if (func_389(&(Global_1954472->f_1465), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_670(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	func_994(0, iParam0);
	func_994(2, iParam1);
	func_994(1, iParam2);
	iVar0 = func_995(iParam0);
	func_996(0, iVar0);
	iVar0 = func_995(iParam1);
	func_996(2, iVar0);
	iVar0 = func_995(iParam2);
	func_996(1, iVar0);
}

void func_671(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_997(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1954472->f_1446;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1954472->f_1446;
	}
	switch (iParam1)
	{
		case 0:
			Global_1954472->f_1446 = iParam0;
			break;
		case 1:
			Global_1954472->f_1465.f_136 = iParam0;
			break;
	}
}

void func_672(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_997(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1954472->f_1446.f_1;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1954472->f_1446.f_1;
	}
	switch (iParam1)
	{
		case 0:
			Global_1954472->f_1446.f_1 = iParam0;
			break;
		case 1:
			Global_1954472->f_1465.f_136.f_1 = iParam0;
			break;
	}
}

void func_673(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_997(1);
	}
	if (iParam0 < 1)
	{
		iParam0 = Global_1954472->f_1446.f_2;
	}
	else if (iParam0 > 200)
	{
		iParam0 = Global_1954472->f_1446.f_2;
	}
	switch (iParam1)
	{
		case 0:
			Global_1954472->f_1446.f_2 = iParam0;
			break;
		case 1:
			Global_1954472->f_1465.f_136.f_2 = iParam0;
			break;
	}
}

void func_674()
{
	float fVar0;

	func_994(0, func_989(0, 0));
	func_994(2, func_989(2, 0));
	func_994(1, func_989(1, 0));
	fVar0 = func_998(0, 0);
	func_996(0, BUILTIN::FLOOR(fVar0));
	fVar0 = func_998(2, 0);
	func_996(2, BUILTIN::FLOOR(fVar0));
	fVar0 = func_998(1, 0);
	func_996(1, BUILTIN::FLOOR(fVar0));
}

void func_675(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_997(2);
	}
	switch (iParam0)
	{
		case 0:
			if (iParam2 == 0)
			{
				Global_1954472->f_1331.f_81 = uParam1;
			}
			else
			{
				Global_1954472->f_1465.f_2.f_81 = uParam1;
			}
			break;
		case 2:
			if (iParam2 == 0)
			{
				Global_1954472->f_1331.f_83 = uParam1;
			}
			else
			{
				Global_1954472->f_1465.f_2.f_83 = uParam1;
			}
			break;
		case 1:
			if (iParam2 == 0)
			{
				Global_1954472->f_1331.f_82 = uParam1;
			}
			else
			{
				Global_1954472->f_1465.f_2.f_82 = uParam1;
			}
			break;
		default:
			break;
	}
}

void func_676(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	if (!func_999(iParam0, iParam2))
	{
		return;
	}
	vVar0.x = iParam0;
	vVar0.f_1 = uParam1;
	*(Global_1132968->f_5525.f_34[iParam2 /*3*/]) = { vVar0 };
}

void func_677()
{
	func_1000();
	func_1001();
}

void func_678(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	func_1002();
	func_1003();
	func_1004(&uParam0, iVar0);
	func_1005(&uParam0, iVar0);
	func_1006(&uParam0, iVar0);
	func_1007(&uParam0);
	func_1008();
	func_1009(1);
}

bool func_679(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(iParam0);
}

int func_680(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_681(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0xF4452CE83118C738(iParam0, iParam1);
}

int func_682(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_681(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_683(iParam0, 0, 0) };
	if (func_1010(iParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_1011(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_663(0), &uVar6, &Var1, iParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_683(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_1012(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_1013(iParam0);
	switch (iVar5)
	{
		case joaat("clothing"):
			Var0 = { func_684(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
			Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			break;
		case joaat("weapon"):
			Var0 = { func_1014(bParam1) };
			if (bParam2 && func_1015(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_1016(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_1016(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (func_1017(iParam0, &Var6, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("coach"):
		case joaat("horse"):
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_1018(bParam1) };
			switch (func_905(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
		case joaat("dog"):
			if (func_1019(iParam0, -1823706425))
			{
				Var0 = { func_684(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, -1838434463);
			}
			else if (func_1019(iParam0, -1483207246))
			{
				Var0 = { func_684(889965687 /* GXTEntry: "Wardrobe" */, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1911121386))
			{
				Var0 = { func_684(-1838434463 /* GXTEntry: "Camp" */, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_1019(iParam0, -1653629781))
			{
				Var0 = { func_684(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			break;
		default:
			if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -833319691))
			{
				Var28.f_9 = -1591664384;
				if (!func_1020(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (INVENTORY::_0x780C5B9AE2819807(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_1019(iParam0, -1653629781))
			{
				Var0 = { func_684(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, 1384535894);
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("character"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

struct<4> func_684(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_680(iParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_663(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_685(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_1010(iParam0, uParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_1011(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_663(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_686(var uParam0)
{
	*uParam0 = Local_2395.f_1391;
	uParam0->f_2 = -1821940596;
	uParam0->f_3 = Local_2395.f_2;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_687(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 <= -1 || iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = &Local_0.f_67[iParam0 /*40*/];
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NET_TO_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	return 1;
}

int func_688(int iParam0)
{
	int iVar0;

	if (iParam0 <= -1 || iParam0 >= 7)
	{
		return -1;
	}
	iVar0 = -1;
	switch ((Local_2395.f_1020[iParam0 /*34*/])->f_23)
	{
		case 1:
			if (!func_1021(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), 0))
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 5:
			iVar0 = 2;
			break;
		case 4:
			iVar0 = 3;
			break;
		case 7:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 5;
			break;
	}
	return iVar0;
}

void func_689(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if (((*uParam0)[iParam2 /*34*/])->f_23 != iParam1)
	{
		((*uParam0)[iParam2 /*34*/])->f_23 = iParam1;
	}
}

int func_690(int iParam0)
{
	if (!func_687(iParam0))
	{
		return 0;
	}
	if (func_864(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), 0))
	{
		return 0;
	}
	return 1;
}

void func_691(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if (((*uParam0)[iParam2 /*34*/])->f_25 != iParam1)
	{
		((*uParam0)[iParam2 /*34*/])->f_25 = iParam1;
	}
}

void func_692(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if (((*uParam0)[iParam2 /*34*/])->f_26 != iParam1)
	{
		((*uParam0)[iParam2 /*34*/])->f_26 = iParam1;
	}
}

Vector3 func_693()
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, 0f };
	switch (Local_2395.f_2)
	{
		case -1573288601:
			vVar0 = { -1963.33f, 1138.71f, 172.9959f };
			break;
	}
	return vVar0;
}

float func_694()
{
	float fVar0;

	switch (Local_2395.f_2)
	{
		case -1573288601:
			fVar0 = 0f;
			break;
	}
	return fVar0;
}

bool func_695(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_696(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
	}
	if (!func_695(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (func_1022(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_0xC239DBD9A57D2A71(1054492269, vParam2, 1, 0, 1, 1));
	}
	else if (func_1023(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_0xC239DBD9A57D2A71(-950361972, vParam2, 1, 0, 1, 1));
	}
	else if (bParam8 != 0 && VEHICLE::_0xB9D5BDDA88E1BB66(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_VEHICLE_2(iParam1, vParam2, fParam5, true, bParam6, bParam7, bParam8, bParam9));
	}
	else
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, true, bParam6, bParam7, bParam9));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

int func_697(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(0f, 0f, 0f, 0f, 0f, 0f, func_1024(bParam1, 7f, 7.5f, 4f, 4.5f, 4.3f, 4f), func_1025(bParam1, "satellite dropoff on vehicle", "satellite dropoff on foot"));
	PED::_0x7C00CFC48A782DC0(iVar0, *iParam0, func_1024(bParam1, 0f, -8f, 0f, 0f, -5f, 0f), 0f, 0f, 0f, 2, 1);
	return iVar0;
}

Vector3 func_698()
{
	vector3 vVar0;

	vVar0 = { 0f, 0f, 0f };
	switch (Local_2395.f_2)
	{
		case 2139023747:
			vVar0 = { 1357.169f, -1304.463f, 76.7606f };
			break;
		case -470215764:
			vVar0 = { 2494.148f, -1308.792f, 47.9537f };
			break;
		case -1983139019:
		case 381726250:
			vVar0 = { 2907.412f, 1309.071f, 43.9382f };
			break;
		case 2103232336:
			vVar0 = { -5531.073f, -2928.69f, -2.3609f };
			break;
		case -154861072:
			vVar0 = { -762.9695f, -1266.338f, 43.0505f };
			break;
		case -1573288601:
			vVar0 = { -1965.107f, 1135.891f, 172.7763f };
			break;
		case -809127215:
			vVar0 = { -1811.892f, -351.8727f, 163.6565f };
			break;
	}
	return vVar0;
}

float func_699()
{
	float fVar0;

	switch (Local_2395.f_2)
	{
		case 2139023747:
			fVar0 = 293.8096f;
			break;
		case -470215764:
			fVar0 = 272.1303f;
			break;
		case -1983139019:
		case 381726250:
			fVar0 = 1.8838f;
			break;
		case 2103232336:
			fVar0 = 256.3622f;
			break;
		case -154861072:
			fVar0 = 115.1669f;
			break;
		case -1573288601:
			fVar0 = 134.5537f;
			break;
		case -809127215:
			fVar0 = 277.207f;
			break;
	}
	return fVar0;
}

int func_700(var uParam0, int iParam1, vector3 vParam2, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (NETWORK::_0x0E2C3AEE6CE603B7())
	{
		return 0;
	}
	if (!func_695(iParam1))
	{
		return 0;
	}
	iVar0 = func_1026(iParam1, vParam2, iParam5, iParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
		{
			WEAPON::_0x899A04AFCC725D04(iVar0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return 1;
	}
	return 0;
}

int func_701(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (bParam2 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return 0;
	}
	if (bParam1 && PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	return 1;
}

int func_702()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_1027(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 15)
	{
		return 15;
	}
	return iVar5;
}

int func_703(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = iParam1;
	while (iVar1 >= 32)
	{
		iVar1 = (iVar1 - 32);
		iVar0++;
	}
	if (iVar0 >= 3)
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
	{
		if (!MISC::IS_BIT_SET(&(((*uParam0)[iVar2 /*17*/])->f_1[iVar0]), iVar1))
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

void func_704(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	func_1028(&iVar1, &iVar0, iParam0);
	MISC::SET_BIT(Local_0.f_361[iVar0], iVar1);
}

int func_705(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 >= Local_913.f_1)
	{
		return 0;
	}
	iVar0 = -1;
	iVar1 = 0;
	iVar2 = iParam1 + 1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
	while (func_706(iVar0) || !func_1029())
	{
		if (iVar1 > iVar2)
		{
			iVar0 = -1;
		}
		else
		{
			iVar0++;
			iVar1++;
			if (iVar0 >= iParam1)
			{
				iVar0 = 0;
			}
		}
	}
	if (iVar0 > -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1);
	while (!func_1029())
	{
		if (iVar1 > iVar2)
		{
			iVar0 = -1;
		}
		else
		{
			iVar0++;
			iVar1++;
			if (iVar0 > iParam1)
			{
				iVar0 = 0;
			}
		}
	}
	if (iVar0 > -1)
	{
		return iVar0;
	}
	return iVar0;
}

bool func_706(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	func_1028(&iVar1, &iVar0, iParam0);
	return MISC::IS_BIT_SET(&(Local_0.f_361[iVar0]), iVar1);
}

int func_707()
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;

	iVar0 = Local_0.f_360;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iVar0 /*40*/])))
	{
		return 0;
	}
	if (iVar0 >= Local_913.f_1)
	{
		return 0;
	}
	if (iVar0 >= 7)
	{
		return 0;
	}
	vVar1 = { func_804(&(Local_0.f_350[iVar0])) };
	uVar4 = func_1030(&(Local_0.f_350[iVar0]));
	iVar5 = func_1031(&(Local_0.f_350[iVar0]));
	(Local_0.f_67[iVar0 /*40*/])->f_4 = joaat("init");
	func_1032(iVar5, iVar0);
	if (func_700(Local_0.f_67[iVar0 /*40*/], func_736(), vVar1, uVar4, 1, 0, 1, 1, 1))
	{
		func_1033(&(Local_0.f_67[iVar0 /*40*/]), (Local_0.f_67[iVar0 /*40*/])->f_6);
		STATS::_0x6B1044FDC2B09101(Local_2395.f_7.f_1, NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/])));
		Local_0.f_360++;
		func_722(3, iVar0);
		return 1;
	}
	return 0;
}

struct<4> func_708(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	struct<4> Var4;

	vVar0 = { 0f, 0f, 0f };
	fVar3 = 0f;
	switch (Local_2395.f_2)
	{
		case 2139023747:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1514.836f, -1804.997f, 52.9815f };
							fVar3 = 17.0206f;
							break;
						case 1:
							vVar0 = { 1500.752f, -1815.29f, 52.9437f };
							fVar3 = 132.8386f;
							break;
						case 2:
							vVar0 = { 1524.669f, -1806.541f, 52.3398f };
							fVar3 = 312.6993f;
							break;
						case 3:
							vVar0 = { 1533.585f, -1821.619f, 51.5959f };
							fVar3 = 282.1619f;
							break;
						case 4:
							vVar0 = { 1513.518f, -1792.332f, 53.6426f };
							fVar3 = 359.0301f;
							break;
						case 5:
							vVar0 = { 1499.303f, -1804.466f, 54.0139f };
							fVar3 = 41.8741f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1337.067f, -2299.027f, 48.0877f };
							fVar3 = 185.5839f;
							break;
						case 1:
							vVar0 = { 1335.645f, -2290.635f, 47.8169f };
							fVar3 = 2.6866f;
							break;
						case 2:
							vVar0 = { 1346.554f, -2286.502f, 47.4214f };
							fVar3 = 31.628f;
							break;
						case 3:
							vVar0 = { 1329.959f, -2284.99f, 48.336f };
							fVar3 = 331.6018f;
							break;
						case 4:
							vVar0 = { 1320.854f, -2269.892f, 48.499f };
							fVar3 = 77.5452f;
							break;
						case 5:
							vVar0 = { 1317.62f, -2288.604f, 48.0758f };
							fVar3 = 88.5634f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 975.0677f, -2027.192f, 47.8451f };
							fVar3 = 226.1174f;
							break;
						case 1:
							vVar0 = { 980.3456f, -2013.598f, 47.8187f };
							fVar3 = 8.7681f;
							break;
						case 2:
							vVar0 = { 976.717f, -2035.451f, 47.8559f };
							fVar3 = 122.6928f;
							break;
						case 3:
							vVar0 = { 991.724f, -2018.611f, 46.2066f };
							fVar3 = 281.9839f;
							break;
						case 4:
							vVar0 = { 990.7664f, -2003.876f, 46.436f };
							fVar3 = 314.2335f;
							break;
						case 5:
							vVar0 = { 987.9829f, -2060.592f, 45.6442f };
							fVar3 = 357.8785f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1010.259f, -1768.291f, 50.9903f };
							fVar3 = 198.4137f;
							break;
						case 1:
							vVar0 = { 1010.177f, -1773.366f, 46.582f };
							fVar3 = 346.0927f;
							break;
						case 2:
							vVar0 = { 1009.826f, -1781.674f, 46.605f };
							fVar3 = 204.0034f;
							break;
						case 3:
							vVar0 = { 1009.353f, -1760.553f, 46.6047f };
							fVar3 = 349.4127f;
							break;
						case 4:
							vVar0 = { 1014.208f, -1743.941f, 45.5655f };
							fVar3 = 326.3365f;
							break;
						case 5:
							vVar0 = { 1034.843f, -1794.865f, 45.4987f };
							fVar3 = 236.7888f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1354.341f, -1696.844f, 67.2846f };
							fVar3 = 173.8591f;
							break;
						case 1:
							vVar0 = { 1351.732f, -1689.161f, 66.4748f };
							fVar3 = 296.9333f;
							break;
						case 2:
							vVar0 = { 1366.312f, -1703.133f, 67.035f };
							fVar3 = 266.3787f;
							break;
						case 3:
							vVar0 = { 1343.648f, -1696.144f, 68.1726f };
							fVar3 = 113.4733f;
							break;
						case 4:
							vVar0 = { 1345.914f, -1705.345f, 69.8267f };
							fVar3 = 137.4848f;
							break;
						case 5:
							vVar0 = { 1359.863f, -1690.335f, 66.5718f };
							fVar3 = 323.8889f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 825.4607f, -1914.233f, 41.5056f };
							fVar3 = 222.9966f;
							break;
						case 1:
							vVar0 = { 830.983f, -1911.663f, 41.4258f };
							fVar3 = 276.2956f;
							break;
						case 2:
							vVar0 = { 849.6296f, -1917.258f, 43.1438f };
							fVar3 = 282.1501f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1388.221f, -2079.67f, 51.5663f };
							fVar3 = 43.6713f;
							break;
						case 1:
							vVar0 = { 1384.983f, -2086.389f, 51.6047f };
							fVar3 = 123.5149f;
							break;
						case 2:
							vVar0 = { 1392.317f, -2079.243f, 51.3138f };
							fVar3 = 344.7096f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1115.025f, -1991.227f, 54.3381f };
							fVar3 = 159.6296f;
							break;
						case 1:
							vVar0 = { 1113.916f, -1989.214f, 54.3666f };
							fVar3 = 61.9787f;
							break;
						case 2:
							vVar0 = { 1110.057f, -1991.245f, 53.7992f };
							fVar3 = 234.0163f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1590.174f, -1838.024f, 51.3534f };
							fVar3 = 337.5485f;
							break;
						case 1:
							vVar0 = { 1586.073f, -1845.077f, 57.5321f };
							fVar3 = 118.2057f;
							break;
						case 2:
							vVar0 = { 1592.825f, -1856.356f, 51.3534f };
							fVar3 = 166.3988f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 845.8153f, -1498.8f, 46.1654f };
							fVar3 = 272.1098f;
							break;
						case 1:
							vVar0 = { 840.0987f, -1524.58f, 45.5197f };
							fVar3 = 245.5339f;
							break;
						case 2:
							vVar0 = { 829.4324f, -1497.236f, 45.2258f };
							fVar3 = 322.0186f;
							break;
					}
					break;
			}
			break;
		case -470215764:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2496.246f, -415.5733f, 43.3617f };
							fVar3 = 18.0443f;
							break;
						case 1:
							vVar0 = { 2493.457f, -426.5198f, 43.2534f };
							fVar3 = 185.0916f;
							break;
						case 2:
							vVar0 = { 2487.006f, -405.9165f, 40.4546f };
							fVar3 = 4.743f;
							break;
						case 3:
							vVar0 = { 2487.726f, -432.5307f, 40.6068f };
							fVar3 = 87.3248f;
							break;
						case 4:
							vVar0 = { 2480.711f, -410.6164f, 40.07f };
							fVar3 = 61.1492f;
							break;
						case 5:
							vVar0 = { 2482.325f, -423.9219f, 40.5427f };
							fVar3 = 98.0332f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1777.641f, -400.8726f, 45.9702f };
							fVar3 = 275.9256f;
							break;
						case 1:
							vVar0 = { 1781.979f, -406.4569f, 45.8052f };
							fVar3 = 210.731f;
							break;
						case 2:
							vVar0 = { 1789.623f, -404.0942f, 45.4407f };
							fVar3 = 313.0887f;
							break;
						case 3:
							vVar0 = { 1792.079f, -408.6683f, 44.7279f };
							fVar3 = 151.772f;
							break;
						case 4:
							vVar0 = { 1771.253f, -399.7135f, 46.4016f };
							fVar3 = 52.2962f;
							break;
						case 5:
							vVar0 = { 1796.375f, -421.3922f, 43.8591f };
							fVar3 = 217.2594f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2704.164f, -827.1263f, 41.3535f };
							fVar3 = 190.2017f;
							break;
						case 1:
							vVar0 = { 2710.069f, -821.8253f, 41.307f };
							fVar3 = 264.748f;
							break;
						case 2:
							vVar0 = { 2711.573f, -834.5148f, 41.4272f };
							fVar3 = 332.0651f;
							break;
						case 3:
							vVar0 = { 2694.342f, -827.8898f, 41.3178f };
							fVar3 = 208.5548f;
							break;
						case 4:
							vVar0 = { 2697.292f, -817.3975f, 41.2623f };
							fVar3 = 24.3097f;
							break;
						case 5:
							vVar0 = { 2708.2f, -844.7161f, 41.475f };
							fVar3 = 145.0926f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1872.799f, -769.3138f, 41.4736f };
							fVar3 = 0.5909f;
							break;
						case 1:
							vVar0 = { 1882.502f, -768.1407f, 41.4719f };
							fVar3 = 304.321f;
							break;
						case 2:
							vVar0 = { 1893.13f, -754.0431f, 40.6428f };
							fVar3 = 21.2678f;
							break;
						case 3:
							vVar0 = { 1877.256f, -754.9118f, 40.6195f };
							fVar3 = 180.2412f;
							break;
						case 4:
							vVar0 = { 1892.954f, -733.2559f, 41.05f };
							fVar3 = 0.0481f;
							break;
						case 5:
							vVar0 = { 1879.674f, -744.4146f, 41.0046f };
							fVar3 = 81.3634f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2132.236f, -641.4135f, 41.5769f };
							fVar3 = 91.2924f;
							break;
						case 1:
							vVar0 = { 2138.138f, -630.942f, 41.7049f };
							fVar3 = 333.8898f;
							break;
						case 2:
							vVar0 = { 2148.773f, -639.7931f, 41.5027f };
							fVar3 = 109.5794f;
							break;
						case 3:
							vVar0 = { 2153.102f, -621.8261f, 40.3371f };
							fVar3 = 66.5749f;
							break;
						case 4:
							vVar0 = { 2135.29f, -628.6968f, 40.7344f };
							fVar3 = 42.2975f;
							break;
						case 5:
							vVar0 = { 2140.039f, -645.918f, 41.3095f };
							fVar3 = 152.0109f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1780.327f, -810.1743f, 41.6042f };
							fVar3 = 87.875f;
							break;
						case 1:
							vVar0 = { 1793.938f, -825.9329f, 41.4167f };
							fVar3 = 175.2516f;
							break;
						case 2:
							vVar0 = { 1784.267f, -823.4006f, 41.7233f };
							fVar3 = 126.4825f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2372.287f, -866.6091f, 42.0625f };
							fVar3 = 199.607f;
							break;
						case 1:
							vVar0 = { 2367.851f, -857.1113f, 42.0115f };
							fVar3 = 9.4687f;
							break;
						case 2:
							vVar0 = { 2354.028f, -855.1956f, 40.8824f };
							fVar3 = 262.2177f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2098.952f, -300.7495f, 40.7219f };
							fVar3 = 126.5114f;
							break;
						case 1:
							vVar0 = { 2112.253f, -291.2435f, 40.7496f };
							fVar3 = 245.5425f;
							break;
						case 2:
							vVar0 = { 2107.487f, -278.4344f, 42.0297f };
							fVar3 = 356.0559f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2013.588f, -776.3242f, 41.8528f };
							fVar3 = 186.7821f;
							break;
						case 1:
							vVar0 = { 2024.934f, -770.0481f, 41.8314f };
							fVar3 = 239.1592f;
							break;
						case 2:
							vVar0 = { 2013.59f, -757.0114f, 40.8966f };
							fVar3 = 1.6446f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2304.809f, -346.0838f, 41.7399f };
							fVar3 = 219.308f;
							break;
						case 1:
							vVar0 = { 2309.089f, -341.1837f, 41.4784f };
							fVar3 = 238.749f;
							break;
						case 2:
							vVar0 = { 2306.073f, -336.0251f, 40.9326f };
							fVar3 = 135.7502f;
							break;
					}
					break;
			}
			break;
		case 381726250:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2542.103f, 810.0599f, 74.9698f };
							fVar3 = 117.1484f;
							break;
						case 1:
							vVar0 = { 2544.074f, 804.0596f, 75.1476f };
							fVar3 = 261.933f;
							break;
						case 2:
							vVar0 = { 2535.008f, 784.2309f, 74.2575f };
							fVar3 = 45.8279f;
							break;
						case 3:
							vVar0 = { 2551.162f, 791.5272f, 75.0805f };
							fVar3 = 181.0652f;
							break;
						case 4:
							vVar0 = { 2545.502f, 820.5071f, 74.5961f };
							fVar3 = 13.4655f;
							break;
						case 5:
							vVar0 = { 2531.062f, 797.3389f, 73.9036f };
							fVar3 = 121.8733f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2920.645f, 1378.899f, 55.2255f };
							fVar3 = 253.4611f;
							break;
						case 1:
							vVar0 = { 2923.858f, 1393.125f, 55.1851f };
							fVar3 = 64.8017f;
							break;
						case 2:
							vVar0 = { 2913.329f, 1391.551f, 58.6343f };
							fVar3 = 100.9759f;
							break;
						case 3:
							vVar0 = { 2960.951f, 1370.663f, 52.8466f };
							fVar3 = 66.3481f;
							break;
						case 4:
							vVar0 = { 2961.232f, 1378.97f, 50.2244f };
							fVar3 = 333.4575f;
							break;
						case 5:
							vVar0 = { 2894.841f, 1399.176f, 63.9417f };
							fVar3 = 141.9029f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2787.059f, 1336.744f, 70.3792f };
							fVar3 = 253.3737f;
							break;
						case 1:
							vVar0 = { 2778.879f, 1338.901f, 69.9097f };
							fVar3 = 276.8493f;
							break;
						case 2:
							vVar0 = { 2758.486f, 1333.996f, 68.9937f };
							fVar3 = 296.5949f;
							break;
						case 3:
							vVar0 = { 2750.079f, 1324.922f, 68.896f };
							fVar3 = 308.9105f;
							break;
						case 4:
							vVar0 = { 2744.083f, 1314.847f, 68.9447f };
							fVar3 = 357.9193f;
							break;
						case 5:
							vVar0 = { 2766.225f, 1342.569f, 69.4271f };
							fVar3 = 252.8623f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2627.424f, 1688.614f, 114.418f };
							fVar3 = 99.1369f;
							break;
						case 1:
							vVar0 = { 2629.098f, 1708.882f, 113.0719f };
							fVar3 = 323.6932f;
							break;
						case 2:
							vVar0 = { 2636.091f, 1699.111f, 115.0817f };
							fVar3 = 340.1408f;
							break;
						case 3:
							vVar0 = { 2625.006f, 1702.132f, 113.464f };
							fVar3 = 97.8557f;
							break;
						case 4:
							vVar0 = { 2639.555f, 1692.049f, 115.8638f };
							fVar3 = 56.7707f;
							break;
						case 5:
							vVar0 = { 2646.707f, 1700.648f, 116.4033f };
							fVar3 = 34.8764f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2787.311f, 514.3282f, 66.5908f };
							fVar3 = 171.5207f;
							break;
						case 1:
							vVar0 = { 2794.1f, 548.3551f, 66.6235f };
							fVar3 = 309.0598f;
							break;
						case 2:
							vVar0 = { 2776.248f, 534.4092f, 67.2686f };
							fVar3 = 89.485f;
							break;
						case 3:
							vVar0 = { 2785.942f, 522.0443f, 70.9843f };
							fVar3 = 191.5588f;
							break;
						case 4:
							vVar0 = { 2793.54f, 525.3322f, 67.3702f };
							fVar3 = 300.7604f;
							break;
						case 5:
							vVar0 = { 2776.974f, 522.9463f, 67.1423f };
							fVar3 = 134.2576f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2552.56f, 690.2751f, 79.3809f };
							fVar3 = 200.9846f;
							break;
						case 1:
							vVar0 = { 2534.963f, 716.2883f, 76.6033f };
							fVar3 = 353.1608f;
							break;
						case 2:
							vVar0 = { 2528.161f, 705.7253f, 76.4047f };
							fVar3 = 134.1961f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2682.272f, 913.4138f, 89.301f };
							fVar3 = 101.9489f;
							break;
						case 1:
							vVar0 = { 2677.064f, 890.1603f, 88.1818f };
							fVar3 = 177.4978f;
							break;
						case 2:
							vVar0 = { 2691.229f, 905.1601f, 90.9559f };
							fVar3 = 329.5521f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2905.097f, 1437.474f, 56.6915f };
							fVar3 = 179.5988f;
							break;
						case 1:
							vVar0 = { 2907.386f, 1451.586f, 56.7444f };
							fVar3 = 29.427f;
							break;
						case 2:
							vVar0 = { 2895.643f, 1438.681f, 56.5607f };
							fVar3 = 100.8788f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 3014.996f, 1343.94f, 41.6707f };
							fVar3 = 64.2617f;
							break;
						case 1:
							vVar0 = { 3011.782f, 1328.366f, 41.7387f };
							fVar3 = 65.0606f;
							break;
						case 2:
							vVar0 = { 3017.256f, 1354.161f, 41.7607f };
							fVar3 = 152.0743f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 2946.956f, 573.7332f, 43.5868f };
							fVar3 = 16.0192f;
							break;
						case 1:
							vVar0 = { 2955.275f, 597.7873f, 43.4136f };
							fVar3 = 44.8213f;
							break;
						case 2:
							vVar0 = { 2972.683f, 581.3096f, 43.4019f };
							fVar3 = 168.3423f;
							break;
					}
					break;
			}
			break;
		case 2103232336:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5424.692f, -3669.789f, -23.0183f };
							fVar3 = 232.0246f;
							break;
						case 1:
							vVar0 = { -5419.83f, -3645.112f, -23.1393f };
							fVar3 = 322.108f;
							break;
						case 2:
							vVar0 = { -5433.083f, -3652.728f, -23.1529f };
							fVar3 = 75.6402f;
							break;
						case 3:
							vVar0 = { -5411.81f, -3637.557f, -23.1159f };
							fVar3 = 285.262f;
							break;
						case 4:
							vVar0 = { -5396.708f, -3655.968f, -23.1167f };
							fVar3 = 269.2774f;
							break;
						case 5:
							vVar0 = { -5399.69f, -3669.607f, -23.023f };
							fVar3 = 211.8964f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -6042.013f, -3256.127f, -15.3727f };
							fVar3 = 296.5988f;
							break;
						case 1:
							vVar0 = { -6044.615f, -3268.929f, -20.0958f };
							fVar3 = 244.8894f;
							break;
						case 2:
							vVar0 = { -6017.401f, -3252.659f, -22.1478f };
							fVar3 = 259.2538f;
							break;
						case 3:
							vVar0 = { -5996.726f, -3233.114f, -22.1474f };
							fVar3 = 248.6583f;
							break;
						case 4:
							vVar0 = { -6053.581f, -3257.977f, -19.9021f };
							fVar3 = 340.0318f;
							break;
						case 5:
							vVar0 = { -6009.731f, -3260.155f, -22.6422f };
							fVar3 = 336.8328f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5520.072f, -2912.223f, -2.7295f };
							fVar3 = 71.966f;
							break;
						case 1:
							vVar0 = { -5512.906f, -2919.291f, 0.6475f };
							fVar3 = 236.3099f;
							break;
						case 2:
							vVar0 = { -5513.928f, -2902.469f, -2.7513f };
							fVar3 = 153.7765f;
							break;
						case 3:
							vVar0 = { -5540.266f, -2902.239f, -4.0241f };
							fVar3 = 6.2052f;
							break;
						case 4:
							vVar0 = { -5513.043f, -2943.114f, -3.0348f };
							fVar3 = 255.7862f;
							break;
						case 5:
							vVar0 = { -5515.182f, -2926.115f, -3.359f };
							fVar3 = 202.6036f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5828.289f, -3722.912f, -26.8572f };
							fVar3 = 323.9497f;
							break;
						case 1:
							vVar0 = { -5864.29f, -3749.133f, -25.8905f };
							fVar3 = 101.8063f;
							break;
						case 2:
							vVar0 = { -5822.076f, -3733.02f, -27.4921f };
							fVar3 = 0.9976f;
							break;
						case 3:
							vVar0 = { -5853.43f, -3757.583f, -25.9751f };
							fVar3 = 87.2032f;
							break;
						case 4:
							vVar0 = { -5834.481f, -3744.146f, -26.7597f };
							fVar3 = 39.2301f;
							break;
						case 5:
							vVar0 = { -5835.479f, -3705.791f, -26.7554f };
							fVar3 = 302.7016f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -4843.1f, -2649.693f, -12.5893f };
							fVar3 = 17.5378f;
							break;
						case 1:
							vVar0 = { -4856.37f, -2656.361f, -13.1168f };
							fVar3 = 207.7964f;
							break;
						case 2:
							vVar0 = { -4827.085f, -2667.539f, -13.5207f };
							fVar3 = 202.4101f;
							break;
						case 3:
							vVar0 = { -4849.711f, -2668.951f, -13.5659f };
							fVar3 = 202.024f;
							break;
						case 4:
							vVar0 = { -4812.022f, -2705.233f, -13.8164f };
							fVar3 = 211.0205f;
							break;
						case 5:
							vVar0 = { -4849.655f, -2714.315f, -14.6372f };
							fVar3 = 94.4884f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5209.657f, -3462.308f, -22.9748f };
							fVar3 = 65.6154f;
							break;
						case 1:
							vVar0 = { -5208.43f, -3484.55f, -22.8143f };
							fVar3 = 131.8862f;
							break;
						case 2:
							vVar0 = { -5229.941f, -3483.531f, -21.5454f };
							fVar3 = 108.6637f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5508.641f, -3054.602f, -3.6915f };
							fVar3 = 211.0461f;
							break;
						case 1:
							vVar0 = { -5525.595f, -3057.358f, -3.1306f };
							fVar3 = 56.4749f;
							break;
						case 2:
							vVar0 = { -5540.553f, -3044.959f, -2.3009f };
							fVar3 = 358.099f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -6022.786f, -3148.081f, -2.5637f };
							fVar3 = 127.6877f;
							break;
						case 1:
							vVar0 = { -6009.324f, -3142.611f, 9.7212f };
							fVar3 = 12.9387f;
							break;
						case 2:
							vVar0 = { -5988.663f, -3134.936f, -2.871f };
							fVar3 = 26.6928f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5866.676f, -2720.026f, -8.6757f };
							fVar3 = 293.3553f;
							break;
						case 1:
							vVar0 = { -5857.968f, -2734.05f, -8.3397f };
							fVar3 = 320.1053f;
							break;
						case 2:
							vVar0 = { -5873.063f, -2755.414f, -5.6745f };
							fVar3 = 235.6632f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -5551.011f, -2402.916f, -9.7466f };
							fVar3 = 200.4867f;
							break;
						case 1:
							vVar0 = { -5539.09f, -2395.507f, -10.0217f };
							fVar3 = 241.6014f;
							break;
						case 2:
							vVar0 = { -5577.439f, -2402.218f, -11.1262f };
							fVar3 = 168.4619f;
							break;
					}
					break;
			}
			break;
		case -154861072:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1975.126f, -1647.219f, 116.1353f };
							fVar3 = 258.3268f;
							break;
						case 1:
							vVar0 = { -1981.584f, -1619.811f, 117.0868f };
							fVar3 = 287.032f;
							break;
						case 2:
							vVar0 = { -1988.031f, -1594.122f, 116.1697f };
							fVar3 = 346.1126f;
							break;
						case 3:
							vVar0 = { -1991.98f, -1611.099f, 117.1152f };
							fVar3 = 109.1858f;
							break;
						case 4:
							vVar0 = { -1971.538f, -1662.767f, 116.495f };
							fVar3 = 239.5132f;
							break;
						case 5:
							vVar0 = { -1985.282f, -1644.812f, 116.0983f };
							fVar3 = 114.9008f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1170.262f, -1936.272f, 41.2959f };
							fVar3 = 153.5316f;
							break;
						case 1:
							vVar0 = { -1154.064f, -1917.983f, 41.2524f };
							fVar3 = 68.2694f;
							break;
						case 2:
							vVar0 = { -1184.381f, -1961.819f, 41.468f };
							fVar3 = 33.6398f;
							break;
						case 3:
							vVar0 = { -1204.927f, -1948.135f, 42.2597f };
							fVar3 = 21.7259f;
							break;
						case 4:
							vVar0 = { -1195.652f, -1940.257f, 42.59f };
							fVar3 = 333.8869f;
							break;
						case 5:
							vVar0 = { -1169.034f, -1913.52f, 43.5825f };
							fVar3 = 84.5862f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1359.025f, -2339.047f, 41.8264f };
							fVar3 = 150.0374f;
							break;
						case 1:
							vVar0 = { -1380.638f, -2338.435f, 41.8373f };
							fVar3 = 66.7274f;
							break;
						case 2:
							vVar0 = { -1388.471f, -2329.768f, 41.8876f };
							fVar3 = 129.5486f;
							break;
						case 3:
							vVar0 = { -1388.124f, -2310.397f, 42.6456f };
							fVar3 = 22.0638f;
							break;
						case 4:
							vVar0 = { -1400.343f, -2315.313f, 45.5993f };
							fVar3 = 91.6431f;
							break;
						case 5:
							vVar0 = { -1389.879f, -2346.02f, 42.0574f };
							fVar3 = 140.8262f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2405.436f, -2380.132f, 60.1755f };
							fVar3 = 95.784f;
							break;
						case 1:
							vVar0 = { -2377.947f, -2358.063f, 61.1794f };
							fVar3 = 221.8708f;
							break;
						case 2:
							vVar0 = { -2386.917f, -2391.858f, 60.5036f };
							fVar3 = 237.3019f;
							break;
						case 3:
							vVar0 = { -2421.78f, -2428.192f, 59.2549f };
							fVar3 = 107.0202f;
							break;
						case 4:
							vVar0 = { -2378.668f, -2423.272f, 62.0657f };
							fVar3 = 269.2876f;
							break;
						case 5:
							vVar0 = { -2342.781f, -2366.134f, 61.0928f };
							fVar3 = 331.4694f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2018.995f, -3032.742f, -10.7271f };
							fVar3 = 20.523f;
							break;
						case 1:
							vVar0 = { -2027.865f, -3024.799f, -11.0817f };
							fVar3 = 326.7342f;
							break;
						case 2:
							vVar0 = { -2005.558f, -3011.951f, -7.9992f };
							fVar3 = 335.0397f;
							break;
						case 3:
							vVar0 = { -2030.931f, -3009.199f, -8.3759f };
							fVar3 = 348.526f;
							break;
						case 4:
							vVar0 = { -2042.997f, -3007.488f, -8.4593f };
							fVar3 = 23.2057f;
							break;
						case 5:
							vVar0 = { -2018.831f, -3046.228f, -12.2055f };
							fVar3 = 5.6306f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1420.908f, -2685.73f, 39.8042f };
							fVar3 = 65.2135f;
							break;
						case 1:
							vVar0 = { -1422.117f, -2665.763f, 41.4895f };
							fVar3 = 94.5139f;
							break;
						case 2:
							vVar0 = { -1436.85f, -2684.076f, 39.6307f };
							fVar3 = 50.3682f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1814.721f, -2392.137f, 42.1581f };
							fVar3 = 31.139f;
							break;
						case 1:
							vVar0 = { -1836.254f, -2399.031f, 44.8137f };
							fVar3 = 107.0837f;
							break;
						case 2:
							vVar0 = { -1825.99f, -2418.442f, 41.568f };
							fVar3 = 178.1437f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2088.384f, -1902.796f, 112.7463f };
							fVar3 = 97.5279f;
							break;
						case 1:
							vVar0 = { -2068.237f, -1904.495f, 111.8485f };
							fVar3 = 268.2897f;
							break;
						case 2:
							vVar0 = { -2069.183f, -1887f, 111.5928f };
							fVar3 = 255.5782f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2581.847f, -1376.982f, 148.3389f };
							fVar3 = 285.9738f;
							break;
						case 1:
							vVar0 = { -2572.343f, -1359.378f, 151.0724f };
							fVar3 = 249.7027f;
							break;
						case 2:
							vVar0 = { -2551.037f, -1377.534f, 149.1154f };
							fVar3 = 299.0706f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1408.899f, -2186.334f, 42.708f };
							fVar3 = 320.3206f;
							break;
						case 1:
							vVar0 = { -1415.032f, -2214.176f, 42.3576f };
							fVar3 = 221.9935f;
							break;
						case 2:
							vVar0 = { -1414.336f, -2201.139f, 42.4092f };
							fVar3 = 241.793f;
							break;
					}
					break;
			}
			break;
		case -1573288601:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1493.746f, 1247.659f, 316.626f };
							fVar3 = 110.2786f;
							break;
						case 1:
							vVar0 = { -1502.063f, 1252.346f, 312.9523f };
							fVar3 = 113.5387f;
							break;
						case 2:
							vVar0 = { -1499.872f, 1239.605f, 311.8705f };
							fVar3 = 102.2303f;
							break;
						case 3:
							vVar0 = { -1507.979f, 1250.614f, 312.9025f };
							fVar3 = 127.6722f;
							break;
						case 4:
							vVar0 = { -1512.267f, 1243.54f, 312.2905f };
							fVar3 = 82.9311f;
							break;
						case 5:
							vVar0 = { -1514.645f, 1234.105f, 310.789f };
							fVar3 = 115.5529f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1904.697f, 1324.891f, 198.473f };
							fVar3 = 178.1938f;
							break;
						case 1:
							vVar0 = { -1887.442f, 1331.05f, 199.2019f };
							fVar3 = 163.0041f;
							break;
						case 2:
							vVar0 = { -1914.343f, 1331.859f, 202.8294f };
							fVar3 = 203.9402f;
							break;
						case 3:
							vVar0 = { -1883.203f, 1343.47f, 199.9668f };
							fVar3 = 163.3788f;
							break;
						case 4:
							vVar0 = { -1907.658f, 1348.672f, 201.263f };
							fVar3 = 185.6952f;
							break;
						case 5:
							vVar0 = { -1896.338f, 1357.386f, 202.4468f };
							fVar3 = 176.3125f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1355.485f, 2387.021f, 305.5567f };
							fVar3 = 144.8075f;
							break;
						case 1:
							vVar0 = { -1345.887f, 2404.979f, 306.0671f };
							fVar3 = 340.931f;
							break;
						case 2:
							vVar0 = { -1354.863f, 2416.639f, 306.3873f };
							fVar3 = 169.3761f;
							break;
						case 3:
							vVar0 = { -1335.882f, 2374.493f, 305.253f };
							fVar3 = 213.1103f;
							break;
						case 4:
							vVar0 = { -1333.04f, 2415.461f, 307.0699f };
							fVar3 = 236.3865f;
							break;
						case 5:
							vVar0 = { -1364.487f, 2404.849f, 306.1805f };
							fVar3 = 154.2199f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -551.4438f, 2692.278f, 318.3365f };
							fVar3 = 111.0552f;
							break;
						case 1:
							vVar0 = { -566.343f, 2702.645f, 319.2391f };
							fVar3 = 146.2004f;
							break;
						case 2:
							vVar0 = { -578.1788f, 2696.318f, 319.4971f };
							fVar3 = 145.0319f;
							break;
						case 3:
							vVar0 = { -560.9117f, 2698.618f, 318.4446f };
							fVar3 = 129.8444f;
							break;
						case 4:
							vVar0 = { -599.7551f, 2691.614f, 322.4026f };
							fVar3 = 163.2025f;
							break;
						case 5:
							vVar0 = { -569.9564f, 2670.313f, 319.1126f };
							fVar3 = 140.1331f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -414.5557f, 1748.556f, 218.2735f };
							fVar3 = 196.7161f;
							break;
						case 1:
							vVar0 = { -417.3984f, 1736.838f, 215.2631f };
							fVar3 = 203.3302f;
							break;
						case 2:
							vVar0 = { -422.0522f, 1724.197f, 215.2587f };
							fVar3 = 241.3378f;
							break;
						case 3:
							vVar0 = { -396.0677f, 1740.16f, 215.253f };
							fVar3 = 228.0825f;
							break;
						case 4:
							vVar0 = { -410.402f, 1714.166f, 215.1549f };
							fVar3 = 225.2057f;
							break;
						case 5:
							vVar0 = { -393.7321f, 1721.262f, 215.0824f };
							fVar3 = 184.9072f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1635.46f, 1216.509f, 351.4236f };
							fVar3 = 30.1849f;
							break;
						case 1:
							vVar0 = { -1632.213f, 1229.244f, 350.9349f };
							fVar3 = 111.3917f;
							break;
						case 2:
							vVar0 = { -1630.01f, 1222.731f, 350.6895f };
							fVar3 = 85.4213f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1958.631f, 2159.651f, 326.1666f };
							fVar3 = 274.4594f;
							break;
						case 1:
							vVar0 = { -1933.233f, 2182.011f, 322.0478f };
							fVar3 = 278.775f;
							break;
						case 2:
							vVar0 = { -1921.19f, 2168.862f, 319.2313f };
							fVar3 = 290.2664f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1575.405f, 3124.052f, 473.589f };
							fVar3 = 227.0358f;
							break;
						case 1:
							vVar0 = { -1548.271f, 3095.831f, 475.8606f };
							fVar3 = 262.0096f;
							break;
						case 2:
							vVar0 = { -1537.886f, 3112.182f, 476.2427f };
							fVar3 = 179.7528f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -975.14f, 2187.308f, 339.5475f };
							fVar3 = 33.5496f;
							break;
						case 1:
							vVar0 = { -949.3162f, 2196.347f, 340.5065f };
							fVar3 = 55.5737f;
							break;
						case 2:
							vVar0 = { -951.804f, 2174.82f, 340.6268f };
							fVar3 = 50.3167f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1004.758f, 1679.81f, 237.5389f };
							fVar3 = 192.8022f;
							break;
						case 1:
							vVar0 = { -1047.167f, 1638.153f, 242.7527f };
							fVar3 = 154.5566f;
							break;
						case 2:
							vVar0 = { -964.7531f, 1629.641f, 246.1476f };
							fVar3 = 202.1798f;
							break;
					}
					break;
			}
			break;
		case -1983139019:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1919.547f, 1962.852f, 261.8922f };
							fVar3 = 79.5327f;
							break;
						case 1:
							vVar0 = { 1938.176f, 1963.839f, 262.3492f };
							fVar3 = 289.004f;
							break;
						case 2:
							vVar0 = { 1963.246f, 1952.842f, 255.795f };
							fVar3 = 310.0172f;
							break;
						case 3:
							vVar0 = { 1937.31f, 1953.04f, 265.0806f };
							fVar3 = 16.6196f;
							break;
						case 4:
							vVar0 = { 1929.283f, 1942.237f, 264.7864f };
							fVar3 = 93.1248f;
							break;
						case 5:
							vVar0 = { 1957.905f, 1972.143f, 258.327f };
							fVar3 = 212.8568f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 136.5897f, 1816.72f, 198.0172f };
							fVar3 = 312.9037f;
							break;
						case 1:
							vVar0 = { 107.6334f, 1809.477f, 200.8272f };
							fVar3 = 67.9633f;
							break;
						case 2:
							vVar0 = { 110.8919f, 1832.54f, 200.6452f };
							fVar3 = 27.9861f;
							break;
						case 3:
							vVar0 = { 157.4484f, 1850.318f, 199.7108f };
							fVar3 = 257.86f;
							break;
						case 4:
							vVar0 = { 155.9167f, 1799.949f, 200.4845f };
							fVar3 = 121.0841f;
							break;
						case 5:
							vVar0 = { 129.9211f, 1837.657f, 199.5524f };
							fVar3 = 350.0315f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 352.2282f, 1461.902f, 182.7836f };
							fVar3 = 230.6504f;
							break;
						case 1:
							vVar0 = { 375.4702f, 1466.297f, 178.5047f };
							fVar3 = 199.7316f;
							break;
						case 2:
							vVar0 = { 356.3458f, 1487.246f, 178.8775f };
							fVar3 = 184.9862f;
							break;
						case 3:
							vVar0 = { 333.2953f, 1485.879f, 178.5664f };
							fVar3 = 274.8094f;
							break;
						case 4:
							vVar0 = { 361.9592f, 1477.832f, 179.0363f };
							fVar3 = 156.3092f;
							break;
						case 5:
							vVar0 = { 352.1274f, 1498.898f, 182.3254f };
							fVar3 = 168.1974f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 192.7915f, 975.1652f, 189.491f };
							fVar3 = 155.828f;
							break;
						case 1:
							vVar0 = { 207.6418f, 965.1176f, 189.7494f };
							fVar3 = 130.9195f;
							break;
						case 2:
							vVar0 = { 232.2335f, 992.6051f, 188.653f };
							fVar3 = 303.2896f;
							break;
						case 3:
							vVar0 = { 199.0457f, 1010.909f, 188.118f };
							fVar3 = 343.778f;
							break;
						case 4:
							vVar0 = { 217.2848f, 1009.722f, 188.1227f };
							fVar3 = 347.1534f;
							break;
						case 5:
							vVar0 = { 224.6208f, 979.3862f, 189.7148f };
							fVar3 = 72.0783f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1582.081f, 2194.556f, 322.8494f };
							fVar3 = 188.1385f;
							break;
						case 1:
							vVar0 = { 1617.941f, 2218.655f, 323.0164f };
							fVar3 = 202.7542f;
							break;
						case 2:
							vVar0 = { 1636.166f, 2197.86f, 319.0998f };
							fVar3 = 186.1312f;
							break;
						case 3:
							vVar0 = { 1594.414f, 2172.619f, 321.5459f };
							fVar3 = 255.2039f;
							break;
						case 4:
							vVar0 = { 1583.123f, 2162.305f, 318.2654f };
							fVar3 = 154.8259f;
							break;
						case 5:
							vVar0 = { 1637.013f, 2149.457f, 314.9684f };
							fVar3 = 214.2432f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 554.4691f, 1716.083f, 185.924f };
							fVar3 = 312.6009f;
							break;
						case 1:
							vVar0 = { 572.3603f, 1688.104f, 186.6339f };
							fVar3 = 310.0391f;
							break;
						case 2:
							vVar0 = { 550.4553f, 1698.799f, 184.7382f };
							fVar3 = 273.4677f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1971.484f, 1194.838f, 170.9499f };
							fVar3 = 14.1604f;
							break;
						case 1:
							vVar0 = { 1971.893f, 1214.184f, 175.0207f };
							fVar3 = 58.9199f;
							break;
						case 2:
							vVar0 = { 1996.232f, 1179.471f, 169.9125f };
							fVar3 = 265.7923f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -18.9909f, 1216.103f, 172.5429f };
							fVar3 = 199.7531f;
							break;
						case 1:
							vVar0 = { -40.5361f, 1235.171f, 171.3429f };
							fVar3 = 355.8777f;
							break;
						case 2:
							vVar0 = { -43.3037f, 1213.736f, 171.111f };
							fVar3 = 116.7676f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 303.963f, 1570.978f, 126.9599f };
							fVar3 = 318.4372f;
							break;
						case 1:
							vVar0 = { 294.4499f, 1558.783f, 125.3673f };
							fVar3 = 122.651f;
							break;
						case 2:
							vVar0 = { 333.4012f, 1567.172f, 129.9671f };
							fVar3 = 309.4404f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { 1727.365f, 1495.906f, 147.9468f };
							fVar3 = 292.528f;
							break;
						case 1:
							vVar0 = { 1700.307f, 1525.784f, 145.8522f };
							fVar3 = 14.0046f;
							break;
						case 2:
							vVar0 = { 1738.725f, 1518.055f, 151.2234f };
							fVar3 = 278.1904f;
							break;
					}
					break;
			}
			break;
		case -809127215:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2212.414f, 724.7089f, 126.7515f };
							fVar3 = 216.0411f;
							break;
						case 1:
							vVar0 = { -2205.892f, 711.4239f, 121.2721f };
							fVar3 = 222.4545f;
							break;
						case 2:
							vVar0 = { -2198.826f, 730.3317f, 121.7752f };
							fVar3 = 197.2918f;
							break;
						case 3:
							vVar0 = { -2190.371f, 716.6243f, 121.2721f };
							fVar3 = 193.302f;
							break;
						case 4:
							vVar0 = { -2196.507f, 693.5999f, 120.4955f };
							fVar3 = 180.2055f;
							break;
						case 5:
							vVar0 = { -2206.56f, 742.9479f, 122.3204f };
							fVar3 = 29.632f;
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -607.9711f, -42.1078f, 83.9972f };
							fVar3 = 281.0863f;
							break;
						case 1:
							vVar0 = { -607.9169f, -58.2932f, 83.1622f };
							fVar3 = 50.8448f;
							break;
						case 2:
							vVar0 = { -630.7858f, -53.9832f, 81.8795f };
							fVar3 = 10.797f;
							break;
						case 3:
							vVar0 = { -641.6675f, -29.3282f, 84.1562f };
							fVar3 = 82.0661f;
							break;
						case 4:
							vVar0 = { -620.4811f, -26.2202f, 84.6041f };
							fVar3 = 52.0213f;
							break;
						case 5:
							vVar0 = { -653.2048f, -66.5478f, 80.5644f };
							fVar3 = 200.4979f;
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1590.753f, -908.2404f, 84.7165f };
							fVar3 = 286.0064f;
							break;
						case 1:
							vVar0 = { -1573.325f, -903.2086f, 83.4278f };
							fVar3 = 294.1614f;
							break;
						case 2:
							vVar0 = { -1595.629f, -883.1f, 85.49f };
							fVar3 = 17.0228f;
							break;
						case 3:
							vVar0 = { -1567.437f, -942.5165f, 83.1093f };
							fVar3 = 256.9207f;
							break;
						case 4:
							vVar0 = { -1581.672f, -937.3138f, 82.8151f };
							fVar3 = 113.6031f;
							break;
						case 5:
							vVar0 = { -1553.918f, -917.5023f, 88.4726f };
							fVar3 = 316.1617f;
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2332.773f, 84.5654f, 218.5944f };
							fVar3 = 143.0953f;
							break;
						case 1:
							vVar0 = { -2326.548f, 95.2195f, 231.1443f };
							fVar3 = 188.7994f;
							break;
						case 2:
							vVar0 = { -2310.594f, 79.5418f, 228.2424f };
							fVar3 = 110.4288f;
							break;
						case 3:
							vVar0 = { -2321.665f, 63.857f, 221.4385f };
							fVar3 = 103.651f;
							break;
						case 4:
							vVar0 = { -2340.927f, 52.6407f, 215.7958f };
							fVar3 = 80.0317f;
							break;
						case 5:
							vVar0 = { -2303.04f, 65.9811f, 228.5248f };
							fVar3 = 242.1705f;
							break;
					}
					break;
				case 4:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1836.077f, -608.805f, 153.6917f };
							fVar3 = 300.1749f;
							break;
						case 1:
							vVar0 = { -1822.246f, -580.6246f, 154.9772f };
							fVar3 = 242.0027f;
							break;
						case 2:
							vVar0 = { -1835.114f, -590.6755f, 153.8214f };
							fVar3 = 248.1481f;
							break;
						case 3:
							vVar0 = { -1807.424f, -618.5132f, 151.6348f };
							fVar3 = 281.7111f;
							break;
						case 4:
							vVar0 = { -1822.605f, -626.1582f, 154.0592f };
							fVar3 = 184.039f;
							break;
						case 5:
							vVar0 = { -1796.826f, -594.5966f, 153.8835f };
							fVar3 = 243.1725f;
							break;
					}
					break;
				case 5:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1488.443f, -785.7723f, 102.0716f };
							fVar3 = 197.1793f;
							break;
						case 1:
							vVar0 = { -1495.627f, -774.0913f, 103.6215f };
							fVar3 = 348.8232f;
							break;
						case 2:
							vVar0 = { -1521.704f, -789.0545f, 103.7958f };
							fVar3 = 158.4652f;
							break;
					}
					break;
				case 6:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1088.406f, -574.983f, 81.4097f };
							fVar3 = 247.4455f;
							break;
						case 1:
							vVar0 = { -1109.303f, -564.1469f, 85.8275f };
							fVar3 = 36.7213f;
							break;
						case 2:
							vVar0 = { -1093.041f, -570.4258f, 83.9186f };
							fVar3 = 52.1114f;
							break;
					}
					break;
				case 7:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -2314.908f, -470.9828f, 143.9977f };
							fVar3 = 5.0725f;
							break;
						case 1:
							vVar0 = { -2312.777f, -496.4884f, 143.0945f };
							fVar3 = 168.7724f;
							break;
						case 2:
							vVar0 = { -2297.21f, -450.67f, 147.3692f };
							fVar3 = 154.0679f;
							break;
					}
					break;
				case 8:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1819.164f, 651.6089f, 130.3378f };
							fVar3 = 242.6035f;
							break;
						case 1:
							vVar0 = { -1806.748f, 662.5937f, 131.4437f };
							fVar3 = 205.6212f;
							break;
						case 2:
							vVar0 = { -1827.652f, 635.7844f, 129.869f };
							fVar3 = 53.5741f;
							break;
					}
					break;
				case 9:
					switch (iParam1)
					{
						case 0:
							vVar0 = { -1304.592f, 373.7722f, 95.3481f };
							fVar3 = 316.2443f;
							break;
						case 1:
							vVar0 = { -1333.795f, 388.0508f, 96.2528f };
							fVar3 = 73.6293f;
							break;
						case 2:
							vVar0 = { -1293.587f, 416.8573f, 98.8259f };
							fVar3 = 241.8883f;
							break;
					}
					break;
			}
			break;
	}
	Var4 = { vVar0 };
	Var4.f_3 = fVar3;
	return Var4;
}

void func_709(int iParam0, int iParam1, vector3 vParam2, var uParam5)
{
	int iVar0;

	if (func_700((Local_0.f_67[iParam0 /*40*/])->f_20[iParam1 /*3*/], func_736(), vParam2, vParam2.f_3, 1, 0, 1, 1, 1))
	{
		iVar0 = NETWORK::NET_TO_PED(&((Local_0.f_67[iParam0 /*40*/])->f_20[iParam1 /*3*/]));
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iVar0, vParam2, 3f, 0, 0, 0);
		PED::SET_PED_COMBAT_ABILITY(iVar0, 2);
		ENTITY::_SET_ENTITY_HEALTH(iVar0, 100, 0);
	}
}

void func_710(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iParam0 /*40*/])))
	{
		return;
	}
	if (func_864(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), 0))
	{
		return;
	}
	(Local_0.f_67[iParam0 /*40*/])->f_9 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_1034(), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_0.f_67[iParam0 /*40*/])), true, false), true);
}

void func_711(int iParam0)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iParam0 /*40*/])))
	{
		return;
	}
	if (!func_723(262144, iParam0))
	{
		if (func_853(262144, iParam0, 1))
		{
			Local_0.f_1 = (Local_0.f_1 - 1);
			func_715(262144, iParam0);
		}
	}
	if (func_723(2, iParam0) || func_723(262144, iParam0))
	{
		return;
	}
	if (func_853(2, iParam0, 1))
	{
		Local_0.f_2++;
		Local_0.f_1 = (Local_0.f_1 - 1);
		func_715(2, iParam0);
		func_722(4, iParam0);
	}
	else if (func_864(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), 0))
	{
		if (!func_723(4, iParam0))
		{
			func_720(Local_913.f_80[iParam0]);
			func_1035(&Local_913, iParam0);
		}
		func_715(4, iParam0);
	}
	if (!func_723(65536, iParam0))
	{
		if (func_864(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), 0) || func_1036(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]))))
		{
			Local_0.f_3++;
			func_715(65536, iParam0);
		}
	}
	else if (!func_864(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), 0) && !func_1036(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]))))
	{
		Local_0.f_3 = (Local_0.f_3 - 1);
		func_716(65536, iParam0);
	}
}

void func_712(int iParam0)
{
	if (func_1037(&Local_368, 524288, iParam0))
	{
		if (!func_723(524288, iParam0))
		{
			func_715(524288, iParam0);
		}
	}
	else if (func_723(524288, iParam0))
	{
		func_716(524288, iParam0);
	}
}

int func_713(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_714();
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_701(iVar1, 1, 1))
		{
			if (bParam2 && func_78(&((Local_368[iVar1 /*17*/])->f_5[iParam1]), 131072))
			{
			}
			else if (func_78(&((Local_368[iVar1 /*17*/])->f_5[iParam1]), iParam0))
			{
				iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_714()
{
	return 255;
}

void func_715(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!func_78(&(Local_0.f_13[iParam1]), iParam0))
	{
		func_146(Local_0.f_13[iParam1], iParam0);
	}
}

void func_716(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_78(&(Local_0.f_13[iParam1]), iParam0))
	{
		func_423(Local_0.f_13[iParam1], iParam0);
	}
}

void func_717(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_605(Local_0.f_348, iParam0))
	{
		func_606(&(Local_0.f_348), iParam0);
	}
}

void func_718(var uParam0, int iParam1)
{
	switch ((uParam0->f_67[iParam1 /*40*/])->f_4)
	{
		case joaat("init"):
			func_1038(uParam0, iParam1);
			break;
		case joaat("combat"):
			func_1039(uParam0, iParam1);
			break;
		case -1700571062:
			func_1040(uParam0, iParam1);
			break;
		case joaat("injured"):
			func_1041(uParam0, iParam1);
			break;
		case 1324097645:
			func_1042(uParam0, iParam1);
			break;
		case 1866880973:
			func_1043(uParam0, iParam1);
			break;
		case 1417941668: /* GXTEntry: "Cover To Cover" */
			func_1044(uParam0, iParam1);
			break;
		case joaat("low"):
			func_1045(uParam0, iParam1);
			break;
		case joaat("high"):
			func_1046(uParam0, iParam1);
			break;
		case joaat("flee"):
			func_1047(uParam0, iParam1);
			break;
		case joaat("hide"):
			func_1048(uParam0, iParam1);
			break;
	}
}

void func_719(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_720(&iVar0);
}

void func_720(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

int func_721(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_701(iVar0, 1, 1))
		{
			if (bParam2 && func_78(&((Local_368[iVar0 /*17*/])->f_5[iParam1]), 131072))
			{
			}
			else if (!func_78(&((Local_368[iVar0 /*17*/])->f_5[iParam1]), iParam0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_722(int iParam0, int iParam1)
{
	if ((Local_0.f_67[iParam1 /*40*/])->f_7 != iParam0)
	{
		(Local_0.f_67[iParam1 /*40*/])->f_7 = iParam0;
	}
}

bool func_723(int iParam0, int iParam1)
{
	return func_78(&(Local_0.f_13[iParam1]), iParam0);
}

float func_724(var uParam0)
{
	float fVar0;
	int iVar1;

	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if ((uParam0->f_210[iVar1 /*23*/])->f_5 > fVar0)
		{
			fVar0 = (uParam0->f_210[iVar1 /*23*/])->f_5;
		}
		iVar1++;
	}
	return fVar0;
}

int func_725(int iParam0)
{
	if (iParam0 == 255)
	{
		return 0;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	Local_2152.f_10 = iParam0;
	return 1;
}

void func_726(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_727(int iParam0)
{
	struct<6> Var0;

	Var0.f_1 = 255;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_5 = -1;
	*(Global_1102099->f_34.f_353[iParam0 /*6*/]) = { Var0 };
	((*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])->f_97 = 0;
}

void func_728(int iParam0)
{
	struct<11> Var0;
	vector3 vVar11;

	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26832), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26836), iParam0);
	(Global_1102099->f_34[iParam0 /*11*/])->f_6 = 0;
	Var0 = 4;
	*(Global_1102099->f_34[iParam0 /*11*/]) = { Var0 };
	func_1049(iParam0);
	vVar11 = 255;
	*((*(*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])[iParam0 /*3*/]) = { vVar11 };
	if ((!func_1050() || !func_1051()) || Global_1572887->f_6)
	{
		func_614(MISC::_CREATE_VAR_STRING(2, "PARLEY_TICKER_END_DC"), -2, 0, 0, 0, 1);
	}
	if (!func_1052(&((Global_1102099->f_34[iParam0 /*11*/])->f_8), 256))
	{
		if (func_1053(Global_1102099->f_34.f_774) < 2 || Global_1102099->f_34.f_778 != 255)
		{
			func_1054(&(Global_1102099->f_34.f_773), 64);
		}
		else
		{
			func_1054(&(Global_1102099->f_34.f_773), 32);
		}
		Global_1102099->f_34.f_774 = Global_1275573->f_21;
	}
}

void func_729(int iParam0, bool bParam1)
{
	int iVar0;
	struct<11> Var1;
	vector3 vVar12;
	var uVar15;
	struct<6> Var16;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!(Global_1102099->f_34[iVar0 /*11*/])->f_6)
	{
		return;
	}
	func_1055(iParam0);
	func_918(iParam0);
	func_919(iParam0);
	func_1056(&((Global_1102099->f_34[iVar0 /*11*/])->f_8), 2);
	func_1049(iVar0);
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Global_1102099->f_34.f_546[iVar0 /*7*/]) == iParam0 && !func_1052(&((Global_1102099->f_34[iVar0 /*11*/])->f_8), 256))
	{
		if (func_1053(Global_1102099->f_34.f_774) < 2 || Global_1102099->f_34.f_778 != 255)
		{
			func_1054(&(Global_1102099->f_34.f_773), 64);
		}
		else
		{
			func_1054(&(Global_1102099->f_34.f_773), 32);
			Global_1102099->f_34.f_778 = iParam0;
		}
		Global_1102099->f_34.f_774 = Global_1275573->f_21;
		func_614(MISC::_CREATE_VAR_STRING(10, "PARLEY_TICKER_END", func_526(PLAYER::GET_PLAYER_NAME(iParam0), func_525(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
	}
	Var1 = 4;
	*(Global_1102099->f_34[iVar0 /*11*/]) = { Var1 };
	vVar12 = 255;
	*((*(*Global_1266476)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/])[iVar0 /*3*/]) = { vVar12 };
	if (!bParam1)
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&uVar15, iVar0);
	Var16.f_5 = PLAYER::PLAYER_ID();
	Var16.f_4 = 5;
	func_1057(&Var16, &uVar15);
}

bool func_730(int iParam0)
{
	if (((*Global_1266476)[iParam0 /*98*/])->f_97)
	{
		return ((*Global_1266476)[iParam0 /*98*/])->f_97;
	}
	return &(Global_1102099->f_34.f_353[iParam0 /*6*/]);
}

int func_731(vector3 vParam0, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;

	if (!func_153(Local_2395.f_1332))
	{
		return 0;
	}
	if (!func_114())
	{
		return 0;
	}
	func_1058(-276653911, &fVar0, &fVar1, &fVar2);
	GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(fVar0, fVar1, fVar2);
	if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_fme_smoke_puff_tint", vParam0, 0f, 0f, 0f, fParam3, false, false, false))
	{
		return 1;
	}
	return 0;
}

void func_732()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	struct<14> Var6;
	struct<14> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	func_1059();
	iVar1 = INVENTORY::_0x80D78BDC9D88EF07(INVENTORY::_0x13D234A2A3F66E63(Global_34), "ALL WEAPONS", -1591664384, &iVar0);
	if (iVar1 < 0 || iVar0 <= 0)
	{
		INVENTORY::_0x42A2F33A1942E865(iVar1);
		return;
	}
	if (func_1060(&iVar2, &iVar3))
	{
		func_1061(iVar2, iVar3, 0);
	}
	bVar4 = false;
	iVar5 = func_492();
	Var6.f_9 = -1591664384;
	Var20.f_9 = -1591664384;
	iVar37 = -1;
	iVar38 = -1;
	iVar39 = -1;
	iVar40 = -1;
	iVar41 = -1;
	iVar42 = -1;
	iVar43 = -1;
	iVar34 = 0;
	while (iVar34 <= (iVar0 - 1))
	{
		Var6 = { Var20 };
		if (INVENTORY::_0x82FA24C3D3FCD9B7(iVar1, iVar34, &Var6))
		{
			if (iVar5 != 0 && Var6.f_4 == iVar5)
			{
				bVar4 = true;
			}
			if (WEAPON::_0x705BE297EEBDB95D(Var6.f_4) && WEAPON::_0xF29A186ED428B552(Global_34, Var6.f_4))
			{
				if (WEAPON::_0xC212F1D05A8232BB(Var6.f_4))
				{
					iVar37 = func_1062(1681219929 /* GXTEntry: "Revolver Cartridges - Regular" */, 0, 0, 0);
					iVar37 = (iVar37 + func_1062(1232099469 /* GXTEntry: "Revolver Cartridges - Express" */, 0, 0, 0));
					iVar37 = (iVar37 + func_1062(78180283 /* GXTEntry: "Revolver Cartridges - Explosive" */, 0, 0, 0));
					iVar37 = (iVar37 + func_1062(-2084181920 /* GXTEntry: "Revolver Cartridges - High Velocity" */, 0, 0, 0));
					iVar37 = (iVar37 + func_1062(1243983880 /* GXTEntry: "Revolver Cartridges - Split Point" */, 0, 0, 0));
					iVar35 = (iVar35 + iVar37);
				}
				else if (WEAPON::_0xDDC64F5E31EEDAB6(Var6.f_4))
				{
					iVar38 = func_1062(joaat("ammo_pistol"), 0, 0, 0);
					iVar38 = (iVar38 + func_1062(836939099 /* GXTEntry: "Pistol Cartridges - Express" */, 0, 0, 0));
					iVar38 = (iVar38 + func_1062(1185302722 /* GXTEntry: "Pistol Cartridges - Explosive" */, 0, 0, 0));
					iVar38 = (iVar38 + func_1062(-1411815376 /* GXTEntry: "Pistol Cartridges - High Velocity" */, 0, 0, 0));
					iVar38 = (iVar38 + func_1062(236338048 /* GXTEntry: "Pistol Cartridges - Split Point" */, 0, 0, 0));
					iVar35 = (iVar35 + iVar38);
				}
				else if (WEAPON::_0xDDB2578E95EF7138(Var6.f_4))
				{
					iVar39 = func_1062(-1330115686 /* GXTEntry: "Repeater Cartridges - Regular" */, 0, 0, 0);
					iVar39 = (iVar39 + func_1062(-578347576 /* GXTEntry: "Repeater Cartridges - Express" */, 0, 0, 0));
					iVar39 = (iVar39 + func_1062(-1668585578 /* GXTEntry: "Repeater Cartridges - Explosive" */, 0, 0, 0));
					iVar39 = (iVar39 + func_1062(231465488 /* GXTEntry: "Repeater Cartridges - High Velocity" */, 0, 0, 0));
					iVar39 = (iVar39 + func_1062(1148521608 /* GXTEntry: "Repeater Cartridges - Split Point" */, 0, 0, 0));
					iVar36 = (iVar36 + iVar39);
				}
				else if (Var6.f_4 == joaat("weapon_rifle_varmint"))
				{
					iVar40 = func_1062(2113196069, 0, 0, 0);
					iVar36 = (iVar36 + iVar40);
				}
				else if (WEAPON::_0x0A82317B7EBFC420(Var6.f_4) || WEAPON::_0x6AD66548840472E5(Var6.f_4))
				{
					iVar41 = func_1062(joaat("ammo_rifle"), 0, 0, 0);
					iVar41 = (iVar41 + func_1062(1654725195 /* GXTEntry: "Rifle Cartridges - Express" */, 0, 0, 0));
					iVar41 = (iVar41 + func_1062(1838310467 /* GXTEntry: "Rifle Cartridges - Explosive" */, 0, 0, 0));
					iVar41 = (iVar41 + func_1062(1858824185 /* GXTEntry: "Rifle Cartridges - High Velocity" */, 0, 0, 0));
					iVar41 = (iVar41 + func_1062(200254898 /* GXTEntry: "Rifle Cartridges - Split Point" */, 0, 0, 0));
					iVar36 = (iVar36 + iVar41);
				}
				else if (WEAPON::_0xC75386174ECE95D5(Var6.f_4))
				{
					iVar42 = func_1062(joaat("ammo_shotgun"), 0, 0, 0);
					iVar42 = (iVar42 + func_1062(-1077205471 /* GXTEntry: "Shotgun Shells - Buckshot Incendiary" */, 0, 0, 0));
					iVar42 = (iVar42 + func_1062(314966081 /* GXTEntry: "Shotgun - Slug" */, 0, 0, 0));
					iVar42 = (iVar42 + func_1062(588559146 /* GXTEntry: "Shotgun Slugs - Explosive" */, 0, 0, 0));
					if (Var6.f_4 == joaat("weapon_shotgun_sawedoff"))
					{
						iVar35 = (iVar35 + iVar42);
					}
					else
					{
						iVar36 = (iVar36 + iVar42);
					}
				}
				else if (func_1063(Var6.f_4))
				{
					iVar43 = func_1062(954660191 /* GXTEntry: "Arrows" */, 0, 0, 0);
					iVar43 = (iVar43 + func_1062(-1040876935 /* GXTEntry: "Arrow - Dynamite" */, 0, 0, 0));
					iVar43 = (iVar43 + func_1062(296901449 /* GXTEntry: "Arrow - Fire" */, 0, 0, 0));
					iVar43 = (iVar43 + func_1062(-1841822177 /* GXTEntry: "Arrow - Improved" */, 0, 0, 0));
					iVar43 = (iVar43 + func_1062(126245522 /* GXTEntry: "Arrow - Poison" */, 0, 0, 0));
					iVar43 = (iVar43 + func_1062(1657716792 /* GXTEntry: "Arrow - Tracking" */, 0, 0, 0));
					iVar36 = (iVar36 + iVar43);
				}
			}
		}
		iVar34++;
	}
	if (iVar37 >= 0)
	{
		iVar44 = 30;
		if (iVar35 < iVar44)
		{
			func_1061(1681219929 /* GXTEntry: "Revolver Cartridges - Regular" */, (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar38 >= 0)
	{
		iVar44 = 20;
		if (iVar35 < iVar44)
		{
			func_1061(joaat("ammo_pistol"), (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar39 >= 0)
	{
		iVar44 = 20;
		if (iVar36 < iVar44)
		{
			func_1061(-1330115686 /* GXTEntry: "Repeater Cartridges - Regular" */, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar41 >= 0)
	{
		iVar44 = 10;
		if (iVar36 < iVar44)
		{
			func_1061(joaat("ammo_rifle"), (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar40 >= 0)
	{
		iVar44 = 10;
		if (iVar36 < iVar44)
		{
			func_1061(2113196069, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	if (iVar42 >= 0)
	{
		iVar44 = 6;
		if (!WEAPON::_0xF29A186ED428B552(Global_34, joaat("weapon_shotgun_sawedoff")))
		{
			if (iVar36 < iVar44)
			{
				func_1061(joaat("ammo_shotgun"), (iVar44 - iVar36), 0);
				iVar36 = iVar44;
			}
		}
		else if (iVar35 < iVar44)
		{
			func_1061(joaat("ammo_shotgun"), (iVar44 - iVar35), 0);
			iVar35 = iVar44;
		}
	}
	if (iVar43 >= 0)
	{
		iVar44 = 5;
		if (iVar36 < iVar44)
		{
			func_1061(954660191 /* GXTEntry: "Arrows" */, (iVar44 - iVar36), 0);
			iVar36 = iVar44;
		}
	}
	INVENTORY::_0x42A2F33A1942E865(iVar1);
	if (iVar5 != 0)
	{
		if (!bVar4 || !WEAPON::_0xF29A186ED428B552(Global_34, iVar5))
		{
			if (func_1064(iVar5) && !func_134(8388608))
			{
				func_43(8388608);
			}
		}
	}
}

void func_733()
{
	func_1065(0);
}

bool func_734()
{
	return Global_1939231->f_1;
}

void func_735()
{
	Global_1939231->f_12 = 1;
}

int func_736()
{
	return joaat("a_m_m_unigunslinger_01");
}

bool func_737()
{
	return (Global_1275565->f_2.f_1 == 2 || Global_1275565->f_2.f_1 == 1);
}

int func_738(int iParam0, struct<2> Param1, var uParam3)
{
	struct<2> Var0;

	if (func_16(Param1, 0, 128))
	{
		return 0;
	}
	func_745(iParam0, Param1);
	if (iParam0 == -1)
	{
		return 0;
	}
	if ((Global_1185132->f_66[iParam0 /*20*/])->f_3 == -1)
	{
		return 0;
	}
	if (func_18(iParam0, 32))
	{
		return 1;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
	else if (!func_357(Param1))
	{
		return 0;
	}
	else if (func_358(Param1))
	{
		return 0;
	}
	Var0 = { func_152() };
	if (func_73(Var0) && !func_74(Var0, Param1))
	{
		return 0;
	}
	func_1066(Param1, 1, 1, 1);
	func_1067(Param1, 1, 0, -1);
	func_1068(2);
	func_1069((Global_1185132->f_66[iParam0 /*20*/])->f_3, uParam3);
	func_242(iParam0, 32);
	func_1070(7);
	if (func_641((Global_1185132->f_66[iParam0 /*20*/])->f_3) != -785841056)
	{
		func_1071();
		SCRIPTS::_0x7D654266025E921B(1638906956);
	}
	else
	{
		SCRIPTS::_0x7D654266025E921B(784116709);
		STATS::_0xE5A680A5D8B1F687(1);
	}
	return 1;
}

void func_739(bool bParam0)
{
	if (Local_2395.f_9 == -785841056 && !func_130(func_129(Local_2395.f_1)))
	{
		func_1072(func_129(Local_2395.f_1));
		if (bParam0)
		{
			func_1073(func_129(Local_2395.f_1), Local_2395.f_7, -1);
		}
	}
}

int func_740()
{
	switch (Local_2395.f_1)
	{
		case 15:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_741(int iParam0)
{
	return 1;
}

bool func_742()
{
	return func_482(_NAMESPACE71::_0xC17F69E1418CD11F(6));
}

int func_743(int iParam0, int iParam1, var uParam2, struct<2> Param3)
{
	struct<53> Var0;
	struct<8> Var53;
	int iVar61;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_18 = joaat("COLOR_WHITE");
	Var0.f_19 = joaat("COLOR_WHITE");
	Var0.f_23 = 300;
	Var0.f_31.f_8 = joaat("COLOR_WHITE");
	Var0.f_31.f_11 = joaat("COLOR_WHITE");
	Var0.f_31.f_12 = 8000;
	Var0.f_31.f_13 = 1511356879;
	Var0.f_31.f_15 = 1433015236;
	Var0.f_31.f_21 = 1;
	Var53 = { func_27(iParam1, uParam2) };
	Var0.f_20 = func_1074(iParam1);
	Var0.f_21 = func_1075(iParam1);
	Var0.f_24 = 6;
	Var0.f_25 = func_927(Param3);
	Var0.f_23 = 180;
	if (func_641(iParam1) != -785841056)
	{
		Var0.f_31.f_2 = MISC::_CREATE_VAR_STRING(10, "FME_TOAST_OPT_IN_TITLE", &Var53);
		Var0.f_16 = MISC::_CREATE_VAR_STRING(2, &Var53);
		Var0.f_17 = MISC::_CREATE_VAR_STRING(2, "FME_PI_MENU_BODY");
		Var0.f_2 = -276653911;
		Var0.f_19 = -276653911;
	}
	else
	{
		iVar61 = (Global_1184573->f_1[iParam0 /*26*/])->f_7;
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar61))
		{
			return 0;
		}
		Var0.f_31.f_2 = MISC::_CREATE_VAR_STRING(10, "FME_TOAST_OPT_IN_TITLE_POSSE_VERSUS", &Var53);
		Var0.f_16 = MISC::_CREATE_VAR_STRING(10, "FME_PI_MENU_TITLE_POSSE_VERSUS", PLAYER::GET_PLAYER_NAME(iVar61));
		Var0.f_17 = MISC::_CREATE_VAR_STRING(2, &Var53);
	}
	Var0.f_31.f_3 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE_FREE_MODE_EVENT");
	Var0.f_31.f_6 = func_1074(iParam1);
	Var0.f_31.f_7 = func_1075(iParam1);
	Var0.f_31.f_17 = func_121();
	Var0.f_31.f_18 = func_120();
	Var0.f_22 = 1;
	return func_1076(Var0);
}

int func_744()
{
	switch (Local_2395.f_1)
	{
		case 15:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_745(int iParam0, struct<2> Param1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_18(iParam0, 16))
	{
		return 1;
	}
	if (!func_73(Param1))
	{
		return 0;
	}
	else if (func_357(Param1))
	{
		return 0;
	}
	else if (func_358(Param1))
	{
		return 0;
	}
	func_1077(Param1);
	func_242(iParam0, 16);
	return 1;
}

bool func_746(int iParam0, int iParam1, int iParam2)
{
	return func_78((*Global_1184801)[iParam2 /*10*/][iParam0], iParam1);
}

bool func_747(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915180->f_20136;
	}
	return (Global_1915180->f_20136 || Global_1915180->f_21989.f_1);
}

int func_748()
{
	return Global_1915180->f_19742;
}

void func_749(int iParam0, bool bParam1)
{
	if (!func_1078(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1079(iParam0, 512)) || (!bParam1 && !func_1079(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_1080(iParam0, 512);
	}
	else
	{
		func_1081(iParam0, 512);
	}
	if (func_1082(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

int func_750()
{
	return 1;
}

void func_751()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_34) && PED::_0x7A4E00364B5D727B(Global_34))
		{
			func_329(1024);
		}
		if (!func_134(1024))
		{
			func_340(0);
			func_43(1024);
		}
	}
}

void func_752()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && func_153(iVar0))
		{
			func_1083(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)));
		}
		iVar0++;
	}
	if (!func_134(2048))
	{
		if (Local_2395.f_9 == -785841056)
		{
			func_341(1);
		}
		else
		{
			func_342(0);
			LAW::_0x710448D44A64C213(0);
			LAW::_0xC805EB785824F712(0);
		}
		func_43(2048);
	}
}

int func_753(var uParam0)
{
	return 1;
}

void func_754()
{
	if (!func_134(1))
	{
		func_43(1);
	}
	if (!func_755(255))
	{
		func_339(1);
	}
}

bool func_755(int iParam0)
{
	return func_164(48, iParam0);
}

bool func_756(int iParam0)
{
	return func_164(47, iParam0);
}

int func_757(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7)
{
	if (func_756(255))
	{
		func_1084(&(Global_1099294->f_546));
		Global_1099294->f_546.f_6 = { vParam0 };
		if (ENTITY::DOES_ENTITY_EXIST(iParam7))
		{
			Global_1099294->f_546.f_4 = iParam7;
			Global_1099294->f_546.f_5 = 3;
		}
		else if (!func_68(vParam4))
		{
			Global_1099294->f_546.f_1 = { vParam4 };
			Global_1099294->f_546.f_5 = 2;
		}
		else
		{
			Global_1099294->f_546 = fParam3;
			Global_1099294->f_546.f_5 = 1;
		}
		func_1085(Global_1099294->f_546, 36);
		func_166(4);
		func_165(47);
		return 1;
	}
	return 0;
}

int func_758(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 1f;
	*uParam1 = uParam2;
	if (*uParam1 <= *uParam0)
	{
		*uParam1 = 200f;
	}
	else if (*uParam1 > 200f)
	{
		*uParam1 = 200f;
	}
	return 1;
}

int func_759(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<5> Var0;

	*uParam2 = 1f;
	*uParam3 = uParam4;
	if (((func_36(&Var0, iParam0) && func_44(&Var0)) && func_45(&Var0, uParam1)) && func_792(&Var0))
	{
		func_142(Var0, -1963437248, uParam2, 0);
		func_142(Var0, -415053522, uParam3, 0);
	}
	if (*uParam3 <= *uParam2)
	{
		*uParam3 = 200f;
	}
	else if (*uParam3 > 200f)
	{
		*uParam3 = 200f;
	}
	return 1;
}

int func_760()
{
	if (func_65(131072) && Local_2395.f_10 >= 4)
	{
		if ((Local_2202[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/])->f_4 > Local_2395.f_1420)
		{
			if (!func_354() == 4)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("MP_OWC_END");
				func_355(4);
				return 1;
			}
		}
	}
	return 0;
}

void func_761(int iParam0, var uParam1, vector3 vParam2, float fParam5, float fParam6, float fParam7, var uParam8, var uParam9)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	int iVar13;

	vVar0 = { vParam2 };
	if (fParam7 > fParam6)
	{
		fVar3 = (fParam7 - fParam6);
		iVar5 = 32;
		iVar13 = 0;
		iVar13 = 0;
		while (iVar13 <= 20)
		{
			vVar6 = { func_1086(vParam2, fVar3, 0f) };
			if (func_1087(&vVar6, 9999.9f))
			{
				uVar12 = func_1088(vParam2, 0f, 0f, 0f, fParam6, fParam6, fParam6, -432403087, 1, 8);
				iVar4 = SCRIPTS::COUNT_PLAYER_BITS(&uVar12);
				if (iVar4 < iVar5)
				{
					iVar5 = iVar4;
					vVar9 = { vVar6 };
				}
			}
			iVar13++;
		}
		if (!func_68(vVar9))
		{
			vParam2 = { vVar9 };
		}
	}
	uParam8->f_5 = 2;
	uParam8->f_1 = { vVar0 };
	uParam8->f_17.f_6 = { vParam2 };
	uParam8->f_17 = { fParam6, fParam6, fParam6 };
	if (fParam6 > 15f)
	{
		uParam8->f_17 = { fParam6, fParam6, 15f };
	}
	uParam8->f_17.f_9 = -432403087;
	uParam8->f_6.f_6 = { vParam2 };
	uParam8->f_6 = { fParam5, fParam5, fParam5 };
	if (fParam5 > 15f)
	{
		uParam8->f_6 = { fParam5, fParam5, 15f };
	}
	uParam8->f_6.f_9 = -432403087;
	uParam8->f_16 = 1;
	uParam9->f_5 = 2;
	uParam9->f_1 = { vVar0 };
	uParam9->f_6 = { vParam2 };
	NETWORK::_0xEB6027FD1B4600D5(9, 1, 2f);
	NETWORK::_0xEB6027FD1B4600D5(7, 1, 2f);
	NETWORK::_0xEB6027FD1B4600D5(15, 0, 0.75f);
	NETWORK::_0xEB6027FD1B4600D5(13, 0, 0.75f);
	NETWORK::_0xEB6027FD1B4600D5(19, 1, 0.05f);
	NETWORK::_0x44D59EC597BBF348(1, 0);
	NETWORK::_0x44D59EC597BBF348(2, 1);
	NETWORK::_0x44D59EC597BBF348(3, 0);
	func_1089(1);
	if (((!func_134(134217728) && !func_548(2, -1)) && !func_471(iParam0, uParam1)) && func_472(iParam0, uParam1))
	{
		func_473(1, 0);
	}
}

void func_762(float fParam0, var uParam1, var uParam2)
{
}

void func_763(var uParam0, var uParam1, var uParam2)
{
	if (VOLUME::_0x92A78D0BEDB332A3(*uParam2))
	{
		VOLUME::_0x43F867EF5C463A53(*uParam2);
	}
	if (!func_68(uParam0->f_17))
	{
		*uParam2 = VOLUME::_0xB3FB80A32BAE3065(uParam0->f_17.f_6, 0f, 0f, 0f, uParam0->f_17);
		NETWORK::_0x405DDEFB1F531B18(*uParam2, 1, 0, 0);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(*uParam1))
	{
		VOLUME::_0x43F867EF5C463A53(*uParam1);
	}
	if (!func_68(uParam0->f_6))
	{
		*uParam1 = VOLUME::_0xB3FB80A32BAE3065(uParam0->f_6.f_6, 0f, 0f, 0f, uParam0->f_6);
		NETWORK::_0x405DDEFB1F531B18(*uParam1, 0, 0, 0);
	}
	NETWORK::_0x59577799F6AE2F34(1f);
}

void func_764(var uParam0, var uParam1)
{
	func_1090(*uParam0, *uParam1, 0, 0, 1);
}

void func_765(bool bParam0)
{
	func_818(bParam0, Local_2395.f_1388);
	Local_2395.f_1388++;
	if (Local_2395.f_1388 >= 32)
	{
		Local_2395.f_1388 = 0;
	}
}

void func_766()
{
	func_476(&(Global_1070356->f_21187.f_3), 4);
}

void func_767(bool bParam0)
{
	func_1091();
	func_821(Local_2395.f_1388, bParam0);
	Local_2395.f_1388++;
	if (Local_2395.f_1388 >= 32)
	{
		Local_2395.f_1388 = 0;
	}
}

void func_768()
{
	func_1091();
	func_819(Local_2395.f_1388);
	Local_2395.f_1388++;
	if (Local_2395.f_1388 >= 32)
	{
		Local_2395.f_1388 = 0;
	}
}

void func_769()
{
	func_1091();
	func_820(Local_2395.f_1388);
	Local_2395.f_1388++;
	if (Local_2395.f_1388 >= 32)
	{
		Local_2395.f_1388 = 0;
	}
}

void func_770(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID()) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			NETWORK::_0x5A91BCEF74944E93(iVar0, fParam0);
		}
		iVar1++;
	}
}

void func_771(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID()) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
		if (func_153(iVar1))
		{
			NETWORK::_0x5A91BCEF74944E93(iVar0, fParam1);
		}
	}
}

int func_772(var uParam0, bool bParam1)
{
	if (!func_1092())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_1093())
			{
				uParam0->f_3 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-119209833);
				func_508(1);
				func_1094(uParam0, 1);
			}
			return 0;
		case 1:
			if (!func_1095())
			{
				return 0;
			}
			func_1094(uParam0, 2);
			break;
	}
	Global_1939067->f_107 = 1;
	return 1;
}

int func_773(var uParam0)
{
	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "centralInfoDatastore");
		func_1096(uParam0->f_5, &(uParam0->f_6), 0);
		func_1096(uParam0->f_5, &(uParam0->f_7), 1);
		func_1096(uParam0->f_5, &(uParam0->f_8), 37);
		func_1097(uParam0->f_8, 1);
		return 0;
	}
	return 1;
}

int func_774(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_3))
			{
				func_1098(uParam0, 1);
			}
			break;
		case 1:
			*uParam0 = iParam1;
			if (*uParam0 != 0)
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_3, *uParam0);
				UISTATEMACHINE::_UISTATEMACHINE_CREATE(1546991729, uParam0->f_3);
			}
			func_1098(uParam0, 2);
			break;
		case 2:
			if (iParam1 != *uParam0)
			{
				func_1098(uParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (UISTATEMACHINE::_UISTATEMACHINE_EXISTS(1546991729) && UISTATEMACHINE::_0xF7C180F57F85D0B8(1546991729))
			{
				UISTATEMACHINE::_0x6B9FE4F0BA521A19(1546991729, 0);
				func_1098(uParam0, 4);
			}
			else
			{
				func_1098(uParam0, 0);
			}
			break;
		case 4:
			if (!UISTATEMACHINE::_0x11E73195E735B25B(1546991729))
			{
				*bParam2 = 1;
				func_1098(uParam0, 0);
			}
			break;
	}
	return 0;
}

void func_775(var uParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	bool bVar1;

	sVar0 = func_1099(iParam1, bParam2, 3, 0, 0, 0);
	if (uParam0->f_13 != iParam1)
	{
		func_1100(uParam0->f_6, sVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (uParam0->f_14 != bVar1)
	{
		func_1097(uParam0->f_7, bVar1);
		uParam0->f_14 = bVar1;
	}
	func_1101(uParam0, iParam1, sParam4);
	func_1102(uParam0, iParam1);
	uParam0->f_13 = iParam1;
}

char* func_776()
{
	return "321_Countdown";
}

char* func_777()
{
	return "HUD_MP_FREE_MODE";
}

var func_778(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	_NAMESPACE71::_0xDD1232B332CBB9E7(3, 1, 0);
	return func_1103(sParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

var func_779(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

int func_780()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1070356->f_4;
}

bool func_781(int iParam0)
{
	return func_164(26, iParam0);
}

bool func_782(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_783(int iParam0)
{
	if (!func_782(iParam0))
	{
		return 0;
	}
	return func_786(iParam0, 8);
}

void func_784(int iParam0, int iParam1)
{
	if (!func_782(iParam0))
	{
		return;
	}
	((*Global_1887327)[iParam0 /*36*/])->f_20 = iParam1;
}

void func_785(int iParam0)
{
	Global_1893575 = (Global_1893575 || iParam0);
}

bool func_786(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		return (Global_7887[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1070356->f_17941[iParam0 /*11*/] && iParam1) != 0;
}

void func_787(int iParam0)
{
	Global_1893575 = (&Global_1893575 - (Global_1893575 && iParam0));
}

bool func_788(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_786(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(((*Global_1887327)[iVar1 /*36*/])->f_27)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(((*Global_1887327)[iVar1 /*36*/])->f_27));
			}
		}
		if (((*Global_1887327)[iVar1 /*36*/])->f_10 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1887327)[iVar1 /*36*/])->f_10, false))
			{
				if (func_23() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(((*Global_1887327)[iVar1 /*36*/])->f_10, 523);
				}
				else if (!SCRIPTS::_0x30BED53646C86D11(((*Global_1887327)[iVar1 /*36*/])->f_10))
				{
					SCRIPTS::_0x7DE4643157AD646C(((*Global_1887327)[iVar1 /*36*/])->f_10);
				}
			}
			else if (func_786(iVar1, 2))
			{
				if (func_23() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(((*Global_1887327)[iVar1 /*36*/])->f_27), 523);
				}
				else
				{
					SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(((*Global_1887327)[iVar1 /*36*/])->f_27)));
				}
			}
			if (!SCRIPTS::_DOES_THREAD_EXIST(((*Global_1887327)[iVar1 /*36*/])->f_10))
			{
				((*Global_1887327)[iVar1 /*36*/])->f_10 = 0;
				func_1104(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		else if (bParam0)
		{
			if (func_786(iVar1, 1))
			{
				func_1104(iVar1, 1);
			}
		}
		iVar1++;
	}
	return !bVar0;
}

int func_789(int iParam0, var uParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_1105(&Var1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var1, Var1.f_1);
	}
	return iVar0;
}

Vector3 func_790(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	vVar0 = { 0f, 0f, 0f };
	if (((func_36(&Var3, iParam0) && func_44(&Var3)) && func_45(&Var3, uParam1)) && func_1105(&Var3))
	{
		if (func_1106(&Var3, uParam2))
		{
			if (func_143(Var3, 2060397848, &vVar0, 1))
			{
			}
		}
	}
	return vVar0;
}

var func_791(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	struct<5> Var1;

	if (((func_36(&Var1, iParam0) && func_44(&Var1)) && func_45(&Var1, uParam1)) && func_1105(&Var1))
	{
		if (func_1106(&Var1, uParam2))
		{
			if (func_142(Var1, -185561597, &uVar0, 1))
			{
			}
		}
	}
	return uVar0;
}

bool func_792(var uParam0)
{
	uParam0->f_2 = 670816652;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

int func_793(vector3 vParam0, var uParam3)
{
	if (func_68(vParam0))
	{
		return 0;
	}
	if (func_794(255) == 4)
	{
		return 0;
	}
	if (func_164(4, 255))
	{
	}
	func_166(4);
	func_1084(&(Global_1099294->f_546));
	Global_1099294->f_546.f_6 = { vParam0 };
	Global_1099294->f_546 = uParam3;
	Global_1099294->f_546.f_5 = 1;
	Global_1099294->f_26.f_18 = 0;
	Global_1099294->f_26.f_19 = 0;
	func_1085(Global_1099294->f_546, 36);
	return 1;
}

int func_794(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1099294->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1275573->f_22[iParam0])
	{
		return ((*Global_1097610)[iParam0 /*51*/])->f_1;
	}
	return 26;
}

void func_795(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_796(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_797(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::_0x92A78D0BEDB332A3(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_798(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

int func_799(var uParam0, char* sParam1, bool bParam2, bool bParam3, vector3 vParam4, float fParam7, int iParam8)
{
	int iVar0;

	if (!func_1092() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		*bParam2 = 1;
		return 0;
	}
	if (uParam0->f_1 == 0)
	{
		uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "MPCountdown");
		uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Timer", MISC::_CREATE_VAR_STRING(2, "FME_COUNTDOWN", sParam1));
		uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1, "showTimer", true);
		if ((bParam3 && !func_68(vParam4)) && fParam7 > 0f)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(func_485());
			HUD::_0x4CC5F2FC1332577F(-2124237476);
			fParam7 = func_1107(fParam7, 0f, 1000f);
			if (iParam8 == 0 || !VOLUME::_0x92A78D0BEDB332A3(iParam8))
			{
				iVar0 = VOLUME::_0xB3FB80A32BAE3065(vParam4, 0f, 0f, 0f, fParam7, fParam7, fParam7);
				GRAPHICS::_0x735762E8D7573E42(1, iVar0, 5f);
				VOLUME::_0x43F867EF5C463A53(iVar0);
			}
			else
			{
				GRAPHICS::_0x735762E8D7573E42(1, iParam8, 5f);
			}
		}
	}
	return 1;
}

void func_800(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		if (bParam2 && iParam1 < 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "GEIRON_RACE_GO"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, MISC::_CREATE_VAR_STRING(2, "FME_COUNTDOWN", iParam1));
		}
		if (bParam3)
		{
			if (uParam0->f_5 < 0)
			{
				if (uParam0->f_4 >= 0)
				{
					if (!AUDIO::_0x84848E1C0FC67DBB(uParam0->f_4))
					{
						AUDIO::_0x3210BCB36AF7621B(uParam0->f_4);
					}
					AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
					uParam0->f_4 = -1;
				}
				func_453(uParam0);
			}
		}
		else if (bParam4)
		{
			if (uParam0->f_4 < 0)
			{
				uParam0->f_4 = AUDIO::GET_SOUND_ID();
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_4, func_825(), func_822(), 1);
				AUDIO::_0x503703EC1781B7D6(uParam0->f_4, "Time", BUILTIN::TO_FLOAT(iParam1));
			}
		}
	}
}

bool func_801(int iParam0)
{
	return (Global_1099294->f_197 && iParam0) != 0;
}

void func_802(int iParam0)
{
	if (!func_801(iParam0))
	{
		Global_1099294->f_197 = (Global_1099294->f_197 || iParam0);
	}
}

void func_803(int iParam0)
{
	if (!func_605((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_13, iParam0))
	{
		func_476(&((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_13), iParam0);
	}
}

Vector3 func_804(var uParam0)
{
	vector3 vVar0;
	struct<5> Var3;

	vVar0 = { -1737.89f, -410f, 154.24f };
	if (func_1108(&Var3, uParam0))
	{
		func_143(Var3, -1541287538, &vVar0, 0);
	}
	return vVar0;
}

int func_805(vector3 vParam0)
{
	if (func_68(vParam0))
	{
		return 0;
	}
	if (!func_1109(vParam0, Local_2395.f_1396, Local_2395.f_1294, 500f, 1))
	{
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vParam0, Local_913.f_44.f_3, Local_913.f_44.f_4))
	{
		return 0;
	}
	return 1;
}

int func_806(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	if (func_1110(&Var1, iParam0))
	{
		func_40(Var1, 1973872946, &iVar0, 0);
	}
	return func_1111(iVar0);
}

int func_807(int iParam0)
{
	var uVar0;
	struct<5> Var1;

	if (func_1110(&Var1, iParam0))
	{
		func_40(Var1, 799854665, &uVar0, 0);
	}
	return uVar0;
}

Vector3 func_808(int iParam0)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_1110(&Var3, iParam0))
	{
		func_143(Var3, -1541287538, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_809(int iParam0)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_1110(&Var3, iParam0))
	{
		func_143(Var3, 38344341, &vVar0, 0);
	}
	return vVar0;
}

Vector3 func_810(int iParam0)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_1110(&Var3, iParam0))
	{
		func_143(Var3, 2083652982, &vVar0, 0);
	}
	return vVar0;
}

int func_811(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0]))) && bParam1)
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051202->f_16[0]), 0, 0);
		}
		else
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 0, 0, 0, 0, 0);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0]))) && bParam1)
	{
		if (!OBJECT::_0xB5DED7B65C604FDF(iParam0))
		{
			OBJECT::_0xD99229FE93B46286(iParam0, 1, 1, 0, &(Global_1051202->f_16[0]), 0, 0);
		}
	}
	if (bParam2)
	{
		OBJECT::_0x1F1FABFE9B2A1254(iParam0, 1);
	}
	return iParam0;
}

int func_812(int iParam0)
{
	if (func_1112(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return 0;
}

void func_813(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_812(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, iParam1, iParam3);
	}
}

void func_814(int iParam0, bool bParam1)
{
	if (func_812(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_815(int iParam0, bool bParam1)
{
	if (func_812(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_816(int iParam0, bool bParam1)
{
	if (func_812(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

int func_817()
{
	return 1;
}

void func_818(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_153(Local_2395.f_1332))
	{
		func_332(iParam1);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_2395.f_9 != -785841056 || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_153(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (!bParam0)
			{
				if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar0))
				{
					func_607(iVar0, iParam1);
				}
				else
				{
					func_1113(iVar0, iParam1);
				}
			}
			else
			{
				func_1113(iVar0, iParam1);
			}
		}
		else
		{
			func_607(iVar0, iParam1);
		}
	}
	else
	{
		func_607(iVar0, iParam1);
	}
}

void func_819(int iParam0)
{
	int iVar0;

	if (!func_153(Local_2395.f_1332))
	{
		func_332(iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_2395.f_9 != -785841056 || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_153(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar0))
			{
				func_608(iVar0, iParam0);
				if (!func_176(8192, Local_2395.f_1332))
				{
					if (func_336(Global_1275573->f_15))
					{
						func_337(0, 0, 0);
						func_224(8192, Local_2395.f_1332);
					}
				}
				if (!func_176(16384, Local_2395.f_1332))
				{
					if (!func_333())
					{
						func_1114();
						func_224(16384, Local_2395.f_1332);
					}
				}
			}
			else
			{
				func_1115(iVar0, iParam0);
			}
		}
		else
		{
			func_608(iVar0, iParam0);
		}
	}
	else
	{
		func_608(iVar0, iParam0);
	}
}

void func_820(int iParam0)
{
	int iVar0;

	if (!func_153(Local_2395.f_1332))
	{
		func_332(iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_2395.f_9 != -785841056 || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_153(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar0))
			{
				func_608(iVar0, iParam0);
				if (!func_176(8192, Local_2395.f_1332))
				{
					if (func_336(Global_1275573->f_15))
					{
						func_337(0, 0, 0);
						func_224(8192, Local_2395.f_1332);
					}
				}
				if (!func_176(16384, Local_2395.f_1332))
				{
					if (!func_333())
					{
						func_1114();
						func_224(16384, Local_2395.f_1332);
					}
				}
			}
			else
			{
				func_1116(iVar0, iParam0);
			}
		}
		else
		{
			func_608(iVar0, iParam0);
		}
	}
	else
	{
		func_608(iVar0, iParam0);
	}
}

void func_821(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_153(Local_2395.f_1332))
	{
		func_332(iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		if (Local_2395.f_9 != -785841056 || ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))) && func_153(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0))))
		{
			if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar0))
			{
				func_608(iVar0, iParam0);
				if (!func_176(8192, Local_2395.f_1332))
				{
					if (func_336(Global_1275573->f_15))
					{
						func_337(0, 0, 0);
						func_224(8192, Local_2395.f_1332);
					}
				}
				if (!func_176(16384, Local_2395.f_1332))
				{
					if (!func_333())
					{
						func_1114();
						func_224(16384, Local_2395.f_1332);
					}
				}
			}
			else
			{
				func_1117(iVar0, iParam0, bParam1);
			}
		}
		else
		{
			func_608(iVar0, iParam0);
		}
	}
	else
	{
		func_608(iVar0, iParam0);
	}
}

char* func_822()
{
	return "RDRO_Countdown_Sounds";
}

char* func_823()
{
	return "Round_End_Timer";
}

char* func_824()
{
	return "10S";
}

char* func_825()
{
	return "Out_Of_Bounds";
}

char* func_826()
{
	return "target_spawn";
}

char* func_827()
{
	return "MP005_OBHELT_sounds";
}

void func_828(int iParam0, int iParam1, int iParam2)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, iParam2);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam2, iParam1);
}

void func_829(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	func_1118(iVar0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	func_1119(iVar0, 0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 565, true);
	if (((Local_0.f_67[iParam0 /*40*/])->f_6 == joaat("high") || (Local_0.f_67[iParam0 /*40*/])->f_6 == joaat("low")) || (Local_0.f_67[iParam0 /*40*/])->f_6 == 1866880973)
	{
		func_861(iVar0, 1, -1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Local_913.f_1057);
	STATS::_0x6B1044FDC2B09101(Local_2395.f_7.f_1, NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])));
	if ((Local_0.f_67[iParam0 /*40*/])->f_39 > 0)
	{
		iVar1 = 0;
		while (iVar1 < (Local_0.f_67[iParam0 /*40*/])->f_39)
		{
			iVar2 = NETWORK::NET_TO_PED(&((Local_0.f_67[iParam0 /*40*/])->f_20[iVar1 /*3*/]));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, Local_913.f_1057);
			WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("weapon_thrown_tomahawk"), 500, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("group_rifle"), 500, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			iVar3 = func_1120();
			if (iVar3 != 0)
			{
				MISC::_0xF63FA29D4A9ACA86(iVar2, "FME_RU_ILO_HENTCH_NAME");
				func_1121(iVar2, "FME_RU_ILO_HENTCH_NAME", 1);
			}
			iVar1++;
		}
	}
}

var func_830(char* sParam0, char[4] cParam1, char[4] cParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<4> Var0;
	struct<4> Var13;
	var uVar20;

	Var0 = -2;
	Var0 = uParam3;
	Var0.f_1 = iParam4;
	Var0.f_2 = iParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = cParam1;
	Var13.f_3 = cParam2;
	uVar20 = _NAMESPACE71::_0x02BCC0FE9EBA3529(&Var0, &Var13, iParam7, iParam8, iParam9);
	return uVar20;
}

var func_831(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar20;

	Var0 = -2;
	Var0 = uParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	uVar20 = _NAMESPACE71::_0xA6F4216AB10EB08E(&Var0, &vVar13, iParam6, iParam7);
	return uVar20;
}

int func_832(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_833(int iParam0)
{
	if (_NAMESPACE26::_0x901E0DC25080C8B9(iParam0) != Global_1275573->f_15 && !func_77())
	{
		return 636925055;
	}
	return -963477619;
}

int func_834(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_1122(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(((*Global_1097610)[iVar3 /*51*/])->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901929->f_673.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901929->f_673.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901929->f_673.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901929->f_673.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901929->f_673.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901929->f_673.f_36)
	{
		return 5;
	}
	return 6;
}

int func_835(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == Global_1275573->f_10)
	{
		return 1;
	}
	iVar0 = iParam0;
	if (!&Global_1275573->f_22[iVar0])
	{
		return 0;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return 0;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0))
		{
			return 1;
		}
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iVar0))
	{
		return 1;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26833), iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1275573->f_10);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return 1;
	}
	else if (_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_836(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26835), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26836), iVar0) || SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26834), iVar0))
		{
			return true;
		}
	}
	if (func_878(iParam0))
	{
		return true;
	}
	return !func_835(iParam0, 0);
}

int func_837(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1123(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_838(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

char* func_839(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_840(var uParam0, int iParam1)
{
	(uParam0->f_210[iParam1 /*23*/])->f_14 = 255;
	(uParam0->f_210[iParam1 /*23*/])->f_5 = -1f;
	(uParam0->f_210[iParam1 /*23*/])->f_1 = -1f;
	(uParam0->f_210[iParam1 /*23*/])->f_2 = -1f;
}

void func_841(int iParam0)
{
	if (!func_1124(iParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_19683.f_260), iParam0);
	}
}

var func_842(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	vector3 vVar13;
	var uVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = iParam1;
	uVar16 = _NAMESPACE71::_0x8D1249BD28791878(&Var0, &vVar13, iParam6);
	return uVar16;
}

void func_843(int iParam0)
{
	struct<7> Var0;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;

	func_1125(65536);
	iVar31 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	func_1126(Var0, Var0.f_1);
	if ((!Var0.f_1 == func_1127() && !Var0.f_1 == func_1128()) && !func_1129(Var0))
	{
		return;
	}
	if (!func_1130(Var0))
	{
		return;
	}
	if (!func_493(16384))
	{
		func_803(16384);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if ((PED::IS_PED_A_PLAYER(iVar33) && Var0.f_3) && !PED::IS_PED_A_PLAYER(iVar32))
	{
		func_803(65536);
		return;
	}
	if (!PED::IS_PED_A_PLAYER(iVar32))
	{
		return;
	}
	iVar34 = func_1131(Var0);
	if (iVar34 != -1)
	{
		if (func_1063(Var0.f_5) && Var0.f_6 == 1657716792)
		{
			func_855(16384, iVar34);
		}
	}
	if (Var0.f_3 && !func_852(4, iVar34, -1))
	{
		if (!func_1132(iVar33))
		{
			func_856(iVar34);
		}
		func_1133(&Local_913, iVar34);
		func_855(4, iVar34);
	}
}

void func_844()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (Local_2152 < 5 || !func_403(2))
	{
		return;
	}
	if (func_153(iVar0))
	{
		iVar1 = Local_2395.f_1267;
		func_272(iVar1, func_271(), BUILTIN::TO_FLOAT(Local_0.f_1), 0, 30000);
	}
	else
	{
		func_575(&(Local_913.f_98));
	}
}

void func_845()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_495(2))
		{
			HUD::CLEAR_ALL_HELP_MESSAGES();
			func_621();
			func_497(2);
		}
		return;
	}
	else if (func_495(2))
	{
		func_847(2);
	}
	if (Local_2152 == 5)
	{
		if (func_153(iVar0))
		{
			if (func_495(64))
			{
				iVar1 = 2;
			}
			else if (!func_403(4096))
			{
				iVar1 = 1;
			}
			else
			{
				iVar1 = 3;
			}
			func_1134(iVar1);
			func_497(8);
		}
	}
}

void func_846(int iParam0)
{
	if (Local_2152 != 5 || !func_153(iParam0))
	{
		func_622();
		return;
	}
	if (func_1135())
	{
		func_1136();
	}
	else
	{
		func_1137();
		func_1138();
	}
}

void func_847(int iParam0)
{
	if (func_605(Local_913.f_42, iParam0))
	{
		func_606(&(Local_913.f_42), iParam0);
	}
}

void func_848()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/]));
		if (func_723(2, iVar0) || func_852(2097152, iVar0, -1))
		{
			func_392(iVar0, 4, 0);
		}
		else if (func_723(262144, iVar0))
		{
			func_392(iVar0, 5, 0);
		}
		else if (func_1139(iVar1))
		{
			func_392(iVar0, 3, 0);
		}
		else if (func_864(iVar1, 0))
		{
			func_392(iVar0, 1, 0);
		}
		else if (func_1036(iVar1))
		{
			func_392(iVar0, 2, 0);
		}
		else
		{
			func_392(iVar0, 0, 0);
		}
		iVar0++;
	}
}

void func_849()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = (MISC::GET_FRAME_COUNT() % 7);
	iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (func_425(Local_913.f_12, iVar0))
	{
		if (!func_1139(iVar1))
		{
			func_1140(&(Local_913.f_12), iVar0);
		}
	}
	else if (func_1139(iVar1))
	{
		iVar2 = func_1141(iVar0);
		if (func_1142(iVar2, 1, 1))
		{
			func_1143(MISC::_CREATE_VAR_STRING(10, "FME_RU_TICKER_CAPTURED_TARGET", func_526(PLAYER::GET_PLAYER_NAME(iVar2), func_525(iVar2, 1, -1, 0))));
			func_1144(&(Local_913.f_12), iVar0);
		}
	}
	if (!func_425(Local_913.f_13, iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && func_864(iVar1, 0))
		{
			iVar3 = func_1145(iVar0);
			if (func_1142(iVar3, 1, 1))
			{
				func_1143(MISC::_CREATE_VAR_STRING(10, "FME_RU_TICKER_KIL_TARGET", func_526(PLAYER::GET_PLAYER_NAME(iVar3), func_525(iVar3, 1, -1, 0))));
			}
			func_1144(&(Local_913.f_13), iVar0);
		}
	}
	if (!func_425(Local_913.f_14, iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 11, false))
		{
			iVar4 = func_1145(iVar0);
			func_1143(MISC::_CREATE_VAR_STRING(10, "FME_RU_TICKER_KNOCKED_OUT_TARGET", func_526(PLAYER::GET_PLAYER_NAME(iVar4), func_525(iVar4, 1, -1, 0))));
			func_1144(&(Local_913.f_14), iVar0);
		}
	}
}

int func_850()
{
	switch (Local_2395.f_2)
	{
		case -1983139019:
		case -809127215:
		case -470215764:
		case -154861072:
		case 381726250:
		case 2103232336:
		case 2139023747:
			return 0;
		case -1573288601:
			return 1;
	}
	return 0;
}

bool func_851()
{
	return func_495(8192);
}

bool func_852(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	return func_78(&((Local_368[iParam2 /*17*/])->f_5[iParam1]), iParam0);
}

int func_853(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_701(iVar0, 1, 1))
		{
			if (bParam2 && func_78(&((Local_368[iVar0 /*17*/])->f_5[iParam1]), 131072))
			{
			}
			else if (func_78(&((Local_368[iVar0 /*17*/])->f_5[iParam1]), iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_854(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_23() != 0)
	{
		return;
	}
	if (func_1146())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (!bParam1)
	{
		if (!&Global_1132968->f_4641.f_2[func_367(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	(Global_1132968->f_4641.f_2[func_367(iParam0, 1) /*4*/])->f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1275573->f_16 != &Global_1275573)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar8])))
		{
		}
		else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1275573->f_15, &(Global_1275573->f_154[iVar8])))
		{
		}
		else if (&Global_1275573->f_154[iVar8] == Global_1275573->f_10)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar7, &(Global_1275573->f_154[iVar8]));
		}
		iVar8++;
	}
	func_1147(&Var0, uVar7);
}

void func_855(int iParam0, int iParam1)
{
	if (!func_78(&((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_5[iParam1]), iParam0))
	{
		func_146((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_5[iParam1], iParam0);
	}
}

void func_856(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	var uVar4;
	int iVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	vector3 vVar11;

	iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	iVar2 = ENTITY::_0x61914209C36EFDDB(iVar1);
	if ((((!func_852(2, iParam0, -1) && !func_852(262144, iParam0, -1)) && !func_852(131072, iParam0, -1)) && (Local_0.f_67[iParam0 /*40*/])->f_2 != 255) && (Local_0.f_67[iParam0 /*40*/])->f_2 == PLAYER::GET_PLAYER_INDEX())
	{
		fVar3 = func_1148(PLAYER::GET_PLAYER_INDEX(), &uVar4, iParam0);
		if (!func_1149(&Local_2010, 1))
		{
			if (fVar3 < 12f)
			{
				func_1150(iParam0);
				func_1151();
			}
		}
		else if (fVar3 > 20f)
		{
			func_1152(&Local_2010);
		}
		if (!func_865(iParam0))
		{
		}
		if (iVar2 == 9)
		{
		}
		if (iVar2 == 7)
		{
		}
		if (iVar2 == 8)
		{
		}
		if (((func_865(iParam0) && iVar2 != 9) && iVar2 != 7) && iVar2 != 8)
		{
			iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
			iVar7 = func_1153(iParam0);
			iVar8 = func_1154(iVar0, iParam0);
			if (iVar7 != -1 && iVar8 != -1)
			{
				if (iVar7 == iVar8)
				{
					Local_0.f_6[iVar7] = &Local_0.f_6[iVar7] + 1;
					STATS::_0x262EF7CF49CF1EB9(iVar1);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0f);
					(Local_0.f_67[iParam0 /*40*/])->f_9 = (Local_913.f_16[iVar7 /*4*/])->f_3;
					func_855(2097152, iParam0);
					func_855(131072, iParam0);
				}
			}
		}
	}
	if (func_852(131072, iParam0, -1))
	{
		func_1150(iParam0);
		if (func_1155(&Local_2010))
		{
			if (func_852(1, iParam0, -1))
			{
				func_866(1, iParam0, -1);
				Local_913.f_6 = (Local_913.f_6 - 1);
			}
			func_1152(&Local_2010);
			func_866(131072, iParam0, -1);
		}
		else if (ANIMSCENE::_0xD8254CB2C586412B(Local_2010.f_36, 0))
		{
			ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), (Local_0.f_67[iParam0 /*40*/])->f_9);
			func_1156(0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_2010.f_34))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_2010.f_34, true);
			}
		}
		if (!func_852(2, iParam0, -1) && (ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_2010.f_36, 0) || ANIMSCENE::_0xD8254CB2C586412B(Local_2010.f_36, 0)))
		{
			fVar9 = func_1157((Local_0.f_67[iParam0 /*40*/])->f_6);
			if (func_864(iVar1, 0))
			{
				fVar9 = (fVar9 / 2f);
			}
			func_1158(NETWORK::PARTICIPANT_ID_TO_INT(), fVar9);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_2395.f_1332)))
			{
				if (!func_864(iVar1, 0))
				{
					(Local_2202[Local_2395.f_1332 /*6*/])->f_3++;
				}
				else
				{
					(Local_368[Local_2395.f_1332 /*17*/])->f_14++;
				}
			}
			iVar10 = func_1159(iVar1);
			if (iVar10 != -1)
			{
				Local_0.f_6[iVar10] = &Local_0.f_6[iVar10] + 1;
			}
			if (func_852(1, iParam0, -1))
			{
				func_866(1, iParam0, -1);
				Local_913.f_6 = (Local_913.f_6 - 1);
			}
			iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
			if ((Local_0.f_67[iParam0 /*40*/])->f_9 != -1f)
			{
				vVar11 = { ENTITY::GET_ENTITY_ROTATION(iVar0, 2) };
				vVar11.f_2 = (Local_0.f_67[iParam0 /*40*/])->f_9;
				ENTITY::SET_ENTITY_ROTATION(iVar0, vVar11, 2, true);
			}
			else
			{
				ENTITY::SET_ENTITY_ROTATION(iVar0, func_1160(ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 180f), 2, true);
			}
			func_1156(0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_2010.f_33))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Local_2010.f_33, joaat("weapon_unarmed"), true, 0, false, false);
			}
			func_719(iVar1);
			func_720(Local_913.f_80[iParam0]);
			ENTITY::SET_ENTITY_VISIBLE(iVar1, false);
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COORDS(iVar1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, 0f, 0f, -10f), true, false, true, true);
			if (func_864(iVar1, 0))
			{
				func_855(4194304, iParam0);
			}
			else
			{
				func_855(8388608, iParam0);
			}
			func_855(2, iParam0);
		}
		else if (Local_2010.f_3 == 2)
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(Local_2010.f_31))
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(Local_2010.f_31, true, false);
			}
		}
	}
}

void func_857(int iParam0)
{
	if (!func_852(262144, iParam0, -1))
	{
		if (func_1161(iParam0))
		{
			if (!func_371(Local_913.f_1058[iParam0 /*3*/]))
			{
				func_648(Local_913.f_1058[iParam0 /*3*/]);
			}
			else if (func_372(Local_913.f_1058[iParam0 /*3*/]) > 5f)
			{
				(Local_368[Local_2395.f_1332 /*17*/])->f_16++;
				func_855(262144, iParam0);
			}
		}
		else if (func_371(Local_913.f_1058[iParam0 /*3*/]))
		{
			func_1162(Local_913.f_1058[iParam0 /*3*/]);
		}
		if (func_1163(iParam0))
		{
			(Local_368[Local_2395.f_1332 /*17*/])->f_16++;
			func_855(262144, iParam0);
		}
	}
}

void func_858(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if ((func_864(iVar0, 0) || !ENTITY::DOES_ENTITY_EXIST(iVar0)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iParam0 /*40*/])))
	{
		return;
	}
	if (func_867(iParam0))
	{
		if (!func_852(1048576, iParam0, -1))
		{
			func_855(1048576, iParam0);
		}
	}
	else if (func_852(1048576, iParam0, -1))
	{
		func_866(1048576, iParam0, -1);
	}
	if (func_867(iParam0))
	{
		if (!func_723(524288, iParam0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_67[iParam0 /*40*/])))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
				func_855(524288, iParam0);
			}
		}
	}
	else if (func_852(524288, iParam0, -1))
	{
		func_866(524288, iParam0, -1);
	}
}

void func_859(var uParam0, int iParam1)
{
	if (!func_495(256))
	{
		func_497(256);
	}
	else
	{
		func_1133(uParam0, iParam1);
	}
}

void func_860(var uParam0, var uParam1, int iParam2)
{
	switch ((uParam1->f_50[iParam2 /*4*/])->f_2)
	{
		case joaat("init"):
			func_1164(uParam0, uParam1, iParam2);
			break;
		case joaat("combat"):
			func_1165(uParam0, uParam1, iParam2);
			break;
		case -1700571062:
			func_1166(uParam0, uParam1, iParam2);
			break;
		case joaat("injured"):
			func_1167(uParam0, uParam1, iParam2);
			break;
		case 1324097645:
			func_1168(uParam0, uParam1, iParam2);
			break;
		case 1866880973:
			func_1169(uParam0, uParam1, iParam2);
			break;
		case 1417941668: /* GXTEntry: "Cover To Cover" */
			func_1170(uParam0, uParam1, iParam2);
			break;
		case joaat("low"):
			func_1171(uParam0, uParam1, iParam2);
			break;
		case joaat("high"):
			func_1172(uParam0, uParam1, iParam2);
			break;
		case joaat("flee"):
			func_1173(uParam0, uParam1, iParam2);
			break;
		case joaat("hide"):
			func_1174(uParam0, uParam1, iParam2);
			break;
	}
	if ((uParam1->f_50[iParam2 /*4*/])->f_2 == -1)
	{
		(uParam1->f_50[iParam2 /*4*/])->f_2 = (uParam0->f_67[iParam2 /*40*/])->f_4;
	}
}

void func_861(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (iParam2 == -1)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam2);
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PLAYER::_0x0E6846476906C9DD(iVar0, iParam0))
	{
		ENTITY::_0x1AD922AB5038DEF3(iParam0);
		PLAYER::_0x543DFE14BE720027(iVar0, iParam0, iParam1);
		PLAYER::_0xBC02B3D151D3859F(iParam0, 1);
		PLAYER::_0x62ED71E133B6C9F1(iParam0, 255, 0, 0);
		func_497(4096);
	}
}

int func_862(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (!func_153(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		return 0;
	}
	if (func_852(2, iParam0, -1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	iVar2 = ENTITY::_0x61914209C36EFDDB(iVar0);
	if (PED::_0x3AA24CCC0D451379(iVar0) || func_864(iVar0, 1))
	{
		if ((iVar2 == 5 || iVar2 == 4) || iVar2 == 6)
		{
			iVar1 = PED::_0x09B83E68DE004CD4(iVar0);
			if (iVar1 == Global_34)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if ((iVar2 == 7 || iVar2 == 9) || iVar2 == 8)
		{
			iVar1 = PED::_0xA033D7E4BBF9844D(iVar0);
			if (PED::IS_PED_ON_MOUNT(Global_34))
			{
				if (PED::GET_MOUNT(Global_34) == iVar1)
				{
					return 1;
				}
			}
			else if (((PED::_0xB676EFDA03DADA52(iVar1, 0) == 0 && (Local_0.f_67[iParam0 /*40*/])->f_2 == PLAYER::GET_PLAYER_INDEX()) || PED::_0xB676EFDA03DADA52(iVar1, 0) == Global_34) && func_1175(Global_34, iVar1, 0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (func_867(iParam0) && func_1176())
	{
		return 1;
	}
	return 0;
}

int func_863(int iParam0)
{
	return func_1177(iParam0, 0);
}

int func_864(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 1;
	}
	if (PED::IS_PED_FATALLY_INJURED(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_865(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (func_867(iParam0) || func_495(16384))
	{
		if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[1 /*4*/])->f_1))
		{
			if (func_1178((Local_913.f_16[1 /*4*/])->f_1))
			{
				return 1;
			}
		}
	}
	else if (func_864(iVar0, 0))
	{
		if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[2 /*4*/])->f_1))
		{
			if (func_1179(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[2 /*4*/])->f_1, 56, 0))
			{
				return 1;
			}
		}
	}
	else if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[0 /*4*/])->f_1))
	{
		if (func_1179(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[0 /*4*/])->f_1, 56, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_866(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (func_78(&((Local_368[iParam2 /*17*/])->f_5[iParam1]), iParam0))
	{
		func_423((Local_368[iParam2 /*17*/])->f_5[iParam1], iParam0);
	}
}

int func_867(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, true);
		if (func_1180(iVar1))
		{
			return 1;
		}
	}
	return 0;
}

int func_868(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (PED::_0x09B83E68DE004CD4(iParam1) != iParam0)
	{
		return 0;
	}
	iVar0 = ENTITY::_0x61914209C36EFDDB(iParam1);
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

int func_869(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	iVar2 = ENTITY::_0x61914209C36EFDDB(iVar0);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PED::IS_PED_IN_VEHICLE(iVar0, iVar3, false))
		{
			return 1;
		}
	}
	if ((iVar2 == 7 || iVar2 == 9) || iVar2 == 8)
	{
		iVar1 = PED::_0xA033D7E4BBF9844D(iVar0);
		if (PED::IS_PED_ON_MOUNT(Global_34))
		{
			if (PED::GET_MOUNT(Global_34) == iVar1)
			{
				return 1;
			}
		}
		else if (((PED::_0xB676EFDA03DADA52(iVar1, 0) == 0 && (Local_0.f_67[iParam0 /*40*/])->f_2 == PLAYER::GET_PLAYER_INDEX()) || PED::_0xB676EFDA03DADA52(iVar1, 0) == Global_34) && func_1175(Global_34, iVar1, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_870(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam1);
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && PLAYER::_0x0E6846476906C9DD(iVar0, iParam0))
	{
		ENTITY::_0x7F20092547B4DDEA(iParam0);
		PLAYER::_0x9DAE1380CC5C6451(iVar0, iParam0);
	}
}

char* func_871(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FME_RU_SHARD_UPDATE_HOGTIED";
		case 1:
			return "FME_RU_SHARD_UPDATE_KILLED";
		case 2:
			return "FME_RU_SHARD_UPDATE_RETURNED";
		case 3:
			return "FME_RU_SHARD_UPDATE_ESCAPED";
		case 4:
			return "FME_RU_SHARD_UPDATE_KNOCKED_OUT";
	}
	return "[FME_SS_GET_SCORETIMER_MESSAGE_STRING]: message type not defined";
}

char* func_872(int iParam0)
{
	var uVar0;

	uVar0 = Local_913.f_41;
	return "FME_RU_OUTLAW_NAME";
}

void func_873()
{
	if (MISC::IS_BIT_SET(&Global_1956187, 4))
	{
	}
	else
	{
		MISC::SET_BIT(Global_1956187, 0);
	}
}

int func_874()
{
	if (func_292())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			if (func_643())
			{
				func_644();
				func_645();
				func_646();
			}
			else if (func_647(Global_34, 0, 0, 0) == joaat("weapon_fishingrod"))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0, 0);
				WEAPON::_0x94A3C1B804D291EC(Global_34, 0, 0, 0, 0);
			}
			return 0;
		}
	}
	return 1;
}

int func_875()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_34) && !ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		if (func_647(Global_34, 0, 0, 1) == joaat("weapon_kit_camera"))
		{
			func_1181(0);
		}
		else if (WEAPON::_0xC853230E76A152DF(func_647(Global_34, 0, 0, 1)))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), false, 0, false, false);
		}
	}
	return 1;
}

char* func_876(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_164(39, iParam0))
		{
			return HUD::_0xD8402B858F4DDD88(&(Global_1099294->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1099294->f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1275573->f_22[iParam0])
	{
		return sVar0;
	}
	if (func_164(39, iParam0))
	{
		return HUD::_0xD8402B858F4DDD88(&(((*Global_1097610)[iParam0 /*51*/])->f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_1097610)[iParam0 /*51*/])->f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(&(Global_1275573->f_154[iParam0]));
}

int func_877(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_878(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26833), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_879(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_880(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_1182(iParam0);
		return false;
	}
	if (func_879(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 2)
		{
			func_1183(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1275573->f_10, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 2);
}

int func_881(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;

	if (uParam1->f_11.f_2 == 0)
	{
		uParam1->f_949 = MISC::_SHOULD_USE_METRIC_WEIGHT();
		if (!func_605(iParam2, 8))
		{
			bVar0 = func_605(iParam2, 128);
			func_1184(uParam0, uParam1, iParam2, bVar0, iParam3, iParam4, iParam5, iParam6);
		}
		if (!func_605(iParam2, 4))
		{
			func_1185(uParam1, iParam2, iParam7);
		}
	}
	return 1;
}

void func_882(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12[8];
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	bVar0 = func_605(iParam2, 8);
	bVar1 = func_605(iParam2, 128);
	bVar2 = func_605(iParam2, 1024);
	bVar3 = func_605(iParam2, 4096);
	bVar4 = func_605(iParam2, 8192);
	bVar5 = func_605(iParam2, 256);
	bVar6 = iParam7 > 1;
	iVar21 = 0;
	while (iVar21 < 8)
	{
		iVar12[iVar21] = iVar21;
		iVar21++;
	}
	iVar22 = PLAYER::PLAYER_ID();
	if (bVar3)
	{
		if (uParam0->f_949 != MISC::_SHOULD_USE_METRIC_WEIGHT())
		{
			func_268(uParam0);
			func_269(uParam0);
			uParam0->f_949 = MISC::_SHOULD_USE_METRIC_WEIGHT();
		}
	}
	else if (bVar4)
	{
		if (uParam0->f_949 != MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2())
		{
			func_268(uParam0);
			func_269(uParam0);
			uParam0->f_949 = MISC::_SHOULD_USE_METRIC_MEASUREMENTS_2();
		}
	}
	if (uParam0->f_948 || uParam0->f_947)
	{
		iVar11 = 0;
		while (iVar11 <= 31)
		{
			if ((uParam0->f_210[iVar11 /*23*/])->f_14 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam0->f_210[iVar11 /*23*/])->f_14))
			{
				if (bVar6)
				{
					iVar9 = &uParam0->f_210[iVar11 /*23*/];
					if (iVar9 == PLAYER::GET_PLAYER_TEAM(iVar22))
					{
						fVar7 = uParam1[iVar9];
					}
					else if (uParam1[iVar9] > fVar8)
					{
						fVar8 = uParam1[iVar9];
					}
				}
				else if (uParam0->f_210[iVar11 /*23*/])->f_14 == PLAYER::PLAYER_ID()
				{
					fVar7 = (uParam0->f_210[iVar11 /*23*/])->f_5;
				}
				else if (!bVar10)
				{
					fVar8 = (uParam0->f_210[iVar11 /*23*/])->f_5;
					bVar10 = true;
				}
				StringCopy(&((uParam0->f_210[iVar11 /*23*/])->f_14.f_1), PLAYER::GET_PLAYER_NAME((uParam0->f_210[iVar11 /*23*/])->f_14), 64);
			}
			iVar11++;
		}
		if (!bVar0)
		{
			func_1186(uParam0, iParam2, fVar7, fVar8, bVar1, bVar2, bVar3, iParam3, iParam4, iParam5, iParam6, uParam0->f_948);
		}
		if (uParam0->f_947)
		{
			iVar24 = 0;
			while (iVar24 <= 31)
			{
				if (uParam0->f_210[iVar24 /*23*/])->f_14 == PLAYER::PLAYER_ID()
				{
					iVar23 = iVar24;
				}
				else
				{
					iVar24++;
				}
			}
			func_1187(&(uParam0->f_11), &(uParam0->f_210), PLAYER::GET_PLAYER_TEAM(iVar22), bVar6, &iVar12, 0, iVar23);
			uParam0->f_947 = 0;
		}
	}
	if (bVar5)
	{
		MISC::SET_BIT(&(uParam0->f_11.f_158), 18);
	}
	if (!func_605(iParam2, 4))
	{
		func_1188(&(uParam0->f_11), &(uParam0->f_210), &iVar22, uParam0->f_948, &iVar12, bVar6, 0, 0);
		uParam0->f_948 = 0;
	}
}

int func_883(var uParam0, var uParam1, int iParam2)
{
	if (((*uParam1)[0 /*34*/])->f_21 == 0)
	{
		func_1189(uParam0, uParam1, 0, "meter0", iParam2);
		func_1189(uParam0, uParam1, 1, "meter1", iParam2);
		func_1189(uParam0, uParam1, 2, "meter2", iParam2);
		func_1189(uParam0, uParam1, 3, "meter3", iParam2);
		func_1189(uParam0, uParam1, 4, "meter4", iParam2);
		func_1189(uParam0, uParam1, 5, "meter5", iParam2);
		func_1189(uParam0, uParam1, 6, "meter6", iParam2);
		return 0;
	}
	return 1;
}

void func_884(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;

	func_1190(iParam1, &uVar1, &iVar2, &uVar3, &uVar4, &iVar5, &uVar6, &iVar7);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		func_1191(uParam0, iVar0, uVar1, iVar2, uVar3, uVar4, iVar5, uVar6, iVar7, iParam2, bParam3, bParam4, bParam5);
		iVar0++;
	}
}

int func_885()
{
	return 1;
}

int func_886(int iParam0, int iParam1)
{
	int iVar0;

	if (func_463())
	{
		if (iParam1 == 0)
		{
			iVar0 = -1455480431;
		}
		else
		{
			iVar0 = -1109114584;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 655389023;
				break;
			case 1:
				iVar0 = 1019649227;
				break;
			case 2:
				iVar0 = 1260992912;
				break;
			case 3:
				iVar0 = -536255662;
				break;
			case 4:
				iVar0 = -1127015194;
				break;
			case 5:
				iVar0 = 57485849;
				break;
			case 6:
				iVar0 = -774781213;
				break;
			case 7:
				iVar0 = -1840855094;
				break;
			case 8:
				iVar0 = -1619762651;
				break;
			case 9:
				iVar0 = -275856840;
				break;
			case 10:
				iVar0 = 215350470;
				break;
			case 11:
				iVar0 = -620553951;
				break;
			case 12:
				iVar0 = -328156164;
				break;
			case 13:
				iVar0 = -1231466418;
				break;
			case 14:
				iVar0 = -431706200;
				break;
			case 15:
				iVar0 = -1333836770;
				break;
			case 16:
				iVar0 = -1047402941;
				break;
			case 17:
				iVar0 = -1882979672;
				break;
			case 18:
				iVar0 = -1387053626;
				break;
			case 19:
				iVar0 = -126757306;
				break;
			case 20:
				iVar0 = 112423625;
				break;
			case 21:
				iVar0 = -586342531;
				break;
			case 22:
				iVar0 = -318128266;
				break;
			case 23:
				iVar0 = 993582035;
				break;
			case 24:
				iVar0 = 1031725151;
				break;
			case 25:
				iVar0 = 333745451;
				break;
			case 26:
				iVar0 = 1127607177;
				break;
			case 27:
				iVar0 = 293013516;
				break;
			case 28:
				iVar0 = 601533651;
				break;
			case 29:
				iVar0 = 675034810;
				break;
			case 30:
				iVar0 = -75703208;
				break;
			case 31:
				iVar0 = -1516162910;
				break;
			default:
				return 0;
		}
	}
	if (iVar0 != 0)
	{
		func_1192(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_887(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1) && _NAMESPACE26::_0x149A2751AB66AC02(iVar1) >= 2)
	{
		iVar0 = -849580004;
	}
	else
	{
		iVar0 = -1481994377;
	}
	if (iVar0 != 0)
	{
		func_1192(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_888(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_156(&uParam1))
	{
		iVar2 = func_186(&uParam1);
		iVar1 = BUILTIN::FLOOR(func_1107(((BUILTIN::TO_FLOAT(iVar2) / 1000f) / 60f), 0f, 30f));
	}
	switch (iVar1)
	{
		case 0:
			iVar0 = -1872051906;
			break;
		case 1:
			iVar0 = -1500385908;
			break;
		case 2:
			iVar0 = 1941932008;
			break;
		case 3:
			iVar0 = -2122898601;
			break;
		case 4:
			iVar0 = 1281472813;
			break;
		case 5:
			iVar0 = 1646781625;
			break;
		case 6:
			iVar0 = 714864034;
			break;
		case 7:
			iVar0 = 947753317;
			break;
		case 8:
			iVar0 = 122171131;
			break;
		case 9:
			iVar0 = 351980128;
			break;
		case 10:
			iVar0 = -1855497387;
			break;
		case 11:
			iVar0 = 2006853571;
			break;
		case 12:
			iVar0 = 745345378;
			break;
		case 13:
			iVar0 = -1556611338;
			break;
		case 14:
			iVar0 = 600768562;
			break;
		case 15:
			iVar0 = -1685459034;
			break;
		case 16:
			iVar0 = 1352522191;
			break;
		case 17:
			iVar0 = 911910217;
			break;
		case 18:
			iVar0 = -483131655;
			break;
		case 19:
			iVar0 = -789489036;
			break;
		case 20:
			iVar0 = -748172699;
			break;
		case 21:
			iVar0 = 103067614;
			break;
		case 22:
			iVar0 = -281116142;
			break;
		case 23:
			iVar0 = 562587301;
			break;
		case 24:
			iVar0 = 1303756567;
			break;
		case 25:
			iVar0 = 928027213;
			break;
		case 26:
			iVar0 = 1747874824;
			break;
		case 27:
			iVar0 = 1407470452;
			break;
		case 28:
			iVar0 = 1706094329;
			break;
		case 29:
			iVar0 = 1339147067;
			break;
		case 30:
			iVar0 = -1631493579;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1192(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_889(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if ((func_36(&Var1, Local_2395.f_1) && func_37(&Var1)) && func_38(&Var1, Local_2395.f_3))
	{
		if (func_40(Var1, -75980337, &uVar6, 0))
		{
			iVar0 = uVar6;
		}
	}
	if (iVar0 != 0)
	{
		func_1192(iParam0, iVar0);
		return 1;
	}
	else if (Local_2395.f_9 != -785841056)
	{
	}
	return 0;
}

int func_890(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	return func_1193(iParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

int func_891()
{
	int iVar0;

	if (Local_2152.f_14 == 0)
	{
		return func_188(2);
	}
	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(Local_2152.f_15) / BUILTIN::TO_FLOAT(Local_2152.f_14)));
	if (iVar0 < 2)
	{
		iVar0 = 2;
	}
	else if (iVar0 > 32)
	{
		iVar0 = 32;
	}
	return iVar0;
}

int func_892(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
			iVar0 = -531721699;
			break;
		case 3:
			iVar0 = -205801225;
			break;
		case 4:
			iVar0 = 82926434;
			break;
		case 5:
			iVar0 = -1518330831;
			break;
		case 6:
			iVar0 = -1825441899;
			break;
		case 7:
			iVar0 = -2114300634;
			break;
		case 8:
			iVar0 = 1874374819;
			break;
		case 9:
			iVar0 = -562721249;
			break;
		case 10:
			iVar0 = -393525148;
			break;
		case 11:
			iVar0 = -799991824;
			break;
		case 12:
			iVar0 = -1968206678;
			break;
		case 13:
			iVar0 = -124786579;
			break;
		case 14:
			iVar0 = -1489812047;
			break;
		case 15:
			iVar0 = -1796759270;
			break;
		case 16:
			iVar0 = 1936350748;
			break;
		case 17:
			iVar0 = 1461200248;
			break;
		case 18:
			iVar0 = 267982647;
			break;
		case 19:
			iVar0 = 2106487396;
			break;
		case 20:
			iVar0 = 1385930779;
			break;
		case 21:
			iVar0 = 1364762005;
			break;
		case 22:
			iVar0 = -1236703371;
			break;
		case 23:
			iVar0 = -1526020872;
			break;
		case 24:
			iVar0 = -1713000786;
			break;
		case 25:
			iVar0 = -2019554781;
			break;
		case 26:
			iVar0 = -847604265;
			break;
		case 27:
			iVar0 = -81759966;
			break;
		case 28:
			iVar0 = -790684508;
			break;
		case 29:
			iVar0 = -22677455;
			break;
		case 30:
			iVar0 = 949545730;
			break;
		case 31:
			iVar0 = 720785341;
			break;
		case 32:
			iVar0 = 519387067;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1192(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_893(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_156(&uParam1))
	{
		iVar2 = func_186(&uParam1);
		iVar1 = BUILTIN::FLOOR(func_1107(((BUILTIN::TO_FLOAT(iVar2) / 1000f) / 60f), 0f, 30f));
	}
	switch (iVar1)
	{
		case 0:
			iVar0 = 358499753;
			break;
		case 1:
			iVar0 = 1552831472;
			break;
		case 2:
			iVar0 = -120419182;
			break;
		case 3:
			iVar0 = 913639430;
			break;
		case 4:
			iVar0 = 1152853130;
			break;
		case 5:
			iVar0 = 191312355;
			break;
		case 6:
			iVar0 = 1765469585;
			break;
		case 7:
			iVar0 = 769947357;
			break;
		case 8:
			iVar0 = -73297320;
			break;
		case 9:
			iVar0 = -765444138;
			break;
		case 10:
			iVar0 = -509454489;
			break;
		case 11:
			iVar0 = -720355773;
			break;
		case 12:
			iVar0 = -1018389828;
			break;
		case 13:
			iVar0 = -146537754;
			break;
		case 14:
			iVar0 = 686548533;
			break;
		case 15:
			iVar0 = 1576456266;
			break;
		case 16:
			iVar0 = 197667822;
			break;
		case 17:
			iVar0 = 1117395345;
			break;
		case 18:
			iVar0 = 1953955146;
			break;
		case 19:
			iVar0 = -1457494368;
			break;
		case 20:
			iVar0 = 864221171;
			break;
		case 21:
			iVar0 = -1985403838;
			break;
		case 22:
			iVar0 = -1746157369;
			break;
		case 23:
			iVar0 = 1846570253;
			break;
		case 24:
			iVar0 = 2086930872;
			break;
		case 25:
			iVar0 = -567915205;
			break;
		case 26:
			iVar0 = -328996426;
			break;
		case 27:
			iVar0 = -1299089902;
			break;
		case 28:
			iVar0 = -1056697609;
			break;
		case 29:
			iVar0 = 658366309;
			break;
		case 30:
			iVar0 = 825941725;
			break;
		default:
			return 0;
	}
	if (iVar0 != 0)
	{
		func_1192(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_894(int iParam0)
{
	int iVar0;

	if (func_463())
	{
		iVar0 = -1633060422;
	}
	else
	{
		iVar0 = -794388871;
	}
	if (iVar0 != 0)
	{
		func_1192(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_895(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		iVar0 = 2035179919;
	}
	else
	{
		iVar0 = 815649725;
	}
	if (iVar0 != 0)
	{
		func_1192(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_896(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		iVar0 = 1549099924;
	}
	else
	{
		iVar2 = _NAMESPACE26::_0x149A2751AB66AC02(iVar1);
		switch (iVar2)
		{
			case 1:
				iVar0 = 1549099924;
				break;
			case 2:
				iVar0 = -173468095;
				break;
			case 3:
				iVar0 = 133642973;
				break;
			case 4:
				iVar0 = -1086838432;
				break;
			case 5:
				iVar0 = 290147717;
				break;
			case 6:
				iVar0 = -624566149;
				break;
			case 7:
				iVar0 = -1392573202;
				break;
			default:
				return 0;
		}
	}
	if (iVar0 != 0)
	{
		func_1192(iParam0, iVar0);
		return 1;
	}
	return 0;
}

int func_897(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_156(&uParam0))
	{
		iVar1 = func_186(&uParam0);
		iVar0 = BUILTIN::FLOOR(func_1107(((BUILTIN::TO_FLOAT(iVar1) / 1000f) / 60f), 0f, 30f));
	}
	iVar2 = 0;
	if (iVar0 < 3)
	{
		iVar2 = 0;
	}
	else if (iVar0 < 6)
	{
		iVar2 = -2125467258;
	}
	else if (iVar0 < 9)
	{
		iVar2 = -663248944;
	}
	else if (iVar0 < 12)
	{
		iVar2 = -613374526;
	}
	else if (iVar0 < 15)
	{
		iVar2 = 1035797597;
	}
	else if (iVar0 < 20)
	{
		iVar2 = -1335170629;
	}
	else if (iVar0 < 25)
	{
		iVar2 = 1620069667;
	}
	else if (iVar0 < 30)
	{
		iVar2 = -209226873;
	}
	else
	{
		iVar2 = 110270613;
	}
	return iVar2;
}

int func_898()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	iVar0 = (Local_2202[Local_2395.f_1332 /*6*/])->f_3;
	iVar1 = (Local_368[Local_2395.f_1332 /*17*/])->f_14;
	iVar2 = (iVar0 + iVar1);
	iVar3 = Local_0.f_360;
	iVar4 = func_186(&(Local_2152.f_4));
	if (iVar2 < 1)
	{
		return 0;
	}
	Var5.f_1 = 11;
	func_1194(&(Local_2395.f_1362), &Var5, 1, iVar4, iVar0, iVar2, iVar3);
	Local_2395.f_1281++;
	return 1;
}

void func_899()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iVar0 /*40*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_0.f_67[iVar0 /*40*/])))
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_0.f_67[iVar0 /*40*/]));
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, -1976316465);
		}
		iVar0++;
	}
}

void func_900(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar0]), "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar0]), "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar0]), "StatPriority", "");
		iVar0++;
	}
}

void func_901(var uParam0)
{
	int iVar0;
	var uVar1;

	if (uParam0[0 /*5*/] != 0)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0[iVar0 /*5*/]);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*uParam0)[iVar0 /*5*/])->f_1);
			iVar0++;
		}
		uVar1 = 2;
		MISC::_COPY_MEMORY(uParam0, &uVar1, 11);
	}
}

void func_902(var uParam0, bool bParam1)
{
	int iVar0;

	UIAPPS::_CLOSE_APP_BY_HASH(joaat("leaderboards"));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_142))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_142);
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_143[iVar0])))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(&(uParam0->f_143[iVar0]));
		}
		iVar0++;
	}
	AUDIO::_0x531A78D6BF27014B("MP_Leaderboard_Sounds");
	if (!bParam1)
	{
		func_1195(&(uParam0->f_162));
	}
	func_507(0);
}

var func_903(char* sParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar20;

	Var0 = -2;
	Var0 = uParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar20 = _NAMESPACE71::_0x860DDFE97CC94DF0(&Var0, &Var13, iParam5);
	return uVar20;
}

Vector3 func_904(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

int func_905(int iParam0)
{
	struct<2> Var0;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_906(int iParam0)
{
	return func_595(iParam0, 2);
}

void func_907(int iParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		if (DECORATOR::DECOR_EXIST_ON(iVar0, "MC_EntityID"))
		{
			DECORATOR::_DECOR_REMOVE_ALL(iVar0);
		}
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

void func_908()
{
	if (!func_164(128, 255))
	{
		return;
	}
}

void func_909(int iParam0, bool bParam1)
{
	if (!func_981(32))
	{
		return;
	}
	func_988(33, Global_1132968->f_5509.f_4, 0, 0, 0);
	func_1196(32);
	func_1197();
	Global_1132968->f_5509.f_4 = 0;
	Global_1132968->f_5509 = 0;
	func_987(&(Global_1951141->f_2228));
	func_985(&(Global_1951141->f_2228));
	func_1198(4);
	if (bParam1)
	{
		func_1199(iParam0, 1, 1);
	}
	func_988(27, 0, 2, 0, 0);
}

void func_910()
{
	func_1200();
	func_1201();
}

void func_911(float fParam0)
{
	Global_1954472->f_1461.f_3 = fParam0;
}

struct<12> func_912()
{
	struct<12> Var0;
	int iVar12;
	int iVar13;

	Var0.f_1 = -1;
	Var0.f_3 = -1082130432;
	Var0.f_4 = 2;
	Var0.f_5 = -1082130432;
	Var0.f_7 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_11 = -1082130432;
	iVar12 = PLAYER::PLAYER_PED_ID();
	iVar13 = PLAYER::PLAYER_ID();
	switch (Global_1954472->f_1465.f_117.f_12)
	{
		case 0:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 0;
			Var0.f_10 = 0;
			Var0.f_6 = 0;
			break;
		case 1:
			Var0 = 0;
			Var0.f_8 = 0;
			Var0.f_4 = 2;
			Var0.f_2 = 1;
			Var0.f_10 = 1;
			Var0.f_6 = 1;
			break;
		case 2:
			Var0 = 3;
			Var0.f_1 = Global_1954472->f_1465.f_117.f_13;
			Var0.f_8 = 3;
			Var0.f_9 = Global_1954472->f_1465.f_117.f_15;
			Var0.f_4 = 3;
			Var0.f_5 = Global_1954472->f_1465.f_117.f_14;
			Var0.f_2 = 3;
			Var0.f_3 = Global_1954472->f_1465.f_117.f_16;
			Var0.f_10 = 3;
			Var0.f_11 = Global_1954472->f_1465.f_117.f_17;
			Var0.f_6 = 3;
			Var0.f_7 = Global_1954472->f_1465.f_117.f_18;
			break;
		case 3:
			Var0 = 3;
			Var0.f_1 = ENTITY::GET_ENTITY_HEALTH(iVar12);
			Var0.f_8 = 3;
			Var0.f_9 = PED::_0x775A1CA7893AA8B5(iVar12);
			Var0.f_4 = 3;
			Var0.f_5 = PLAYER::_0xA81D24AE0AF99A5E(iVar13);
			Var0.f_2 = 3;
			Var0.f_3 = func_1202(0, 2);
			Var0.f_10 = 3;
			Var0.f_11 = func_1202(1, 2);
			Var0.f_6 = 3;
			Var0.f_7 = func_1202(2, 2);
			break;
	}
	return Var0;
}

void func_913()
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	var uVar4;

	uVar0 = func_1203(joaat("dist"), joaat("sprinting"));
	Global_1954472->f_1331.f_74.f_2 = uVar0;
	uVar1 = func_1203(joaat("time"), 1449106310);
	Global_1954472->f_1331.f_74.f_3 = uVar1;
	fVar2 = func_1203(845057552, -458184788);
	fVar3 = func_1203(845057552, joaat("canoe"));
	Global_1954472->f_1331.f_74.f_1 = (fVar2 + fVar3);
	uVar4 = func_1204(-1645702932);
	Global_1954472->f_1331.f_74.f_5 = uVar4;
}

void func_914()
{
	MISC::_0xD2D74F89DF844A50(&(Global_1954472->f_1465));
}

void func_915()
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(Global_34))
	{
		return;
	}
	WEAPON::_0xC395355843BE134B(Global_34);
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, false, 0, true))
	{
		if (((iVar0 == joaat("weapon_fishingrod") || WEAPON::_0xC853230E76A152DF(iVar0)) || iVar0 == joaat("weapon_kit_camera")) || iVar0 == 191707516)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		}
	}
}

void func_916(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26831), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26831), iParam0);
		if (func_880(iParam0))
		{
			func_1182(iParam0);
		}
	}
}

void func_917(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19946.f_259), iParam0))
		{
			SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_19946.f_259), iParam0);
		}
	}
	else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19946.f_259), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_19946.f_259), iParam0);
		func_841(iParam0);
	}
}

void func_918(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_26832), iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26832), iParam0);
		if (func_1205(iParam0))
		{
			func_1182(iParam0);
		}
	}
}

void func_919(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26836), iParam0);
}

void func_920(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26834), iParam0);
}

struct<7> func_921()
{
	struct<7> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0);
	return Var0;
}

bool func_922(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

void func_923(var uParam0, int iParam1)
{
	var uVar0;

	*uParam0 = 22;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam1);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 11, 7, &uVar0);
}

void func_924(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_1206(91));
	if (func_588(iVar0))
	{
		_NAMESPACE71::_0x2F901291EF177B02(iVar0, 1);
	}
}

void func_925(int iParam0)
{
	Global_1939231->f_242.f_1186 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_242.f_6, MISC::_0x2B6846401D68E563(BUILTIN::TO_FLOAT(Global_1939231->f_242.f_1186), 0));
}

int func_926(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1070356->f_17817 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_1123(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1070356->f_17817 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_1123(*(Global_1070356->f_17817.f_1[iVar8 /*3*/]), &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

int func_927(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1123(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_928()
{
	return !Global_1572887->f_9;
}

void func_929(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_930(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1690863991;
		case 3:
			return 1286170048;
		case 4:
			return -342492333;
		case 5:
			return 1140089012;
		case 8:
			return 634321112;
		case 7:
			return -2079273178;
		case 6:
			return -147846054;
		default:
			break;
	}
	return 0;
}

void func_931(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_637(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1207(func_837(Param0));
			iVar5 = func_1208(iVar4);
			if (!func_1209(iVar5, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1100950->f_33[iVar1 /*16*/] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = (Global_1100950->f_33[iVar2 /*16*/])->f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	uParam2->f_2 = Global_1111121[iVar0 /*42*/];
}

int func_932(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_926(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1210(iVar0);
}

int func_933(struct<2> Param0, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (Global_1070356->f_17817 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_1123(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1070356->f_17817 == 0)
	{
		*(Global_1070356->f_17817.f_1[Global_1070356->f_17817 /*3*/]) = { vVar6 };
		Global_1070356->f_17817++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1070356->f_17817)
	{
		func_1123(*(Global_1070356->f_17817.f_1[iVar9 /*3*/]), &vVar3);
		if (vVar0.x == vVar3.x)
		{
			*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_1211(iVar9);
			*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1070356->f_17817 < 31)
	{
		iVar9 = Global_1070356->f_17817;
		*(Global_1070356->f_17817.f_1[iVar9 /*3*/]) = { vVar6 };
		Global_1070356->f_17817++;
		if (Global_1070356->f_17817 > 32)
		{
			Global_1070356->f_17817 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_934()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (func_1123(*(Global_1070356->f_17817.f_1[iVar0 /*3*/]), &vVar1))
		{
		}
		iVar0++;
	}
}

int func_935(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1746095559 /* GXTEntry: "Arson" */;
		case 1:
			return 195938434 /* GXTEntry: "Assault" */;
		case 2:
			return 416962030 /* GXTEntry: "Animal Cruelty" */;
		case 3:
			return 1314857970 /* GXTEntry: "Disturbing the Peace" */;
		case 4:
			return -999071359 /* GXTEntry: "Animal Cruelty" */;
		case 5:
			return -683250308 /* GXTEntry: "Assault" */;
		case 6:
			return -857617219 /* GXTEntry: "Animal Cruelty" */;
		case 7:
			return 1780145725 /* GXTEntry: "Bank Robbery" */;
		case 8:
			return -1521715232 /* GXTEntry: "Trespassing" */;
		case 9:
			return -1560342203 /* GXTEntry: "Cheating" */;
		case 10:
			return 1343354387 /* GXTEntry: "Disturbing the Peace" */;
		case 11:
			return 1052408375 /* GXTEntry: "Disturbing the Peace" */;
		case 12:
			return -1759599185 /* GXTEntry: "Grave Robbery" */;
		case 13:
			return joaat("crime_hassle");
		case 14:
			return -16106300 /* GXTEntry: "Unarmed Assault" */;
		case 15:
			return 105387183 /* GXTEntry: "Unarmed Assault" */;
		case 16:
			return -2095449173 /* GXTEntry: "Intimidation" */;
		case 17:
			return -2097683294 /* GXTEntry: "Horse Theft" */;
		case 18:
			return 1805131596 /* GXTEntry: "Vehicle Theft" */;
		case 19:
			return 314693001 /* GXTEntry: "Jail Break" */;
		case 20:
			return -1728509733 /* GXTEntry: "Kidnapping" */;
		case 21:
			return -42817558 /* GXTEntry: "Kidnapping" */;
		case 22:
			return 1458462042 /* GXTEntry: "Assault" */;
		case 23:
			return 481893872 /* GXTEntry: "Disturbing the Peace" */;
		case 24:
			return 1714017012 /* GXTEntry: "Disturbing the Peace" */;
		case 25:
			return 1437412331 /* GXTEntry: "Looting" */;
		case 26:
			return -493957506 /* GXTEntry: "Murder" */;
		case 27:
			return 1224055398 /* GXTEntry: "Animal Cruelty" */;
		case 28:
			return -953803399 /* GXTEntry: "Animal Cruelty" */;
		case 29:
			return 2006449383 /* GXTEntry: "Murder" */;
		case 30:
			return -1788230330 /* GXTEntry: "Animal Cruelty" */;
		case 31:
			return 1396375613 /* GXTEntry: "Vandalism" */;
		case 32:
			return joaat("crime_resist_arrest");
		case 33:
			return -1547772340 /* GXTEntry: "Robbery" */;
		case 34:
			return -59535775 /* GXTEntry: "Robbery" */;
		case 35:
			return -1701536647 /* GXTEntry: "Theft" */;
		case 36:
			return 1923998736 /* GXTEntry: "Theft" */;
		case 37:
			return -1103472584 /* GXTEntry: "Horse Theft" */;
		case 38:
			return -2051405571 /* GXTEntry: "Rustling" */;
		case 39:
			return 1135209633 /* GXTEntry: "Vehicle Theft" */;
		case 40:
			return -1810065318 /* GXTEntry: "Disturbing the Peace" */;
		case 41:
			return 2140177766;
		case 42:
			return 1685924442 /* GXTEntry: "Train Robbery" */;
		case 43:
			return 1171995096 /* GXTEntry: "Murder" */;
		case 44:
			return -267442581 /* GXTEntry: "Murder" */;
		case 45:
			return -1361146315 /* GXTEntry: "Trespassing" */;
		case 46:
			return 1352191066 /* GXTEntry: "Unarmed Assault" */;
		case 47:
			return -2130852007 /* GXTEntry: "Vandalism" */;
		case 48:
			return -102241052 /* GXTEntry: "Vandalism" */;
		case 49:
			return 1420320220 /* GXTEntry: "Vandalism" */;
		case 50:
			return -1715130379 /* GXTEntry: "Felony" */;
		case 51:
			return -661550833 /* GXTEntry: "Misdemeanor" */;
		case 52:
			return -1358475411 /* GXTEntry: "Accomplice" */;
		case 53:
			return -1848598303;
		case 54:
			return -173287735 /* GXTEntry: "Murder" */;
		case 55:
			return -715363719 /* GXTEntry: "Animal Cruelty" */;
		case 56:
			return -1117123933 /* GXTEntry: "Disturbing the Peace" */;
		case 57:
			return 1972833301 /* GXTEntry: "Murder" */;
		case 58:
			return 0;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_936(char[12] cParam0)
{
	Global_1938085->f_75.f_67 = { cParam0 };
}

void func_937()
{
	StringCopy(&(Global_1938085->f_75.f_67), "", 24);
}

bool func_938(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1212(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1213(iVar1))
	{
		if (Global_1070356->f_17915.f_24 && !func_1214(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(&(Global_1070356->f_17915[iVar1]), iVar2) || MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2));
	}
	return MISC::IS_BIT_SET(&(Global_39.f_106[iVar1]), iVar2);
}

int func_939(struct<2> Param0)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_74(*(Global_1900718->f_1[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_940(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900718->f_66 == 0)
	{
		return 0;
	}
	if (Global_1900718->f_66 == 1)
	{
		Global_1900718->f_66 = 0;
		func_1215(Global_1900718->f_1[0 /*2*/]);
		return 1;
	}
	func_1215(Global_1900718->f_1[iParam0 /*2*/]);
	Global_1900718->f_66 = (Global_1900718->f_66 - 1);
	func_1216(iParam0, Global_1900718->f_66);
	return 1;
}

int func_941(struct<2> Param0)
{
	int iVar0;

	if (Global_1184439->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1184439->f_129)
	{
		if (func_74(((*Global_1184439)[iVar0 /*4*/])->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_942(int iParam0, var uParam1)
{
	func_1217(uParam1, iParam0);
	if (Global_1184439->f_129 > 0)
	{
		if (Global_1184439->f_130 == iParam0)
		{
			func_1218(0);
		}
	}
	func_1219();
}

void func_943(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_944()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_945(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 134:
			return 69;
		case 135:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 137:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_946(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_947(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_948(var uParam0)
{
	struct<4> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

bool func_949()
{
	return Global_1902942->f_5 == 6;
}

void func_950(int iParam0)
{
	if (!func_1220(iParam0))
	{
		func_146(&(Global_1902942->f_2), iParam0);
	}
}

bool func_951()
{
	return Global_1902942->f_5 == 7;
}

bool func_952()
{
	return Global_1902942->f_5 == 12;
}

void func_953(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_650() - fParam1);
	func_400(uParam0, 1);
	func_401(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_954(var uParam0, int iParam1)
{
}

void func_955(var uParam0)
{
	struct<16> Var0;

	Var0.f_13 = -1;
	Var0.f_13.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_956(var uParam0)
{
	struct<5> Var0;

	Var0.f_3 = 1;
	*uParam0 = { Var0 };
}

void func_957(var uParam0)
{
	var uVar0;

	uVar0 = 1;
	*uParam0 = uVar0;
}

void func_958(var uParam0)
{
	vector3 vVar0;

	vVar0 = 1;
	vVar0.f_1 = -1082130432;
	vVar0.f_2 = 1;
	*uParam0 = { vVar0 };
}

void func_959(var uParam0)
{
	struct<9> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_2 = -1;
	Var0.f_1 = -1;
	Var0 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	*uParam0 = { Var0 };
}

void func_960(var uParam0)
{
	struct<4> Var0;

	*uParam0 = { Var0 };
}

void func_961(var uParam0)
{
	vector3 vVar0;

	*uParam0 = { vVar0 };
}

void func_962(var uParam0)
{
	vector3 vVar0;

	*uParam0 = { vVar0 };
}

void func_963(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

void func_964()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1954472->f_1465.f_117.f_13 = BUILTIN::FLOOR(PLAYER::_0x0317C947D062854E(iVar0));
	Global_1954472->f_1465.f_117.f_14 = PLAYER::_0xDF66A37936D5F3D9(iVar0);
	Global_1954472->f_1465.f_117.f_15 = PLAYER::_0x0FF421E467373FCF(iVar0);
}

void func_965()
{
	Global_1954472->f_1465.f_117.f_16 = func_1202(0, 2);
	Global_1954472->f_1465.f_117.f_17 = func_1202(1, 2);
	Global_1954472->f_1465.f_117.f_18 = func_1202(2, 2);
}

int func_966(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_1221(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_1222(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_1223(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1224(&Var45, &Var0, 0))
				{
					if (func_1225(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_1226(iVar43);
						return 1;
					}
				}
			}
			iVar59++;
		}
		func_1226(iVar43);
	}
	return 0;
}

struct<4> func_967()
{
	return Global_1270530->f_11.f_348;
}

bool func_968()
{
	return Global_1270530->f_11.f_356 > Global_1275573->f_21;
}

void func_969(var uParam0, bool bParam1)
{
	Global_1270530->f_11.f_348 = { *uParam0 };
	if (bParam1)
	{
		Global_1270530->f_11.f_356 = Global_1275573->f_21 + 10;
	}
}

int func_970(int iParam0)
{
	var uVar0;
	bool bVar1;

	uVar0 = func_1227(iParam0);
	bVar1 = func_16(func_1228(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return uVar0;
}

bool func_971(int iParam0)
{
	return func_1229(&(Global_3145858->f_6), iParam0);
}

int func_972(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

struct<4> func_973()
{
	struct<4> Var0;

	return Var0;
}

int func_974(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<14> Var29;
	int iVar43;
	int iVar44;
	struct<10> Var45;
	int iVar59;

	Var0.f_9 = -1591664384;
	Var29 = { func_1221(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_1222(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_1223(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1224(&Var45, &Var0, 0))
				{
					if (func_1225(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_1226(iVar43);
						return 1;
					}
				}
			}
			iVar59++;
		}
		func_1226(iVar43);
	}
	return 0;
}

struct<4> func_975(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar16;

	Var2.f_9 = -1591664384;
	if (!func_1230("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_1223(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (INVENTORY::_0xB881CA836CC4B6D4(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_1226(iVar0);
	return Var2;
}

int func_976(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	func_1231(Global_1903929);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_1232(uParam0, Global_1903929, &(Global_1903929->f_71), bParam3))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_1233(uParam0, Global_1903929, &(Global_1903929->f_100), bParam3))
			{
				return 0;
			}
			break;
	}
	if (bParam2)
	{
		func_1234(Global_1903929);
	}
	return 1;
}

int func_977(var uParam0)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (uParam0->f_10 == -1)
	{
		return 0;
	}
	return 1;
}

int func_978(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uVar1 = iVar0 + 1;
		iVar2 = func_1235(iParam0, uVar1);
		if (iParam1 < iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

void func_979(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1236((*uParam0)[iVar0 /*7*/]);
		iVar0++;
	}
}

void func_980(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_981(int iParam0)
{
	return (Global_1951141 && iParam0) != 0;
}

void func_982(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1951141->f_1657;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(uParam0->f_1[iVar0 /*3*/]) = { *(Global_1951141->f_1657.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_983(int iParam0)
{
	Global_1951141 = (Global_1951141 || iParam0);
}

bool func_984(var uParam0)
{
	struct<4> Var0;

	Var0 = func_1237(0);
	Var0.f_1 = uParam0;
	Var0.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	return DATAFILE::_0xED4413CEE1BF142C(&Var0);
}

void func_985(var uParam0)
{
	int iVar0;

	Global_1951141->f_1538 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1951141->f_1538.f_1[iVar0 /*3*/]) = { *(uParam0->f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_986(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_1237(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return 0;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_1239(uParam0, func_1238(iVar0), 1, 1, bParam7);
	}
	if (bVar2 && DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, -1212855483))
	{
		iVar11 = func_1238(iVar0);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_1240(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("component")))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2 && iVar11 != 0)
				{
					func_1241(iVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						(uParam0->f_1[iVar1 /*3*/])->f_1 = joaat("base");
					}
					else
					{
						Jump @361; //curOff = 296
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (func_1242(iVar3) && func_1243(&(uParam0->f_1[iVar1 /*3*/]), iVar3, &iVar0))
							{
								(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
							}
						}
						else
						{
							(uParam0->f_1[iVar1 /*3*/])->f_1 = iVar0;
						}
					}
					if (bVar2 && iVar11 != 0)
					{
						func_1245(uParam0, iVar11, func_1244(iParam1) != 0);
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return 1;
				}
			}
		}
	}

void func_987(var uParam0)
{
	int iVar0;

	Global_1951141->f_1657 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1951141->f_1657.f_1[iVar0 /*3*/]) = { *(uParam0->f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

void func_988(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_983(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1246(Var0);
}

int func_989(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 2)
	{
		iParam1 = func_997(1);
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = &Global_1954472->f_1331.f_50[iParam0];
			break;
		case 1:
			iVar0 = &Global_1954472->f_1465.f_2.f_50[iParam0];
			break;
	}
	return iVar0 + 4;
}

int func_990(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_997(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446;
		case 1:
			return Global_1954472->f_1465.f_136;
		default:
			break;
	}
	return -1;
}

int func_991(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_997(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_1;
		case 1:
			return Global_1954472->f_1465.f_136.f_1;
		default:
			break;
	}
	return -1;
}

int func_992(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_997(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1954472->f_1446.f_2;
		case 1:
			return Global_1954472->f_1465.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_993()
{
	MISC::_COPY_MEMORY(&(Global_1954472->f_1465.f_2), &(Global_1954472->f_1331), 115);
	Global_1954472->f_1465.f_2.f_6[0 /*3*/] = func_1202(0, 0);
	(Global_1954472->f_1465.f_2.f_6[0 /*3*/])->f_2 = 0;
	(Global_1954472->f_1465.f_2.f_6[0 /*3*/])->f_1 = -15;
	Global_1954472->f_1465.f_2.f_6[1 /*3*/] = func_1202(1, 0);
	(Global_1954472->f_1465.f_2.f_6[1 /*3*/])->f_2 = 0;
	(Global_1954472->f_1465.f_2.f_6[1 /*3*/])->f_1 = -15;
	Global_1954472->f_1465.f_2.f_6[2 /*3*/] = func_1202(2, 0);
	(Global_1954472->f_1465.f_2.f_6[2 /*3*/])->f_2 = 0;
	(Global_1954472->f_1465.f_2.f_6[2 /*3*/])->f_1 = -15;
}

void func_994(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (INVENTORY::_0x13D234A2A3F66E63(Global_1275573->f_8) != 3)
	{
		return;
	}
	iVar0 = func_1247(iParam0);
	iVar1 = func_1248(iVar0, func_1012(0), -1311702610, 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	iVar3 = MISC::ABSI(iVar2);
	if (iVar2 > 0)
	{
		func_384(iVar0, iVar3, 752097756);
	}
	else
	{
		func_1249(iVar0, iVar3, -142743235, 0, 0);
	}
}

int func_995(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 100;
		case 2:
			return 300;
		case 3:
			return 700;
		case 4:
			return 1500;
		case 5:
			return 3100;
		default:
			break;
	}
	return 100;
}

void func_996(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (INVENTORY::_0x13D234A2A3F66E63(Global_1275573->f_8) != 3)
	{
		return;
	}
	iVar0 = func_1250(iParam0);
	iVar1 = func_1248(iVar0, func_1012(0), joaat("SLOTID_PROGRESSION"), 0, 0, 0);
	iVar2 = (iParam1 - iVar1);
	iVar3 = MISC::ABSI(iVar2);
	if (iVar2 > 0)
	{
		func_384(iVar0, iVar3, 752097756);
	}
	else
	{
		func_1249(iVar0, iVar3, -142743235, 0, 0);
	}
	func_1251(iParam0, BUILTIN::TO_FLOAT(iParam1), 1);
}

int func_997(int iParam0)
{
	return func_1252(func_381(iParam0));
}

float func_998(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_997(1);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_26[iParam0]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_26[iParam0]);
		default:
			break;
	}
	return -1f;
}

bool func_999(int iParam0, int iParam1)
{
	return func_1254(func_1253(iParam0), iParam1);
}

void func_1000()
{
	func_1255(0);
	func_1255(1);
	func_1255(2);
	func_1255(3);
}

void func_1001()
{
	func_1256(0);
	func_1256(1);
	func_1256(2);
	func_1256(3);
}

void func_1002()
{
	if (func_1257(2))
	{
		func_1258(0);
	}
	else
	{
		func_1258(1);
	}
	func_1259(1);
	PLAYER::_0x7146CF430965927C(15, true);
	PLAYER::_0x7146CF430965927C(16, true);
}

void func_1003()
{
	float fVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 23)
	{
		fVar0 = func_998(iVar1, 2);
		func_1251(iVar1, fVar0, 2);
		iVar1++;
	}
}

void func_1004(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_990(2);
	iVar2 = iVar0;
	iVar3 = -1;
	PED::_0x7FF72DE061DF55E2(iParam1, 0, BUILTIN::TO_FLOAT(iVar0));
	if (func_23() == 0)
	{
		iVar1 = BUILTIN::ROUND(PED::_0x89BFDF6D53145545(iParam1));
		iVar2 = (iVar2 + iVar1);
	}
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, iVar2);
	iVar4 = *uParam0;
	switch (iVar4)
	{
		case 0:
			iVar3 = ENTITY::GET_ENTITY_MAX_HEALTH(iParam1, 1);
			func_1260(iVar3, 0);
			break;
		case 3:
			iVar3 = uParam0->f_1;
			if (iVar3 > 0)
			{
				func_1260(iVar3, 0);
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MAX_HEALTH(iParam1, 1);
				func_1260(iVar3, 0);
			}
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_1005(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar0 = func_992(2);
	fVar1 = -1f;
	PED::_0x7FF72DE061DF55E2(iParam1, 1, BUILTIN::TO_FLOAT(iVar0));
	iVar2 = uParam0->f_8;
	switch (iVar2)
	{
		case 2:
			break;
		case 0:
			fVar1 = PED::_0xCB42AFE2B613EE55(iParam1);
			func_1261(fVar1, 0);
			break;
		case 1:
			fVar1 = 0f;
			func_1261(fVar1, 0);
			break;
		case 3:
			fVar1 = uParam0->f_9;
			if (fVar1 >= 0f)
			{
				func_1261(fVar1, 0);
			}
			else
			{
				fVar1 = PED::_0xCB42AFE2B613EE55(iParam1);
				func_1261(fVar1, 0);
			}
			break;
	}
}

void func_1006(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_991(2);
	fVar2 = -1f;
	PED::_0x7FF72DE061DF55E2(iParam1, 2, BUILTIN::TO_FLOAT(iVar1));
	iVar3 = uParam0->f_4;
	switch (iVar3)
	{
		case 2:
			func_1263(func_1262());
			break;
		case 0:
			fVar2 = PLAYER::_0x029884FB65821B07(iVar0);
			func_1263(fVar2);
			break;
		case 1:
			fVar2 = 0f;
			func_1263(fVar2);
			break;
		case 3:
			fVar2 = uParam0->f_5;
			if (fVar2 >= 0f)
			{
				func_1263(fVar2);
			}
			else
			{
				fVar2 = PLAYER::_0x029884FB65821B07(iVar0);
				func_1263(fVar2);
			}
			break;
	}
	func_911(0f);
}

void func_1007(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 23)
	{
		if (func_1264(iVar1))
		{
			iVar2 = func_1265(iVar1);
			fVar0 = func_1266(uParam0, iVar2);
			func_1267(iVar2, fVar0);
		}
		iVar1++;
	}
	func_1268();
}

void func_1008()
{
	if (Global_1954472->f_1331.f_108.f_1 != 0f)
	{
		func_1269(0, Global_1954472->f_1331.f_108.f_1, 0, 0);
		Global_1954472->f_1331.f_108.f_1 = 0f;
	}
	if (Global_1954472->f_1331.f_108.f_3 != 0f)
	{
		func_1269(1, Global_1954472->f_1331.f_108.f_3, 0, 0);
		Global_1954472->f_1331.f_108.f_3 = 0f;
	}
	if (Global_1954472->f_1331.f_108.f_2 != 0f)
	{
		func_1269(2, Global_1954472->f_1331.f_108.f_2, 0, 0);
		Global_1954472->f_1331.f_108.f_2 = 0f;
	}
	if (Global_1954472->f_1331.f_108.f_4 != 0f)
	{
		func_1269(19, Global_1954472->f_1331.f_108.f_4, 0, 0);
		Global_1954472->f_1331.f_108.f_4 = 0f;
	}
	if (Global_1954472->f_1331.f_108.f_6 != 0f)
	{
		func_1269(18, Global_1954472->f_1331.f_108.f_6, 0, 0);
		Global_1954472->f_1331.f_108.f_6 = 0f;
	}
	if (Global_1954472->f_1331.f_108.f_5 != 0f)
	{
		func_1269(20, Global_1954472->f_1331.f_108.f_5, 0, 0);
		Global_1954472->f_1331.f_108.f_5 = 0f;
	}
	func_1270();
}

void func_1009(int iParam0)
{
	Global_1954472->f_1331.f_3 = iParam0;
}

int func_1010(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_1271(&iParam0);
	if (!func_680(iParam0, 0) && !func_1273(func_1272(iParam0), 2))
	{
		return 0;
	}
	if (!bParam3 && func_681(iParam0, joaat("default")) == 0)
	{
		bParam3 = true;
	}
	if (func_1274(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		Var0 = { func_1014(0) };
		Var4.f_9 = -1591664384;
		if (!func_1016(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0, 0))
		{
			return 0;
		}
		else if (func_1017(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
		{
			return 0;
		}
		if (func_1015(iParam0, 1))
		{
			if (!func_1016(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0, 0))
			{
				return 0;
			}
			else if (func_1017(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
			{
				return 0;
			}
		}
		return 1;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_1275(iParam0, uParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return 0;
	}
	else if (iVar26 == 0)
	{
		return 1;
	}
	iVar27 = func_1248(iParam0, *uParam1, uParam1->f_4, bParam4, bParam3, iParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return 1;
	}
	return 0;
}

int func_1011(bool bParam0)
{
	if (func_23() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_663(bParam0));
}

struct<4> func_1012(bool bParam0)
{
	int iVar0;

	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_663(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1272170))
			{
				*Global_1272170 = { func_684(joaat("character"), func_973(), -1591664384, bParam0) };
			}
			return *Global_1272170;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_12)))
			{
				Global_1272170->f_12 = { func_684(joaat("character"), func_973(), -1591664384, 0) };
			}
			return Global_1272170->f_12;
		}
	}
	return func_684(joaat("character"), func_973(), -1591664384, bParam0);
}

int func_1013(int iParam0)
{
	vector3 vVar0;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_1014(bool bParam0)
{
	int iVar0;

	iVar0 = func_663(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_4)))
		{
			Global_1272170->f_4 = { func_684(923904168, func_1012(bParam0), -740156546, bParam0) };
		}
		return Global_1272170->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_16)))
		{
			Global_1272170->f_16 = { func_684(923904168, func_1012(bParam0), -740156546, 0) };
		}
		return Global_1272170->f_16;
	}
	return func_684(923904168, func_1012(bParam0), -740156546, 0);
}

int func_1015(int iParam0, bool bParam1)
{
	if (func_905(iParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(iParam0))
	{
		if (bParam1)
		{
			return func_1276();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_1016(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_1248(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

int func_1017(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1277(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_1018(bool bParam0)
{
	int iVar0;

	iVar0 = func_663(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(&(Global_1272170->f_8)))
		{
			Global_1272170->f_8 = { func_684(271701509, func_1012(bParam0), 12999093, 0) };
		}
		return Global_1272170->f_8;
	}
	return func_684(271701509, func_1012(bParam0), 12999093, 0);
}

int func_1019(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_905(iParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_1278(iParam0, iParam1, iVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_1020(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1279(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_1021(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return 1;
}

int func_1022(int iParam0)
{
	if ((iParam0 == joaat("handcart") || iParam0 == 1054492269) || iParam0 == -1772735705)
	{
		return 1;
	}
	return 0;
}

bool func_1023(int iParam0)
{
	return iParam0 == -1005911451;
}

Vector3 func_1024(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

char* func_1025(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1026(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_0x283978A15512B2FE(iVar0, 1);
	}
	return iVar0;
}

int func_1027(var uParam0)
{
	if (func_686(uParam0))
	{
		uParam0->f_2 = 848477026;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return 0;
}

void func_1028(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = iParam2;
	*iParam1 = 0;
	while (*iParam0 >= 32)
	{
		*iParam0 = (*iParam0 - 32);
		*iParam1++;
	}
}

int func_1029()
{
	return 1;
}

float func_1030(var uParam0)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	if (func_1108(&Var1, uParam0))
	{
		func_142(Var1, 1114662700, &fVar0, 0);
	}
	return fVar0;
}

int func_1031(var uParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = joaat("none");
	if (func_1108(&Var1, uParam0))
	{
		func_40(Var1, -1626963905, &iVar0, 0);
	}
	return iVar0;
}

void func_1032(int iParam0, int iParam1)
{
	if ((Local_0.f_67[iParam1 /*40*/])->f_19 == iParam0)
	{
		return;
	}
	(Local_0.f_67[iParam1 /*40*/])->f_19 = iParam0;
}

void func_1033(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(iParam0);
	WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
	if (iParam1 == joaat("high"))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("weapon_shotgun_doublebarrel"), 500, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	else if (iParam1 == 1866880973)
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("weapon_pistol_semiauto"), 500, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
	else if (iParam1 == joaat("low"))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(iVar0, joaat("weapon_pistol_semiauto"), 500, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	}
}

Vector3 func_1034()
{
	return Local_2395.f_1396;
}

void func_1035(var uParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(uParam0->f_8), iParam1);
}

int func_1036(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::_0x3AA24CCC0D451379(iParam0))
	{
		return 1;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
	{
		return 1;
	}
	return 0;
}

int func_1037(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && func_78(&(((*uParam0)[iVar1 /*17*/])->f_5[iParam2]), iParam1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_1038(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam1 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	iVar1 = (uParam0->f_67[iParam1 /*40*/])->f_6;
	if (iVar1 == joaat("high"))
	{
		func_1280(uParam0, iParam1, joaat("high"));
	}
	else if (iVar1 == joaat("low"))
	{
		func_1280(uParam0, iParam1, joaat("low"));
	}
	else if (iVar1 == 1866880973)
	{
		func_1280(uParam0, iParam1, 1866880973);
	}
}

void func_1039(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	float fVar6;
	int iVar7;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam1 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	fVar1 = -1f;
	iVar2 = PLAYER::GET_PLAYER_PED((uParam0->f_67[iParam1 /*40*/])->f_3);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && func_1281(iVar2, 0))
	{
		fVar1 = func_1282(iVar2, iVar0, 1, 1);
	}
	fVar6 = func_1283(iParam1, &uVar3);
	if (func_1037(&Local_368, 256, iParam1))
	{
		(uParam0->f_67[iParam1 /*40*/])->f_3 = 255;
		iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
		if (iVar7 > 30)
		{
			func_1280(uParam0, iParam1, joaat("injured"));
		}
		else
		{
			func_1284(&Local_368, 256, iParam1);
			func_1280(uParam0, iParam1, joaat("escape"));
		}
	}
	else if (((fVar1 == -1f || fVar1 > 7f) || fVar6 < 20f) || func_864(iVar2, 0))
	{
		(uParam0->f_67[iParam1 /*40*/])->f_3 = 255;
		func_1284(&Local_368, 256, iParam1);
		func_1280(uParam0, iParam1, joaat("escape"));
	}
}

void func_1040(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam1 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
}

void func_1041(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam1 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(func_1285(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &fVar1, 1176255488 /* Float: 9999f */, iVar0, 0));
	if (func_1286(iVar0, joaat("SCRIPT_TASK_INTIMIDATED")))
	{
	}
	if (((fVar1 > (45f / 2.5f) || (func_156(&((uParam0->f_67[iParam1 /*40*/])->f_10)) && func_186(&((uParam0->f_67[iParam1 /*40*/])->f_10)) > 5500)) || (((!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iVar2, iVar0, 17) && !ENTITY::IS_ENTITY_ON_SCREEN(iVar0)) && func_156(&((uParam0->f_67[iParam1 /*40*/])->f_10))) && func_186(&((uParam0->f_67[iParam1 /*40*/])->f_10)) > 3500)) || PED::_0x336B3D200AB007CB(iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), 7f, 0) > 0)
	{
		func_1284(&Local_368, 256, iParam1);
		func_1280(uParam0, iParam1, joaat("escape"));
	}
}

void func_1042(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam1 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(func_1285(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &fVar1, 1176255488 /* Float: 9999f */, iVar0, 0));
	if (func_1037(&Local_368, 256, iParam1))
	{
		func_1284(&Local_368, 64, iParam1);
		func_1280(uParam0, iParam1, joaat("injured"));
	}
	else if ((((fVar1 == -1f || fVar1 > (45f / 2f)) || (func_156(&((uParam0->f_67[iParam1 /*40*/])->f_10)) && func_186(&((uParam0->f_67[iParam1 /*40*/])->f_10)) > 5500)) || (((!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iVar2, iVar0, 17) && !ENTITY::IS_ENTITY_ON_SCREEN(iVar0)) && func_156(&((uParam0->f_67[iParam1 /*40*/])->f_10))) && func_186(&((uParam0->f_67[iParam1 /*40*/])->f_10)) > 3500)) || PED::_0x336B3D200AB007CB(iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), 7f, 0) > 0)
	{
		func_1284(&Local_368, 64, iParam1);
		func_1280(uParam0, iParam1, joaat("escape"));
	}
	else if (fVar1 < 7f)
	{
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
		if (iVar3 > 80 || (fVar1 <= (7f / 2f) && iVar3 > 60))
		{
			func_1284(&Local_368, 64, iParam1);
			func_1280(uParam0, iParam1, joaat("combat"));
		}
	}
}

void func_1043(var uParam0, int iParam1)
{
	if (func_1037(&Local_368, 1024, iParam1))
	{
		func_1280(uParam0, iParam1, joaat("flee"));
	}
}

void func_1044(var uParam0, int iParam1)
{
	if (func_1037(&Local_368, 512, iParam1))
	{
		func_1280(uParam0, iParam1, joaat("combat"));
	}
}

void func_1045(var uParam0, int iParam1)
{
	if (func_1037(&Local_368, 512, iParam1))
	{
		func_1280(uParam0, iParam1, joaat("combat"));
	}
}

void func_1046(var uParam0, int iParam1)
{
	if (func_1037(&Local_368, 512, iParam1))
	{
		func_1280(uParam0, iParam1, joaat("combat"));
	}
}

void func_1047(var uParam0, int iParam1)
{
	if (!func_1037(&Local_368, 2048, iParam1))
	{
		func_1280(uParam0, iParam1, joaat("hide"));
	}
}

void func_1048(var uParam0, int iParam1)
{
	if (func_1037(&Local_368, 2048, iParam1))
	{
		func_1280(uParam0, iParam1, joaat("flee"));
	}
}

void func_1049(int iParam0)
{
	if ((Global_1070356->f_19946[iParam0 /*8*/])->f_5 != 0)
	{
		if (MAP::DOES_BLIP_EXIST(&(Global_1070356->f_19946[iParam0 /*8*/])))
		{
			MAP::_0xB059D7BD3D78C16F(&(Global_1070356->f_19946[iParam0 /*8*/]), (Global_1070356->f_19946[iParam0 /*8*/])->f_5);
		}
		(Global_1070356->f_19946[iParam0 /*8*/])->f_5 = 0;
		func_841(iParam0);
	}
}

bool func_1050()
{
	return func_605(Global_1572887->f_7, 1);
}

bool func_1051()
{
	return (Global_1572887->f_106.f_75 >= 13 && Global_1572887->f_106.f_75 < 20);
}

bool func_1052(var uParam0, int iParam1)
{
	return func_78(*uParam0, iParam1);
}

int func_1053(int iParam0)
{
	return (Global_1275573->f_21 - iParam0);
}

void func_1054(var uParam0, int iParam1)
{
	if (func_1052(uParam0, iParam1))
	{
		return;
	}
	func_146(uParam0, iParam1);
}

void func_1055(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	(Global_1102099->f_34[iVar0 /*11*/])->f_10 = 0;
}

void func_1056(var uParam0, int iParam1)
{
	func_423(uParam0, iParam1);
}

void func_1057(var uParam0, var uParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 9, 18, uParam1);
}

void func_1058(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;

	HUD::_GET_COLOR_FROM_NAME(iParam0, &iVar0, &iVar1, &iVar2, &uVar3);
	fVar4 = 255f;
	*uParam1 = (BUILTIN::TO_FLOAT(iVar0) / fVar4);
	*uParam2 = (BUILTIN::TO_FLOAT(iVar1) / fVar4);
	*uParam3 = (BUILTIN::TO_FLOAT(iVar2) / fVar4);
}

void func_1059()
{
	if (func_176(32768, Local_2395.f_1332))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	WEAPON::_0xB7E52A058B07C7E2(PLAYER::PLAYER_PED_ID(), &(Local_2395.f_1437), &(Local_2395.f_1441));
	if (INVENTORY::_0xB881CA836CC4B6D4(&(Local_2395.f_1437)))
	{
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&(Local_2395.f_1441)))
	{
	}
	func_224(32768, Local_2395.f_1332);
}

int func_1060(int iParam0, int iParam1)
{
	return 0;
}

int func_1061(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 < 0)
	{
		return 0;
	}
	iVar0 = func_1062(iParam0, 0, 0, 0);
	if (iVar0 >= iParam1)
	{
		return 0;
	}
	iVar1 = (iParam1 - iVar0);
	return func_1287(iParam0, iVar1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
}

int func_1062(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_1013(iParam0);
	if (iVar1 == joaat("ammo") || (bParam1 && iVar1 == joaat("weapon")))
	{
		iVar2 = func_1288(iParam0, 1);
		if (iVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iVar2);
		}
	}
	else if (iVar1 == joaat("weapon"))
	{
		return func_1289(iParam0, 0);
	}
	if (func_681(iParam0, joaat("default")) != 0)
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_663(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_1290(iParam0, bParam2) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_663(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_1063(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

int func_1064(int iParam0)
{
	bool bVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	bVar0 = true;
	if (func_1291(iParam0))
	{
		bVar0 = false;
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bVar0, false, 0, true, 0.5f, 1f, 752097756, false, 0f, false);
	return 1;
}

void func_1065(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896726->f_382)
		{
			Global_1896726->f_382 = bParam0;
		}
	}
	else if (Global_1896726->f_382)
	{
		Global_1896726->f_382 = bParam0;
	}
}

void func_1066(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_73(Param0))
	{
		return;
	}
	if (!func_357(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1292(Param0);
	}
	if (!func_73(func_364(0)))
	{
		func_632(Param0, 3);
		func_342(bParam3);
		func_633(!bParam4);
		func_1293(Param0, -1);
		if (bParam2 && !func_1294(2))
		{
			func_929(&Global_0, 1024);
		}
		func_635(1);
	}
	else
	{
		func_1293(Param0, -1);
		func_632(Param0, 4);
		func_1295(Param0, 0);
	}
	Global_1051202->f_44.f_1 = 1;
	iVar0 = func_637(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1296(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

int func_1067(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_941(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_927(Param0);
	Var0.f_3 = iParam3;
	func_1297(&Var0, bParam2, iParam4);
	return 1;
}

void func_1068(int iParam0)
{
	if (Global_1182289->f_440 != 2)
	{
		return;
	}
	if (Global_1182289->f_440.f_1 != 0)
	{
		return;
	}
	Global_1182289->f_440.f_1 = iParam0;
	POSSE::_0xC584FF658B2E55DA(iParam0);
}

void func_1069(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_641(iParam0);
	if (iVar0 == -785841056)
	{
		func_436(func_47(joaat("attempts"), -785841056), 1);
	}
	else
	{
		func_436(func_47(joaat("attempts"), -1666944573), 1);
	}
	if (func_46(iParam0, uParam1, &iVar1))
	{
		func_436(func_47(joaat("attempts"), iVar1), 1);
	}
}

void func_1070(int iParam0)
{
	int iVar0;
	var uVar1;

	if ((Global_1900670->f_1 == 2 || Global_1900670->f_1 == 5) || Global_1900670->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_23() != -1)
	{
		iVar0 = 1;
	}
	uVar1 = func_945(Global_1893575->f_2);
	Global_1900670->f_1 = 3;
	Global_1900670->f_2 = 0;
	Global_1900670->f_7 = iVar0;
	Global_1900670->f_8 = iParam0;
	Global_1900670->f_9 = uVar1;
	if (Global_1900670->f_9 != -1 && Global_1900670->f_9 != 0)
	{
		func_947(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_9);
	}
	else if (Global_1900670->f_11 != -1)
	{
		func_947(Global_1900670->f_7, Global_1900670->f_8, Global_1900670->f_11);
	}
}

void func_1071()
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (func_1298(1048576, PLAYER::PLAYER_ID()) || Global_1275565->f_2.f_1 == 2)
		{
			func_1299();
		}
	}
	if (LAW::_0xDD5FD601481F648B(Global_1275573->f_10) > 0)
	{
		if (func_1300())
		{
			func_1301();
		}
		func_1302();
	}
}

void func_1072(int iParam0)
{
	if (Global_1102099->f_935.f_27 != iParam0)
	{
		Global_1102099->f_935.f_27 = iParam0;
	}
}

int func_1073(int iParam0, struct<2> Param1, int iParam3)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
			break;
		default:
			return 0;
	}
	func_1303(iParam0, Param1, iParam3);
	return 1;
}

int func_1074(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = -50383753;
	if (func_36(&Var1, iParam0) && func_140(&Var1))
	{
		func_40(Var1, -1641329203, &iVar0, 0);
	}
	return iVar0;
}

var func_1075(int iParam0)
{
	var uVar0;
	struct<5> Var1;

	if (func_36(&Var1, iParam0) && func_140(&Var1))
	{
		func_40(Var1, -1268019774, &uVar0, 0);
	}
	return uVar0;
}

var func_1076(struct<32> Param0, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	iVar0 = func_1304();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = (iVar1 + Param0.f_23);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1939231->f_242.f_1188++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1939231->f_242.f_1188, 64);
	func_1305(Global_1939231->f_242.f_14[iVar0 /*39*/], Global_1939231->f_242.f_4, cVar3, Param0);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1206(84), Global_1939231->f_242.f_1188);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1206(85), true);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1206(86), false);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1206(74), Param0.f_30);
	if (Param0.f_30)
	{
		(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1206(72), Param0.f_29);
		(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1206(75), Param0.f_28);
	}
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1206(87), Param0.f_24);
	iVar15 = 0;
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_34 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), 707094655, iVar15);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1206(50), Param0.f_25);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1206(51), Param0.f_25.f_1);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_29 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1206(88), Param0.f_25.f_2);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1206(89), iVar2);
	(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1206(90), Param0.f_22);
	func_925(Global_1939231->f_242.f_1186 + 1);
	if (Global_1939231->f_242.f_1188 == 2147483647)
	{
		Global_1939231->f_242.f_1188 = 0;
	}
	if (func_1306(Param0.f_24))
	{
		Param0.f_31 = 5;
		Param0.f_31.f_1 = 1;
		Param0.f_31.f_13 = 778915895;
		Param0.f_31.f_14 = &Global_1939231->f_242.f_14[iVar0 /*39*/];
		iVar16 = func_1307(&(Param0.f_31));
		(Global_1939231->f_242.f_14[iVar0 /*39*/])->f_36 = DATABINDING::_DATABINDING_ADD_DATA_INT(&(Global_1939231->f_242.f_14[iVar0 /*39*/]), func_1206(91), iVar16);
	}
	iVar17 = func_1308();
	if (iVar17 == 0 || Param0.f_22 == iVar17)
	{
		Global_1939231->f_242.f_1187++;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1939231->f_242.f_5, 0, "pm_invite_item", &(Global_1939231->f_242.f_14[iVar0 /*39*/]));
	}
	return &(Global_1939231->f_242.f_14[iVar0 /*39*/]);
}

int func_1077(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (&Global_1900788 == 15)
	{
		return -1;
	}
	if (!func_1309(Param0))
	{
		return -1;
	}
	iVar1 = func_1310(Param0);
	if (iVar1 >= 0)
	{
		func_1311(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900788;
		*((*Global_1900789)[iVar0 /*2*/]) = { Param0 };
		*((*Global_1900820)[iVar0 /*2*/]) = { Var2 };
		func_1311(Param0, 1);
		Global_1900788 = &Global_1900788 + 1;
		if (&Global_1900788 > 15)
		{
			Global_1900788 = 15;
		}
		return iVar0;
	}
	return -1;
}

bool func_1078(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 39);
}

int func_1079(int iParam0, int iParam1)
{
	if (!func_1078(iParam0))
	{
		return 0;
	}
	if (func_23() == -1)
	{
		return ((Global_1915180->f_3[iParam0 /*447*/])->f_6 && iParam1) != 0;
	}
	else
	{
		return ((Global_1051388->f_69[iParam0 /*76*/])->f_1 && iParam1) != 0;
	}
	return 0;
}

void func_1080(int iParam0, int iParam1)
{
	if (!func_1078(iParam0))
	{
		return;
	}
	if (func_23() == -1)
	{
		(Global_1915180->f_3[iParam0 /*447*/])->f_6 = ((Global_1915180->f_3[iParam0 /*447*/])->f_6 || iParam1);
	}
	else
	{
		(Global_1051388->f_69[iParam0 /*76*/])->f_1 = ((Global_1051388->f_69[iParam0 /*76*/])->f_1 || iParam1);
	}
}

void func_1081(int iParam0, int iParam1)
{
	if (!func_1078(iParam0))
	{
		return;
	}
	if (func_23() == -1)
	{
		(Global_1915180->f_3[iParam0 /*447*/])->f_6 = ((Global_1915180->f_3[iParam0 /*447*/])->f_6 - ((Global_1915180->f_3[iParam0 /*447*/])->f_6 && iParam1));
	}
	else
	{
		(Global_1051388->f_69[iParam0 /*76*/])->f_1 = ((Global_1051388->f_69[iParam0 /*76*/])->f_1 - ((Global_1051388->f_69[iParam0 /*76*/])->f_1 && iParam1));
	}
}

int func_1082(int iParam0)
{
	if (func_1312())
	{
		if (Global_1915180->f_19742 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_1083(int iParam0)
{
	PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 354, true);
	(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_4 = MISC::GET_FRAME_COUNT();
}

void func_1084(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_1085(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

Vector3 func_1086(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_296(vParam0, fParam3, fParam4);
}

int func_1087(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

var func_1088(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_1313() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1275573->f_10;
	iVar6 = Global_1275573->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1314());
				break;
			case -432403087:
				iVar8 = VOLUME::_0x10157BC3247FF3BA(vParam0, vParam3, vParam6, func_1314());
				break;
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1314());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1315(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar2])))
		{
			iVar10 = &Global_1275573->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_1316(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1275573->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_794(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_1205(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_0xF256A75210C5C0EB(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_0x43F867EF5C463A53(iVar8);
	}
	return uVar0;
}

void func_1089(bool bParam0)
{
	if (bParam0)
	{
		func_166(63);
	}
	else
	{
		func_165(63);
	}
}

int func_1090(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_756(255))
	{
		if ((Param0.f_17.f_9 != -1612834106 && Param0.f_17.f_9 != -432403087) && Param0.f_17.f_9 != 665633627)
		{
			Param0.f_17.f_9 = -432403087;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -1612834106 && Param0.f_6.f_9 != -432403087) && Param0.f_6.f_9 != 665633627)
			{
				Param0.f_6.f_9 = -432403087;
			}
		}
		func_795(&(Global_1099294->f_516));
		Global_1099294->f_516 = { Param0 };
		func_796(&(Global_1099294->f_555));
		Global_1099294->f_555 = { Param30 };
		Global_1099294->f_586 = iParam39;
		Global_1099294->f_587 = iParam40;
		Global_1099294->f_588 = iParam41;
		func_797(Global_1099294->f_516, 36);
		func_798(Global_1099294->f_555, 36);
		func_165(47);
		return 1;
	}
	return 0;
}

void func_1091()
{
	func_476(&(Global_1070356->f_21187.f_3), 128);
}

int func_1092()
{
	return 1;
}

bool func_1093()
{
	return (!&Global_1903004 && MISC::ABSI((MISC::GET_FRAME_COUNT() - Global_1903004->f_2)) >= 5);
}

void func_1094(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1)
	{
		uParam0->f_2 = iParam1;
	}
}

int func_1095()
{
	int iVar0;

	iVar0 = 1;
	if ((((((!AUDIO::_0xE368E8422C860BA7(func_555(), func_822(), -2) || !AUDIO::_0xE368E8422C860BA7(func_823(), func_822(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_824(), func_822(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_1317(), func_822(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_825(), func_822(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_776(), func_777(), -2)) || !AUDIO::_0xE368E8422C860BA7(func_826(), func_827(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_1096(var uParam0, var uParam1, int iParam2)
{
	switch (func_1318(iParam2))
	{
		case 0:
			func_1319(uParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_1320(uParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_1321(uParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_1322(uParam0, uParam1, iParam2, -1082130432 /* Float: -1f */);
			break;
		case 4:
			func_1323(uParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_1097(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0, bParam1);
}

void func_1098(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
		uParam0->f_1 = iParam1;
	}
}

char* func_1099(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	char cVar0[32];
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[32];

	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1000f);
	if (bParam5)
	{
		iVar5 = BUILTIN::CEIL(fVar4);
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(fVar4);
	}
	iVar6 = func_1324((iVar5 / 60), 0, 180);
	iVar7 = func_1324((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, HUD::_0xD8402B858F4DDD88(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_1100(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0, sParam1);
}

void func_1101(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 11000)
	{
		if ((uParam0->f_13 > iParam1 && uParam0->f_13 > 11000) && uParam0->f_11 < 0)
		{
			uParam0->f_11 = AUDIO::GET_SOUND_ID();
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || MISC::ARE_STRINGS_EQUAL(sParam2, func_824()))
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, func_824(), func_822(), 1);
			}
			else
			{
				AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_11, sParam2, func_822(), 1);
				AUDIO::_0x9821B68CD3E05F2B("Time", 11f, sParam2, func_822());
			}
		}
	}
	else
	{
		func_283(uParam0);
	}
}

void func_1102(var uParam0, int iParam1)
{
	if (iParam1 <= 0 && uParam0->f_12 < 0)
	{
		uParam0->f_12 = AUDIO::GET_SOUND_ID();
		AUDIO::_0xCE5D0FFE83939AF1(uParam0->f_12, func_1317(), func_822(), 1);
	}
}

var func_1103(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0xCEDBF17EFCC0E4A4(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_1104(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_7887[iParam0 /*11*/] = (&Global_7887[iParam0 /*11*/] - (Global_7887[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1070356->f_17941[iParam0 /*11*/] = (&Global_1070356->f_17941[iParam0 /*11*/] - (Global_1070356->f_17941[iParam0 /*11*/] && iParam1));
}

bool func_1105(var uParam0)
{
	uParam0->f_2 = 1648302374;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_1106(var uParam0, var uParam1)
{
	uParam0->f_2 = 1950557689;
	uParam0->f_3 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

float func_1107(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_1108(var uParam0, var uParam1)
{
	if (func_686(uParam0))
	{
		uParam0->f_2 = 248801409;
		uParam0->f_3 = uParam1;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return 0;
}

bool func_1109(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, bool bParam8)
{
	vector3 vVar0;

	if (!bParam8)
	{
		vParam3.f_2 = (vParam3.z - (0.5f * fParam7));
	}
	vVar0 = { vParam0 - vParam3 };
	if (vVar0.z < 0f || vVar0.z > fParam7)
	{
		return false;
	}
	return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam6 * fParam6);
}

int func_1110(var uParam0, int iParam1)
{
	if (func_686(uParam0))
	{
		uParam0->f_2 = 507396013;
		uParam0->f_3 = iParam1;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return 0;
}

int func_1111(int iParam0)
{
	switch (iParam0)
	{
		case 1299757696:
			return 0;
		case 327014600:
			return 1;
		case -2061163026:
			return 2;
	}
	return -1;
}

bool func_1112(int iParam0)
{
	return iParam0 != 0;
}

void func_1113(int iParam0, int iParam1)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2395.f_1386), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1325(iParam0);
			if (Local_2395.f_9 != -785841056)
			{
				func_917(iParam1, 1);
			}
			SCRIPTS::_0x31010318BA9897AC(&(Local_2395.f_1386), iParam1);
		}
	}
}

void func_1114()
{
	if (!func_609(256))
	{
		func_1326(256);
	}
}

void func_1115(int iParam0, int iParam1)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2395.f_1385), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1327(iParam0);
			if (Local_2395.f_9 != -785841056)
			{
				func_917(iParam1, 1);
			}
			SCRIPTS::_0x31010318BA9897AC(&(Local_2395.f_1385), iParam1);
		}
	}
	if (!func_134(33554432))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			if (func_336(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)))
			{
				func_337(0, 0, 1);
				func_43(67108864);
			}
			func_1114();
			func_43(33554432);
		}
	}
}

void func_1116(int iParam0, int iParam1)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2395.f_1385), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1327(iParam0);
			if (!_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0))
			{
				func_1328(iParam0);
			}
			if (Local_2395.f_9 != -785841056)
			{
				func_917(iParam1, 1);
			}
			SCRIPTS::_0x31010318BA9897AC(&(Local_2395.f_1385), iParam1);
		}
	}
	if (!func_134(33554432))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			if (func_336(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)))
			{
				func_337(0, 0, 1);
				func_43(67108864);
			}
			func_1114();
			func_43(33554432);
		}
	}
}

void func_1117(int iParam0, int iParam1, bool bParam2)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2395.f_1385), iParam1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			func_1327(iParam0);
			if (bParam2)
			{
				if ((func_177(64) || !_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0)) || Local_2395.f_1387 == -1477057661)
				{
					func_1329(iParam0);
				}
			}
			else if (!_NAMESPACE26::_0x81FB74C83C2ED69F(iParam0))
			{
				func_1328(iParam0);
			}
			if (Local_2395.f_9 != -785841056)
			{
				func_917(iParam1, 1);
			}
			SCRIPTS::_0x31010318BA9897AC(&(Local_2395.f_1385), iParam1);
		}
	}
	if (!func_134(33554432))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && iParam0 == PLAYER::PLAYER_ID())
		{
			if (func_336(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)))
			{
				func_337(0, 0, 1);
				func_43(67108864);
			}
			func_1114();
			func_43(33554432);
		}
	}
}

void func_1118(int iParam0)
{
	int iVar0;

	iVar0 = func_1120();
	if (iVar0 != 0)
	{
		MISC::_0xF63FA29D4A9ACA86(iParam0, func_1330());
		func_1121(iParam0, func_1330(), 1);
	}
}

void func_1119(int iParam0, int iParam1)
{
	func_1331(iParam0, iParam1);
}

int func_1120()
{
	char* sVar0;
	int iVar1;

	sVar0 = func_1330();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	return iVar1;
}

void func_1121(int iParam0, char* sParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (bParam2)
			{
				PED::_0xC2745D9261664901(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), MISC::GET_HASH_KEY(sParam1));
			}
			else
			{
				PED::_0x19B14E04B009E28B(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), sParam1);
			}
		}
	}
}

float func_1122(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1132968->f_6289)
	{
		return 0f;
	}
	if (iParam0 == &Global_1275573->f_154[&Global_1275573])
	{
		return Global_17172.f_2619;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)) > 1 && bParam1) && ((*Global_1097610)[iVar0 /*51*/])->f_18 >= ((*Global_1097610)[iVar0 /*51*/])->f_45)
	{
		return ((*Global_1097610)[iVar0 /*51*/])->f_18;
	}
	return ((*Global_1097610)[iVar0 /*51*/])->f_45;
}

int func_1123(struct<2> Param0, var uParam2)
{
	if (!func_73(Param0))
	{
		return 0;
	}
	func_1332(uParam2);
	switch (Param0)
	{
		case 2:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634[Param0.f_1 /*3*/], 3);
			return 1;
		case 3:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_602[Param0.f_1 /*3*/], 3);
			return 1;
		case 4:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_2104[Param0.f_1 /*3*/], 3);
			return 1;
		case 5:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_12606[Param0.f_1 /*3*/], 3);
			return 1;
		case 6:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_12908[Param0.f_1 /*3*/], 3);
			return 1;
		case 7:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_15910[Param0.f_1 /*3*/], 3);
			return 1;
		case 8:
			MISC::_COPY_MEMORY(uParam2, Global_1070356->f_634.f_15981[Param0.f_1 /*3*/], 3);
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1124(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1070356->f_19683.f_260), iParam0);
}

void func_1125(int iParam0)
{
	if (func_605((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_13, iParam0))
	{
		func_606(&((Local_368[NETWORK::PARTICIPANT_ID_TO_INT() /*17*/])->f_13), iParam0);
	}
}

void func_1126(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!func_1333(iParam1, &uVar0))
	{
		return;
	}
	iVar1 = func_1131(iParam0);
	if (iVar1 < 0)
	{
		return;
	}
	(Local_0.f_67[iVar1 /*40*/])->f_1 = uVar0;
}

int func_1127()
{
	return func_1335(func_1334());
}

int func_1128()
{
	return func_1335(func_1336(func_1334()));
}

int func_1129(int iParam0)
{
	int iVar0;

	iVar0 = func_1131(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!NETWORK::_0x255A5EF65EDA9167((Local_0.f_67[iVar0 /*40*/])->f_1))
	{
		return 0;
	}
	if (Local_0.f_67[iVar0 /*40*/])->f_1 != PLAYER::GET_PLAYER_INDEX()
	{
		return 0;
	}
	return 1;
}

int func_1130(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iVar0 /*40*/])))
		{
		}
		else if (iParam0 == NETWORK::NET_TO_ENT(&(Local_0.f_67[iVar0 /*40*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1131(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_67[iVar0 /*40*/])))
		{
		}
		else if (iParam0 == NETWORK::NET_TO_ENT(&(Local_0.f_67[iVar0 /*40*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1132(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return (ENTITY::_0x61914209C36EFDDB(iParam0) == 5 || ENTITY::_0x61914209C36EFDDB(iParam0) == 7);
	}
	return 0;
}

void func_1133(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;

	iVar0 = &Local_0.f_67[iParam1 /*40*/];
	iVar1 = (Local_0.f_67[iParam1 /*40*/])->f_6;
	fVar2 = func_1157((Local_0.f_67[iParam1 /*40*/])->f_6);
	iVar3 = NETWORK::NET_TO_PED(iVar0);
	if (!func_852(32768, iParam1, -1) && ((Local_0.f_67[iParam1 /*40*/])->f_4 == joaat("combat") || PED::IS_PED_IN_COMBAT(iVar3, 0)))
	{
		if ((Local_0.f_67[iParam1 /*40*/])->f_39 > 0)
		{
			iVar4 = 0;
			while (iVar4 < (Local_0.f_67[iParam1 /*40*/])->f_39)
			{
				iVar5 = NETWORK::NET_TO_PED(&((Local_0.f_67[iParam1 /*40*/])->f_20[iVar4 /*3*/]));
				if (!PED::IS_PED_INJURED(iVar5))
				{
					iVar6 = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), iVar5);
				}
				if (MAP::DOES_BLIP_EXIST(iVar6))
				{
					MAP::_0x662D364ABF16DE2F(iVar6, -2145527776);
					MAP::_0x662D364ABF16DE2F(iVar6, 287169430);
				}
				iVar4++;
			}
		}
		func_855(32768, iParam1);
	}
	if (func_1036(iVar3))
	{
		if ((Local_0.f_67[iParam1 /*40*/])->f_39 > 0)
		{
			iVar7 = 0;
			while (iVar7 < (Local_0.f_67[iParam1 /*40*/])->f_39)
			{
				iVar8 = NETWORK::NET_TO_PED(&((Local_0.f_67[iParam1 /*40*/])->f_20[iVar7 /*3*/]));
				if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iVar8, false))
				{
					PED::SET_PED_CONFIG_FLAG(iVar8, 307, false);
					PED::SET_PED_COMBAT_MOVEMENT(iVar8, 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar8, 55, true);
					PED::REMOVE_PED_DEFENSIVE_AREA(iVar8, false);
				}
				iVar7++;
			}
		}
	}
	if ((func_723(2, iParam1) || (iVar1 == -1 && func_864(iVar3, 0))) || func_723(262144, iParam1))
	{
		if (MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
		{
			func_720(uParam0->f_80[iParam1]);
		}
		func_1035(uParam0, iParam1);
		func_1337(iParam1, 0);
		return;
	}
	if (func_723(1, iParam1))
	{
		if (MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
		{
			if (func_868(PLAYER::PLAYER_PED_ID(), iVar3) || func_869(iParam1))
			{
				func_720(uParam0->f_80[iParam1]);
			}
		}
		func_1035(uParam0, iParam1);
		func_1337(iParam1, 0);
		return;
	}
	if (func_156(&((Local_0.f_67[iParam1 /*40*/])->f_13)))
	{
		if (func_186(&((Local_0.f_67[iParam1 /*40*/])->f_13)) > 4000)
		{
			MAP::_0xB059D7BD3D78C16F(&(uParam0->f_80[iParam1]), -750627856);
			func_294(&((Local_0.f_67[iParam1 /*40*/])->f_13));
		}
	}
	if (!func_864(iVar3, 0))
	{
		if ((Local_0.f_67[iParam1 /*40*/])->f_4 == joaat("flee") || (Local_0.f_67[iParam1 /*40*/])->f_4 == joaat("hide"))
		{
			if (((PED::_0x3AA24CCC0D451379(iVar3) && !func_852(2, iParam1, -1)) && !func_723(262144, iParam1)) && !MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
			{
				uParam0->f_80[iParam1] = MAP::_0x23F74C2FDA6E7C61(1629270574, iVar3);
				MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), 1784012766);
				func_1337(iParam1, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_80[iParam1]), func_1338());
			}
			if (Local_0.f_67[iParam1 /*40*/])->f_4 == joaat("flee")
			{
				func_866(8192, iParam1, -1);
				func_294(&((Local_0.f_67[iParam1 /*40*/])->f_10));
				if (!func_852(4096, iParam1, -1))
				{
					func_720(uParam0->f_80[iParam1]);
					uParam0->f_80[iParam1] = MAP::_0x23F74C2FDA6E7C61(1629270574, iVar3);
					if (MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
					{
						func_1337(iParam1, 1);
						MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), -750627856);
						MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), 1784012766);
						func_184(&((Local_0.f_67[iParam1 /*40*/])->f_13), 1);
						MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), -1833912565);
						MAP::_0xB059D7BD3D78C16F(&(uParam0->f_80[iParam1]), 197772266);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_80[iParam1]), func_1338());
					}
					func_855(4096, iParam1);
				}
			}
			if (Local_0.f_67[iParam1 /*40*/])->f_4 == joaat("hide")
			{
				func_866(4096, iParam1, -1);
				if (!func_852(8192, iParam1, -1))
				{
					if (MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
					{
						MAP::_0xB059D7BD3D78C16F(&(uParam0->f_80[iParam1]), 1784012766);
						MAP::_0xB059D7BD3D78C16F(&(uParam0->f_80[iParam1]), -750627856);
						MAP::_0xB059D7BD3D78C16F(&(uParam0->f_80[iParam1]), -1833912565);
						if (func_1037(&Local_368, 16384, iParam1))
						{
							MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), -433875166);
						}
						else
						{
							MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), 197772266);
							MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), 1411832502);
						}
					}
					func_184(&((Local_0.f_67[iParam1 /*40*/])->f_10), 1);
					func_855(8192, iParam1);
				}
				else
				{
					if (func_1037(&Local_368, 16384, iParam1))
					{
						return;
					}
					if (func_156(&((Local_0.f_67[iParam1 /*40*/])->f_10)) && func_186(&((Local_0.f_67[iParam1 /*40*/])->f_10)) > 5000)
					{
						func_720(uParam0->f_80[iParam1]);
						vVar9 = { ENTITY::GET_ENTITY_COORDS(iVar3, true, false) + Vector(0f, 50f, 50f) };
						uParam0->f_80[iParam1] = MAP::_0x45F13B7E0A15C880(953018525, vVar9, 200f);
						if (MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
						{
							func_1337(iParam1, 1);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_80[iParam1]), func_1338());
						}
						func_294(&((Local_0.f_67[iParam1 /*40*/])->f_10));
					}
				}
			}
			func_1337(iParam1, 0);
			return;
		}
	}
	if (iVar1 != -1)
	{
		if (PED::IS_PED_DEAD_OR_DYING(iVar3, true) && !MISC::IS_BIT_SET(uParam0->f_9, iParam1))
		{
			func_720(Local_913.f_80[iParam1]);
			func_1035(&Local_913, iParam1);
			MISC::SET_BIT(&(uParam0->f_9), iParam1);
		}
		if ((!MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])) || !MAP::_0xE9F676788F8D5E1E(&(uParam0->f_80[iParam1]))) && !MISC::IS_BIT_SET(uParam0->f_8, iParam1))
		{
			func_720(uParam0->f_80[iParam1]);
			if (iVar1 == 1866880973 && !func_864(iVar3, 0))
			{
				vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar3, true, false) + Vector(0f, 50f, 50f) };
				uParam0->f_80[iParam1] = MAP::_0x45F13B7E0A15C880(953018525, vVar12, 200f);
			}
			else
			{
				uParam0->f_80[iParam1] = MAP::_0x23F74C2FDA6E7C61(1629270574, iVar3);
				MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), 1784012766);
			}
			func_1337(iParam1, 1);
			if (MAP::DOES_BLIP_EXIST(&(uParam0->f_80[iParam1])))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(uParam0->f_80[iParam1]), func_1338());
			}
			if (func_864(iVar3, 0))
			{
				fVar2 = (fVar2 / 2f);
			}
			else
			{
				MAP::ALLOW_SONAR_BLIPS(true);
				MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
				MAP::_0x0C7A2289A5C4D7C9(919052783, iVar3);
				MAP::_0x662D364ABF16DE2F(&(uParam0->f_80[iParam1]), -750627856);
				func_184(&((Local_0.f_67[iParam1 /*40*/])->f_13), 1);
			}
			func_1339(uParam0, iParam1);
		}
	}
	func_1337(iParam1, 0);
}

void func_1134(int iParam0)
{
	if (iParam0 == Local_913.f_79)
	{
		return;
	}
	if (iParam0 == 2)
	{
		Local_913.f_96 = func_778(MISC::_CREATE_VAR_STRING(10, func_1340(), func_872(1)), -1, 0, 0, 1);
	}
	else if (iParam0 == 1)
	{
		Local_913.f_96 = func_778(MISC::_CREATE_VAR_STRING(10, func_1341(), func_872(1)), -1, 0, 0, 1);
	}
	else
	{
		Local_913.f_96 = func_778(MISC::_CREATE_VAR_STRING(10, func_1342(), func_872(1)), -1, 0, 0, 1);
	}
	Local_913.f_79 = iParam0;
}

bool func_1135()
{
	return func_495(64);
}

void func_1136()
{
	int iVar0;

	if (MAP::DOES_BLIP_EXIST((Local_913.f_16[iVar0 /*4*/])->f_2))
	{
		MAP::_0x662D364ABF16DE2F((Local_913.f_16[iVar0 /*4*/])->f_2, 825788762);
	}
	if (!func_495(16))
	{
		if (!func_1343())
		{
			if (!func_851())
			{
				if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[0 /*4*/])->f_1) && !MAP::DOES_BLIP_EXIST((Local_913.f_16[0 /*4*/])->f_2))
				{
					(Local_913.f_16[0 /*4*/])->f_2 = MAP::_0xA6EF0C54A3443E70(1259054292, (Local_913.f_16[0 /*4*/])->f_1);
				}
			}
			else if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[2 /*4*/])->f_1) && !MAP::DOES_BLIP_EXIST((Local_913.f_16[2 /*4*/])->f_2))
			{
				(Local_913.f_16[2 /*4*/])->f_2 = MAP::_0xA6EF0C54A3443E70(1259054292, (Local_913.f_16[2 /*4*/])->f_1);
			}
		}
		else if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[1 /*4*/])->f_1) && !MAP::DOES_BLIP_EXIST((Local_913.f_16[1 /*4*/])->f_2))
		{
			(Local_913.f_16[1 /*4*/])->f_2 = MAP::_0xA6EF0C54A3443E70(1259054292, (Local_913.f_16[1 /*4*/])->f_1);
		}
		func_497(16);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((MAP::DOES_BLIP_EXIST((Local_913.f_16[iVar0 /*4*/])->f_2) && VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[iVar0 /*4*/])->f_1)) && &Local_0.f_6[iVar0] >= 8)
			{
				func_720(&((Local_913.f_16[iVar0 /*4*/])->f_2));
			}
			iVar0++;
		}
	}
}

void func_1137()
{
	if (func_495(32))
	{
		func_720(&((Local_913.f_16[3 /*4*/])->f_2));
		func_847(32);
	}
}

void func_1138()
{
	int iVar0;

	if (func_495(16))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[iVar0 /*4*/])->f_1) && MAP::DOES_BLIP_EXIST((Local_913.f_16[iVar0 /*4*/])->f_2))
			{
				func_720(&((Local_913.f_16[iVar0 /*4*/])->f_2));
			}
			iVar0++;
		}
		func_847(16);
	}
}

int func_1139(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
		if (func_1180(iVar0))
		{
			return 1;
		}
	}
	iVar1 = ENTITY::_0x61914209C36EFDDB(iParam0);
	if (iVar1 != 0)
	{
	}
	if (((((iVar1 != 2 && iVar1 != 4) && iVar1 != 5) && iVar1 != 7) && iVar1 != 8) && iVar1 != 9)
	{
		return 0;
	}
	if (PED::_0xD453BB601D4A606E(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_1140(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_1141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 255;
	}
	if (!func_1139(iVar0))
	{
		return 255;
	}
	iVar1 = PED::_0x79443D56C8DF45EE(iVar0);
	if (!func_1281(iVar1, 0))
	{
		return 255;
	}
	if (!func_1344(iVar1))
	{
		if (!PED::IS_PED_A_PLAYER(iVar1))
		{
			return 255;
		}
		return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
	}
	iVar2 = PED::_0xB676EFDA03DADA52(iVar1, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return 255;
	}
	if (!func_1281(iVar2, 0))
	{
		return 255;
	}
	if (!PED::IS_PED_A_PLAYER(iVar2))
	{
		return 255;
	}
	return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
}

int func_1142(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_SESSION())
		{
			iVar0 = iParam0;
			if (iVar0 < 0 || iVar0 >= 32)
			{
				return 0;
			}
			if (!&Global_1051165->f_1[iVar0])
			{
				return 0;
			}
		}
	}
	return 1;
}

var func_1143(char* sParam0)
{
	return func_614(sParam0, -2, 0, 0, 0, 1);
}

void func_1144(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_1145(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 255;
	}
	if (func_1281(iVar0, 0))
	{
		return 255;
	}
	iVar1 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 255;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return 255;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (!PED::IS_PED_A_PLAYER(iVar2))
	{
		return 255;
	}
	return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
}

int func_1146()
{
	if (func_23() != 0)
	{
		return 1;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1461907237))
	{
		return 1;
	}
	if (Global_1132968->f_4641.f_1 & 2 != 0)
	{
		return 1;
	}
	if (Global_1132968->f_4641.f_1 & 4 != 0)
	{
		return 1;
	}
	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return 1;
	}
	return 0;
}

void func_1147(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 181;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 8, &uParam1);
}

float func_1148(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 10000f;
	iVar2 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar3 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam2 /*40*/]));
	if (!func_867(iParam2))
	{
		if (func_864(iVar3, 0))
		{
			if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[2 /*4*/])->f_1))
			{
				*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[2 /*4*/])->f_1) };
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), true);
				if (func_1179(iVar2, (Local_913.f_16[2 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
				{
					fVar0 = fVar1;
					*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[2 /*4*/])->f_1) };
				}
			}
		}
		else
		{
			*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[0 /*4*/])->f_1) };
			fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), true);
			if (func_1179(iVar2, (Local_913.f_16[0 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
			{
				fVar0 = fVar1;
				*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[0 /*4*/])->f_1) };
			}
		}
	}
	else if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[1 /*4*/])->f_1))
	{
		*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[1 /*4*/])->f_1) };
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), true);
		if (func_1179(iVar2, (Local_913.f_16[1 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[1 /*4*/])->f_1) };
		}
	}
	return fVar0;
}

bool func_1149(var uParam0, int iParam1)
{
	return func_78(uParam0->f_38, iParam1);
}

void func_1150(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;

	if (!func_1149(&Local_2010, 2))
	{
		iVar3 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
		iVar0 = func_1345(PLAYER::GET_PLAYER_INDEX(), &uVar5, iParam0);
		iVar1 = func_807(iVar0);
		if (iVar1 == joaat("sphere") || iVar1 == joaat("cylinder"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_366))
				{
					iVar2 = NETWORK::NET_TO_VEH(Local_0.f_366);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
				}
				else
				{
					return;
				}
			}
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_367))
		{
			iVar4 = NETWORK::NET_TO_PED(Local_0.f_367);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
		}
		if (func_864(iVar3, 0))
		{
			func_1347(&Local_2010, PLAYER::GET_PLAYER_INDEX(), iVar3, func_1346(), iVar2, 0, iVar4, 1);
		}
		else
		{
			func_1347(&Local_2010, PLAYER::GET_PLAYER_INDEX(), iVar3, func_1346(), iVar2, 0, iVar4, 1);
		}
	}
}

void func_1151()
{
	if (func_1149(&Local_2010, 2) && !func_1149(&Local_2010, 1))
	{
		func_1348(&Local_2010);
	}
}

void func_1152(var uParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;

	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_36))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_36);
	}
	uParam0->f_36 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_34))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_34));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_33))
	{
		PED::DELETE_PED(&(uParam0->f_33));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31))
	{
		PED::DELETE_PED(&(uParam0->f_31));
	}
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_15 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_15[iVar0])))
		{
			PED::DELETE_PED(uParam0->f_15[iVar0]);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_35))
	{
		uParam0->f_35 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_32))
	{
		if (func_1149(uParam0, 16))
		{
			PED::_0xED00D72F81CF7278(uParam0->f_32, 0, 1);
		}
		uParam0->f_32 = uVar1;
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		bVar2 = !func_1149(uParam0, 32);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, bVar2);
	}
	uParam0->f_3 = 0;
	uParam0->f_37 = 0;
	uParam0->f_38 = 0;
}

int func_1153(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (!func_867(iParam0))
	{
		if (func_864(iVar0, 0))
		{
			if (func_1179(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[2 /*4*/])->f_1, 56, 0))
			{
				return 2;
			}
		}
		else if (func_1179(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[0 /*4*/])->f_1, 56, 0))
		{
			return 0;
		}
	}
	else if (func_1179(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[1 /*4*/])->f_1, 56, 0))
	{
		return 1;
	}
	return -1;
}

int func_1154(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam1 /*40*/]));
	if (!func_867(iParam1))
	{
		if (func_864(iVar0, 0))
		{
			if (func_1179(iParam0, (Local_913.f_16[2 /*4*/])->f_1, 56, 0))
			{
				return 2;
			}
		}
		else if (func_1179(iParam0, (Local_913.f_16[0 /*4*/])->f_1, 56, 0))
		{
			return 0;
		}
	}
	else if (func_1179(iParam0, (Local_913.f_16[1 /*4*/])->f_1, 56, 0))
	{
		return 1;
	}
	return -1;
}

int func_1155(var uParam0)
{
	switch (uParam0->f_3)
	{
		case 0:
			if (func_1149(uParam0, 2))
			{
				func_1349(uParam0, 1);
			}
			break;
		case 1:
			if (func_1348(uParam0))
			{
				func_1349(uParam0, 2);
			}
			break;
		case 2:
			if (func_1350(uParam0))
			{
				func_1351(uParam0);
				func_1349(uParam0, 3);
			}
			break;
		case 3:
			func_1352(uParam0);
			if (func_1353(uParam0))
			{
				func_1349(uParam0, 4);
			}
			break;
		case 4:
			func_1152(uParam0);
			return 1;
	}
	return 0;
}

void func_1156(int iParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(iParam0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

float func_1157(int iParam0)
{
	float fVar0;

	fVar0 = 20f;
	switch (iParam0)
	{
		case -1:
			return fVar0;
		case joaat("high"):
			return fVar0;
		case 1866880973:
			return fVar0;
		case joaat("low"):
			return fVar0;
		default:
			break;
	}
	return fVar0;
}

void func_1158(int iParam0, float fParam1)
{
	AUDIO::PLAY_SOUND(func_1354(), func_1355(), false, 0, true, 0);
	func_1356(fParam1);
}

int func_1159(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_1179(iParam0, (Local_913.f_16[iVar0 /*4*/])->f_1, 56, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_1160(vector3 vParam0, float fParam3)
{
	float fVar0;

	fVar0 = (vParam0.z + fParam3);
	if (fVar0 >= 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	return vParam0.x, vParam0.y, fVar0;
}

int func_1161(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	fVar1 = func_456(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), Local_2395.f_1396);
	if (fVar1 >= Local_2395.f_1294)
	{
		return 1;
	}
	return 0;
}

void func_1162(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_1163(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	bool bVar8;
	int iVar9;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (func_1357(iVar0))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iVar0) < 0.9f)
	{
		return 0;
	}
	vVar1 = { PED::GET_PED_BONE_COORDS(iVar0, 21030, 0f, 0f, 0f) };
	vVar4 = { vVar1.x, vVar1.y, (vVar1.z + 100f) };
	bVar8 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar4, 0, &fVar7);
	if (bVar8 != 1)
	{
		return 0;
	}
	if (vVar1.z >= (fVar7 - 0.25f))
	{
		return 0;
	}
	iVar9 = 0;
	if (ENTITY::_0x383F64263F946E45(&iVar9, iVar0, 4, PLAYER::PLAYER_PED_ID(), 0, 4))
	{
		return 0;
	}
	return 1;
}

void func_1164(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
	{
		return;
	}
	if (!PED::IS_PED_USING_ACTION_MODE(iVar0))
	{
		PED::SET_PED_USING_ACTION_MODE(iVar0, true, -1, 0);
	}
}

void func_1165(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	iVar0 = (uParam0->f_67[iParam2 /*40*/])->f_6;
	vVar1 = { func_804(&(Local_0.f_350[iParam2])) };
	if (uParam0->f_67[iParam2 /*40*/])->f_4 != joaat("combat")
	{
		func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	}
	iVar4 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar4, 0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iVar4, 416, true);
	if (iVar0 == joaat("high") || iVar0 == joaat("low"))
	{
		PED::SET_PED_COMBAT_ABILITY(iVar4, 2);
		ENTITY::_SET_ENTITY_HEALTH(iVar4, 160, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar4, 13, true);
		PED::SET_PED_COMBAT_MOVEMENT(iVar4, 1);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iVar4, vVar1, 10f, 0, 0, 0);
	}
	else if (iVar0 == 1866880973)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar4, 15, true);
		PED::SET_PED_COMBAT_MOVEMENT(iVar4, 1);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar4, false);
	if (!func_1286(iVar4, -1442466670) || !func_1286(iVar4, -2117564886))
	{
		TASK::TASK_COMBAT_HATED_TARGETS(iVar4, -1082130432);
	}
}

void func_1166(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
	{
		return;
	}
}

void func_1167(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	int iVar2;

	if (uParam0->f_67[iParam2 /*40*/])->f_4 != joaat("injured")
	{
		func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(func_1285(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &uVar1, 1176255488 /* Float: 9999f */, iVar0, 0));
	if (!func_1286(iVar0, joaat("SCRIPT_TASK_INTIMIDATED")))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		PED::_0x8B3CB08158E98481(iVar0, 1);
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		TASK::_TASK_INTIMIDATED_2(iVar0, iVar2, 1, 1, 1, 0, 0, 0, 0);
	}
}

void func_1168(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if ((uParam0->f_67[iParam2 /*40*/])->f_4 != 1324097645)
	{
		func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(func_1285(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &fVar1, 1176255488 /* Float: 9999f */, iVar0, 0));
	if (!func_1286(iVar0, -1519143300))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		if (fVar1 < 7f || func_1359(iVar0, 1, 1, 1, 0, 0))
		{
			TASK::TASK_HANDS_UP(iVar0, 3000, iVar2, -1, false);
		}
		else
		{
			TASK::TASK_HANDS_UP(iVar0, 3000, 0, -1, false);
		}
	}
	if ((PED::_0x947E43F544B6AB34(iVar0, PLAYER::PLAYER_ID(), 4, 4000) || PED::_0x947E43F544B6AB34(iVar0, PLAYER::PLAYER_ID(), 26, 4000)) || PED::_0x947E43F544B6AB34(iVar0, PLAYER::PLAYER_ID(), 13, 4000))
	{
		func_855(256, iParam2);
	}
}

void func_1169(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (!func_1286(iVar0, 474215631))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			WEAPON::_0x94A3C1B804D291EC(iVar0, 1, 0, 1, 1);
			TASK::TASK_COWER(iVar0, -1, 0, 0);
		}
	}
	iVar1 = 0;
	if (func_1360(uParam0, iParam2, 5f))
	{
		iVar1 = 1;
	}
	if (func_1361(iVar0, PLAYER::PLAYER_PED_ID(), 1, 35f, 0))
	{
		iVar1 = 1;
	}
	if (iVar1 == 1)
	{
		func_855(1024, iParam2);
		func_855(2048, iParam2);
	}
}

void func_1170(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (!func_1286(iVar0, 1910705116))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		}
	}
	if (func_1360(uParam0, iParam2, 30f))
	{
		func_855(512, iParam2);
	}
}

void func_1171(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (!func_1286(iVar0, 1910705116))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		}
	}
	if (func_1360(uParam0, iParam2, 30f))
	{
		func_855(512, iParam2);
	}
}

void func_1172(var uParam0, var uParam1, int iParam2)
{
	func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	if (func_1360(uParam0, iParam2, 25f))
	{
		func_855(512, iParam2);
	}
}

void func_1173(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;

	func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(func_1285(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &fVar1, 1176255488 /* Float: 9999f */, iVar0, 0));
	if (!func_1286(iVar0, 518218985))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, iVar2, 3, 0, -1082130432, -1, 0);
		}
	}
	if (!PED::_0x3AA24CCC0D451379(iVar0))
	{
		if (func_1362(iVar0, 100f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || fVar1 < 50f)
		{
			func_855(2048, iParam2);
		}
		else
		{
			func_866(2048, iParam2, -1);
		}
	}
}

void func_1174(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	func_1358(uParam1, iParam2, (uParam0->f_67[iParam2 /*40*/])->f_4);
	iVar0 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam2 /*40*/]));
	if (func_864(iVar0, 0))
	{
		return;
	}
	if (!func_1286(iVar0, 474215631))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_67[iParam2 /*40*/])))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			TASK::TASK_COWER(iVar0, -1, 0, 0);
		}
	}
	if (func_1362(iVar0, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
	{
		func_855(2048, iParam2);
	}
	else
	{
		func_866(2048, iParam2, -1);
	}
}

int func_1175(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

int func_1176()
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
		if (func_1180(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1177(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1363(iParam0, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	}
	return 0;
}

int func_1178(int iParam0)
{
	int iVar0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
	}
	if (func_1180(iVar0))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(iVar0, iParam0, false, 0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1179(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, true, 0);
}

bool func_1180(int iParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return (iVar0 == -1772561076 || iVar0 == -2044900246);
}

void func_1181(bool bParam0)
{
	if (func_1364())
	{
		Global_1956186 = 1;
	}
	if (func_1365(-92416669))
	{
	}
	if (bParam0 && Global_1939178->f_38 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_34, joaat("weapon_unarmed"), true, 0, false, false);
		Global_1939178->f_38 = joaat("weapon_unarmed");
	}
}

void func_1182(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_1366(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 0;
}

void func_1183(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_1367(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] != 2)
	{
		if (!&Global_1275573->f_22[iVar0])
		{
			func_1182(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1070356->f_19683.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != &Global_1275573 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (_NAMESPACE26::_0x3F59FE6F37869576(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_1183(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_1368(&Var6, uVar4);
		}
	}
}

int func_1184(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	var uVar0;
	bool bVar1;
	bool bVar2;

	if (uParam1[0 /*5*/] == 0)
	{
		uVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5, "score");
		func_1320(uVar0, (*uParam1)[0 /*5*/], 2, "0");
		func_1320(uVar0, (*uParam1)[1 /*5*/], 8, "0");
		bVar1 = !func_605(iParam2, 16);
		bVar2 = !func_605(iParam2, 32);
		func_1323(uVar0, &(((*uParam1)[0 /*5*/])->f_3), 5, bVar1, 0);
		func_1319(uVar0, &(((*uParam1)[0 /*5*/])->f_1), 3, iParam4);
		func_1319(uVar0, &(((*uParam1)[0 /*5*/])->f_2), 4, iParam6);
		func_1323(uVar0, &(((*uParam1)[1 /*5*/])->f_3), 11, bVar2, 0);
		func_1319(uVar0, &(((*uParam1)[1 /*5*/])->f_1), 9, iParam5);
		func_1319(uVar0, &(((*uParam1)[1 /*5*/])->f_2), 10, iParam7);
	}
	return 1;
}

int func_1185(var uParam0, int iParam1, int iParam2)
{
	if (func_605(iParam1, 262144))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 6);
	}
	else if (func_605(iParam1, 65536))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 3);
	}
	else if (func_605(iParam1, 131072))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 4);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 18);
	}
	else if (func_605(iParam1, 1048576))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 8);
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 6);
	}
	if (func_605(iParam1, 64))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 0);
	}
	if (func_605(iParam1, 2048))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 7);
	}
	if (func_605(iParam1, 1024))
	{
		uParam0->f_11.f_151 = 2;
		MISC::SET_BIT(&(uParam0->f_11.f_159), 31);
	}
	if (func_605(iParam1, 4096))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 9);
	}
	if (func_605(iParam1, 16384))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 18);
	}
	if (func_605(iParam1, 8192))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 10);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 18);
	}
	if (func_605(iParam1, 32768))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 22);
		MISC::SET_BIT(&(uParam0->f_11.f_159), 23);
	}
	if (func_605(iParam1, 524288))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_160), 7);
	}
	if (func_605(iParam1, 2097152))
	{
		MISC::SET_BIT(&(uParam0->f_11.f_159), 17);
		MISC::SET_BIT(&(uParam0->f_11.f_160), 9);
	}
	func_1369(&(uParam0->f_11));
	func_269(uParam0);
	if (iParam2 > 1)
	{
		uParam0->f_11.f_150 = iParam2;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_950)))
	{
		func_1370(&(uParam0->f_11), &(uParam0->f_950));
	}
	return 1;
}

void func_1186(var uParam0, int iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	char cVar0[32];
	char cVar4[32];
	char cVar8[32];
	var uVar12;
	char cVar16[32];
	char cVar20[32];
	char cVar24[32];
	var uVar28;
	bool bVar32;
	bool bVar33;

	if (((*uParam0)[0 /*5*/])->f_4 != fParam2 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar0, func_1371(fParam2), 32);
			func_1100(uParam0[0 /*5*/], &cVar0);
		}
		else if (bParam4)
		{
			StringCopy(&cVar4, func_1372(fParam2), 32);
			func_1100(uParam0[0 /*5*/], &cVar4);
		}
		else if (bParam5)
		{
			StringCopy(&cVar8, MISC::_0x2B6846401D68E563(fParam2, 2), 32);
			func_1100(uParam0[0 /*5*/], &cVar8);
		}
		else
		{
			MISC::_INT_TO_STRING(BUILTIN::FLOOR(fParam2), "%i", &uVar12);
			func_1100(uParam0[0 /*5*/], &uVar12);
		}
		((*uParam0)[0 /*5*/])->f_4 = fParam2;
	}
	if (((*uParam0)[1 /*5*/])->f_4 != fParam3 || bParam11)
	{
		if (bParam6)
		{
			StringCopy(&cVar16, func_1371(fParam3), 32);
			func_1100(uParam0[1 /*5*/], &cVar16);
		}
		else if (bParam4)
		{
			StringCopy(&cVar20, func_1372(fParam3), 32);
			func_1100(uParam0[1 /*5*/], &cVar20);
		}
		else if (bParam5)
		{
			StringCopy(&cVar24, MISC::_0x2B6846401D68E563(fParam3, 2), 32);
			func_1100(uParam0[1 /*5*/], &cVar24);
		}
		else
		{
			MISC::_INT_TO_STRING(BUILTIN::FLOOR(fParam3), "%i", &uVar28);
			func_1100(uParam0[1 /*5*/], &uVar28);
		}
		((*uParam0)[1 /*5*/])->f_4 = fParam3;
	}
	bVar32 = !func_605(iParam1, 16);
	bVar33 = !func_605(iParam1, 32);
	func_1373(((*uParam0)[0 /*5*/])->f_1, iParam7);
	func_1373(((*uParam0)[0 /*5*/])->f_2, iParam9);
	func_1097(((*uParam0)[0 /*5*/])->f_3, bVar32);
	func_1373(((*uParam0)[1 /*5*/])->f_1, iParam8);
	func_1373(((*uParam0)[1 /*5*/])->f_2, iParam10);
	func_1097(((*uParam0)[1 /*5*/])->f_3, bVar33);
}

void func_1187(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	func_1374(uParam0, uParam1, iParam4, bParam3, 0, bParam5, 0, iParam6, iParam2);
	func_1375(uParam0, uParam1, bParam3, iParam2, iParam4, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam6);
}

void func_1188(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = -1;
	if (!MISC::IS_BIT_SET(uParam0->f_159, 1))
	{
		iVar2 = PLAYER::GET_PLAYER_TEAM(*iParam2);
		iVar3 = func_1376();
		bVar4 = func_1377();
		bVar5 = func_1378();
		bVar6 = MISC::IS_BIT_SET(uParam0->f_158, 18);
		if (uParam0->f_152 != Global_1939067->f_108)
		{
			if (uParam0->f_152)
			{
				bVar1 = true;
			}
			uParam0->f_152 = Global_1939067->f_108;
			bParam3 = true;
		}
		func_1379(uParam0, uParam1, iParam2, &iVar0, iVar2);
		if (!MISC::IS_BIT_SET(uParam0->f_158, 1))
		{
			if (!bVar5 && !bParam7)
			{
				if ((iVar3 != -1 || bVar4) || bVar6)
				{
					if (!MISC::IS_BIT_SET(uParam0->f_158, 0))
					{
						func_1369(uParam0);
						func_1380(uParam0, uParam1, iParam4, 0, 1, bParam5, iVar2, -1, bParam6, 0, iVar0);
						MISC::SET_BIT(&(uParam0->f_158), 0);
					}
					else
					{
						func_1187(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
					}
					MISC::CLEAR_BIT(&(uParam0->f_158), 13);
					MISC::SET_BIT(&(uParam0->f_158), 1);
				}
			}
		}
		else if ((((iVar3 == -1 && !bVar4) && !bVar6) || bVar5) || bParam7)
		{
			if (!bVar1)
			{
				MISC::SET_BIT(&(uParam0->f_158), 13);
			}
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_UD"), true);
			MISC::CLEAR_BIT(&(uParam0->f_158), 1);
			if (bVar5)
			{
				Global_1939067->f_5 = 0;
			}
		}
		else
		{
			if (!Global_1939067->f_108)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_GUN_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_HORSE_GUN_UD"), false);
			}
			if (bParam3)
			{
				func_1187(uParam0, uParam1, iVar2, bParam5, iParam4, bParam6, iVar0);
			}
			else if (!Global_1939067->f_108)
			{
				func_1381(uParam0, uParam1);
				func_1382(uParam0, uParam1, 0);
			}
		}
		if (!Global_1939067->f_108)
		{
			if ((MISC::IS_BIT_SET(uParam0->f_158, 1) || MISC::IS_BIT_SET(uParam0->f_158, 13)) || uParam0->f_198 < 2)
			{
				func_1383(uParam0, 1);
			}
			func_1384(uParam0);
		}
	}
}

void func_1189(var uParam0, var uParam1, int iParam2, char* sParam3, int iParam4)
{
	if (iParam4 == 0)
	{
		iParam4 = joaat("COLOR_PURE_WHITE");
	}
	(*uParam1)[iParam2 /*34*/] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_5, sParam3);
	func_1319(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_4), 21, 0);
	func_1319(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_5), 20, 0);
	func_1319(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_7), 23, 0);
	func_1319(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_8), 22, 0);
	func_1319(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_9), 24, 0);
	func_1319(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_2), 18, iParam4);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_1), 17);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_3), 19);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_6), 25);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_10), 26);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_11), 27);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_20), 16);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_21), 14);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_22), 15);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_12), 29);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_13), 28);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_14), 30);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_15), 31);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_16), 32);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_17), 33);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_18), 34);
	func_1096(uParam1[iParam2 /*34*/], &(((*uParam1)[iParam2 /*34*/])->f_19), 35);
}

void func_1190(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case joaat("attack"):
			*uParam1 = func_1385();
			*uParam2 = func_1385();
			*uParam3 = func_1385();
			*uParam4 = func_1385();
			*uParam5 = func_1386();
			*uParam6 = func_1385();
			*uParam7 = func_1385();
			break;
		case 404851220:
			*uParam1 = func_1387();
			*uParam2 = func_1387();
			*uParam3 = func_1385();
			*uParam4 = func_1386();
			*uParam5 = func_1386();
			*uParam6 = func_1385();
			*uParam7 = func_1385();
			break;
		case joaat("defend"):
			*uParam1 = func_1386();
			*uParam2 = func_1387();
			*uParam3 = func_1385();
			*uParam4 = func_1386();
			*uParam5 = func_1386();
			*uParam6 = func_1385();
			*uParam7 = func_1385();
			break;
		case joaat("COLLECT"):
			*uParam1 = func_1385();
			*uParam2 = func_1385();
			*uParam3 = func_1386();
			*uParam4 = func_1385();
			*uParam5 = func_1386();
			*uParam6 = func_1385();
			*uParam7 = func_1385();
			break;
	}
}

void func_1191(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	float fVar10;
	char[] cVar11[8];

	bVar3 = true;
	bVar4 = true;
	iVar5 = ((*uParam0)[iParam1 /*34*/])->f_25;
	iVar6 = ((*uParam0)[iParam1 /*34*/])->f_26;
	iVar9 = ((*uParam0)[iParam1 /*34*/])->f_23;
	if (bParam10)
	{
		iVar9 = 0;
	}
	switch (iVar9)
	{
		case -1:
		case 0:
			bVar3 = false;
			break;
		case 5:
			iVar0 = iParam5;
			iVar2 = iParam5;
			break;
		case 6:
			iVar0 = iParam7;
			iVar2 = iParam7;
			break;
		case 7:
			bVar4 = false;
			iVar0 = func_1387();
			iVar2 = iParam6;
			iVar1 = iParam6;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 8:
			bVar4 = false;
			iVar0 = func_1387();
			iVar2 = iParam8;
			iVar1 = iParam8;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 2:
			bVar4 = false;
			iVar0 = func_1387();
			iVar2 = func_1387();
			iVar1 = iParam3;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_CROSS";
			break;
		case 3:
			bVar4 = false;
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
		case 9:
			iVar0 = func_1385();
			iVar2 = func_1385();
			break;
		case 4:
			iVar0 = iParam4;
			break;
		default:
			iVar0 = iParam2;
			iVar2 = iParam2;
			break;
	}
	func_1097(((*uParam0)[iParam1 /*34*/])->f_21, bVar3);
	if (bVar3)
	{
		func_1388(uParam0, iParam1);
		func_1097(((*uParam0)[iParam1 /*34*/])->f_11, bVar4);
		fVar10 = ((*uParam0)[iParam1 /*34*/])->f_29;
		if (((*uParam0)[iParam1 /*34*/])->f_28 > 1)
		{
			fVar10 = (BUILTIN::TO_FLOAT(((*uParam0)[iParam1 /*34*/])->f_27) / BUILTIN::TO_FLOAT(((*uParam0)[iParam1 /*34*/])->f_28));
			if (bParam11 && !func_1389(((*uParam0)[iParam1 /*34*/])->f_23))
			{
				iVar5 = 0;
				iVar6 = 0;
				StringIntConCat(&cVar11, ((*uParam0)[iParam1 /*34*/])->f_27, 8);
				if (bParam12)
				{
					StringConCat(&cVar11, "/", 8);
					StringIntConCat(&cVar11, ((*uParam0)[iParam1 /*34*/])->f_28, 8);
				}
			}
			func_1100(((*uParam0)[iParam1 /*34*/])->f_20, &cVar11);
		}
		else
		{
			func_1100(((*uParam0)[iParam1 /*34*/])->f_20, "");
		}
		if (fVar10 >= 0f)
		{
			if (iParam9 == 0)
			{
				func_1373(((*uParam0)[iParam1 /*34*/])->f_2, iVar2);
			}
			func_1390(((*uParam0)[iParam1 /*34*/])->f_1, fVar10);
			func_1097(((*uParam0)[iParam1 /*34*/])->f_10, 0);
			func_1097(((*uParam0)[iParam1 /*34*/])->f_3, 1);
		}
		else
		{
			func_1097(((*uParam0)[iParam1 /*34*/])->f_10, 1);
			func_1097(((*uParam0)[iParam1 /*34*/])->f_3, 0);
		}
		if (iVar6 != 0)
		{
			func_1373(((*uParam0)[iParam1 /*34*/])->f_6, iVar0);
			func_1373(((*uParam0)[iParam1 /*34*/])->f_4, iVar5);
			func_1373(((*uParam0)[iParam1 /*34*/])->f_5, iVar6);
		}
		if (!MISC::IS_STRING_NULL(sVar8))
		{
			func_1373(((*uParam0)[iParam1 /*34*/])->f_14, iVar1);
			func_1100(((*uParam0)[iParam1 /*34*/])->f_12, sVar7);
			func_1100(((*uParam0)[iParam1 /*34*/])->f_13, sVar8);
			func_1097(((*uParam0)[iParam1 /*34*/])->f_15, 1);
		}
		else
		{
			func_1097(((*uParam0)[iParam1 /*34*/])->f_15, 0);
		}
		func_1097(((*uParam0)[iParam1 /*34*/])->f_16, ((*uParam0)[iParam1 /*34*/])->f_30);
	}
}

void func_1192(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_RAGE_STORE_N_SR >= 11)
	{
		return;
	}
}

int func_1193(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_1192(iParam2, -372840566);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_1391(uParam1, iParam0, Var3);
	return 1;
}

void func_1194(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	float fVar0;
	var uVar1;
	var uVar2;

	fVar0 = func_1107(((BUILTIN::TO_FLOAT(iParam3) / 1000f) / 60f), 0.5f, 30f);
	func_1392(iParam1, &uVar1, &uVar2, 0, fVar0);
	func_1393(iParam1, 0, bParam2);
	func_1394(iParam1, 0, iParam4, iParam5);
	func_1395(iParam1, 0, iParam6);
	func_1192(iParam1, -1907392798);
	func_890(-1484013733, uParam0, iParam1, 0, 255, 0, 1);
}

void func_1195(var uParam0)
{
	int iVar0;

	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		(*uParam0)[iVar0] = 255;
		iVar0++;
	}
}

void func_1196(int iParam0)
{
	Global_1951141 = (&Global_1951141 - (Global_1951141 && iParam0));
}

void func_1197()
{
	Global_1951141->f_3235 = 0;
	Global_1951141->f_3235.f_1 = 0;
	Global_1951141->f_3235.f_8 = 0;
	Global_1951141->f_3235.f_2 = 0;
	Global_1951141->f_3235.f_3[0] = 0;
	Global_1951141->f_3235.f_3[1] = 0;
	Global_1951141->f_3235.f_3[2] = 0;
	Global_1951141->f_3235.f_3[3] = 0;
	Global_1951141->f_3235.f_9 = 0;
	Global_1951141->f_3235.f_10 = 0;
	Global_1951141->f_3235.f_11 = 0;
	if (Global_1951141->f_3235.f_12)
	{
		PED::_0x13E7320C762F0477(Global_1951141->f_3235.f_13);
	}
	Global_1951141->f_3235.f_12 = 0;
	func_1196(32768);
	func_1396(1108822547, 8, 6);
}

void func_1198(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1397(iVar0, iParam0))
		{
			func_1398(iVar0, iParam0, 6);
		}
		iVar0++;
	}
}

void func_1199(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1951141->f_2706 != 0)
	{
		func_1399(Global_1951141->f_2706);
		func_1400(0);
		Global_1951141->f_2706 = 0;
	}
	if (func_981(32768))
	{
		func_1401(1108822547);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		iParam0 = 0;
		func_1402(&(Global_1951141->f_1657.f_1[1 /*3*/]), -1811760631, &(Global_1951141->f_1055), &(Global_1951141->f_1055.f_9), 1);
		func_1402(&(Global_1951141->f_1657.f_1[4 /*3*/]), -2118203104, &(Global_1951141->f_1055), &(Global_1951141->f_1055.f_9), 1);
		func_988(2, 0, iVar0, 0, 0);
		func_988(4, 0, 0, 0, 0);
		func_988(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_988(2, 0, iVar0, iParam0, 0);
	}
	func_1403();
}

void func_1200()
{
	func_1404(0);
	func_1404(1);
	func_1404(2);
	func_1404(3);
}

void func_1201()
{
	func_1405(0);
	func_1405(1);
	func_1405(2);
	func_1405(3);
}

float func_1202(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_997(2);
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1954472->f_1331.f_6[iParam0 /*3*/]);
		case 1:
			return &(Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/]);
		default:
			break;
	}
	return -1f;
}

var func_1203(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_47(iParam0, iParam1) };
	STATS::STAT_ID_GET_FLOAT(&Var1, &uVar0);
	return uVar0;
}

var func_1204(int iParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_500(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

bool func_1205(int iParam0)
{
	if (func_877(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) != 1)
		{
			func_1406(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1275573->f_10, iParam0) == 1;
}

char* func_1206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

int func_1207(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_1407(&Var1, iParam0))
	{
		iVar0 = ((func_1408() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1208(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return ((*Global_1234391)[iParam0 /*5*/])->f_2;
}

int func_1209(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1777724963:
		case -1165569262:
		case -260420884:
		case -232478158:
		case 78055447:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			return 1;
		case joaat("dynamic"):
			return iParam1;
		default:
			break;
	}
	return 0;
}

int func_1210(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1070356->f_17817)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1070356->f_17817.f_1[iVar0 /*3*/]) = { *(Global_1070356->f_17817.f_1[iVar0 + 1 /*3*/]) };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1070356->f_17817 < 32)
	{
		*(Global_1070356->f_17817.f_1[Global_1070356->f_17817 /*3*/]) = { vVar1 };
	}
	Global_1070356->f_17817 = (Global_1070356->f_17817 - 1);
	if (Global_1070356->f_17817 < 0)
	{
		Global_1070356->f_17817 = 0;
	}
	return 1;
}

int func_1211(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = (Global_1070356->f_17817 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1070356->f_17817.f_1[iVar0 + 1 /*3*/]) = { *(Global_1070356->f_17817.f_1[iVar0 /*3*/]) };
		}
		iVar0 = (iVar0 - 1);
	}
	*(Global_1070356->f_17817.f_1[iParam0 /*3*/]) = { vVar1 };
	Global_1070356->f_17817++;
	if (Global_1070356->f_17817 > 32)
	{
		Global_1070356->f_17817 = 32;
	}
	return 1;
}

int func_1212(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 522;
		case -2141419899:
			return 405;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 471;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 395;
		case -2058120606:
			return 194;
		case -2056579774:
			return 465;
		case -2043909922:
			return 339;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 388;
		case -1943021821:
			return 336;
		case -1939389836:
			return 417;
		case -1932919229:
			return 429;
		case -1925798111:
			return 41;
		case -1914141706:
			return 440;
		case -1906892166:
			return 404;
		case -1882707460:
			return 464;
		case -1861414976:
			return 381;
		case -1852605133:
			return 10;
		case -1848799275:
			return 410;
		case -1847672446:
			return 312;
		case -1842033327:
			return 505;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 447;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 412;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 399;
		case -1749433374:
			return 480;
		case -1749043433:
			return 525;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 520;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 422;
		case -1700452710:
			return 317;
		case -1684974589:
			return 467;
		case -1674179981:
			return 53;
		case -1673998598:
			return 528;
		case -1666278201:
			return 33;
		case -1664435783:
			return 487;
		case -1624627591:
			return 439;
		case -1612662716:
			return 198;
		case -1610966108:
			return 355;
		case -1608141409:
			return 539;
		case -1585840296:
			return 337;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 435;
		case -1573753524:
			return 504;
		case -1558439474:
			return 286;
		case -1556041029:
			return 411;
		case -1547280108:
			return 519;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 524;
		case -1462313959:
			return 463;
		case -1455998786:
			return 371;
		case -1447311849:
			return 321;
		case -1445041595:
			return 529;
		case -1442844448:
			return 466;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 473;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 479;
		case -1387772214:
			return 408;
		case -1378911044:
			return 476;
		case -1369678628:
			return 488;
		case -1344601768:
			return 348;
		case -1341750998:
			return 477;
		case -1340339190:
			return 363;
		case -1339871203:
			return 533;
		case -1329135070:
			return 138;
		case -1319875891:
			return 438;
		case -1311865656:
			return 37;
		case -1296807958:
			return 353;
		case -1290997627:
			return 462;
		case -1287894233:
			return 427;
		case -1283202000:
			return 354;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 424;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 366;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 401;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 392;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 340;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 444;
		case -1095341658:
			return 409;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 383;
		case -1029225159:
			return 104;
		case -1023919011:
			return 432;
		case -1014145132:
			return 273;
		case -1004266677:
			return 461;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 400;
		case -941648233:
			return 512;
		case -939420910:
			return 44;
		case -931337253:
			return 425;
		case -925071604:
			return 542;
		case -919512195:
			return 40;
		case -911126844:
			return 369;
		case -897750037:
			return 367;
		case -895307590:
			return 501;
		case -895073533:
			return 394;
		case -889906510:
			return 390;
		case -888632790:
			return 506;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 433;
		case -851626677:
			return 372;
		case -839820438:
			return 420;
		case -828139293:
			return 246;
		case -812641169:
			return 535;
		case -811637947:
			return 232;
		case -800891377:
			return 494;
		case -797689456:
			return 515;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 373;
		case -729679654:
			return 531;
		case -699277634:
			return 4;
		case -693828600:
			return 356;
		case -683458244:
			return 78;
		case -677920206:
			return 459;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 513;
		case -632127260:
			return 343;
		case -630295963:
			return 495;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 472;
		case -591815673:
			return 384;
		case -583127403:
			return 507;
		case -574190021:
			return 493;
		case -554519756:
			return 536;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 380;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 338;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 516;
		case -492731190:
			return 419;
		case -491981251:
			return 184;
		case -489737721:
			return 402;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 350;
		case -448554447:
			return 532;
		case -441204543:
			return 534;
		case -434590080:
			return 212;
		case -414883443:
			return 460;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 374;
		case -389056691:
			return 257;
		case -381925743:
			return 508;
		case -371827125:
			return 389;
		case -364475655:
			return 430;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 370;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 492;
		case -311373772:
			return 540;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case -297483764:
			return 434;
		case -279765076:
			return 346;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case -243260793:
			return 418;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case -226366310:
			return 523;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case -211583122:
			return 517;
		case -209894800:
			return 345;
		case -207792846:
			return 483;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case -110352060:
			return 431;
		case -108780030:
			return 351;
		case -108307814:
			return 28;
		case -102827640:
			return 403;
		case -101740709:
			return 499;
		case -99303535:
			return 165;
		case -90486812:
			return 491;
		case -89829333:
			return 423;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case -75928821:
			return 509;
		case -75024673:
			return 244;
		case -74031276:
			return 441;
		case -70727482:
			return 453;
		case -63926460:
			return 87;
		case -61411516:
			return 358;
		case -38135693:
			return 468;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 406;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 541;
		case 64896505:
			return 391;
		case 74872959:
			return 331;
		case 84709454:
			return 454;
		case 93964309:
			return 396;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case 148595040:
			return 530;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case 215903338:
			return 490;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case 229371495:
			return 327;
		case 235928616:
			return 271;
		case 237155783:
			return 518;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case 321629486:
			return 510;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case 404823609:
			return 485;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 545;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case 468797819:
			return 342;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case 509781469:
			return 378;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 393;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case 560154875:
			return 456;
		case 565812320:
			return 448;
		case 582380806:
			return 359;
		case 588987611:
			return 177;
		case 589380360:
			return 341;
		case 618699440:
			return 75;
		case 619839857:
			return 376;
		case 630808005:
			return 126;
		case 640520536:
			return 470;
		case 642824856:
			return 482;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case 673606600:
			return 500;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case 715735881:
			return 484;
		case 723021499:
			return 250;
		case 730069127:
			return 475;
		case 747514327:
			return 382;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case 784360470:
			return 362;
		case 791041526:
			return 18;
		case 799106423:
			return 455;
		case 803929300:
			return 469;
		case 804063423:
			return 503;
		case 817925178:
			return 227;
		case 826868753:
			return 474;
		case 831940854:
			return 407;
		case 846837291:
			return 451;
		case 865557632:
			return 537;
		case 868326136:
			return 270;
		case 883901517:
			return 385;
		case 885203519:
			return 315;
		case 885378256:
			return 379;
		case 885777893:
			return 375;
		case 896725436:
			return 511;
		case 929582877:
			return 368;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 416;
		case 945612176:
			return 234;
		case 965467037:
			return 344;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case 982765715:
			return 443;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case 1028084603:
			return 446;
		case 1032791043:
			return 502;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 538;
		case 1126565489:
			return 486;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case 1153686207:
			return 452;
		case 1157309080:
			return 514;
		case 1159471771:
			return 361;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case 1166612791:
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 543;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case 1232840551:
			return 481;
		case 1238086793:
			return 347;
		case 1248935549:
			return 415;
		case 1250636944:
			return 245;
		case 1279586666:
			return 449;
		case 1280406542:
			return 442;
		case 1287917122:
			return 387;
		case 1302228510:
			return 349;
		case 1306158345:
			return 199;
		case 1321892118:
			return 357;
		case 1325325699:
			return 421;
		case 1341699707:
			return 526;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case 1362354162:
			return 497;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 414;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case 1480425906:
			return 450;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case 1494062795:
			return 426;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case 1517951665:
			return 436;
		case 1521272922:
			return 458;
		case 1522511407:
			return 265;
		case 1549124796:
			return 325;
		case 1557082963:
			return 161;
		case 1561093093:
			return 386;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case 1601722481:
			return 521;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case 1666964801:
			return 527;
		case 1691618738:
			return 66;
		case 1698972798:
			return 352;
		case 1703398561:
			return 365;
		case 1703426636:
			return 43;
		case 1708045337:
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case 1744443559:
			return 377;
		case 1766284049:
			return 92;
		case 1774060092:
			return 544;
		case 1776302352:
			return 299;
		case 1788424349:
			return 445;
		case 1812677765:
			return 398;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case 1866434585:
			return 413;
		case 1867912207:
			return 68;
		case 1881028477:
			return 364;
		case 1884271742:
			return 51;
		case 1891256113:
			return 437;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case 1932172605:
			return 360;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case 2013720626:
			return 489;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case 2048790450:
			return 498;
		case 2051822093:
			return 284;
		case 2068208444:
			return 428;
		case 2068253437:
			return 478;
		case 2077022393:
			return 291;
		case 2079292950:
			return 457;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case 2103908624:
			return 397;
		case 2109952320:
			return 189;
		case 2113625508:
			return 324;
		case 2127412005:
			return 496;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_1213(int iParam0)
{
	int iVar0;

	iVar0 = func_1409(iParam0);
	if (iVar0 < 337)
	{
		return 0;
	}
	return 1;
}

int func_1214(int iParam0)
{
	if (iParam0 == 1932172605)
	{
		return 1;
	}
	return 0;
}

void func_1215(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_1216(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1410((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1410(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_73(*(Global_1900718->f_1[0 /*2*/])))
	{
		func_632(*(Global_1900718->f_1[0 /*2*/]), 3);
	}
}

void func_1217(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (Global_1184439->f_129 <= 0)
	{
		Global_1184439->f_129 = 0;
		return;
	}
	if (iParam1 >= Global_1184439->f_129)
	{
		iParam1 = 0;
	}
	if (iParam1 >= 32)
	{
		iParam1 = (Global_1184439->f_129 - 1);
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	if (Global_1184439->f_129 == 1)
	{
		*uParam0 = { *((*Global_1184439)[0 /*4*/]) };
		*((*Global_1184439)[0 /*4*/]) = { Var0 };
		Global_1184439->f_129 = 0;
		return;
	}
	*uParam0 = { *((*Global_1184439)[iParam1 /*4*/]) };
	Global_1184439->f_129 = (Global_1184439->f_129 - 1);
	iVar4 = (Global_1184439->f_129 - 1);
	iVar5 = iParam1;
	while (iVar5 <= iVar4)
	{
		*((*Global_1184439)[iVar5 /*4*/]) = { *((*Global_1184439)[iVar5 + 1 /*4*/]) };
		*((*Global_1184439)[iVar5 + 1 /*4*/]) = { Var0 };
		iVar5++;
	}
}

void func_1218(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1184439->f_129)
	{
		return;
	}
	Global_1184439->f_130 = iParam0;
	Global_1184439->f_131 = Global_1184439[iParam0 /*4*/];
}

void func_1219()
{
	if (Global_1184439->f_131 == 0)
	{
		return;
	}
	Global_1184439->f_130 = func_1411(Global_1184439->f_131);
	if (Global_1184439->f_130 < 0)
	{
		Global_1184439->f_131 = 0;
	}
}

bool func_1220(int iParam0)
{
	return func_78(Global_1902942->f_2, iParam0);
}

struct<14> func_1221(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

int func_1222(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_663(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_1223(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

int func_1224(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = func_663(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 29, 1))
	{
		return 0;
	}
	return 1;
}

bool func_1225(var uParam0, int iParam1)
{
	return func_78(*uParam0, iParam1);
}

int func_1226(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_1227(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = ((*Global_262996)[iParam0 /*70*/])->f_1.f_21.f_2;
	iVar1 = func_1412(iVar0);
	uVar2 = func_1413(iVar0, iVar1);
	return uVar2;
}

struct<2> func_1228()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_1229(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_1230(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_663(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_1231(var uParam0)
{
	int iVar0;

	func_980(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_973() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_23[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_27 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		uParam0->f_28[iVar0] = 0;
		iVar0++;
	}
}

int func_1232(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_1224(uParam0, uParam2, bParam3))
	{
		return 0;
	}
	if (!func_1414(uParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

int func_1233(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_1415(uParam0, uParam2, bParam3))
	{
		return 0;
	}
	if (!func_1416(uParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

void func_1234(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;

	if (!func_1417(uParam0->f_10))
	{
		return;
	}
	func_1418(uParam0, 8);
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return;
	}
	iVar0 = func_663(0);
	iVar3 = 0;
	while (iVar3 < 13)
	{
		uVar1 = func_1419(iVar3, 1);
		if (!INVENTORY::_0x6862E4D93F64CF01(iVar0, uParam0, uVar1, &uVar2))
		{
		}
		else
		{
			uParam0->f_28[iVar3] = uVar2;
		}
		iVar3++;
	}
}

int func_1235(int iParam0, var uParam1)
{
	var uVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 1074477367;
	}
	uVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, uParam1);
	return uVar0;
}

void func_1236(var uParam0)
{
	struct<7> Var0;

	*uParam0 = { Var0 };
}

int func_1237(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1420();
	}
	if (iParam0 == 2026485318)
	{
		return -1806335803;
	}
	else if (iParam0 == 24043185)
	{
		return -971050805;
	}
	return 0;
}

int func_1238(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 256;
		case 350097565:
			return 512;
		case 346761890:
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1239(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1421(uParam0->f_1[iVar0 /*3*/], 2))
		{
			if (func_1422(iVar0, iParam1))
			{
				vVar4 = { func_1423(iVar0, -1) };
				if (((!bParam4 && vVar4.x != &Global_1951141->f_81[iVar0 /*12*/]) && vVar4.x != 0) && (&uParam0->f_1[iVar0 /*3*/] != vVar4.x || (uParam0->f_1[iVar0 /*3*/])->f_1 != vVar4.y))
				{
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar4 };
				}
				if (func_1397(iVar0, 4))
				{
					func_1398(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_1424(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = &Global_1951141->f_81[iVar0 /*12*/];
					*(uParam0->f_1[iVar0 /*3*/]) = { vVar1 };
				}
			}
			iVar0++;
		}
	}

int func_1240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 735520874:
			return 5;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_1241(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_1240(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_1240(iParam0, 1) /*12*/])->f_11 || iParam1);
}

int func_1242(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1951141->f_1040.f_2 = 0;
	iVar0 = 1226838104;
	func_1425(&(Global_1951141->f_1040), iVar0, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_0x91DED5DD64BB2691(&(Global_1951141->f_1040));
	if (!DATAFILE::_0x44B3A36933AC009C(&uVar1, &(Global_1951141->f_1040), 1409451727))
	{
		return 0;
	}
	return 1;
}

int func_1243(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("base");
	return 1;
}

int func_1244(int iParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(iParam0, 761377030, &uVar0);
	if (iVar6 > 0)
	{
		return &(uVar0[0]);
	}
	return 0;
}

void func_1245(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_1426(&(uParam0->f_1[34 /*3*/]), -166674229))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (&(Global_1951141->f_81[iVar0 /*12*/])->f_3[0] == joaat("MISSING") || &uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else if (!bParam2 && func_1244(&(uParam0->f_1[iVar0 /*3*/])) != 0)
		{
		}
		else if (!func_1422(iVar0, iParam1))
		{
		}
		else if (func_1397(iVar0, 16))
		{
			func_1398(iVar0, 16, 6);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = &Global_1951141->f_81[iVar0 /*12*/];
			(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
		}
		iVar0++;
	}
}

void func_1246(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			if (Global_1951141->f_916 >= 25)
			{
				return;
			}
			if (func_1427(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951141->f_916)
				{
					iVar1 = ((Global_1951141->f_921 + iVar0) % 25);
					if ((&Global_1951141->f_734[iVar1 /*4*/] == Param0 && (Global_1951141->f_734[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951141->f_734[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1428(Param0);
			*(Global_1951141->f_734[Global_1951141->f_922 /*4*/]) = { Param0 };
			Global_1951141->f_916++;
			Global_1951141->f_922 = (Global_1951141->f_922 + 1 % 25);
			func_983(8);
			break;
		case 23:
		case 24:
		case 25:
			if (Global_1951141->f_917 >= 25)
			{
				return;
			}
			if (func_1427(Param0))
			{
				return;
			}
			func_1428(Param0);
			*(Global_1951141->f_633[Global_1951141->f_917 /*4*/]) = { Param0 };
			Global_1951141->f_917++;
			func_983(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1951141->f_918 >= 20)
			{
				return;
			}
			if (func_1427(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1951141->f_918)
				{
					iVar1 = ((Global_1951141->f_919 + iVar0) % 20);
					if ((&Global_1951141->f_835[iVar1 /*4*/] == Param0 && (Global_1951141->f_835[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1951141->f_835[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1428(Param0);
			*(Global_1951141->f_835[Global_1951141->f_920 /*4*/]) = { Param0 };
			Global_1951141->f_918++;
			Global_1951141->f_920 = (Global_1951141->f_920 + 1 % 20);
			func_983(8);
			break;
			break;
	}
}

int func_1247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1845241476;
		case 1:
			return 1654063339;
		case 2:
			return 1623931083;
		default:
			break;
	}
	return -1845241476;
}

int func_1248(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_681(iParam0, joaat("default")) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_684(iParam0, Param1, iParam5, bParam6) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_0xC97E0D2302382211(func_663(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = INVENTORY::_0xE787F05DFC977BDE(func_663(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

int func_1249(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_681(iParam0, joaat("default"));
	if (iVar0 != 0)
	{
		return func_1429(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_683(iParam0, bParam4, 0) };
	Var6 = { func_684(iParam0, Var1, Var1.f_4, bParam4) };
	return func_1430(iParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

int func_1250(int iParam0)
{
	if (!func_1431(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 121671270;
		case 2:
			return 1242891102;
		case 1:
			return -1791399933;
		default:
			break;
	}
	return 0;
}

int func_1251(int iParam0, float fParam1, int iParam2)
{
	if (!func_1432(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_997(2);
	}
	func_1433(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1275573->f_8))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1275573->f_8, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

int func_1252(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_1253(int iParam0)
{
	if (!func_1434(iParam0))
	{
		return 0;
	}
	return (Global_1132968->f_11.f_1556[func_1435(iParam0, 1) /*46*/])->f_1;
}

int func_1254(int iParam0, int iParam1)
{
	if (iParam0 == joaat("deadeye"))
	{
		return func_1436(iParam1);
	}
	else
	{
		return !func_1436(iParam1);
	}
	return 0;
}

void func_1255(int iParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1438(func_1437(iParam0, 1), &Var0, 2, -1);
	func_1439(Var0, iParam0, 0);
}

void func_1256(int iParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1440(&(Global_1132968->f_5525.f_34[iParam0 /*3*/]), &Var0, 0, -1);
	func_1441(Var0, iParam0, 0);
}

bool func_1257(int iParam0)
{
	return func_386(&(Global_1954472->f_1653), iParam0, 1);
}

void func_1258(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		if (func_1257(2))
		{
			func_1442(2);
		}
		if (PLAYER::_0x6614F9039BD31931(iVar0, 34, 0))
		{
			PLAYER::_0x0751D461F06E41CE(iVar0, 34, 0, 0);
		}
	}
	else
	{
		if (!func_1257(2))
		{
			func_1443(2);
		}
		if (!PLAYER::_0x6614F9039BD31931(iVar0, 34, 0))
		{
			PLAYER::_0x0751D461F06E41CE(iVar0, 34, 0, 1);
		}
	}
	PLAYER::_0xA63FCAD3A6FEC6D2(iVar0, bParam0);
	PLAYER::_0x7146CF430965927C(27, bParam0);
}

void func_1259(bool bParam0)
{
	if (bParam0)
	{
		if (func_1257(1))
		{
			func_1442(1);
		}
	}
	else if (!func_1257(1))
	{
		func_1443(1);
	}
}

void func_1260(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_SET_ENTITY_HEALTH(iParam1, iParam0, 0);
}

void func_1261(float fParam0, int iParam1)
{
	float fVar0;

	if (fParam0 < 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	fVar0 = (fParam0 - PED::_0x775A1CA7893AA8B5(iParam1));
	PED::_0xC3D4B754C0E86B9E(iParam1, fVar0);
}

float func_1262()
{
	return Global_1954472->f_1461.f_3;
}

void func_1263(float fParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB16223CB7DA965F0(iVar0))
	{
		return;
	}
	if (fParam0 < 0f)
	{
		return;
	}
	fVar2 = (fParam0 - PLAYER::_0xDF66A37936D5F3D9(iVar0));
	func_1444(fVar2, 0, 1);
}

bool func_1264(int iParam0)
{
	return func_1431(iParam0);
}

int func_1265(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_1266(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;

	iVar1 = func_1445(uParam0, iParam1);
	switch (iVar1)
	{
		case 0:
			fVar0 = func_1202(iParam1, 2);
			if (iParam1 == 0 && fVar0 < 50f)
			{
				fVar0 = 50f;
			}
			else if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 1:
			fVar0 = func_1202(iParam1, 2);
			if (fVar0 < 10f)
			{
				fVar0 = 10f;
			}
			return fVar0;
		case 2:
			return BUILTIN::TO_FLOAT(100);
		case 3:
			return func_1446(uParam0, iParam1);
	}
	return -1f;
}

void func_1267(int iParam0, float fParam1)
{
	func_1447(iParam0, fParam1);
	func_1448(iParam0, fParam1, 0, 0, 1, 2);
}

void func_1268()
{
	func_1449();
	func_1450();
	func_1451();
	func_1452();
}

int func_1269(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_1453(iParam0, fParam1, bParam2, iParam3);
}

void func_1270()
{
	Global_1954472->f_1331.f_108 = 0;
	Global_1954472->f_1331.f_108.f_1 = 0f;
	Global_1954472->f_1331.f_108.f_3 = 0f;
	Global_1954472->f_1331.f_108.f_2 = 0f;
	Global_1954472->f_1331.f_108.f_4 = 0f;
	Global_1954472->f_1331.f_108.f_6 = 0f;
	Global_1954472->f_1331.f_108.f_5 = 0f;
}

int func_1271(int iParam0)
{
	if (!func_680(*iParam0, 0))
	{
		return 0;
	}
	if (!func_1454(*iParam0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995: /* GXTEntry: "Live Crickets" */
			*iParam0 = -1753819339; /* GXTEntry: "Cricket Bait" */
			break;
		case 1903483453: /* GXTEntry: "Live Worms" */
			*iParam0 = -1527293029; /* GXTEntry: "Worm Bait" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
		case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
			*iParam0 = -324053813; /* GXTEntry: "Chewing Tobacco" */
			break;
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1272(int iParam0)
{
	return iParam0;
}

int func_1273(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_0x4308812A6E9CA62E(iParam0, iParam1);
}

bool func_1274(int iParam0)
{
	return func_1013(iParam0) == joaat("weapon");
}

int func_1275(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_680(iParam0, 0) && !func_1273(func_1272(iParam0), 2))
	{
		return 0;
	}
	if (func_1013(iParam0) == 26423971)
	{
		return -1;
	}
	if (!bParam2 && func_681(iParam0, joaat("default")) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(iParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_663(bParam3), iParam0);
}

bool func_1276()
{
	return (func_383(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 0, 0, 0) > 0 && func_1455(func_684(889965687 /* GXTEntry: "Wardrobe" */, func_1012(1), 1034665895, 1), -234132662, 1, -1) != 0);
}

int func_1277(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_663(0);
	*uParam1 = { func_684(iParam0, func_1014(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_1278(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 487172188)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, joaat("default")) == -1925887917)
		{
			return 0;
		}
	}
	return ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, iParam2);
}

int func_1279(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_663(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_1280(var uParam0, int iParam1, int iParam2)
{
	(uParam0->f_67[iParam1 /*40*/])->f_5 = (uParam0->f_67[iParam1 /*40*/])->f_4;
	(uParam0->f_67[iParam1 /*40*/])->f_4 = iParam2;
	func_294(&((uParam0->f_67[iParam1 /*40*/])->f_10));
}

int func_1281(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_78(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_78(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_78(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_78(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_78(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_78(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_78(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_78(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

float func_1282(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

float func_1283(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 10000f;
	iVar2 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	iVar3 = 0;
	while (iVar3 <= 2)
	{
		if (!VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[iVar3 /*4*/])->f_1))
		{
		}
		else if (!func_867(iParam0))
		{
			if (func_864(iVar2, 0))
			{
				*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[2 /*4*/])->f_1) };
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), true, false), true);
				if (func_1179(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[2 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
				{
					fVar0 = fVar1;
					*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[2 /*4*/])->f_1) };
				}
			}
			else
			{
				*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[iVar3 /*4*/])->f_1) };
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), true, false), true);
				if (func_1179(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[iVar3 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
				{
					fVar0 = fVar1;
					*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[iVar3 /*4*/])->f_1) };
				}
			}
		}
		else
		{
			*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[1 /*4*/])->f_1) };
			fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), true, false), true);
			if (func_1179(NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/])), (Local_913.f_16[1 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
			{
				fVar0 = fVar1;
				*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[1 /*4*/])->f_1) };
			}
		}
		iVar3++;
	}
	return fVar0;
}

void func_1284(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0) && func_78(&(((*uParam0)[iVar1 /*17*/])->f_5[iParam2]), iParam1))
		{
			func_606(((*uParam0)[iVar1 /*17*/])->f_5[iParam2], iParam1);
		}
		iVar1++;
	}
}

int func_1285(vector3 vParam0, int iParam3, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = fParam4;
	iVar3 = 255;
	*iParam3 = fParam4;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
		{
		}
		else
		{
			iVar4 = PLAYER::GET_PLAYER_PED(iVar2);
			if (iParam6 == 0 || PED::GET_RELATIONSHIP_BETWEEN_PEDS(iParam5, iVar4) == iParam6)
			{
				fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar4, false, false), vParam0);
				if (fVar1 < *iParam3)
				{
					iVar3 = iVar2;
					*iParam3 = fVar1;
				}
			}
		}
		iVar0++;
	}
	if (*iParam3 == fParam4 && iVar3 == 255)
	{
		*iParam3 = -1f;
	}
	return iVar3;
}

int func_1286(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1287(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	if (!func_1456(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_1457(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_1458(iParam0, bParam2);
	iVar2 = 0;
	if (func_1013(iParam0) == joaat("clothing"))
	{
		if (!func_1426(iParam0, 866047851) && !func_1426(iParam0, -1979000645))
		{
			bVar3 = true;
		}
	}
	if (func_1459(iParam0, 8388608) && !func_1460(27))
	{
		func_1461(27);
	}
	func_1462(iParam0);
	if (!bVar3)
	{
		if (func_1426(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			iVar1 = func_1464(func_1463(iParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(iVar1))
			{
				if (func_23() == -1)
				{
					func_1465(iVar1);
				}
				if (func_1011(0) && func_1466(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_1467(iParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_384(iParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_1013(iParam0) == joaat("weapon"))
		{
			if (!func_1468(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1013(iParam0) == joaat("ammo") && func_679(iParam0))
		{
			if (!func_1469(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_1426(iParam0, 866047851))
		{
		}
		else if (func_1426(iParam0, 2000026003))
		{
		}
		else if (func_1426(iParam0, -103750053))
		{
			func_436(func_461(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_436(func_47(-717883113, 2091222383), iVar0);
		}
		else if (func_1426(iParam0, -121341956) && !func_1426(iParam0, 606799272))
		{
			if (iParam0 != 191707516)
			{
				func_1470(534, 0);
			}
			if (func_1426(iParam0, -2017733358) || func_1426(iParam0, -1369131378))
			{
			}
		}
		else if (func_1426(iParam0, -136654233))
		{
			if (func_1426(iParam0, -1021472396))
			{
			}
		}
		else if (func_1426(iParam0, -1466706512) && func_1426(iParam0, 1147021565))
		{
			func_1470(517, 0);
		}
		else if (func_1426(iParam0, 1147021565) && func_1426(iParam0, -524514947))
		{
		}
		else if (func_1426(iParam0, 554195525))
		{
		}
		else if (func_1426(iParam0, 589988438))
		{
			if (func_1471())
			{
				func_1472(1339418451, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_1426(iParam0, 787083290) && func_1426(iParam0, 949916894))
		{
			func_1473(iParam0);
		}
		else if (func_1426(iParam0, -1718133314))
		{
			func_1474(iParam0);
		}
		else if (func_1426(iParam0, -1738650224))
		{
			func_1475(iParam0);
		}
		else if (func_1426(iParam0, -1112814642) && func_1426(iParam0, 949916894))
		{
			func_1476(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1939067->f_21 = 0;
		}
		else if (func_1426(iParam0, 1841149704))
		{
			func_1477();
		}
		else if (func_1426(iParam0, -1979000645))
		{
		}
		else if (func_1426(iParam0, 606799272))
		{
		}
		else if (func_1426(iParam0, -1112814642) && func_1426(iParam0, -1697809989))
		{
		}
		else if (func_1426(iParam0, -2017733358) || func_1426(iParam0, -1369131378))
		{
		}
		else if (func_1426(iParam0, -1921346699))
		{
			return 0;
		}
		else if (func_1426(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868: /* GXTEntry: "Special Lake Lure" */
					if (!func_1478(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1))
					{
						func_1287(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438: /* GXTEntry: "Special River Lure" */
					if (!func_1478(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1))
					{
						func_1287(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217: /* GXTEntry: "Special Swamp Lure" */
					if (!func_1478(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1))
					{
						func_1287(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653: /* GXTEntry: "Lake Lure" */
					if (!func_1478(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1))
					{
						func_1287(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425: /* GXTEntry: "River Lure" */
					if (!func_1478(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1))
					{
						func_1287(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104: /* GXTEntry: "Swamp Lure" */
					if (!func_1478(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1))
					{
						func_1287(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_1426(iParam0, -839724752) && func_1459(iParam0, 4))
		{
		}
		else if (func_1426(iParam0, 1399091007))
		{
			func_1479(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (iParam0)
		{
			case 990323211: /* GXTEntry: "Bundle of Arrows" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373: /* GXTEntry: "Poison Throwing Knives" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995: /* GXTEntry: "Live Crickets" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453: /* GXTEntry: "Live Worms" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930: /* GXTEntry: "Jewelry" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1127253961: /* GXTEntry: "Reward" */
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1531214887;
				break;
			case joaat("weapon_kit_binoculars"):
			case 1652431022: /* GXTEntry: "Refined Binoculars" */
				break;
			case -102111672: /* GXTEntry: "Map" */
				bParam2 = true;
				bVar4 = true;
				break;
			case -21093309: /* GXTEntry: "Aged Pirate Rum" */
				func_1481(271, func_1480(-21093309 /* GXTEntry: "Aged Pirate Rum" */), 0);
				break;
			case 204375141: /* GXTEntry: "Ginseng Elixir" */
				func_1481(269, func_1480(204375141 /* GXTEntry: "Ginseng Elixir" */), 0);
				break;
			case -417963070: /* GXTEntry: "Valerian Root" */
				func_1481(270, func_1480(-417963070 /* GXTEntry: "Valerian Root" */), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case -755485480: /* GXTEntry: "Potent Health Cure" */
			case 230530039: /* GXTEntry: "Health Cure" */
			case 299161628: /* GXTEntry: "Moonshine" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_1482(683, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1067476102: /* GXTEntry: "Potent Bitters" */
			case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			case 206762213: /* GXTEntry: "Cocaine Gum" */
			case 1566032147: /* GXTEntry: "Special Bitters" */
			case 1973952589: /* GXTEntry: "Bitters" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_1482(683, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -653299524: /* GXTEntry: "Snake Oil" */
			case -486559882: /* GXTEntry: "Potent Snake Oil" */
			case -324053813: /* GXTEntry: "Chewing Tobacco" */
			case -223790555: /* GXTEntry: "Special Snake Oil" */
			case 998010398: /* GXTEntry: "Opened Chewing Tobacco" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_1482(683, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1976480343: /* GXTEntry: "Special Miracle Tonic" */
			case -953313786: /* GXTEntry: "Miracle Tonic" */
			case 730856618: /* GXTEntry: "Potent Miracle Tonic" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_1482(683, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_1482(684, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1939231->f_10487 + 60000))
				{
					func_1482(684, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1939231->f_10487 = MISC::GET_GAME_TIMER();
				}
				break;
			case 80178851: /* GXTEntry: "Hair Tonic" */
				func_1470(524, 0);
				break;
			case 1613651027: /* GXTEntry: "Hair Pomade" */
				func_1470(527, 0);
				break;
			case -885810591: /* GXTEntry: "Premium Cigarettes" */
				break;
			case -601932535: /* GXTEntry: "Ground Coffee" */
				if (func_1460(1))
				{
					func_1470(520, 0);
				}
				break;
			case -898386032: /* GXTEntry: "Gun Oil" */
				func_1470(519, 0);
				break;
			case -2035110427: /* GXTEntry: "Mortar and Pestle" */
				if (func_23() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case 1510719693: /* GXTEntry: "Coffee Percolator" */
				func_1470(532, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar5 = iParam0;
		func_1483(&iVar5);
		if (!func_384(iVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_1011(0))
		{
			return 1;
		}
		if (func_1013(iParam0) == joaat("clothing"))
		{
			func_1484(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_1011(0) && !func_1485())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_34, 0, 0, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_1287(&(Var6.f_1[iVar29]), &(Var6.f_12[iVar29]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_1486(iVar2, 0);
		}
	}
	Var30 = { func_1487(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var30))
	{
		STATS::_0x6A0184E904CDF25E(&Var30, iVar0);
	}
	func_1488(iParam0);
	if (fParam6 > 0f)
	{
		if (func_1426(iParam0, -839724752))
		{
			func_1489(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 1248274121;
		func_1490(iParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_1288(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1013(iParam0);
	if (iVar0 == joaat("weapon") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(iParam0);
	}
	else if (iVar0 == joaat("ammo") && WEAPON::_0x1F7977C9101F807F(iParam0))
	{
		return iParam0;
	}
	if (func_1426(iParam0, 1399091007))
	{
		func_1491(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1289(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	Var0 = { func_1221(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_1492(&Var0, func_1014(0));
	}
	if (!func_1222(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1226(iVar14);
	return uVar15;
}

struct<4> func_1290(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_683(iParam0, bParam1, 0) };
	return func_684(iParam0, Var0, Var0.f_4, bParam1);
}

int func_1291(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_fishingrod"):
		case joaat("weapon_kit_camera"):
		case -351498939:
		case -135813381:
		case 1030402560: /* GXTEntry: "Melee Object 2" */
		case 1549070292: /* GXTEntry: "Melee Object 1" */
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1292(struct<2> Param0)
{
	struct<32> Var0;

	if (func_629(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_629(Param0)))
	{
	}
	else
	{
		STATS::_0xB2A38826E5886E83(func_629(Param0), Global_265331->f_124445.f_70.f_17);
		if (func_1296(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, joaat("race"));
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_1293(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_939(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900718->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900718->f_66;
	func_1493(Param0, iVar0);
	Global_1900718->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900718->f_66)
	{
		return iVar0;
	}
	func_1216(iVar0, iParam2);
	return iParam2;
}

bool func_1294(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

int func_1295(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_73(Param0))
	{
		return 0;
	}
	iVar0 = func_939(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1494(Param0, func_364(0), iParam2))
	{
		func_632(func_364(0), 3);
		func_632(func_364(iVar0), 4);
		return 0;
	}
	func_1216(iVar0, 0);
	func_632(func_364(0), 3);
	func_632(func_364(1), 4);
	return 1;
}

int func_1296(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_1123(Param0, &vVar0);
	if (func_1495(Param0, vVar0.x, uParam2))
	{
		return 1;
	}
	return 0;
}

void func_1297(var uParam0, bool bParam1, int iParam2)
{
	func_1496(uParam0, iParam2);
	if (Global_1184439->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1218(func_941(uParam0->f_1));
	}
	else
	{
		func_1219();
	}
}

bool func_1298(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1099294->f_3 && iParam0) != 0;
	}
	return (((*Global_1097610)[iParam1 /*51*/])->f_3 && iParam0) != 0;
}

void func_1299()
{
	int iVar0;

	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(Global_1275573->f_10))
	{
		return;
	}
	iVar0 = func_1497();
	if (iVar0 > 0)
	{
		func_1498(-1228177771, iVar0, 0);
	}
}

bool func_1300()
{
	return (func_1499(Global_1275573->f_10, 1, 0, 1) && func_1500() > 0);
}

void func_1301()
{
	int iVar0;

	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(Global_1275573->f_10))
	{
		return;
	}
	iVar0 = func_1500();
	if (iVar0 > 0)
	{
		func_1501(iVar0, 0, -142743235, 0);
	}
}

void func_1302()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	LAW::_0x062B4A4A3396351D(iVar0);
	func_1502();
}

void func_1303(int iParam0, struct<2> Param1, int iParam3)
{
	int iVar0;

	if (func_73((Global_1103073->f_193[&Global_1275573 /*8*/])->f_2.f_1))
	{
		return;
	}
	if ((Global_1103073->f_193[&Global_1275573 /*8*/])->f_2 != -1 && (Global_1103073->f_193[&Global_1275573 /*8*/])->f_2 != iParam0)
	{
		return;
	}
	(Global_1103073->f_193[&Global_1275573 /*8*/])->f_2 = iParam0;
	(Global_1103073->f_193[&Global_1275573 /*8*/])->f_2.f_1 = { Param1 };
	if (iParam3 != -1)
	{
		(Global_1103073->f_193[&Global_1275573 /*8*/])->f_2.f_3 = iParam3;
	}
	iVar0 = func_1503(Global_1275573->f_10);
	if (iVar0 != 6 && iVar0 != 8)
	{
		func_1504(6);
	}
}

int func_1304()
{
	int iVar0;
	int iVar1;
	struct<39> Var2;
	int iVar41;

	iVar1 = Global_1275573->f_21;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var2 = { *(Global_1939231->f_242.f_14[iVar0 /*39*/]) };
		iVar41 = DATABINDING::_DATABINDING_READ_DATA_INT(Var2.f_25);
		if (iVar41 < iVar1)
		{
			if (func_1505(Var2))
			{
				func_623(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_1506();
}

void func_1305(var uParam0, var uParam1, char[32] cParam2, struct<22> Param10)
{
	func_1507(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_1206(15), Param10.f_16);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_1206(17), Param10.f_17);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(3), Param10.f_18);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(4), Param10.f_19);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(5), Param10.f_20);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(6), Param10.f_21);
}

int func_1306(var uParam0)
{
	return 1;
}

int func_1307(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 778915895)
	{
		if (Global_1896726->f_384)
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_1509(func_1508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_1510(func_1508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_1511(func_1508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_1512(func_1508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_1513(func_1508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_1514(func_1508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_1515(func_1508(uParam0->f_2, joaat("COLOR_PURE_WHITE")), func_1508(uParam0->f_3, joaat("COLOR_PURE_WHITE")), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

int func_1308()
{
	return Global_1939231->f_242.f_1185;
}

bool func_1309(struct<2> Param0)
{
	return func_628(Param0) == 0;
}

int func_1310(struct<2> Param0)
{
	int iVar0;

	if (&Global_1900788 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1900788 - 1))
	{
		if (func_74(*((*Global_1900789)[iVar0 /*2*/]), Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1311(struct<2> Param0, bool bParam2)
{
	if (!func_73(Param0))
	{
		return;
	}
	if (!func_1309(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1516(Param0);
	}
	func_632(Param0, 1);
	bParam2 = bParam2;
}

bool func_1312()
{
	return (Global_1915180->f_20135 || Global_1915180->f_21989.f_1);
}

int func_1313()
{
	return Global_1051202->f_12;
}

char* func_1314()
{
	return "unnamed";
}

int func_1315(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

int func_1316(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return func_164(35, iParam0);
}

char* func_1317()
{
	return "countdown_final_thud";
}

int func_1318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 3;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 16:
			return 1;
		case 14:
			return 4;
		case 15:
			return 4;
		case 17:
			return 3;
		case 18:
			return 0;
		case 19:
			return 4;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 4;
		case 27:
			return 4;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 0;
		case 31:
			return 4;
		case 32:
			return 4;
		case 33:
			return 4;
		case 34:
			return 4;
		case 35:
			return 4;
		case 36:
			return 1;
		case 37:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_1319(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_1517(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, func_1518(iParam2), iParam3);
}

void func_1320(var uParam0, var uParam1, int iParam2, char* sParam3)
{
	if (MISC::IS_STRING_NULL(sParam3))
	{
		sParam3 = func_1519(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, func_1518(iParam2), sParam3);
}

void func_1321(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_1520(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, func_1518(iParam2), iParam3);
}

void func_1322(var uParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_1521(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_FLOAT(uParam0, func_1518(iParam2), fParam3);
}

void func_1323(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!bParam4)
	{
		bParam3 = func_1522(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, func_1518(iParam2), bParam3);
}

int func_1324(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_1325(int iParam0)
{
	SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_26831), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26832), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26833), iParam0);
	if (!func_880(iParam0))
	{
		func_1183(iParam0, 5, 1, 1, 0, 0);
	}
}

void func_1326(int iParam0)
{
	func_476(&(Global_1182289->f_3), iParam0);
}

void func_1327(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26831), iParam0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_26832), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26833), iParam0);
	if (!func_1205(iParam0))
	{
		func_1406(iParam0);
	}
}

void func_1328(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26835), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26834), iParam0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_26836), iParam0);
}

void func_1329(int iParam0)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26835), iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1070356->f_26836), iParam0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1070356->f_26834), iParam0);
}

char* func_1330()
{
	return "FME_RU_ILO_NAME";
}

void func_1331(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::_0x6569F31A01B4C097(iVar0, 0, iParam1);
	PED::_0x6569F31A01B4C097(iVar0, 1, iParam1);
}

void func_1332(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_1333(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!PED::IS_PED_A_PLAYER(iVar0))
	{
		if (PED::_0x2D64376CF437363E(iVar0))
		{
			iVar0 = PED::_0xB676EFDA03DADA52(iVar0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_A_PLAYER(iVar0))
			{
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
	if (iVar1 == 255)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
	{
		return 0;
	}
	iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
	{
		return 0;
	}
	*uParam1 = iVar2;
	return 1;
}

int func_1334()
{
	return PLAYER::GET_PLAYER_PED(255);
}

var func_1335(var uParam0)
{
	return uParam0;
}

int func_1336(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_1337(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!MAP::DOES_BLIP_EXIST(&(Local_913.f_80[iParam0])))
	{
		func_1523(iParam0, 0);
		return;
	}
	iVar0 = func_1524(iParam0);
	if (&Local_913.f_88[iParam0] == iVar0 && !bParam1)
	{
		return;
	}
	iVar1 = func_1525(iVar0);
	if (iVar1 == 0)
	{
		func_1523(iParam0, 0);
		return;
	}
	iVar2 = 0 + 1;
	while (iVar2 <= (5 - 1))
	{
		iVar3 = iVar2;
		iVar4 = func_1525(iVar3);
		if (iVar4 != 0)
		{
			MAP::_0xB059D7BD3D78C16F(&(Local_913.f_80[iParam0]), iVar4);
		}
		iVar2++;
	}
	MAP::_0x662D364ABF16DE2F(&(Local_913.f_80[iParam0]), iVar1);
	func_1523(iParam0, iVar0);
}

char* func_1338()
{
	var uVar0;

	uVar0 = Local_913.f_41;
	return "FME_RU_OUTLAW_BLIP_NAME";
}

void func_1339(var uParam0, int iParam1)
{
	MISC::SET_BIT(&(uParam0->f_8), iParam1);
}

char* func_1340()
{
	if (Local_913.f_41 == joaat("targets"))
	{
		return "FME_RU_OBJ_RETURN";
	}
	return "FME_RU_OBJ_RETURN";
}

char* func_1341()
{
	return "FME_RU_OBJ_CAPTURE";
}

char* func_1342()
{
	return "FME_RU_OBJ_CAPTURE_WAIT";
}

bool func_1343()
{
	return func_495(16384);
}

int func_1344(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_0x772A1969F649E902(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1345(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	fVar0 = 10000f;
	iVar4 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar5 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam2 /*40*/]));
	if (!func_867(iParam2))
	{
		if (func_864(iVar5, 0))
		{
			if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[2 /*4*/])->f_1))
			{
				*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[2 /*4*/])->f_1) };
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(iVar4, true, false), true);
				if (func_1179(iVar4, (Local_913.f_16[2 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
				{
					fVar0 = fVar1;
					*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[2 /*4*/])->f_1) };
					iVar3 = iVar2;
				}
			}
		}
		else
		{
			iVar2 = 0;
			while (iVar2 <= 2)
			{
				if (!VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[iVar2 /*4*/])->f_1))
				{
				}
				else
				{
					*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[iVar2 /*4*/])->f_1) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(iVar4, true, false), true);
					if (func_1179(iVar4, (Local_913.f_16[iVar2 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[iVar2 /*4*/])->f_1) };
						iVar3 = iVar2;
					}
				}
				iVar2++;
			}
		}
	}
	else if (VOLUME::_0x92A78D0BEDB332A3((Local_913.f_16[1 /*4*/])->f_1))
	{
		*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[1 /*4*/])->f_1) };
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(iVar4, true, false), true);
		if (func_1179(iVar4, (Local_913.f_16[1 /*4*/])->f_1, 56, 0) || fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam1 = { VOLUME::_0xF70F00013A62F866((Local_913.f_16[1 /*4*/])->f_1) };
			iVar3 = iVar2;
		}
	}
	return iVar3;
}

int func_1346()
{
	switch (Local_2395.f_2)
	{
		case 2139023747:
			return 1;
		case -470215764:
			return 5;
		case 381726250:
			return 6;
		case 2103232336:
			return 4;
		case -154861072:
			return 8;
		case -1573288601:
			return 0;
		case -1983139019:
			return 6;
		case -809127215:
			return 7;
		default:
			break;
	}
	return 0;
}

void func_1347(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;

	if (!func_1149(uParam0, 2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam4))
		{
			*uParam0 = 1;
		}
		else
		{
			*uParam0 = 0;
			uParam0->f_1 = uParam3;
		}
		if (bParam5)
		{
			if (!bParam7)
			{
				if (ENTITY::IS_ENTITY_DEAD(iParam2))
				{
					uParam0->f_2 = 1;
				}
				else
				{
					uParam0->f_2 = 0;
				}
			}
			else if (ENTITY::IS_ENTITY_DEAD(iParam2))
			{
				uParam0->f_2 = 4;
			}
			else
			{
				uParam0->f_2 = 3;
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(iParam2))
		{
			uParam0->f_2 = 2;
		}
		else if (!bParam7)
		{
			uParam0->f_2 = 0;
		}
		else
		{
			uParam0->f_2 = 3;
		}
		if ((uParam0->f_1 == 5 && *uParam0 == 0) && uParam0->f_2 != 4)
		{
			func_1526(uParam0, 2048);
		}
		uParam0->f_6 = iParam1;
		uParam0->f_32 = iParam2;
		uParam0->f_33 = PED::CLONE_PED(iParam6, 0f, false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_33, false);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_33, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_33, 0f, 0f, -10f), true, false, true, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_33, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_33, true, true);
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam4, true, false) };
		fVar3 = ENTITY::GET_ENTITY_HEADING(iParam4);
		iVar4 = ENTITY::GET_ENTITY_MODEL(iParam4);
		uParam0->f_35 = iParam4;
		uParam0->f_34 = VEHICLE::CREATE_VEHICLE(iVar4, vVar0, fVar3, false, false, true, false);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_34, vVar0, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_34, fVar3);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_34, true);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_34, false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_34, false);
		NETWORK::_0xF3354D6CA46F419D(iParam4, 0);
		uParam0->f_3 = 0;
		uParam0->f_36 = 0;
		func_1526(uParam0, 2);
	}
}

int func_1348(var uParam0)
{
	char* sVar0;

	if (func_1149(uParam0, 64) && func_1149(uParam0, 128))
	{
		return 1;
	}
	if (!func_1149(uParam0, 128))
	{
		if (!HUD::_0x3CF96E16265B7DC8("SATDOAU"))
		{
			HUD::_0xF66090013DE648D5("SATDOAU");
		}
		if (HUD::_0xD0976CC34002DB57("SATDOAU"))
		{
			func_1526(uParam0, 128);
		}
	}
	if (func_1149(uParam0, 2048))
	{
		if (!func_1149(uParam0, 8192))
		{
			if (uParam0->f_2 == 0)
			{
				STREAMING::PREFETCH_SRL("script@mp@bounty@JAIL_DROPOFF@ALIVE@std_dropoff");
			}
			else if (uParam0->f_2 == 3)
			{
				STREAMING::PREFETCH_SRL("script@mp@bounty@JAIL_DROPOFF@ALIVE@std_dropoff_mid");
			}
			else if (uParam0->f_2 == 2)
			{
				STREAMING::PREFETCH_SRL("script@mp@bounty@JAIL_DROPOFF@DEAD@HORSE@std_sheriff");
			}
			else if (uParam0->f_2 == 1)
			{
				STREAMING::PREFETCH_SRL("script@mp@bounty@JAIL_DROPOFF@DEAD@WAGON@std_sheriff");
			}
			func_1526(uParam0, 8192);
			return 0;
		}
		else if (!func_1149(uParam0, 4096))
		{
			if (STREAMING::IS_SRL_LOADED())
			{
				func_1526(uParam0, 4096);
			}
			else
			{
				return 0;
			}
		}
	}
	if (!func_1149(uParam0, 64))
	{
		if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_36))
		{
			sVar0 = func_1527(*uParam0, uParam0->f_2, uParam0->f_1, -1, 0);
			uParam0->f_36 = ANIMSCENE::_CREATE_ANIM_SCENE(func_1528(*uParam0, uParam0->f_2, uParam0->f_1, 0), 256, sVar0, false, false);
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_36);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_36, sVar0, true);
			NETWORK::_0x007FF852DCF49DA4(NETWORK::PARTICIPANT_ID_TO_INT());
		}
		if (ANIMSCENE::_0x477122B8D05E7968(uParam0->f_36, 0, 0) && ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_36, 0))
		{
			func_1526(uParam0, 64);
		}
	}
	return 0;
}

void func_1349(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

int func_1350(var uParam0)
{
	if (PED::_0x62DE46F061CAA468() < 2)
	{
		PED::_0xED9582B3DA8F02B4(2);
	}
	else if (!PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	if (!func_1149(uParam0, 4))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_32))
		{
			if (func_1149(uParam0, 16))
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_32, true, true);
				if (PED::IS_PED_MALE(uParam0->f_32))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_36, "mp_male^1", uParam0->f_32, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_36, "mp_female^1", uParam0->f_32, 0);
				}
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam0->f_32, 1, 0, 256);
			}
			else
			{
				uParam0->f_31 = PED::CLONE_PED(uParam0->f_32, 0f, false, true);
				ENTITY::SET_ENTITY_COORDS(uParam0->f_31, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_31, 0f, 0f, -10f), true, false, true, true);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_31, false);
				WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_31, true, true);
				if (PED::IS_PED_MALE(uParam0->f_31))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_36, "mp_male^1", uParam0->f_31, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_36, "mp_female^1", uParam0->f_31, 0);
				}
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam0->f_31, 1, 0, 256);
			}
			func_1526(uParam0, 4);
		}
	}
	if (!func_1149(uParam0, 8))
	{
		func_1529(&(uParam0->f_36), &(uParam0->f_15), &(uParam0->f_6));
		if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_15[0])))
		{
		}
		else
		{
			func_1526(uParam0, 8);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_33))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_36, "U_M_M_VALSHERIFF_01", uParam0->f_33, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_34))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_36, "wagonarmoured01x", uParam0->f_34, 0);
	}
	return 1;
}

void func_1351(var uParam0)
{
	vector3 vVar0;

	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_36))
	{
		return;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_36, 0) && !ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_36, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_34))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_34, true, false) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_36, vVar0, ENTITY::GET_ENTITY_ROTATION(uParam0->f_34, 2), 2);
			if (!ENTITY::IS_ENTITY_VISIBLE(uParam0->f_34))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_34, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_31) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_31))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_31, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_15[0])) && !ENTITY::IS_ENTITY_VISIBLE(&(uParam0->f_15[0])))
		{
			ENTITY::SET_ENTITY_VISIBLE(&(uParam0->f_15[0]), true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_33) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_33))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_33, true);
		}
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_36);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, NETWORK::PARTICIPANT_ID_TO_INT(), false);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_32))
		{
			if (!func_1149(uParam0, 16))
			{
				PED::_0xED00D72F81CF7278(uParam0->f_32, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_32, false);
			}
		}
		if (func_1149(uParam0, 2048))
		{
			STREAMING::BEGIN_SRL();
		}
	}
}

int func_1352(var uParam0)
{
	int iVar0;
	struct<8> Var1;

	if (func_1149(uParam0, 256))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_36))
	{
		return 1;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_36, 0))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_36, "s_DROPOFF_01", 1))
	{
		return 1;
	}
	if (*uParam0 == 0)
	{
		return 1;
	}
	iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_36, "U_M_M_VALSHERIFF_01", false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!func_1149(uParam0, 1024))
	{
		Var1 = { func_1530(iVar0) };
		func_1531(&(uParam0->f_39), iVar0, &Var1, 0);
		func_1526(uParam0, 1024);
		return 0;
	}
	if (!func_1149(uParam0, 256) && func_1149(uParam0, 1024))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_31))
		{
			func_1532(uParam0, iVar0, 3);
		}
		else
		{
			func_1532(uParam0, iVar0, 2);
		}
		func_1526(uParam0, 256);
	}
	return 0;
}

int func_1353(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_36))
	{
		return 1;
	}
	if (func_1149(uParam0, 2048))
	{
		STREAMING::SET_SRL_TIME(ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_36));
	}
	if (ANIMSCENE::_0xD8254CB2C586412B(uParam0->f_36, 0))
	{
		if (func_1149(uParam0, 2048))
		{
			STREAMING::END_SRL();
			func_1533(uParam0, 2048);
		}
		return 1;
	}
	return 0;
}

char* func_1354()
{
	return "SCORE_INCREASE";
}

char* func_1355()
{
	return "HUD_MP_FREE_MODE";
}

void func_1356(float fParam0)
{
	func_1534(((Local_2202[Local_2395.f_1332 /*6*/])->f_2 + fParam0));
}

int func_1357(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return (ENTITY::_0x61914209C36EFDDB(iParam0) == 5 || ENTITY::_0x61914209C36EFDDB(iParam0) == 7);
	}
	return 0;
}

void func_1358(var uParam0, int iParam1, int iParam2)
{
	if ((uParam0->f_50[iParam1 /*4*/])->f_2 != iParam2)
	{
		(uParam0->f_50[iParam1 /*4*/])->f_2 = iParam2;
		(uParam0->f_50[iParam1 /*4*/])->f_3 = (uParam0->f_50[iParam1 /*4*/])->f_2;
	}
}

int func_1359(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if ((WEAPON::_0x6E4E1A82081EABED(Global_1939178->f_38) || 1151374672 == Global_1939178->f_38) && Global_1939178->f_21)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1939178->f_34 != 0)
	{
		if (PED::_0xB676EFDA03DADA52(Global_1939178->f_34, 1) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_1282(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, iParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_0x6AD66548840472E5(func_1535(iVar0, 0)))
		{
			if (func_1536(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1360(var uParam0, int iParam1, float fParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;

	iVar1 = NETWORK::NET_TO_PED(&(uParam0->f_67[iParam1 /*40*/]));
	iVar2 = func_1285(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), &uVar0, 1176255488 /* Float: 9999f */, iVar1, 0);
	iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
	iVar4 = func_1537(iVar3, 0, 1, 0);
	bVar5 = false;
	if (PED::_0x947E43F544B6AB34(iVar1, PLAYER::PLAYER_ID(), 4, 1000))
	{
		bVar5 = true;
	}
	if (PED::_0x947E43F544B6AB34(iVar1, PLAYER::PLAYER_ID(), 26, 1000))
	{
		bVar5 = true;
	}
	if (PED::_0x947E43F544B6AB34(iVar1, PLAYER::PLAYER_ID(), 13, 1000))
	{
		bVar5 = true;
	}
	if (PED::_0x947E43F544B6AB34(iVar1, PLAYER::PLAYER_ID(), 2, 1000))
	{
		bVar5 = true;
	}
	if (func_1282(iVar1, PLAYER::PLAYER_PED_ID(), 1, 1) < fParam2)
	{
		bVar5 = true;
	}
	if ((func_1359(iVar1, 1, 1, 1, 0, 0) && func_1361(iVar1, PLAYER::PLAYER_PED_ID(), 1, 35f, 0)) && ((iVar4 != joaat("weapon_unarmed") && !WEAPON::_0x6E4E1A82081EABED(iVar4)) && WEAPON::GET_AMMO_IN_PED_WEAPON(iVar3, iVar4) > 0))
	{
		bVar5 = true;
	}
	if ((uParam0->f_67[iParam1 /*40*/])->f_39 > 0)
	{
		iVar6 = 0;
		while (iVar6 < (uParam0->f_67[iParam1 /*40*/])->f_39)
		{
			iVar7 = NETWORK::NET_TO_PED(&((uParam0->f_67[iParam1 /*40*/])->f_20[iVar6 /*3*/]));
			if (PED::IS_PED_IN_COMBAT(iVar7, PLAYER::PLAYER_PED_ID()))
			{
				bVar5 = true;
			}
			else
			{
				iVar6++;
			}
		}
	}
	if (bVar5)
	{
		return 1;
	}
	return 0;
}

bool func_1361(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_1538(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_1539(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

int func_1362(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = func_592(iParam0, Global_35, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1363(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

int func_1364()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1365(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1938417->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1938417)[iVar0 /*16*/])->f_10)))
		{
			func_1540(iVar0);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1366(int iParam0)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 != 0)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = 0;
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = 0;
	}
}

int func_1367(int iParam0, int iParam1, int iParam2)
{
	if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = iParam2;
		}
		else
		{
			(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1275573->f_21;
		}
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 = iParam1;
		return 1;
	}
	else if ((Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_1 == iParam1)
	{
		(Global_1070356->f_19683.f_1[iParam0 /*8*/])->f_2 = Global_1275573->f_21;
		return 1;
	}
	return 0;
}

void func_1368(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 179;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_1541(*uParam0);
}

void func_1369(var uParam0)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "PostMatchAndLeaderboard");
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Title");
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
	uParam0->f_142 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "LeaderboardList");
}

void func_1370(var uParam0, char* sParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_158, 7))
	{
		MISC::SET_BIT(&(uParam0->f_158), 7);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Heading", sParam1);
	}
}

char* func_1371(char* sParam0)
{
	return MISC::_CREATE_VAR_STRING(6, "FM_WEIGHT", sParam0);
}

char* func_1372(float fParam0)
{
	return MISC::_CREATE_VAR_STRING(2, "FM_PERCENT", BUILTIN::FLOOR((fParam0 * 100f)));
}

void func_1373(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0, iParam1);
}

void func_1374(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;

	if (Global_1939067->f_108)
	{
		func_1542(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_1381(uParam0, uParam1);
		iVar7 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_1543(&(((*uParam1)[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_1544(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", func_1545(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar8 = iVar7 == ((*uParam1)[iVar0 /*23*/])->f_14;
				iVar9 = func_1546(uParam0, uParam1, iVar0, iVar7, bVar8);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_1547(uParam0, uParam1, iVar0, bParam3, iVar9);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Gamertag", &(((*uParam1)[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "GamertagColor", iVar9);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "CrewTag", func_1548());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Rank", func_1549(((*uParam1)[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_1550())
					{
						if (func_1551(((*uParam1)[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", func_1552(((*uParam1)[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
					if (func_1553(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
					else if (func_1554(uParam0->f_159))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", MISC::_0x2B6846401D68E563(((*uParam1)[iVar0 /*23*/])->f_8, 0));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					iVar10 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar2 = BUILTIN::ROUND(func_1555((*uParam1)[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat2";
					}
					else
					{
						iVar2 = BUILTIN::ROUND(func_1556((*uParam1)[iVar0 /*23*/], uParam0->f_159));
						iVar10 = "Stat1";
					}
					sVar5 = " ";
					if (func_1557(iVar2))
					{
						iVar11 = uParam0->f_159;
						if (((*uParam1)[iVar0 /*23*/])->f_1 == 8.94E+07f)
						{
							MISC::CLEAR_BIT(&iVar11, 12);
						}
						sVar5 = func_1558(iVar2, iVar11, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar10, sVar5);
				}
				else if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_159, 18))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(func_1556((*uParam1)[iVar0 /*23*/], uParam0->f_159), func_1559(uParam0, 1)));
					}
				}
				if (MISC::IS_BIT_SET(uParam0->f_159, 4))
				{
					iVar12 = 0;
					sVar6 = " ";
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar12 = "Stat3";
						iVar3 = BUILTIN::ROUND(func_1560((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
					}
					else
					{
						iVar12 = "Stat2";
						iVar3 = BUILTIN::ROUND(func_1555((*uParam1)[iVar0 /*23*/], uParam0->f_159));
					}
					if (func_1557(iVar3))
					{
						sVar6 = func_1099(iVar3, 1, 2, 0, 0, 0);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar12, sVar6);
				}
				else if (MISC::IS_BIT_SET(uParam0->f_159, 15))
				{
					iVar13 = 0;
					if (MISC::IS_BIT_SET(uParam0->f_159, 0))
					{
						iVar13 = "Stat3";
						fVar14 = func_1560((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
					}
					else
					{
						iVar13 = "Stat2";
						fVar14 = func_1555((*uParam1)[iVar0 /*23*/], uParam0->f_159);
					}
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), iVar13, MISC::_0x2B6846401D68E563(fVar14, 0));
				}
				else if ((!MISC::IS_BIT_SET(uParam0->f_159, 3) && !func_1554(uParam0->f_159)) && !func_1561(uParam0->f_159))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(func_1555((*uParam1)[iVar0 /*23*/], uParam0->f_159), func_1559(uParam0, 2)));
				}
				if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
				{
					if (MISC::IS_BIT_SET(uParam0->f_160, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", "-");
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", func_1371(func_1560((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160)));
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 10))
					{
						fVar4 = func_1560((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
						if (fVar4 >= 0f)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", func_1099(BUILTIN::FLOOR(fVar4), 1, 2, 0, 0, 0));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_CREATE_VAR_STRING(2, "FM_POSSE_RACE_LEADERBOARD_DNF"));
						}
					}
					else if (MISC::IS_BIT_SET(uParam0->f_159, 21))
					{
						iVar2 = BUILTIN::ROUND(func_1560((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160));
						sVar5 = " ";
						sVar5 = func_1558(iVar2, uParam0->f_159, 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", sVar5);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(func_1560((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160), func_1559(uParam0, 3)));
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "isHighlighted", bVar8);
				if (bVar8)
				{
				}
				if (bParam4 && ((*uParam1)[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", iVar9);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

void func_1375(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[8];
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar13 = 0;
	iVar14 = 32;
	bVar16 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (Global_1939067->f_108)
	{
		iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142);
		if (MISC::IS_BIT_SET(uParam0->f_159, 28) && uParam0->f_150 > 0)
		{
			iVar14 = uParam0->f_150;
			func_1562(iParam4, &uVar4, uParam0->f_150, bVar16);
			func_1563(uParam0, iParam6, &uVar4, &iVar13, &iVar14);
			iVar1 = 0;
			while (iVar1 <= (iVar14 - 1))
			{
				iVar17 = &uVar4[iVar1];
				if (iVar1 == 0 || iVar1 >= iVar13)
				{
					if ((iVar17 < 8 && iVar17 != -1) && iVar0 < 5)
					{
						func_1564(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar1++;
			}
		}
		else
		{
			func_1565(uParam1, iParam6, &iVar13, &iVar14);
			iVar2 = 0;
			while (iVar2 <= iVar14)
			{
				if (iVar0 == 0 || iVar2 >= iVar13)
				{
					if (func_1543(&(((*uParam1)[iVar2 /*23*/])->f_14)) && iVar0 < 5)
					{
						func_1564(uParam0->f_2, &(uParam0->f_143[iVar0]), "MiniListItem", iVar3, iVar0);
						iVar0++;
					}
				}
				iVar2++;
			}
		}
		iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_142) - 1);
		if (iVar0 <= iVar3)
		{
			iVar18 = iVar3;
			while (iVar18 >= iVar0)
			{
				DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_142, iVar18);
				iVar18 = (iVar18 + -1);
			}
		}
		return;
	}
	iVar3 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2);
	if (bParam2 && uParam0->f_150 > 0)
	{
		func_1562(iParam4, &uVar4, uParam0->f_150, bVar16);
		func_1566(uParam0, uParam1, iParam3, uParam0->f_150, bParam5);
		if (!bVar15)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_150 - 1))
			{
				iVar19 = &uVar4[iVar1];
				if (iVar19 < 8 && iVar19 > -1)
				{
					func_1564(uParam0->f_2, &(uParam0->f_3[iVar19]), "LeaderboardHeader", iVar3, iVar0);
					iVar0++;
					iVar2 = 0;
					while (iVar2 <= 31)
					{
						if (iVar19 == uParam1[iVar2 /*23*/] && func_1543(&(((*uParam1)[iVar2 /*23*/])->f_14)))
						{
							func_1564(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
							iVar0++;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			if (func_1543(&(((*uParam1)[iVar2 /*23*/])->f_14)))
			{
				func_1564(uParam0->f_2, &(uParam0->f_12[iVar2]), "LeaderboardListItem", iVar3, iVar0);
				iVar0++;
			}
			iVar2++;
		}
	}
	if (uParam0->f_149 > 0 || iVar0 > 0)
	{
		if (iVar0 < 3)
		{
			iVar20 = iVar0;
			while (iVar20 <= 3)
			{
				func_1564(uParam0->f_2, &(uParam0->f_12[iVar20]), "LeaderboardListItemBlank", iVar3, iVar0);
				iVar0++;
				iVar20++;
			}
		}
	}
	iVar3 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2) - 1);
	if (iVar0 <= iVar3)
	{
		iVar21 = iVar3;
		while (iVar21 >= iVar0)
		{
			DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_2, iVar21);
			iVar21 = (iVar21 + -1);
		}
	}
}

int func_1376()
{
	if (Global_1939067->f_20)
	{
		if (Global_1939067->f_5 == 1)
		{
			return 1;
		}
		if (Global_1939067->f_5 == 2)
		{
			return 2;
		}
	}
	return -1;
}

bool func_1377()
{
	if (Global_1099294->f_26.f_117.f_4 && !func_1550())
	{
		Global_1099294->f_26.f_117.f_4 = 0;
	}
	return Global_1099294->f_26.f_117.f_4;
}

bool func_1378()
{
	return (func_801(2) && func_1567());
}

void func_1379(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_158, 17))
	{
		if (MISC::IS_BIT_SET(uParam0->f_159, 22))
		{
			Global_1939067->f_109 = 1;
		}
		else
		{
			Global_1939067->f_109 = 0;
		}
		MISC::SET_BIT(&(uParam0->f_158), 17);
	}
	if (Global_1939067->f_108)
	{
		if (MISC::IS_BIT_SET(uParam0->f_159, 28))
		{
			iVar0 = 0;
			while (iVar0 <= (uParam0->f_150 - 1))
			{
				if (iVar0 == iParam4)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (((*uParam1)[iVar0 /*23*/])->f_14 == *iParam2)
				{
					*iParam3 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_1380(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	func_1568(uParam0, uParam1, iParam2, iParam7, bParam4, bParam3, bParam5, bParam8, bParam9, iParam10, iParam6);
	func_1375(uParam0, uParam1, bParam5, iParam6, iParam2, MISC::IS_BIT_SET(uParam0->f_159, 5), iParam10);
}

void func_1381(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (((*uParam1)[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else if (func_1543(&(((*uParam1)[iVar0 /*23*/])->f_14)))
		{
			func_1569(uParam0, &(((*uParam1)[iVar0 /*23*/])->f_14), iVar0, 1);
		}
		iVar0++;
	}
}

void func_1382(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (((*uParam1)[iVar0 /*23*/])->f_14 == 255)
		{
		}
		else
		{
			func_1544(uParam0, uParam1, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_1383(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_1570(16);
	switch (uParam0->f_198)
	{
		case 0:
			func_507(1);
			func_1571(&(uParam0->f_198), 1);
			break;
		case 1:
			AUDIO::_0xD9130842D7226045("MP_Leaderboard_Sounds", 1);
			func_1571(&(uParam0->f_198), 2);
			break;
		case 2:
			iVar1 = UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("leaderboards"), func_1572(bParam1));
			if (iVar1 == 0)
			{
				func_1571(&(uParam0->f_198), 3);
			}
			else if (UIAPPS::_IS_APP_RUNNING(joaat("leaderboards")))
			{
				func_1571(&(uParam0->f_198), 3);
			}
			break;
		case 3:
			if (UIAPPS::_IS_APP_RUNNING(joaat("leaderboards")))
			{
				if (!bVar0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Show", "MP_Leaderboard_Sounds", true, 0);
				}
				UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("leaderboards"), func_1573());
				func_1571(&(uParam0->f_198), 4);
			}
			else if (func_1574())
			{
				func_1571(&(uParam0->f_198), 2);
			}
			break;
		case 4:
			if (MISC::IS_BIT_SET(uParam0->f_158, 13))
			{
				if (UIAPPS::_IS_APP_RUNNING(joaat("leaderboards")))
				{
					if (!bVar0)
					{
						AUDIO::PLAY_SOUND_FRONTEND("Leaderboard_Hide", "MP_Leaderboard_Sounds", true, 0);
					}
					UIAPPS::_CLOSE_APP_BY_HASH(joaat("leaderboards"));
					func_1571(&(uParam0->f_198), 5);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				MISC::CLEAR_BIT(&(uParam0->f_158), 13);
				func_1571(&(uParam0->f_198), 1);
			}
			else
			{
				func_1571(&(uParam0->f_198), 6);
			}
			break;
		case 6:
			func_902(uParam0, bParam1);
			break;
	}
}

void func_1384(var uParam0)
{
	func_1575(&(uParam0->f_162));
	if ((MISC::IS_BIT_SET(uParam0->f_158, 14) || MISC::IS_BIT_SET(uParam0->f_158, 15)) || MISC::IS_BIT_SET(uParam0->f_158, 16))
	{
		return;
	}
	func_1576(&(uParam0->f_162), 0);
	MISC::SET_BIT(&(uParam0->f_158), 14);
}

int func_1385()
{
	return 1937193856;
}

int func_1386()
{
	return -1640778959;
}

int func_1387()
{
	return -1428663542;
}

void func_1388(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_156(&(((*uParam0)[iParam1 /*34*/])->f_31));
	iVar1 = ((*uParam0)[iParam1 /*34*/])->f_24;
	if (iVar1 != 0)
	{
		if (!bVar0)
		{
			func_184(&(((*uParam0)[iParam1 /*34*/])->f_31), 0);
		}
	}
	else if (bVar0)
	{
		if (func_186(&(((*uParam0)[iParam1 /*34*/])->f_31)) < 1500)
		{
			return;
		}
		func_294(&(((*uParam0)[iParam1 /*34*/])->f_31));
	}
	func_1097(((*uParam0)[iParam1 /*34*/])->f_17, iVar1 == 1);
	func_1097(((*uParam0)[iParam1 /*34*/])->f_18, iVar1 == 2);
	func_1097(((*uParam0)[iParam1 /*34*/])->f_19, iVar1 == 3);
}

int func_1389(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 7:
		case 8:
			return 1;
	}
	return 0;
}

void func_1390(var uParam0, float fParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(uParam0, fParam1);
}

void func_1391(var uParam0, int iParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_433(uParam0))
	{
		return;
	}
	if (Global_1272170->f_1991 < 20)
	{
		Global_1272170->f_1991++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_1991.f_1[iVar0 /*24*/]) = { *(Global_1272170->f_1991.f_1[iVar0 + 1 /*24*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	*(Global_1272170->f_1991.f_1[(Global_1272170->f_1991 - 1) /*24*/]) = { Var1 };
}

void func_1392(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR(fParam4);
	func_1324(iVar0, 0, 30);
	if (iVar0 <= 0)
	{
		switch (iParam3)
		{
			case 0:
				func_1192(iParam0, -2031147264);
				break;
			case 1:
				*uParam2 = 1;
				break;
		}
		return;
	}
	switch (iVar0)
	{
		case 1:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, -1731638604);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, -1434522081);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 1961919243);
					break;
				case 1:
					*uParam1 = 691643721;
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, -2026035292);
					break;
				case 1:
					*uParam1 = 691643721;
					break;
			}
			break;
		case 5:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, -1730983216);
					break;
				case 1:
					*uParam1 = 691643721;
					break;
			}
			break;
		case 6:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 1101765762);
					break;
				case 1:
					*uParam1 = 1618908114;
					break;
			}
			break;
		case 7:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 1132503084);
					break;
				case 1:
					*uParam1 = 1618908114;
					break;
			}
			break;
		case 8:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 1448625627);
					break;
				case 1:
					*uParam1 = 1618908114;
					break;
			}
			break;
		case 9:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 1747347831);
					break;
				case 1:
					*uParam1 = 1440317064;
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 435612048);
					break;
				case 1:
					*uParam1 = 1440317064;
					break;
			}
			break;
		case 11:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 1197163612);
					break;
				case 1:
					*uParam1 = 1440317064;
					break;
			}
			break;
		case 12:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, -53235894);
					break;
				case 1:
					*uParam1 = -1208221388;
					break;
			}
			break;
		case 13:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, -1261396155);
					break;
				case 1:
					*uParam1 = -1208221388;
					break;
			}
			break;
		case 14:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, -484344858);
					break;
				case 1:
					*uParam1 = -1208221388;
					break;
			}
			break;
		case 15:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 271832586);
					break;
				case 1:
					*uParam1 = 557339563;
					break;
			}
			break;
		case 16:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, -1098075459);
					break;
				case 1:
					*uParam1 = 557339563;
					break;
			}
			break;
		case 17:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 2048469463);
					break;
				case 1:
					*uParam1 = 557339563;
					break;
			}
			break;
		case 18:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 1869681799);
					break;
				case 1:
					*uParam1 = 557339563;
					break;
			}
			break;
		case 19:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, -591073487);
					break;
				case 1:
					*uParam1 = 557339563;
					break;
			}
			break;
		case 20:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, -1760271659);
					break;
				case 1:
					*uParam1 = 1646615772;
					break;
			}
			break;
		case 21:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 1051931144);
					break;
				case 1:
					*uParam1 = 1646615772;
					break;
			}
			break;
		case 22:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, -1853991011);
					break;
				case 1:
					*uParam1 = 1646615772;
					break;
			}
			break;
		case 23:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 1664678675);
					break;
				case 1:
					*uParam1 = 1646615772;
					break;
			}
			break;
		case 24:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 771395735);
					break;
				case 1:
					*uParam1 = 1646615772;
					break;
			}
			break;
		case 25:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, -170418082);
					break;
				case 1:
					*uParam1 = -1230043662;
					break;
			}
			break;
		case 26:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 1204077611);
					break;
				case 1:
					*uParam1 = -1230043662;
					break;
			}
			break;
		case 27:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 441149765);
					break;
				case 1:
					*uParam1 = -1230043662;
					break;
			}
			break;
		case 28:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, -326595136);
					break;
				case 1:
					*uParam1 = -1230043662;
					break;
			}
			break;
		case 29:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 1328370356);
					break;
				case 1:
					*uParam1 = -1230043662;
					break;
			}
			break;
		default:
			switch (iParam3)
			{
				case 0:
					func_1192(iParam0, 1113247900);
					break;
				case 1:
					*uParam1 = 364561192;
					break;
			}
			break;
	}
}

void func_1393(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) <= 1)
		{
			switch (iParam1)
			{
				case 0:
					func_1192(iParam0, 2008023596);
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					func_1192(iParam0, 1839456265);
					break;
			}
		}
	}
}

void func_1394(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam3 == 0)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			iParam2 = func_1324(iParam2, 0, 7);
			iParam3 = func_1324(iParam3, 0, 7);
			iVar0 = 0;
			while (iVar0 <= (iParam3 - 1))
			{
				if (iVar0 <= (iParam2 - 1))
				{
					iVar2 = 0;
				}
				else
				{
					iVar2 = 1;
				}
				iVar1 = func_1577(iVar0, iVar2);
				if (iVar1 != 0)
				{
					func_1192(iParam0, iVar1);
				}
				iVar0++;
			}
			break;
	}
}

void func_1395(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam2)
			{
				case 1:
					func_1192(iParam0, 880047714);
					break;
				case 2:
					func_1192(iParam0, 1339993398);
					break;
				case 3:
					func_1192(iParam0, 45912819);
					break;
				case 4:
					func_1192(iParam0, 45912819);
					break;
				case 5:
					func_1192(iParam0, -1951423269);
					break;
				case 6:
					func_1192(iParam0, -1951423269);
					break;
				case 7:
					func_1192(iParam0, 1039599975);
					break;
			}
			break;
	}
}

void func_1396(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[func_1240(iParam0, 1) /*12*/])->f_11 = ((Global_1951141->f_81[func_1240(iParam0, 1) /*12*/])->f_11 - ((Global_1951141->f_81[func_1240(iParam0, 1) /*12*/])->f_11 && iParam1));
}

bool func_1397(int iParam0, int iParam1)
{
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1) != 0;
}

void func_1398(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 - ((Global_1951141->f_81[iParam0 /*12*/])->f_11 && iParam1));
}

int func_1399(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1951141->f_2706.f_1 <= 0)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		Global_1951141->f_2706.f_2 = 0;
		Global_1951141->f_2706.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			*(Global_1951141->f_2706.f_43[iVar0 /*2*/]) = { Var2 };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1951141->f_2706.f_3[iVar1] = 0;
			iVar1++;
		}
		return 1;
	}
	iVar0 = func_1578(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	Global_1951141->f_2706.f_2 = (Global_1951141->f_2706.f_2 - (Global_1951141->f_2706.f_2 && (Global_1951141->f_2706.f_43[iVar0 /*2*/])->f_1));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_1579(iVar1, (Global_1951141->f_2706.f_43[iVar0 /*2*/])->f_1))
		{
			func_1580(iVar1, (Global_1951141->f_2706.f_43[iVar0 /*2*/])->f_1);
		}
		iVar1++;
	}
	Global_1951141->f_2706.f_1 = (Global_1951141->f_2706.f_1 - 1);
	*(Global_1951141->f_2706.f_43[iVar0 /*2*/]) = { *(Global_1951141->f_2706.f_43[Global_1951141->f_2706.f_1 /*2*/]) };
	(Global_1951141->f_2706.f_43[Global_1951141->f_2706.f_1 /*2*/])->f_1 = 0;
	Global_1951141->f_2706.f_43[Global_1951141->f_2706.f_1 /*2*/] = 0;
	return 1;
}

bool func_1400(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_1581(iVar0, 1);
		if (!func_1582(iVar2, 2))
		{
		}
		else if (&Global_1951141->f_2706.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && func_1583(iVar0) == -1)
			{
				func_1584(iVar0, 0);
				func_1585(Global_1951141->f_2760.f_2[(Global_1951141->f_2760 - 1) /*2*/], 2, 6);
			}
			func_1396(iVar2, 3, 6);
			Global_1951141->f_2627[iVar0 /*2*/] = 0;
			(Global_1951141->f_2627[iVar0 /*2*/])->f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

void func_1401(int iParam0)
{
	func_1241(iParam0, 8, 6);
}

int func_1402(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<15> Var3;
	struct<18> Var21;

	if (func_1586(&(Global_1951141->f_1055), 2))
	{
		return 0;
	}
	if (iParam1 == -2118203104)
	{
		iVar0 = func_1587(iParam0);
	}
	else if (iParam1 == -1811760631)
	{
		iVar0 = func_1588(iParam0);
	}
	else
	{
		return 0;
	}
	iVar1 = func_1589(uParam3, iParam1);
	bVar2 = func_1590(iVar0) != false;
	if (iVar1 == -1 && bVar2)
	{
		return 0;
	}
	if (bVar2)
	{
		if (bParam4)
		{
			func_1591(uParam2, uParam3, iParam1);
		}
		else
		{
			func_1592(uParam2, uParam3, iVar1);
		}
		return 1;
	}
	if (bParam4)
	{
		Var3.f_2 = -1;
		Var3.f_13 = 1065353216;
		Var3.f_14 = 1065353216;
		if (!func_1593(&Var3, iVar0, 0, 1, 6))
		{
			return 0;
		}
		if (iVar1 != -1 && Var3.f_3 == ((*uParam3)[iVar1 /*18*/])->f_3)
		{
			return 0;
		}
		func_1594(uParam2, uParam3, &Var3);
	}
	else if (iVar1 == -1)
	{
		func_1595(uParam2, uParam3, iVar0, 0, 1);
	}
	else
	{
		Var21.f_2 = -1;
		Var21.f_13 = 1065353216;
		Var21.f_14 = 1065353216;
		if (!func_1593(&Var21, iVar0, 0, 1, 6))
		{
			return 0;
		}
		*((*uParam3)[iVar1 /*18*/]) = { Var21 };
	}
	return 1;
}

void func_1403()
{
	Global_1951141->f_1054 = 0;
}

void func_1404(int iParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1440(&(Global_1132968->f_5525.f_34[iParam0 /*3*/]), &Var0, 2, -1);
	func_1439(Var0, iParam0, 0);
}

void func_1405(int iParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1438(func_1437(iParam0, 1), &Var0, 0, -1);
	func_1441(Var0, iParam0, 0);
}

void func_1406(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1275573->f_22[iVar0])
	{
		func_1182(iParam0);
		return;
	}
	if (&Global_1070356->f_19683.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1366(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1070356->f_19683.f_1[iVar0 /*8*/] = 1;
}

bool func_1407(var uParam0, int iParam1)
{
	*uParam0 = Global_1234391->f_8113;
	uParam0->f_2 = 423895568;
	uParam0->f_3 = iParam1;
	return (DATAFILE::_0x603AC35FD4602C76(*uParam0) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

int func_1408()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1234391->f_8113;
	vVar1.f_2 = -1041770777;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_1409(int iParam0)
{
	return func_1596(iParam0) + 30;
}

void func_1410(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { *(Global_1900718->f_1[iParam0 /*2*/]) };
	*(Global_1900718->f_1[iParam0 /*2*/]) = { *(Global_1900718->f_1[iParam1 /*2*/]) };
	*(Global_1900718->f_1[iParam1 /*2*/]) = { Var0 };
}

int func_1411(int iParam0)
{
	int iVar0;

	if (Global_1184439->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1184439->f_129)
	{
		if (Global_1184439[iVar0 /*4*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1412(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_39792;
}

int func_1413(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_1597(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_1414(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return 0;
	}
	uParam0->f_22 = func_1598(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return 0;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_27 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return 1;
}

int func_1415(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	iVar0 = func_663(bParam2);
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam0, uParam1, 24, 1))
	{
		return 0;
	}
	return 1;
}

int func_1416(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return 0;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return 1;
}

int func_1417(int iParam0)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	func_1599();
	Global_1903929->f_124.f_2 = 834733495;
	Global_1903929->f_124.f_3 = func_1600(iParam0);
	if (!DATAFILE::_DATAFILE_GET_BOOL(&uVar0, &(Global_1903929->f_124)))
	{
		return 0;
	}
	return uVar0;
}

void func_1418(var uParam0, int iParam1)
{
	func_1601(&(uParam0->f_20), iParam1);
}

int func_1419(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -742846258;
		case 2:
			return 131724934;
		case 3:
			return 325433051;
		case 4:
			return -1943296527;
		case 5:
			return 1586684911;
		case 6:
			return -1171161482;
		case 7:
			return 1038672528;
		case 8:
			return -1073329868;
		case 9:
			return 1263489075;
		case 10:
			return 966390205;
		case 11:
			return -2046198715;
		case 12:
			return 13;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_1420()
{
	return Global_1951141->f_1;
}

bool func_1421(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1422(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return ((Global_1951141->f_81[iParam0 /*12*/])->f_10 && iParam1) != 0;
}

Vector3 func_1423(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17172.f_54.f_644.f_1776;
	}
	return *((Global_17172.f_54.f_644.f_32[iParam1 /*120*/])->f_1.f_1[iParam0 /*3*/]);
}

void func_1424(int iParam0, int iParam1, int iParam2)
{
	(Global_1951141->f_81[iParam0 /*12*/])->f_11 = ((Global_1951141->f_81[iParam0 /*12*/])->f_11 || iParam1);
}

void func_1425(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

int func_1426(int iParam0, int iParam1)
{
	if (!func_680(iParam0, 0))
	{
		return func_1602(func_1272(iParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

bool func_1427(int iParam0)
{
	return &Global_1951141->f_593[iParam0] > 0;
}

void func_1428(int iParam0)
{
	Global_1951141->f_593[iParam0] = &Global_1951141->f_593[iParam0] + 1;
}

int func_1429(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[5];
	int iVar32;
	int iVar33;
	int iVar34;
	struct<16> Var35;
	struct<16> Var51;

	if (func_1603(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_681(iParam0, joaat("default"));
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_1011(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_1604(&Var1, &iVar32, iParam0, iVar0, iParam1, 1) || iVar32 < 1)
		{
			return 0;
		}
		iVar34 = -1;
		Var35.f_9 = 1;
		Var35.f_11 = -1591664384;
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			Var35 = { func_1605(iParam0, Var1[iVar33 /*6*/]) };
			Var35.f_12 = iParam2;
			iVar34 = func_1606(joaat("use"), &Var35, 1);
			if (iVar34 == -1)
			{
				return 0;
			}
			iVar33++;
		}
		if (iVar34 != -1)
		{
			Var51.f_7 = -142743235;
			Var51 = iParam3;
			Var51.f_7 = iParam2;
			func_1607(iVar34, Var51);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_663(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_1430(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	struct<13> Var15;
	struct<16> Var31;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_1603(iParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_1020(*uParam1, &Var0, bParam6, 0, -1))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_1011(bParam6))
	{
		iVar14 = -1;
		if (func_23() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *uParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1606(joaat("use"), &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31 = iParam5;
				Var31.f_7 = iParam4;
				func_1607(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_663(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1431(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1432(int iParam0)
{
	if (func_1431(iParam0))
	{
		return 1;
	}
	else if (func_1608(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_1433(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 <= 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_997(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

int func_1434(int iParam0)
{
	int iVar0;

	iVar0 = func_1435(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 35)
	{
		return 0;
	}
	return 1;
}

int func_1435(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2094367662:
			return 18;
		case -1799662290:
			return 5;
		case -1756972389:
			return 10;
		case -1721456649:
			return 20;
		case -1505156133:
			return 33;
		case -1443085621:
			return 32;
		case -1415025746:
			return 34;
		case -1296457610:
			return 3;
		case -1214886674:
			return 24;
		case -950892868:
			return 26;
		case -910204339:
			return 14;
		case -806881894:
			return 21;
		case -556609435:
			return 25;
		case -490770640:
			return 30;
		case -36524866:
			return 22;
		case 0:
			return 0;
		case 83146574:
			return 31;
		case 98090593:
			return 11;
		case 115034433:
			return 12;
		case 396773658:
			return 1;
		case 459036629:
			return 16;
		case 610102849:
			return 13;
		case 615198061:
			return 19;
		case 771930716:
			return 4;
		case 915626679:
			return 2;
		case 996070251:
			return 8;
		case 1098820611:
			return 15;
		case 1136837330:
			return 23;
		case 1581755436:
			return 7;
		case 1670807098:
			return 27;
		case 1777305156:
			return 6;
		case 1878949572:
			return 29;
		case 1935456893:
			return 17;
		case 2067900487:
			return 9;
		case 2132497367:
			return 28;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_1436(int iParam0)
{
	if (!func_1609(iParam0))
	{
		return false;
	}
	return iParam0 == 0;
}

int func_1437(int iParam0, bool bParam1)
{
	struct<4> Var0;

	Var0 = { func_1012(bParam1) };
	return func_1611(Var0, func_1610(iParam0), 0, bParam1);
}

int func_1438(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1612())
	{
		return 0;
	}
	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	return func_1614(func_1613(iParam0), uParam1, iParam2, iParam3);
}

int func_1439(struct<34> Param0, int iParam34, bool bParam35)
{
	if (!func_1609(iParam34))
	{
		return 0;
	}
	if (func_1615(Param0))
	{
		func_1616();
	}
	func_1617(iParam34);
	if (bParam35 && func_1618())
	{
		return 0;
	}
	func_1619(iParam34);
	func_1620(&Param0);
	func_1621(iParam34, 1);
	return 1;
}

int func_1440(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1612())
	{
		return 0;
	}
	return func_1614(iParam0, uParam1, iParam2, iParam3);
}

int func_1441(struct<34> Param0, int iParam34, bool bParam35)
{
	if (!func_1609(iParam34))
	{
		return 0;
	}
	func_1622(Param0, iParam34);
	if (bParam35 && func_1618())
	{
		return 0;
	}
	func_1623(Param0, iParam34);
	func_1620(&Param0);
	func_1621(iParam34, 1);
	return 1;
}

int func_1442(int iParam0)
{
	if (func_388(&(Global_1954472->f_1653), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_1443(int iParam0)
{
	if (func_389(&(Global_1954472->f_1653), iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_1444(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_1624(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

int func_1445(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_2;
		case 1:
			return uParam0->f_10;
		case 2:
			return uParam0->f_6;
		default:
			break;
	}
	return 1;
}

float func_1446(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_3;
		case 1:
			return uParam0->f_11;
		case 2:
			return uParam0->f_7;
		default:
			break;
	}
	return 0f;
}

void func_1447(int iParam0, float fParam1)
{
	Global_17172.f_54.f_2438.f_24[iParam0 /*3*/] = fParam1;
}

int func_1448(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_997(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_1625(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 100f)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_1626(iParam0, 7000, iParam5);
		}
		func_1627(iVar0, iParam0, fParam1);
		func_1628(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

void func_1449()
{
	if (!Global_1954472->f_1331.f_85)
	{
		return;
	}
	Global_1954472->f_1331.f_85 = 0;
}

void func_1450()
{
	if (!Global_1954472->f_1331.f_92)
	{
		return;
	}
	Global_1954472->f_1331.f_92 = 0;
}

void func_1451()
{
	if (!Global_1954472->f_1331.f_89)
	{
		return;
	}
	Global_1954472->f_1331.f_89 = 0;
}

void func_1452()
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;

	sVar0 = func_1629();
	sVar1 = func_1630();
	bVar2 = (((Global_1954472->f_1331.f_89 && Global_1954472->f_1331.f_92) || (Global_1954472->f_1331.f_89 && Global_1954472->f_1331.f_85)) || (Global_1954472->f_1331.f_85 && Global_1954472->f_1331.f_92));
	bVar3 = (Global_1954472->f_1331.f_89 || Global_1954472->f_1331.f_85);
	if (Global_1954472->f_1331.f_92 && !func_1631())
	{
		if (!Global_1954472->f_1331.f_93)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
			Global_1954472->f_1331.f_93 = 1;
		}
	}
	else if (Global_1954472->f_1331.f_93)
	{
		GRAPHICS::_0xC5CB91D65852ED7E(sVar0);
		Global_1954472->f_1331.f_93 = 0;
	}
	if (bVar3)
	{
		fVar4 = ((MISC::GET_FRAME_TIME() * 1000f) / 2000f);
		fVar5 = (1f * fVar4);
		fVar6 = (-1f * fVar4);
		if (bVar2)
		{
			Global_1954472->f_1331.f_95 = (Global_1954472->f_1331.f_95 + fVar5);
			Global_1954472->f_1331.f_91 = (Global_1954472->f_1331.f_91 + fVar6);
			Global_1954472->f_1331.f_87 = (Global_1954472->f_1331.f_87 + fVar6);
		}
		else if (Global_1954472->f_1331.f_89)
		{
			Global_1954472->f_1331.f_95 = (Global_1954472->f_1331.f_95 + fVar6);
			Global_1954472->f_1331.f_91 = (Global_1954472->f_1331.f_91 + fVar5);
			Global_1954472->f_1331.f_87 = (Global_1954472->f_1331.f_87 + fVar6);
		}
		else if (Global_1954472->f_1331.f_85)
		{
			Global_1954472->f_1331.f_95 = (Global_1954472->f_1331.f_95 + fVar6);
			Global_1954472->f_1331.f_91 = (Global_1954472->f_1331.f_91 + fVar6);
			Global_1954472->f_1331.f_87 = (Global_1954472->f_1331.f_87 + fVar5);
		}
		Global_1954472->f_1331.f_95 = func_1107(Global_1954472->f_1331.f_95, 0f, 1f);
		Global_1954472->f_1331.f_87 = func_1107(Global_1954472->f_1331.f_87, 0f, 1f);
		Global_1954472->f_1331.f_91 = func_1107(Global_1954472->f_1331.f_91, 0f, 1f);
		if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
		}
		GRAPHICS::_0xF972F0AB16DC5260(sVar1, 1, Global_1954472->f_1331.f_91);
		GRAPHICS::_0xF972F0AB16DC5260(sVar1, 2, Global_1954472->f_1331.f_87);
		GRAPHICS::_0xF972F0AB16DC5260(sVar1, 3, Global_1954472->f_1331.f_95);
	}
	else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
	{
		Global_1954472->f_1331.f_95 = 0f;
		Global_1954472->f_1331.f_91 = 0f;
		Global_1954472->f_1331.f_87 = 0f;
		GRAPHICS::_0xC5CB91D65852ED7E(sVar1);
	}
	if (Global_1954472->f_1331.f_88)
	{
		fVar7 = PLAYER::_0x0317C947D062854E(&(Global_1275573->f_154[&Global_1275573]));
		fVar8 = (IntToFloat(PED::GET_PED_MAX_HEALTH(Global_1275573->f_8)) * 0.1f);
		func_1632(fVar7, fVar8);
	}
	else
	{
		func_1633();
	}
}

int func_1453(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_1431(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_1634(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1635(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_1634(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1636(1775828486);
			func_1637(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_1634(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1638(-1, 0);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			Global_17172.f_54.f_2438.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_1636(350943398);
			func_1639(0, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[0 /*2*/])->f_1 = fParam1;
			break;
		case 18:
			func_1639(1, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[1 /*2*/])->f_1 = fParam1;
			break;
		case 20:
			func_1639(2, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar1, iParam0, fParam1, iParam3);
			(Global_17172.f_54.f_2438.f_34[2 /*2*/])->f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_1454(int iParam0)
{
	return func_1426(iParam0, 1279601681);
}

int func_1455(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1640(&uParam0, iParam4, bParam5, iParam6);
}

int func_1456(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_1274(iParam0) && func_1641(iParam0))
		{
			func_1642(iParam0, iParam1, 1, &bParam2, iParam3);
			return 0;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_1457(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_1643(iParam0, iParam1);
	Var0 = { func_683(iParam0, 0, 1) };
	iVar5 = func_1275(iParam0, &Var0, 0, 0);
	iVar6 = func_383(iParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_1426(iParam0, -2051813666))
		{
			func_1470(672, 1);
		}
		else if (func_23() == -1)
		{
			func_1470(671, 0);
		}
	}
	if (func_1010(iParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1458(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_1644())
	{
		return;
	}
	switch (func_1645(iParam0, -949239683))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1939067->f_70.f_5 = 1;
			Global_1939067->f_70.f_6 = 0;
			Global_1939067->f_70.f_1 = iParam0;
			break;
	}
}

int func_1459(int iParam0, int iParam1)
{
	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(iParam0, iParam1);
}

int func_1460(int iParam0)
{
	if (!func_1646(iParam0))
	{
		return 0;
	}
	return func_1647(iParam0);
}

void func_1461(int iParam0)
{
	if (!func_1646(iParam0))
	{
		return;
	}
	func_1648(iParam0);
	func_1649(iParam0);
}

void func_1462(int iParam0)
{
	if (func_1426(iParam0, -1522723129))
	{
		func_1650(-848633709, 0, 255, 0, 0);
	}
	else if (func_1426(iParam0, -283942357))
	{
		func_1650(-981153234, 0, 255, 0, 0);
	}
	else if (func_1426(iParam0, 683680997))
	{
		func_1650(-756350192, 0, 255, 0, 0);
	}
	else if (func_1426(iParam0, 1307628809))
	{
		func_1650(603094518, 0, 255, 0, 0);
	}
}

int func_1463(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -1639263599: /* GXTEntry: "Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case -1860710511:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1507636870:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1828724907:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1222378998: /* GXTEntry: "Improved Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 2074469742: /* GXTEntry: "Poison Throwing Knife" */
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 1270940175:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case -1857826511:
			iVar0 = joaat("weapon_thrown_throwing_knives");
			break;
		case 480079517: /* GXTEntry: "Dynamite" */
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case 840671577: /* GXTEntry: "Dynamite - Volatile" */
			iVar0 = joaat("weapon_thrown_dynamite");
			break;
		case joaat("ammo_molotov"):
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case -2006166057: /* GXTEntry: "Fire Bottle - Volatile" */
			iVar0 = joaat("weapon_thrown_molotov");
			break;
		case 1235846615: /* GXTEntry: "Tomahawk" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -228768324: /* GXTEntry: "Ancient Tomahawk" */
			iVar0 = joaat("weapon_thrown_tomahawk_ancient");
			break;
		case -1411922943: /* GXTEntry: "Tomahawk - Homing" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case -834103244: /* GXTEntry: "Tomahawk - Improved" */
			iVar0 = joaat("weapon_thrown_tomahawk");
			break;
		case 34372170: /* GXTEntry: "Bolas" */
			iVar0 = 1151374672; /* GXTEntry: "Bolas" */
			break;
		case 963726415:
			iVar0 = -577893115;
			break;
		case 424030678: /* GXTEntry: "Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet");
			break;
		case 446901936: /* GXTEntry: "Hunter Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hunter");
			break;
		case -1092841802: /* GXTEntry: "Rusted Hunter Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
		case -1452241321: /* GXTEntry: "Stone Hatchet" */
			iVar0 = joaat("weapon_melee_ancient_hatchet");
			break;
		case -1188697038: /* GXTEntry: "Cleaver" */
			iVar0 = joaat("weapon_melee_cleaver");
			break;
		case 1671758975: /* GXTEntry: "Double Bit Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_double_bit");
			break;
		case -893514737: /* GXTEntry: "Rusted Double Bit Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
		case -2063089161: /* GXTEntry: "Hewing Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_hewing");
			break;
		case -452897925: /* GXTEntry: "Viking Hatchet" */
			iVar0 = joaat("weapon_melee_hatchet_viking");
			break;
		default:
			break;
	}
	if (func_680(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1651(iVar0) || func_1652(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_1464(int iParam0, bool bParam1)
{
	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_1465(int iParam0)
{
	int iVar0;

	if (Global_1572887->f_13 != -1)
	{
		return;
	}
	if (!func_1653(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_1466(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
	{
		Var0 = { func_683(iParam0, 0, 1) };
		if (func_1016(iParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -1591664384;
			if (func_1017(iParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_684(iParam0, Var0, Var0.f_4, 0) };
				func_1430(iParam0, &Var27, &Var0, 1, -142743235, 1, 0);
			}
		}
	}
	if (func_1011(0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
		{
			return 0;
		}
		func_1467(WEAPON::_0x5C2EA6C44F515F34(iParam0), iParam1, iParam6);
		func_1654(iParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(Global_34, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

int func_1467(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_679(iParam0))
	{
		return 0;
	}
	if (!func_1011(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_34, iParam0, iParam1, iParam2);
	return 1;
}

int func_1468(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;

	iVar0 = func_1464(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_23() == -1)
		{
			func_1465(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1655(iVar0);
			}
		}
		if (!func_1010(iParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_1642(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1656(iVar0);
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				func_1466(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("weapon_fishingrod") || WEAPON::_0xC853230E76A152DF(iVar0))
			{
				func_1466(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x6E4E1A82081EABED(iVar0))
			{
				func_1466(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(iVar0))
			{
				if (iVar0 == joaat("weapon_melee_knife_john") && !func_1657())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!func_1658(iVar0))
				{
					func_1466(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_1466(iVar0, WEAPON::_0xD3750CCC00635FC2(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
			{
				iVar7 = func_1537(Global_34, 2, 0, 1);
				if ((((func_1653(iVar7) && !Global_26386) && iVar7 != iVar0) && !func_1478(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_34, iVar7);
				}
				if (func_1653(iVar7) && func_1478(-1185145312 /* GXTEntry: "Upgraded Off-Hand Holster" */, 1))
				{
					if (!func_1466(iVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_1466(iVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_1466(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_1470(513, 1);
	}
	return 1;
}

int func_1469(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_679(iParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, iParam0);
	if (func_1653(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_34, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_1481(func_1659(iParam0), func_1480(iParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_1011(0))
	{
		if (func_1467(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_384(iParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_1470(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1660(iParam0, &iVar0, &iVar1);
	if (!func_1661(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1662(iVar0, iVar1);
}

int func_1471()
{
	return 0;
}

int func_1472(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_23() == 0)
	{
		func_1486(iParam0, 0);
		return 0;
	}
	iVar0 = func_1663(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_1664(iVar0, sParam4, iParam5, 0);
	}
	func_1665(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_1473(int iParam0)
{
}

void func_1474(int iParam0)
{
}

void func_1475(int iParam0)
{
}

void func_1476(int iParam0)
{
}

void func_1477()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

bool func_1478(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_680(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1013(iParam0);
	switch (iVar0)
	{
		case joaat("weapon"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_34, iParam0, 0, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("ammo"):
			if (!func_1666(iParam0, 1))
			{
				return false;
			}
			break;
		case joaat("clothing"):
			if (func_1667(iParam0))
			{
				return true;
			}
			break;
	}
	return func_1062(iParam0, 0, 0, 0) >= iParam1;
}

void func_1479(int iParam0, int iParam1)
{
	var uVar0;

	func_1491(iParam0, iParam1, &uVar0);
}

int func_1480(int iParam0)
{
	int iVar0;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1668(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

void func_1481(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_1660(iParam0, &iVar0, &iVar1);
	if (!func_1661(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1669(iParam0, 1024))
	{
		return;
	}
	func_1662(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_1482(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_1660(iParam0, &iVar0, &iVar1);
	if (!func_1661(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1669(iParam0, 1024))
	{
		return;
	}
	func_1662(iVar0, iVar1);
	(Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1904613->f_31[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

void func_1483(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = -885810591; /* GXTEntry: "Premium Cigarettes" */
			break;
		case 1358243310: /* GXTEntry: "Opened Cigarettes" */
			*iParam0 = 1463786584; /* GXTEntry: "Cigarettes" */
			break;
		case -541584777: /* GXTEntry: "Opened Cocaine Gum" */
			*iParam0 = 206762213; /* GXTEntry: "Cocaine Gum" */
			break;
	}
}

void func_1484(int iParam0)
{
	if (func_23() != -1)
	{
		return;
	}
}

int func_1485()
{
	if (INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return 0;
	}
	return INVENTORY::_0xFC7563F482781A3D();
}

int func_1486(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_1670(&Var4, 1356624740);
	return func_1671(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_1487(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_680(iParam0, 0))
	{
		return Var0;
	}
	if (func_1426(iParam0, -305066475))
	{
		if (func_23() == -1)
		{
			if (func_1426(iParam0, -537818634))
			{
				return func_500(189951448);
			}
			else
			{
				return func_500(1176172851);
			}
		}
	}
	else if (func_1426(iParam0, -537818634))
	{
		return func_500(-963660207);
	}
	if (func_1426(iParam0, 2084895747))
	{
		return func_500(1694039471);
	}
	return Var2;
}

void func_1488(int iParam0)
{
	switch (iParam0)
	{
		case 236757114: /* GXTEntry: "Flight Feather" */
			break;
	}
}

void func_1489(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_1672(Global_1902942->f_37);
	func_1674(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1673(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_1490(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	int iVar18;
	char* sVar19;
	char cVar20[128];

	if (!func_680(iParam0, 0))
	{
		return;
	}
	else if (iParam0 == 1807503187)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_1675() || bParam6)
	{
		func_1676(iParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_1025(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_1025(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_1459(iParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_1013(iParam0);
	iVar10 = 0;
	iVar11 = joaat("inventory");
	if (((((((iVar6 == joaat("ammo") && iParam0 != 424030678) && iParam0 != -1188697038) && iParam0 != 446901936) && iParam0 != -228768324) && iParam0 != 34372170) && iParam0 != 963726415) && iParam0 != 1701457723)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	iVar12 = func_905(iParam0);
	if (((((((iVar6 == -1013984273 || iVar6 == 658570475) || iVar12 == -1674363638) || iVar12 == 252325943) || iVar12 == 829857647) || iVar12 == -636562458) || iVar12 == 1341188928) || iVar12 == 1216664798)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_1677(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar13 = joaat("COLOR_PURE_WHITE");
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		iVar13 = 619977481;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_1426(iParam0, 474910316))
	{
		sVar17 = func_1678(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar13 = -856358433;
		}
		else
		{
			iVar13 = -1905433004;
		}
	}
	if (func_1426(iParam0, 1816585950))
	{
		iVar13 = 76603059;
	}
	iVar18 = func_1480(iParam0);
	if ((func_1679(iVar12) && func_1426(iParam0, -306684263)) && iVar18 != 0)
	{
		iVar18 = func_1680(iParam0);
	}
	sVar19 = func_839(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, iVar18), iVar1), iVar13);
	if (((((iParam1 == 1 || func_1426(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, iVar18);
	}
	if ((((((iVar12 == -1839668642 && iParam0 != -1713496139) && iParam0 != 1326838792) && iParam0 != -230310728) || ((iVar12 == 231148558 && iParam0 != 1733464892) && iParam0 != -598283164)) || (iVar12 == 252325943 && iParam0 != -860557048)) || (iVar12 == -636562458 && iParam0 != -2087489409))
	{
		sVar19 = MISC::_CREATE_VAR_STRING(0, func_1681(iParam0, -442898163));
	}
	if (iVar12 == -126813555 || iVar12 == 1946043663)
	{
		if (!func_1426(iParam0, 920823793))
		{
			StringCopy(&cVar20, "", 128);
			if (func_1682(iParam0, &cVar20))
			{
				sVar19 = func_1508(func_1683(cVar20), joaat("COLOR_PURE_WHITE"));
			}
		}
	}
	func_1674(sVar19, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, iVar13, sVar15, sVar14, 0, 1);
}

void func_1491(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*iParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*iParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*iParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*iParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*iParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*iParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		case -153287664: /* GXTEntry: "Pistol Cartridges - Express" */
			*iParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			break;
		case 1845082736: /* GXTEntry: "Pistol Cartridges - High Velocity" */
			*iParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			break;
		case 406755377: /* GXTEntry: "Rifle Cartridges - Regular" */
			*iParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 1469029564: /* GXTEntry: "Opened Rifle Cartridges" */
			*iParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			break;
		case 45760211: /* GXTEntry: "Rifle Cartridges - Express" */
			*iParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			break;
		case -276295943: /* GXTEntry: "Rifle Cartridges - High Velocity" */
			*iParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			break;
		case -2029793397: /* GXTEntry: "Repeater Cartridges - Regular" */
			*iParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			break;
		case -2075613923: /* GXTEntry: "Repeater Cartridges - Express" */
			*iParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			break;
		case 122656217: /* GXTEntry: "Repeater Cartridges - High Velocity" */
			*iParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			break;
		case 2107187484: /* GXTEntry: "Shotgun Shells - Regular" */
			*iParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case -791844268: /* GXTEntry: "Opened Shotgun Shells" */
			*iParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			break;
		case 305770744: /* GXTEntry: "Shotgun - Slug" */
			*iParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			break;
		case 550900979: /* GXTEntry: "Rifle Cartridges - Varmint" */
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

void func_1492(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

void func_1493(struct<2> Param0, int iParam2)
{
	if (!func_73(Param0))
	{
		func_1215(Global_1900718->f_1[iParam2 /*2*/]);
	}
	else
	{
		*(Global_1900718->f_1[iParam2 /*2*/]) = { Param0 };
	}
	func_1067(Param0, 0, 1, -1);
}

int func_1494(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_73(Param0))
	{
		return 0;
	}
	if (!func_73(Param2))
	{
		return 1;
	}
	iVar0 = func_637(Param0);
	iVar1 = func_637(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return 1;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return 1;
	}
	if (iVar1 == 6)
	{
		return 0;
	}
	if (iVar0 == 6)
	{
		return 1;
	}
	if (iVar1 == 5)
	{
		return 0;
	}
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 3)
	{
		return 1;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_1495(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_1684(iParam0))
	{
		return 0;
	}
	if (func_1685(iParam0, uParam1, &uVar0))
	{
		func_1686(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1496(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (Global_1184439->f_129 >= 32)
	{
		Global_1184439->f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1184439->f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		*((*Global_1184439)[Global_1184439->f_129 /*4*/]) = { *uParam0 };
		Global_1184439->f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1184439->f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { *((*Global_1184439)[iVar1 /*4*/]) };
		*((*Global_1184439)[iVar1 /*4*/]) = { *((*Global_1184439)[iVar1 + 1 /*4*/]) };
		*((*Global_1184439)[iVar1 + 1 /*4*/]) = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	*((*Global_1184439)[iParam1 /*4*/]) = { *uParam0 };
	Global_1184439->f_129++;
}

int func_1497()
{
	int iVar0;

	iVar0 = Global_1275565->f_2.f_4;
	if (!func_1687(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

int func_1498(int iParam0, int iParam1, int iParam2)
{
	return func_1688(iParam0, iParam1, iParam2);
}

int func_1499(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_1689(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1275573->f_10)
		{
			if (!Global_1275573->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1500()
{
	int iVar0;

	iVar0 = func_1690(120839576, 59806960, 1, 0, 1, 0);
	if (!func_1687(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

int func_1501(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<16> Var6;
	struct<16> Var22;

	iVar0 = -1;
	Var1 = { func_683(2084597891 /* GXTEntry: "Money" */, 1, 0) };
	Var6 = { func_1691(2084597891 /* GXTEntry: "Money" */, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = iParam2;
	iVar0 = func_1606(joaat("use"), &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var22.f_7 = -142743235;
		StringCopy(&(Var22.f_12), sParam1, 32);
		func_1607(iVar0, Var22);
	}
	return iVar0;
}

void func_1502()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1692(iVar0))
		{
			func_1693(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

int func_1503(int iParam0)
{
	return &(Global_1103073->f_193[iParam0 /*8*/]);
}

void func_1504(int iParam0)
{
	Global_1103073->f_193[&Global_1275573 /*8*/] = iParam0;
	func_1694(&(Global_1102099->f_935.f_29));
}

bool func_1505(struct<38> Param0, var uParam38)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_37);
}

int func_1506()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939231->f_242.f_14[0 /*39*/])->f_25);
	iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939231->f_242.f_14[0 /*39*/])->f_35);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939231->f_242.f_14[iVar0 /*39*/])->f_25);
		iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939231->f_242.f_14[iVar0 /*39*/])->f_35);
		if (iVar1 < iVar4)
		{
			iVar3 = iVar0;
			iVar4 = iVar1;
			iVar5 = iVar2;
		}
		else if (iVar1 == iVar4)
		{
			if (iVar2 < iVar5)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
				iVar5 = iVar2;
			}
		}
		iVar0++;
	}
	func_623(&(Global_1939231->f_242.f_14[iVar3 /*39*/]));
	return iVar3;
}

void func_1507(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1206(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1206(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(54), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(55), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(57), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = joaat("ib_select");
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(58), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1206(59), Param10.f_8);
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1206(60), Param10.f_9);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(61), Param10.f_10);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(67), Param10.f_11);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = joaat("ib_select");
	}
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_1206(64), Param10.f_13);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1206(65), Param10.f_14);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_1206(66), Param10.f_15);
}

char* func_1508(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_839(MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

var func_1509(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16)
{
	struct<10> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_1510(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	struct<10> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	uVar23 = _NAMESPACE71::_0xC927890AA64E9661(&Var0, &Var13, iParam16, iParam17);
	return uVar23;
}

var func_1511(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

var func_1512(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	struct<5> Var0;
	struct<10> Var13;
	var uVar23;

	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	uVar23 = _NAMESPACE71::_0xC927890AA64E9661(&Var0, &Var13, iParam15, iParam16);
	return uVar23;
}

var func_1513(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_1514(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_0x3F9FDDBA79117C69(&Var0, &Var13, iParam13, iParam14);
	return uVar21;
}

var func_1515(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

void func_1516(struct<2> Param0)
{
	if (func_629(Param0) == 0)
	{
	}
	else if (!STATS::_0x01F4D242765C6B24(func_629(Param0)))
	{
		STATS::_0x99230691875FC218(func_637(Param0), func_629(Param0), Global_35);
	}
}

int func_1517(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_1386();
		case 4:
			return joaat("COLOR_PURE_WHITE");
		case 9:
			return func_1385();
		case 10:
			return joaat("COLOR_PURE_WHITE");
		case 23:
			return 1672732465;
		case 22:
			return -1019997170;
		case 24:
			return -5208416;
		case 18:
			return joaat("COLOR_PURE_WHITE");
		case 25:
			return func_1385();
		case 30:
			return func_1385();
		default:
			break;
	}
	return 0;
}

char* func_1518(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "timerString";
		case 1:
			return "isTimerLow";
		case 2:
			return "leftScore";
		case 5:
			return "leftScoreVisible";
		case 3:
			return "leftScoreColor";
		case 4:
			return "leftScoreTextColor";
		case 8:
			return "rightScore";
		case 11:
			return "rightScoreVisible";
		case 9:
			return "rightScoreColor";
		case 10:
			return "rightScoreTextColor";
		case 14:
			return "visible";
		case 15:
			return "enabled";
		case 16:
			return "text";
		case 17:
			return "meterValue";
		case 18:
			return "meterColor";
		case 19:
			return "meterVisible";
		case 20:
			return "txn";
		case 21:
			return "txd";
		case 22:
			return "secondaryTxn";
		case 23:
			return "secondaryTxd";
		case 24:
			return "secondaryImgColor";
		case 25:
			return "imgColor";
		case 26:
			return "isIconBackgroundVisible";
		case 27:
			return "iconEnabled";
		case 28:
			return "overlayTxn";
		case 29:
			return "overlayTxd";
		case 30:
			return "overlayColor";
		case 31:
			return "overlayVisible";
		case 32:
			return "meterThirdsVisible";
		case 33:
			return "showAlternateIcons";
		case 34:
			return "showBlinkIcon";
		case 35:
			return "showPulse";
		case 36:
			return "countDownTimer";
		case 37:
			return "isVisible";
		default:
			break;
	}
	return "";
}

char* func_1519(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "00:00";
		case 2:
			return "0";
		case 8:
			return "0";
		case 16:
			return "";
		case 21:
			return "";
		case 20:
			return "";
		case 29:
			return "";
		case 28:
			return "";
		default:
			break;
	}
	return "";
}

int func_1520(int iParam0)
{
	return 0;
}

float func_1521(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0f;
		case 13:
			return 0f;
		case 17:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_1522(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 19:
			return 0;
		case 26:
			return 0;
		case 27:
			return 1;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 37:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1523(int iParam0, int iParam1)
{
	if (&Local_913.f_88[iParam0] != iParam1)
	{
		Local_913.f_88[iParam0] = iParam1;
	}
}

int func_1524(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_67[iParam0 /*40*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (func_723(2, iParam0) || func_723(262144, iParam0))
	{
		return 0;
	}
	if (func_1139(iVar0))
	{
		if (func_1695(iVar0, PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_864(iVar0, 0))
	{
		return 2;
	}
	if (func_1036(iVar0))
	{
		return 3;
	}
	return 4;
}

int func_1525(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar0 = -1445216292;
			break;
		case 2:
			iVar0 = -2145527776;
			break;
		case 3:
			iVar0 = -2145527776;
			break;
		case 4:
			iVar0 = -2145527776;
			break;
	}
	return iVar0;
}

void func_1526(var uParam0, int iParam1)
{
	if (!func_1149(uParam0, iParam1))
	{
		func_146(&(uParam0->f_38), iParam1);
	}
}

char* func_1527(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam4))
	{
		if (iParam1 == 4 || iParam1 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam4))
			{
				if (iParam1 == 4)
				{
					iParam1 = 3;
				}
				else if (iParam1 == 1)
				{
					iParam1 = 0;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
						case 7:
						case 8:
							if (iParam3 != -1 && iParam3 < 3)
							{
								iVar0 = iParam3;
							}
							else
							{
								iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
							}
							switch (iVar0)
							{
								case 0:
									return "pl_DROPOFF_01";
								case 1:
									return "pl_DROPOFF_02";
								case 2:
									return "pl_DROPOFF_03";
								default:
									break;
							}
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
						case 7:
						case 8:
							return "pl_FTDOOR_01";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
						case 7:
						case 8:
							return "pl_FTDOOR_01";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
						case 7:
						case 8:
							if (iParam3 != -1 && iParam3 < 3)
							{
								iVar0 = iParam3;
							}
							else
							{
								iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
							}
							switch (iVar0)
							{
								case 0:
									return "pl_MID_01";
								case 1:
									return "pl_MID_02";
								case 2:
									return "pl_MID_03";
								default:
									break;
							}
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 1:
						case 2:
						case 3:
						case 4:
						case 5:
						case 6:
						case 7:
						case 8:
							return "pl_MID_01";
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			return "pl_DROPOFF_01";
	}
	return "";
}

char* func_1528(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (iParam1 == 4 || iParam1 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam3))
			{
				iParam1 = 0;
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 3:
					switch (iParam2)
					{
						case 1:
							return "script@mp@bounty@JAIL_DROPOFF@ALIVE@rhd_dropoff";
						case 2:
							return "script@mp@bounty@JAIL_DROPOFF@ALIVE@val_dropoff";
						case 3:
							return "script@mp@bounty@JAIL_DROPOFF@ALIVE@arm_dropoff";
						case 4:
							return "script@mp@bounty@JAIL_DROPOFF@ALIVE@tum_dropoff";
						case 5:
							return "script@mp@bounty@JAIL_DROPOFF@ALIVE@std_dropoff";
						case 6:
							return "script@mp@bounty@JAIL_DROPOFF@ALIVE@ann_dropoff";
						case 7:
							return "script@mp@bounty@JAIL_DROPOFF@ALIVE@stw_dropoff";
						case 8:
							return "script@mp@bounty@JAIL_DROPOFF@ALIVE@blk_dropoff";
						default:
							break;
					}
					break;
				case 1:
				case 4:
					switch (iParam2)
					{
						case 1:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@WAGON@rhd_sheriff";
						case 2:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@WAGON@val_sheriff";
						case 3:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@WAGON@arm_sheriff";
						case 4:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@WAGON@tum_sheriff";
						case 5:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@WAGON@std_sheriff";
						case 6:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@WAGON@ann_sheriff";
						case 7:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@WAGON@stw_sheriff";
						case 8:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@WAGON@blk_sheriff";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 1:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@HORSE@rhd_sheriff";
						case 2:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@HORSE@val_sheriff";
						case 3:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@HORSE@arm_sheriff";
						case 4:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@HORSE@tum_sheriff";
						case 5:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@HORSE@std_sheriff";
						case 6:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@HORSE@ann_sheriff";
						case 7:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@HORSE@stw_sheriff";
						case 8:
							return "script@mp@bounty@JAIL_DROPOFF@DEAD@HORSE@blk_sheriff";
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 3:
					return "script@mp@bounty@SATELLITE_DROPOFF@ALIVE@dropoff";
				case 4:
					return "script@mp@bounty@SATELLITE_DROPOFF@DEAD@dropoff";
				case 1:
					return "script@mp@bounty@SATELLITE_DROPOFF@DEAD@dropoff";
				case 2:
					return "script@mp@bounty@SATELLITE_DROPOFF@DEAD@dropoff";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_1529(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	char cVar1[64];

	if (*uParam2 == 255)
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(*uParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::IS_PED_MALE(iVar0))
	{
		StringCopy(&cVar1, "MP_Male", 64);
	}
	else
	{
		StringCopy(&cVar1, "MP_Female", 64);
	}
	(*uParam1)[0] = PED::CLONE_PED(iVar0, 0f, false, true);
	ENTITY::SET_ENTITY_VISIBLE(uParam1[0], false);
	ENTITY::SET_ENTITY_COORDS(uParam1[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1[0], 0f, 0f, -10f), true, false, true, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, &cVar1, uParam1[0], 0);
}

struct<8> func_1530(int iParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case -1879916235:
			StringCopy(&cVar1, "RE005_MALE3", 64);
			break;
		case 967545988:
			StringCopy(&cVar1, "RE005_MALE2", 64);
			break;
		case 1332068344:
			StringCopy(&cVar1, "RE005_MALE1", 64);
			break;
		case 413028970:
			StringCopy(&cVar1, "RE005_MALE4", 64);
			break;
		case 719648503:
			StringCopy(&cVar1, "RE005_MALE5", 64);
			break;
		default:
			StringCopy(&cVar1, "RE005_MALE7", 64);
			break;
	}
	return cVar1;
}

void func_1531(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_1696(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

int func_1532(var uParam0, int iParam1, int iParam2)
{
	char[] cVar0[8];
	int iVar1;

	iVar1 = func_1697(iParam1);
	switch (iParam2)
	{
		case 0:
			switch (iVar1)
			{
				case 0:
					cVar0 = "SATDO_M1_APP_S";
					break;
				case 1:
					cVar0 = "SATDO_M2_APP_S";
					break;
				case 2:
					cVar0 = "SATDO_M3_APP_S";
					break;
				case 3:
					cVar0 = "SATDO_M4_APP_S";
					break;
				case 4:
					cVar0 = "SATDO_M5_APP_S";
					break;
				case 5:
					cVar0 = "SATDO_M7_APP_S";
					break;
			}
			break;
		case 1:
			switch (iVar1)
			{
				case 0:
					cVar0 = "SATDO_M1_APP_W";
					break;
				case 1:
					cVar0 = "SATDO_M2_APP_W";
					break;
				case 2:
					cVar0 = "SATDO_M3_APP_W";
					break;
				case 3:
					cVar0 = "SATDO_M4_APP_W";
					break;
				case 4:
					cVar0 = "SATDO_M5_APP_W";
					break;
				case 5:
					cVar0 = "SATDO_M7_APP_W";
					break;
			}
			break;
		case 2:
			switch (iVar1)
			{
				case 0:
					cVar0 = "SATDO_M1_ALVE_S";
					break;
				case 1:
					cVar0 = "SATDO_M2_ALVE_S";
					break;
				case 2:
					cVar0 = "SATDO_M3_ALVE_S";
					break;
				case 3:
					cVar0 = "SATDO_M4_ALVE_S";
					break;
				case 4:
					cVar0 = "SATDO_M5_ALVE_S";
					break;
				case 5:
					cVar0 = "SATDO_M7_ALVE_S";
					break;
			}
			break;
		case 3:
			switch (iVar1)
			{
				case 0:
					cVar0 = "SATDO_M1_DEAD_S";
					break;
				case 1:
					cVar0 = "SATDO_M2_DEAD_S";
					break;
				case 2:
					cVar0 = "SATDO_M3_DEAD_S";
					break;
				case 3:
					cVar0 = "SATDO_M4_DEAD_S";
					break;
				case 4:
					cVar0 = "SATDO_M5_DEAD_S";
					break;
				case 5:
					cVar0 = "SATDO_M7_DEAD_S";
					break;
			}
			break;
		case 4:
			switch (iVar1)
			{
				case 0:
					cVar0 = "SATDO_M1_REWARD";
					break;
				case 1:
					cVar0 = "SATDO_M2_REWARD";
					break;
				case 2:
					cVar0 = "SATDO_M3_REWARD";
					break;
				case 3:
					cVar0 = "SATDO_M4_REWARD";
					break;
				case 4:
					cVar0 = "SATDO_M5_REWARD";
					break;
				case 5:
					cVar0 = "SATDO_M7_REWARD";
					break;
			}
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar0))
	{
		return func_1699(&(uParam0->f_39), func_1698(cVar0), 0, -1, 0, 0);
	}
	return 0;
}

void func_1533(var uParam0, int iParam1)
{
	if (func_1149(uParam0, iParam1))
	{
		func_423(&(uParam0->f_38), iParam1);
	}
}

void func_1534(float fParam0)
{
	if ((Local_2202[Local_2395.f_1332 /*6*/])->f_2 != fParam0)
	{
		if (fParam0 < 0f)
		{
			fParam0 = 0f;
		}
		(Local_2202[Local_2395.f_1332 /*6*/])->f_2 = fParam0;
		(Local_2202[Local_2395.f_1332 /*6*/])->f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

var func_1535(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_1536(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1700(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1537(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_1538(int iParam0, int iParam1, float fParam2)
{
	return func_1701(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_1539(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

void func_1540(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1938417)[iParam0 /*16*/])->f_10)))
	{
		return;
	}
	*((*Global_1938417)[iParam0 /*16*/]) = { Var0 };
	Global_1938417->f_161 = (Global_1938417->f_161 - 1);
	if (Global_1938417->f_161 < 0)
	{
		Global_1938417->f_161 = 0;
	}
}

void func_1541(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

void func_1542(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	struct<8> Var14;
	char[] cVar22[8];
	bool bVar23;
	bool bVar24;
	float fVar25[8];
	var uVar34[8];
	int iVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	char* sVar47;
	int iVar48;

	iVar5 = 0;
	iVar6 = 32;
	bVar7 = MISC::IS_BIT_SET(uParam0->f_159, 3);
	bVar8 = MISC::IS_BIT_SET(uParam0->f_159, 23);
	bVar9 = MISC::IS_BIT_SET(uParam0->f_159, 24);
	bVar10 = MISC::IS_BIT_SET(uParam0->f_159, 25);
	bVar11 = MISC::IS_BIT_SET(uParam0->f_160, 10);
	bVar12 = MISC::IS_BIT_SET(uParam0->f_159, 28);
	iVar13 = PLAYER::PLAYER_ID();
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar23 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar12 && uParam0->f_150 > 0)
	{
		bVar24 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar10 || bVar8) && func_1702() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar25[iVar0] = BUILTIN::TO_FLOAT(Global_1050928[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0 /*23*/] != -1 && uParam1[iVar0 /*23*/] < 8)
				{
					if (bVar9)
					{
						if (((*uParam1)[iVar0 /*23*/])->f_1 != -1f)
						{
							fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_1);
						}
					}
					else if (bVar8)
					{
						if (((*uParam1)[iVar0 /*23*/])->f_5 != -1f)
						{
							fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_5);
						}
					}
					else if (bVar11)
					{
						if (((*uParam1)[iVar0 /*23*/])->f_8 != -1f)
						{
							fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_8);
						}
					}
					else if (((*uParam1)[iVar0 /*23*/])->f_1 != -1f)
					{
						fVar25[uParam1[iVar0 /*23*/]] = (&fVar25[uParam1[iVar0 /*23*/]] + ((*uParam1)[iVar0 /*23*/])->f_1);
					}
				}
				iVar0++;
			}
		}
		iVar6 = uParam0->f_150;
		func_1562(iParam2, &uVar34, uParam0->f_150, bVar23);
		func_1563(uParam0, iParam3, &uVar34, &iVar5, &iVar6);
		iVar2 = 0;
		while (iVar2 <= (iVar6 - 1))
		{
			iVar43 = &uVar34[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar5)
			{
				if (iVar43 < 8 && iVar43 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						Var14 = { func_1703(iVar43) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &Var14);
						iVar44 = func_1704(iVar43, iParam4, uParam0->f_150, bVar24, iParam4 == iVar43);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar44);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", MISC::_0x2B6846401D68E563(&(fVar25[iVar43]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_1565(uParam1, iParam3, &iVar5, &iVar6);
		iVar1 = 0;
		while (iVar1 <= iVar6)
		{
			if (iVar3 == 0 || iVar1 >= iVar5)
			{
				if (func_1543(&(((*uParam1)[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar22, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar22);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &(((*uParam1)[iVar1 /*23*/])->f_14.f_1));
						bVar45 = iVar13 == ((*uParam1)[iVar1 /*23*/])->f_14;
						iVar46 = func_1546(uParam0, uParam1, iVar1, iVar13, bVar45);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar46);
						sVar47 = "";
						if (bVar7)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 26))
							{
								if (MISC::IS_BIT_SET(uParam0->f_159, 0))
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_1560((*uParam1)[iVar1 /*23*/], uParam0->f_159, uParam0->f_160), 0);
								}
								else
								{
									sVar47 = MISC::_0x2B6846401D68E563(func_1555((*uParam1)[iVar1 /*23*/], uParam0->f_159), 0);
								}
							}
							else if (MISC::IS_BIT_SET(uParam0->f_159, 27))
							{
								iVar4 = BUILTIN::ROUND(func_1556((*uParam1)[iVar1 /*23*/], uParam0->f_159));
								sVar47 = " ";
								if (func_1557(iVar4))
								{
									iVar48 = uParam0->f_159;
									if (((*uParam1)[iVar1 /*23*/])->f_1 == 8.94E+07f)
									{
										MISC::CLEAR_BIT(&iVar48, 12);
									}
									sVar47 = func_1558(iVar4, iVar48, 1);
								}
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563(func_1556((*uParam1)[iVar1 /*23*/], uParam0->f_159), func_1559(uParam0, 1));
							}
						}
						else if (bVar9)
						{
							sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_1, 0);
						}
						else if (bVar8 || bVar10)
						{
							if (MISC::IS_BIT_SET(uParam0->f_159, 9))
							{
								sVar47 = func_1371(((*uParam1)[iVar1 /*23*/])->f_5);
							}
							else
							{
								sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_5, 0);
							}
						}
						else if (bVar11)
						{
							sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_8, 0);
						}
						else
						{
							sVar47 = MISC::_0x2B6846401D68E563(((*uParam1)[iVar1 /*23*/])->f_1, 0);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", sVar47);
					}
				}
			}
			iVar1++;
		}
	}
}

int func_1543(var uParam0)
{
	if (*uParam0 != 255)
	{
		return 1;
	}
	else if (Global_2883584 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)))
	{
		return 1;
	}
	return 0;
}

void func_1544(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = 0;
	iVar1 = PLAYER::PLAYER_ID();
	bVar2 = iVar1 == ((*uParam1)[iParam2 /*23*/])->f_14;
	iVar0 = func_1546(uParam0, uParam1, iParam2, iVar1, bVar2);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*uParam1)[iParam2 /*23*/])->f_14) && _NAMESPACE79::_0x919AF2D93E9AA89D(((*uParam1)[iParam2 /*23*/])->f_14))
	{
		bVar3 = _NAMESPACE79::_0xEF6F2A35FAAF2ED7(((*uParam1)[iParam2 /*23*/])->f_14);
	}
	else
	{
		bVar3 = false;
	}
	if (bVar3)
	{
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "HeadsetIconVisible", bVar3);
	if (!bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam0->f_12[iParam2]), "HeadsetIconColor", iVar0);
	}
	if (bVar3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowBlip", false);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowBlip", true);
	}
}

int func_1545(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam1 == iVar0)
		{
			return iVar1 + 1;
		}
		else if (uParam0[iParam1 /*23*/] == uParam0[iVar0 /*23*/] && func_1543(&(((*uParam0)[iVar0 /*23*/])->f_14)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return -1;
}

int func_1546(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (MISC::IS_BIT_SET(uParam0->f_159, 11))
	{
		iVar0 = func_1705(uParam1[iParam2 /*23*/], PLAYER::GET_PLAYER_TEAM(iParam3), uParam0->f_150, MISC::IS_BIT_SET(uParam0->f_159, 5), bParam4);
	}
	else if (MISC::IS_BIT_SET(uParam0->f_159, 16))
	{
		if (bParam4)
		{
			iVar0 = joaat("COLOR_PURE_WHITE");
		}
		else
		{
			iVar0 = func_525(((*uParam1)[iParam2 /*23*/])->f_14, 1, -1, 1);
		}
	}
	else
	{
		iVar0 = func_525(((*uParam1)[iParam2 /*23*/])->f_14, 1, -1, 1);
	}
	return iVar0;
}

void func_1547(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	switch (((*uParam1)[iParam2 /*23*/])->f_10)
	{
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iParam2]), "SetOverlayImg", 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowOverlay", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowCross", false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowCross", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowCross", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iParam2]), "ShowOverlay", false);
			break;
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam0->f_12[iParam2]), "CrossColor", iParam4);
	}
}

char* func_1548()
{
	return "RSN";
}

char* func_1549(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return MISC::_CREATE_VAR_STRING(2, "NUMBER", Global_1139395[iParam0 /*34*/]);
}

int func_1550()
{
	if (Global_1099294->f_26.f_14 == 9)
	{
		return 0;
	}
	if (Global_1099294->f_26.f_14 == 10)
	{
		return 0;
	}
	if (Global_1099294->f_26.f_14 == 11)
	{
		return 0;
	}
	if (func_625(2048))
	{
		return 1;
	}
	if (func_624(1))
	{
		return 1;
	}
	if (Global_1099294->f_26.f_14 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_1551(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_1706()));
	return iParam0 == iVar0;
}

char* func_1552(int iParam0)
{
	if (iParam0 != 0)
	{
		return STATS::_0xB112B9262EC29C20(1852874750, iParam0);
	}
	return "";
}

int func_1553(int iParam0)
{
	if ((func_1554(iParam0) || func_1561(iParam0)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17))
	{
		return 1;
	}
	return 0;
}

bool func_1554(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 0) && MISC::IS_BIT_SET(iParam0, 17));
}

float func_1555(var uParam0, int iParam1)
{
	if (func_1707())
	{
		func_1708(uParam0, 1);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		if (MISC::IS_BIT_SET(iParam1, 0))
		{
			return uParam0->f_7;
		}
		else if (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15))
		{
			return uParam0->f_8;
		}
	}
	else if (func_1553(iParam1) || MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return uParam0->f_6;
	}
	else if (MISC::IS_BIT_SET(iParam1, 20))
	{
		return uParam0->f_6;
	}
	return uParam0->f_2;
}

float func_1556(var uParam0, int iParam1)
{
	if (func_1707())
	{
		return func_1708(uParam0, 0);
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return uParam0->f_7;
	}
	else if (MISC::IS_BIT_SET(iParam1, 19))
	{
		return uParam0->f_6;
	}
	return uParam0->f_1;
}

int func_1557(int iParam0)
{
	if ((iParam0 != 86400000 || iParam0 == 0) || iParam0 == BUILTIN::ROUND(-3f))
	{
		return 1;
	}
	return 0;
}

char* func_1558(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[32];

	StringCopy(&cVar0, "", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return " ";
		}
		else if ((((iParam0 == 1000000000 || iParam0 == 88400000) || iParam0 == 72800000) || iParam0 == 87400000) || iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_1099(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	else if ((MISC::IS_BIT_SET(iParam1, 3) || MISC::IS_BIT_SET(iParam1, 4)) || MISC::IS_BIT_SET(iParam1, 7))
	{
		if (iParam0 == 0)
		{
			return HUD::_GET_LABEL_TEXT("POS_LEAD");
		}
		else if (iParam0 == 88400000 || iParam0 == 72800000)
		{
			return HUD::_GET_LABEL_TEXT("POS_DNF");
		}
		else if (iParam0 == 87400000)
		{
			return HUD::_GET_LABEL_TEXT("POS_ELIM");
		}
		else if (iParam0 == BUILTIN::ROUND(-3f))
		{
			return "--:--:--";
		}
		else
		{
			return func_1099(iParam0, 1, 2, MISC::IS_BIT_SET(iParam1, 12), 0, 0);
		}
	}
	if (MISC::IS_BIT_SET(iParam1, 21))
	{
		if (iParam0 <= 0 || iParam0 == 1000000000)
		{
			return "--:--:--";
		}
		else
		{
			return func_1099(iParam0, 1, 2, 0, 0, 0);
		}
	}
	if (iParam0 < 0)
	{
		return "";
	}
	return func_1709(&cVar0);
}

int func_1559(var uParam0, int iParam1)
{
	if (iParam1 == 1 && MISC::IS_BIT_SET(uParam0->f_159, 29))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 2 && MISC::IS_BIT_SET(uParam0->f_159, 30))
	{
		return uParam0->f_151;
	}
	if (iParam1 == 3 && MISC::IS_BIT_SET(uParam0->f_159, 31))
	{
		return uParam0->f_151;
	}
	return 0;
}

var func_1560(var uParam0, int iParam1, int iParam2)
{
	if (func_1707())
	{
		func_1708(uParam0, 2);
	}
	else if (MISC::IS_BIT_SET(iParam1, 0) && !MISC::IS_BIT_SET(iParam1, 17))
	{
		if (MISC::IS_BIT_SET(iParam1, 3) && (MISC::IS_BIT_SET(iParam1, 4) || MISC::IS_BIT_SET(iParam1, 15)))
		{
			return uParam0->f_8;
		}
		return uParam0->f_2;
	}
	else if (MISC::IS_BIT_SET(iParam1, 21))
	{
		return uParam0->f_7;
	}
	else if (func_1554(iParam1))
	{
		return uParam0->f_1;
	}
	else if (MISC::IS_BIT_SET(iParam1, 14))
	{
		return uParam0->f_8;
	}
	else if (MISC::IS_BIT_SET(iParam2, 8))
	{
		return uParam0->f_3;
	}
	return uParam0->f_5;
}

bool func_1561(int iParam0)
{
	return (MISC::IS_BIT_SET(iParam0, 18) && MISC::IS_BIT_SET(iParam0, 17));
}

void func_1562(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		(*uParam1)[iVar0] = iParam0[iVar0];
		iVar0++;
	}
	if (!bParam3)
	{
		if (iParam2 < 8 && uParam1[7] != -1)
		{
			(*uParam1)[(iParam2 - 1)] = uParam1[7];
			(*uParam1)[7] = -1;
		}
	}
}

void func_1563(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam1 == uParam2[iVar0])
		{
			iParam1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	*iParam3 = (iParam1 - 1);
	*iParam4 = iParam1 + 2;
	if (*iParam4 >= uParam0->f_150)
	{
		*iParam4 = uParam0->f_150;
		*iParam3 = (uParam0->f_150 - 3);
	}
	if (*iParam3 < 0)
	{
		*iParam3 = 0;
	}
	if (*iParam4 < 5 && uParam0->f_150 > 5)
	{
		*iParam4 = 5;
	}
	if (*iParam4 < uParam0->f_150 && uParam0->f_150 < 5)
	{
		*iParam4 = uParam0->f_150;
	}
	if (*iParam4 > 8)
	{
		*iParam4 = 8;
	}
}

void func_1564(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	if (iParam4 < iParam3)
	{
		if (iParam1 != DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0, iParam4))
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0, iParam1);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0, iParam4, sParam2, iParam1);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0, iParam4, sParam2, iParam1);
	}
}

void func_1565(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar3 = -1;
	iVar4 = -1;
	iVar6 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (func_1543(&(((*uParam0)[iVar1 /*23*/])->f_14)))
		{
			if (iVar1 < iParam1)
			{
				iVar3 = iVar2;
				iVar2 = iVar1;
			}
			else if (iVar1 > iParam1)
			{
				iVar5++;
				if (iVar5 < 4)
				{
					iVar6 = iVar1;
				}
			}
			iVar0++;
			iVar4 = iVar1;
		}
		iVar1++;
	}
	*iParam2 = iVar2;
	if (iVar6 != -1)
	{
		*iParam3 = iVar6;
	}
	else
	{
		*iParam3 = iVar4;
	}
	if (*iParam3 >= iVar4 && iVar6 == -1)
	{
		*iParam3 = iVar4;
		if (iVar3 != -1)
		{
			*iParam2 = iVar3;
		}
		else
		{
			*iParam2 = iVar2;
		}
	}
	if (*iParam2 < 0)
	{
		*iParam2 = 0;
	}
}

void func_1566(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	char cVar5[64];
	int iVar13;
	float fVar14;

	iVar0 = 0;
	while (iVar0 <= (uParam0->f_150 - 1))
	{
		StringCopy(&cVar5, "LeaderboardListHeader_", 64);
		if (iVar0 < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, iVar0, 64);
		uParam0->f_3[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar5);
		cVar5 = { func_1703(iVar0) };
		fVar2 = 0f;
		fVar3 = 0f;
		fVar4 = 0f;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (iVar0 == uParam1[iVar1 /*23*/] && func_1543(&(((*uParam1)[iVar1 /*23*/])->f_14)))
			{
				if (MISC::IS_BIT_SET(uParam0->f_159, 19))
				{
					if (((*uParam1)[iVar1 /*23*/])->f_6 != -1f && fVar2 == 0f)
					{
						fVar2 = (fVar2 + ((*uParam1)[iVar1 /*23*/])->f_6);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_1 != -1f)
					{
						fVar3 = (fVar3 + ((*uParam1)[iVar1 /*23*/])->f_1);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_5 != -1f)
					{
						fVar4 = (fVar4 + ((*uParam1)[iVar1 /*23*/])->f_5);
					}
				}
				else
				{
					if (((*uParam1)[iVar1 /*23*/])->f_1 != -1f)
					{
						fVar2 = (fVar2 + ((*uParam1)[iVar1 /*23*/])->f_1);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_2 != -1f)
					{
						fVar3 = (fVar3 + ((*uParam1)[iVar1 /*23*/])->f_2);
					}
					if (((*uParam1)[iVar1 /*23*/])->f_5 != -1f)
					{
						fVar4 = (fVar4 + ((*uParam1)[iVar1 /*23*/])->f_5);
					}
				}
			}
			iVar1++;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_159, 19))
		{
			if (MISC::IS_BIT_SET(uParam0->f_159, 25) || MISC::IS_BIT_SET(uParam0->f_159, 23))
			{
				if (func_1702() == 0)
				{
					fVar4 = BUILTIN::TO_FLOAT(Global_1050928[iVar0]);
				}
			}
		}
		iVar13 = func_1704(iVar0, iParam2, iParam3, bParam4, iParam2 == iVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "HeadingColor", iVar13);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Heading", &cVar5);
		if (MISC::IS_BIT_SET(uParam0->f_159, 6))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		else if (func_1553(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar2, uParam0->f_151));
			fVar14 = fVar3;
			if (MISC::IS_BIT_SET(uParam0->f_159, 17))
			{
				fVar14 = fVar4;
			}
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar14, uParam0->f_151));
		}
		else if (func_1554(uParam0->f_159))
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat1Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(fVar2, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat2Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar3, uParam0->f_151));
			DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_3[iVar0]), "Stat3Color", iVar13);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_3[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(fVar4, uParam0->f_151));
		}
		iVar0++;
	}
}

bool func_1567()
{
	return func_801(4);
}

void func_1568(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	char cVar1[32];

	if (bParam4)
	{
		if (func_1707())
		{
			func_1710(uParam0);
		}
		else
		{
			func_1711(uParam0, bParam5, bParam7);
		}
	}
	uParam0->f_149 = 0;
	if (iParam3 != -1)
	{
		uParam0->f_150 = iParam3;
	}
	if (MISC::IS_BIT_SET(uParam0->f_159, 5))
	{
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&cVar1, "MiniListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_143[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_143[iVar0]), "Position", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_143[iVar0]), "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_143[iVar0]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_143[iVar0]), "StatPriority", "");
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		StringCopy(&cVar1, "LeaderboardListItem_", 32);
		if (iVar0 < 10)
		{
			StringConCat(&cVar1, "0", 32);
		}
		StringIntConCat(&cVar1, iVar0, 32);
		uParam0->f_12[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, &cVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "Position", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowCross", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_12[iVar0]), "CrossColor", joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Gamertag", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowCrewTag", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "CrewTag", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowRank", true);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Rank", "0");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "Spectating", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat0", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat1", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat2", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Stat3", "");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowBlip", func_1712());
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "BlipColor", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iVar0]), "Blip", "BLIP_AMBIENT_PED_MEDIUM");
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "isHighlighted", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "HeadsetIconVisible", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(&(uParam0->f_12[iVar0]), "HeadsetIconColor", joaat("COLOR_PURE_WHITE"));
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowBlip", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_06", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_07", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "info_visible_08", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_06", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_07", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "info_value_08", "");
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_12[iVar0]), "SetOverlayImg", 1);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(&(uParam0->f_12[iVar0]), "ShowOverlay", false);
		func_1569(uParam0, &(((*uParam1)[iVar0 /*23*/])->f_14), iVar0, 0);
		iVar0++;
	}
	if (func_1707())
	{
		func_1713(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
	else
	{
		func_1374(uParam0, uParam1, iParam2, bParam6, bParam5, bParam7, bParam8, iParam9, iParam10);
	}
}

void func_1569(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16;

	StringCopy(&cVar0, "mp_lobby_textures", 64);
	StringCopy(&cVar8, "TEMP_PEDSHOT", 64);
	MemCopy(&Var16, {func_1714(uParam0, *uParam1)}, 8);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var16) && !MISC::ARE_STRINGS_EQUAL(&Var16, "Invalid Handle"))
	{
		cVar0 = { Var16 };
		cVar8 = { Var16 };
	}
	if (bParam3)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][0], &cVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45[iParam2 /*3*/][1], &cVar8);
	}
	else
	{
		(*uParam0->f_45[iParam2 /*3*/])[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iParam2]), "AvatarDictionary", &cVar0);
		(*uParam0->f_45[iParam2 /*3*/])[1] = DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_12[iParam2]), "AvatarTexture", &cVar8);
	}
}

bool func_1570(int iParam0)
{
	return (Global_262151 && iParam0) != 0;
}

void func_1571(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1572(bool bParam0)
{
	if (bParam0)
	{
		return joaat("leaderboard");
	}
	return -987928333;
}

int func_1573()
{
	return 205122612;
}

int func_1574()
{
	if (Global_1939067->f_20 && Global_1939067->f_5 == 1)
	{
		return 1;
	}
	return 0;
}

void func_1575(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[128];

	if (func_1715() > 0)
	{
		return;
	}
	if (uParam0->f_33 == 0)
	{
		return;
	}
	iVar0 = uParam0->f_35;
	uParam0->f_35++;
	if (uParam0->f_35 >= 32)
	{
		uParam0->f_35 = 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_33, iVar0))
	{
		return;
	}
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	StringCopy(&cVar2, "", 128);
	switch (func_1716(&cVar2, iVar0, 1))
	{
		case 4:
			(*uParam0)[iVar0] = iVar1;
			MISC::CLEAR_BIT(&(uParam0->f_33), iVar0);
			MISC::SET_BIT(&(uParam0->f_34), iVar0);
			break;
		case 3:
			break;
		case 1:
			func_1717(iVar0, 1);
			break;
		case 2:
			func_1717(iVar0, 1);
			func_1718(uParam0, iVar1, 0);
			break;
		case 0:
			break;
	}
}

void func_1576(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	Var0.f_1 = 1;
	Var0 = 1;
	Var0.f_3 = iParam1;
	func_1719(&Var0);
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_33), iVar4);
		}
		iVar4++;
	}
}

int func_1577(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1502579962;
				case 1:
					return -665914289;
				case 2:
					return 2073971721;
				case 3:
					return 1143965641;
				case 4:
					return -926614481;
				case 5:
					return -732639941;
				case 6:
					return -1711391918;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 313364772;
				case 1:
					return 1854795734;
				case 2:
					return -1515449371;
				case 3:
					return 1218626465;
				case 4:
					return -550409463;
				case 5:
					return -1091236409;
				case 6:
					return -340381424;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_1578(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1951141->f_2706.f_1)
	{
		if (&Global_1951141->f_2706.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1579(int iParam0, var uParam1)
{
	return (Global_1951141->f_2706.f_3[iParam0] && uParam1) != 0;
}

void func_1580(int iParam0, var uParam1)
{
	Global_1951141->f_2706.f_3[iParam0] = (&Global_1951141->f_2706.f_3[iParam0] - (Global_1951141->f_2706.f_3[iParam0] && uParam1));
}

int func_1581(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return 735520874;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_1582(int iParam0, int iParam1)
{
	return ((Global_1951141->f_81[func_1240(iParam0, 1) /*12*/])->f_11 && iParam1) != 0;
}

int func_1583(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1951141->f_2760)
	{
		if (&Global_1951141->f_2760.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1584(int iParam0, int iParam1)
{
	func_1720(&(Global_1951141->f_2760), iParam0, iParam1);
}

void func_1585(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_1586(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

int func_1587(int iParam0)
{
	if (iParam0 == 1733464892)
	{
		return -236468550;
	}
	return -28107610;
}

int func_1588(int iParam0)
{
	if (iParam0 == -230310728 || iParam0 == 1326838792)
	{
		return -1551826771;
	}
	switch (iParam0)
	{
		case -157559400:
			return -25348444;
		case 465258498:
			return -25348444;
		case -533110106:
			return -25348444;
		case -393465732:
			return -25348444;
		case 74351192:
			return -25348444;
		case 116074515:
			return -25348444;
		case 1618144916:
			return -25348444;
		case 1785263689:
			return -25348444;
		case -906745111:
			return -25348444;
		case 373001057:
			return -25348444;
		case -1414997496:
			return -25348444;
		case -1466370865:
			return -25348444;
		case -428747163:
			return -25348444;
		case 539445454:
			return -25348444;
		case 1893781991:
			return -25348444;
		case -156560189:
			return -25348444;
		case -1337137168:
			return -25348444;
		case 1529984470:
			return 129780002;
		case 163973342:
			return 129780002;
		case 1242718228:
			return 129780002;
		case 471104751:
			return 129780002;
		case 2093241299:
			return 129780002;
		case 1900264118:
			return 129780002;
		case 1226668975:
			return 129780002;
		case -1054967705:
			return 129780002;
		case 664756881:
			return 129780002;
		case -1196414963:
			return 129780002;
		case -549784028:
			return 129780002;
		case -1114404061:
			return 129780002;
		case 1998608299:
			return 129780002;
		case -1905369120:
			return 129780002;
		case -2125350662:
			return 129780002;
		case 1734235879:
			return 129780002;
		case 675995216:
			return 129780002;
		case -1713496139: /* GXTEntry: "No Hair" */
			return 1687431937;
		default:
			break;
	}
	return 1661173679;
	return 1687431937;
}

int func_1589(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*18*/])->f_1 == -1 || ((*uParam0)[iVar0 /*18*/])->f_17 == 0)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*18*/])->f_17 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1590(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428: /* GXTEntry: "No Foundation" */
			return -2056583192;
		case 1710247623: /* GXTEntry: "No Blush" */
			return 1015239729;
		case 1964684696: /* GXTEntry: "No Eye Liner" */
			return -340627321;
		case -2087489409: /* GXTEntry: "No Eye Shadow" */
			return -875805376;
		case -860557048: /* GXTEntry: "No Lipstick" */
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_1591(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1589(uParam1, iParam2);
	if (iVar0 == -1)
	{
		return 0;
	}
	PED::_0x96C349DE04C49011(*uParam0, ((*uParam1)[iVar0 /*18*/])->f_2);
	func_1592(uParam0, uParam1, iVar0);
	return 1;
}

void func_1592(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	uParam0->f_6 = (uParam0->f_6 - 1);
	iVar0 = iParam2;
	while (iVar0 <= uParam0->f_6)
	{
		if (iVar0 + 1 >= 22)
		{
		}
		else
		{
			*((*uParam1)[iVar0 /*18*/]) = { *((*uParam1)[iVar0 + 1 /*18*/]) };
			((*uParam1)[iVar0 /*18*/])->f_2 = (((*uParam1)[iVar0 /*18*/])->f_2 - 1);
			iVar0++;
		}
	}
}

int func_1593(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<5> Var0;

	Var0 = 660625468;
	Var0.f_1 = -756385367;
	Var0.f_2 = joaat("id");
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_0x91DED5DD64BB2691(&Var0);
	if (!func_1721(&Var0, uParam0, 0, bParam2, bParam3, iParam4))
	{
		return 0;
	}
	*uParam0 = iParam1;
	return 1;
}

void func_1594(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if ((!func_1586(uParam0, 1) || func_1586(uParam0, 2)) || uParam0->f_6 < 0)
	{
		return;
	}
	if (uParam2->f_17 == -1177453988)
	{
		if (uParam2->f_3 == 0)
		{
			uParam2->f_3 = uParam0->f_2;
		}
		if (uParam2->f_4 == 0)
		{
			uParam2->f_4 = uParam0->f_3;
		}
		if (uParam2->f_5 == 0)
		{
			uParam2->f_5 = uParam0->f_4;
		}
		func_1722(uParam0, uParam2->f_3, uParam2->f_4, uParam2->f_5);
	}
	else
	{
		iVar0 = func_1589(uParam1, uParam2->f_17);
		if (iVar0 <= -1)
		{
			if (uParam0->f_6 >= 22)
			{
				return;
			}
			*((*uParam1)[uParam0->f_6 /*18*/]) = { *uParam2 };
			uParam0->f_6++;
			func_1723(uParam0, uParam1, (uParam0->f_6 - 1));
		}
		else
		{
			uParam2->f_2 = ((*uParam1)[iVar0 /*18*/])->f_2;
			*((*uParam1)[iVar0 /*18*/]) = { *uParam2 };
			func_1724(uParam0, (*uParam1)[iVar0 /*18*/], 1);
		}
	}
}

int func_1595(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<18> Var0;
	int iVar18;
	struct<18> Var19;

	Var0.f_2 = -1;
	Var0.f_13 = 1065353216;
	Var0.f_14 = 1065353216;
	if (!func_1593(&Var0, iParam2, bParam3, bParam4, 6))
	{
		return 0;
	}
	if (uParam0->f_6 >= 22)
	{
		return 0;
	}
	*((*uParam1)[uParam0->f_6 /*18*/]) = { Var0 };
	uParam0->f_6++;
	Var19.f_2 = -1;
	Var19.f_13 = 1065353216;
	Var19.f_14 = 1065353216;
	iVar18 = (uParam0->f_6 - 1);
	while (iVar18 >= 1)
	{
		if (((*uParam1)[iVar18 /*18*/])->f_1 < ((*uParam1)[(iVar18 - 1) /*18*/])->f_1)
		{
			Var19 = { *((*uParam1)[iVar18 /*18*/]) };
			*((*uParam1)[iVar18 /*18*/]) = { *((*uParam1)[(iVar18 - 1) /*18*/]) };
			*((*uParam1)[(iVar18 - 1) /*18*/]) = { Var19 };
		}
	else
	{
		}
		else
		{
			iVar18 = (iVar18 + -1);
		}
	}
	return 1;
}

int func_1596(int iParam0)
{
	return iParam0 * 31;
}

bool func_1597(int iParam0)
{
	return ((iParam0 == -1759663922 || iParam0 == -318976023) || iParam0 == 772881414);
}

int func_1598(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return -364764277 /* GXTEntry: "Scrawny Nag" */;
	}
	switch (iParam0)
	{
		case joaat("a_c_horse_americanpaint_overo"):
			return -974145463 /* GXTEntry: "American Paint - Overo Coat" */;
		case joaat("a_c_horse_americanpaint_tobiano"):
			return 1432602132 /* GXTEntry: "American Paint - Tobiano Coat" */;
		case 1792770814:
			return 92296905 /* GXTEntry: "American Paint - Splashed White Coat" */;
		case -1963397600:
			return -842044823 /* GXTEntry: "American Paint - Grey Overo Coat" */;
		case -1250098797:
			return 1371398552 /* GXTEntry: "American Standardbred - Black Coat" */;
		case -318278790:
			return -745453539 /* GXTEntry: "American Standardbred - Buckskin Coat" */;
		case 55096099:
			return 1583029039 /* GXTEntry: "American Standardbred - Palomino Dapple Coat" */;
		case -458397856:
			return -783061276 /* GXTEntry: "American Standardbred - Silver Tail Buckskin Coat" */;
		case -444610976:
			return -1322521536 /* GXTEntry: "Andalusian - Dark Bay Coat" */;
		case 746627200:
			return 728055838 /* GXTEntry: "Andalusian - Rose Grey Coat" */;
		case 705691988:
			return 1100711204 /* GXTEntry: "Andalusian - Perlino Coat" */;
		case joaat("a_c_horse_appaloosa_blanket"):
			return -1782334639 /* GXTEntry: "Appaloosa - Blanket Coat" */;
		case -1554827654:
			return -1181052732 /* GXTEntry: "Appaloosa - Leopard Blanket Coat" */;
		case -1029277326:
			return -179102320 /* GXTEntry: "Appaloosa - Brown Leopard Coat" */;
		case joaat("a_c_horse_appaloosa_leopard"):
			return -1266863668 /* GXTEntry: "Appaloosa - Leopard Coat" */;
		case joaat("a_c_horse_arabian_black"):
			return -2078767648 /* GXTEntry: "Arabian - Black Coat" */;
		case -403470324:
			return -852553462 /* GXTEntry: "Arabian - Rose Grey Bay Coat" */;
		case joaat("a_c_horse_arabian_white"):
			return -80004868 /* GXTEntry: "Arabian - White Coat" */;
		case joaat("a_c_horse_ardennes_bayroan"):
			return 1813208211 /* GXTEntry: "Ardennes - Bay Roan Coat" */;
		case -635239558:
			return 836323303 /* GXTEntry: "Ardennes - Strawberry Roan Coat" */;
		case joaat("a_c_horse_ardennes_irongreyroan"):
			return 153881023 /* GXTEntry: "Ardennes - Iron Grey Roan Coat" */;
		case joaat("a_c_horse_belgian_blondchestnut"):
			return -1256798240 /* GXTEntry: "Belgian Draft - Blond Chestnut Coat" */;
		case joaat("a_c_horse_belgian_mealychestnut"):
			return 2118089359;
		case 1593035738:
			return -1537586382 /* GXTEntry: "Dutch Warmblood - Sooty Buckskin Coat" */;
		case 861505058:
			return 1440692746 /* GXTEntry: "Dutch Warmblood - Seal Brown Coat" */;
		case 687445866:
			return 697143532 /* GXTEntry: "Dutch Warmblood - Chocolate Roan Coat" */;
		case 1705182311:
			return 281128160 /* GXTEntry: "Hungarian Halfbred - Flaxen Chestnut Coat" */;
		case -78273782:
			return 1854519167 /* GXTEntry: "Hungarian Halfbred - Piebald Tobiano Coat" */;
		case -819697512:
			return -1376299681 /* GXTEntry: "Hungarian Halfbred - Dark Dapple Grey Coat" */;
		case -247265944:
			return -1955947684;
		case -1265030920:
			return 1361788230 /* GXTEntry: "Kentucky Saddler - Chestnut Pinto Coat" */;
		case 2024948086:
			return 1974379573 /* GXTEntry: "Kentucky Saddler - Grey Coat" */;
		case 1696286663:
			return 545109431 /* GXTEntry: "Kentucky Saddler - Silver Bay Coat" */;
		case -1342159303:
			return 1275638003 /* GXTEntry: "Missouri Fox Trotter - Amber Champagne Coat" */;
		case joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"):
			return 2083573823 /* GXTEntry: "Missouri Fox Trotter - Silver Dapple Pinto Coat" */;
		case 2030804811:
			return 1235275977 /* GXTEntry: "Morgan - Bay Coat" */;
		case 1230359523:
			return 892601357 /* GXTEntry: "Morgan - Bay Roan Coat" */;
		case -1038436471:
			return 1224695367 /* GXTEntry: "Morgan - Flaxen Chestnut Coat" */;
		case 96930969:
			return 648301150 /* GXTEntry: "Morgan - Palomino Coat" */;
		case -1180427609:
			return -1597490733 /* GXTEntry: "Mustang - Grullo Dun Coat" */;
		case joaat("a_c_horse_mustang_wildbay"):
			return 2000205872 /* GXTEntry: "Mustang - Wild Bay Coat" */;
		case 43825738:
			return -1428527735 /* GXTEntry: "Mustang - Tiger Striped Bay Coat" */;
		case joaat("a_c_horse_nokota_blueroan"):
			return 170010697 /* GXTEntry: "Nokota - Blue Roan Coat" */;
		case -1261814606:
			return -742726637 /* GXTEntry: "Nokota - White Roan Coat" */;
		case 107013696:
			return -1714171692 /* GXTEntry: "Nokota - Reverse Dapple Roan Coat" */;
		case 1066034872:
			return -103101636 /* GXTEntry: "Shire - Dark Bay Coat" */;
		case 36009259:
			return -1999094324 /* GXTEntry: "Shire - Light Grey Coat" */;
		case -1599683008:
			return 1724200240 /* GXTEntry: "Suffolk Punch - Sorrel Coat" */;
		case -1693870200:
			return 237935328 /* GXTEntry: "Suffolk Punch - Red Chestnut Coat" */;
		case 1072019803:
			return 120848852 /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */;
		case 1074477367:
			return -868094182 /* GXTEntry: "Tennessee Walker - Chestnut Coat" */;
		case -85890205:
			return -887362763 /* GXTEntry: "Tennessee Walker - Dapple Bay Coat" */;
		case -727455979:
			return -847714194 /* GXTEntry: "Tennessee Walker - Red Roan Coat" */;
		case -1667789645:
			return 1756765331 /* GXTEntry: "Tennessee Walker - Flaxen Roan Coat" */;
		case -1924405794:
			return -813071670 /* GXTEntry: "Thoroughbred - Blood Bay Coat" */;
		case joaat("a_c_horse_thoroughbred_dapplegrey"):
			return -1900569233 /* GXTEntry: "Thoroughbred - Dapple Grey Coat" */;
		case -526169133:
			return 1688250187 /* GXTEntry: "Thoroughbred - Brindle Coat" */;
		case 2120708491:
			return -1262715164 /* GXTEntry: "Thoroughbred - Black Chestnut Coat" */;
		case 900144280:
			return 2010625508 /* GXTEntry: "Thoroughbred - Reverse Dapple Black Coat" */;
		case 1133837220:
			return -136225010 /* GXTEntry: "Turkoman - Dark Bay Coat" */;
		case joaat("a_c_horse_turkoman_gold"):
			return -225011104 /* GXTEntry: "Turkoman - Gold Coat" */;
		case -1604180548:
			return -1882436593 /* GXTEntry: "Turkoman - Silver Coat" */;
		case -683592019:
			return -757978903 /* GXTEntry: "Breton - Red Roan Coat" */;
		case 337109765:
			return 1909854428 /* GXTEntry: "Breton - Sorrel Coat" */;
		case -619132373:
			return 1592694494 /* GXTEntry: "Breton - Grullo Dun Coat" */;
		case 1544366970:
			return 981469777 /* GXTEntry: "Breton - Seal Brown Coat" */;
		case -1441144351:
			return 1064693514 /* GXTEntry: "Breton - Mealy Dapple Bay Coat" */;
		case -1717674545:
			return -1365665739 /* GXTEntry: "Breton - Steel Grey Coat" */;
		case 1825358734:
			return 1577022605 /* GXTEntry: "Criollo - Blue Roan Overo Coat" */;
		case 1138427579:
			return 381495209 /* GXTEntry: "Criollo - Dun Coat" */;
		case -1720251851:
			return 3032834 /* GXTEntry: "Criollo - Bay Brindle Coat" */;
		case 506887890:
			return -1722101672 /* GXTEntry: "Criollo - Sorrel Overo Coat" */;
		case 766293155:
			return -189605757 /* GXTEntry: "Criollo - Bay Frame Overo Coat" */;
		case 2147082926:
			return 863391233 /* GXTEntry: "Criollo - Marble Sabino Coat" */;
		case -1616287563:
			return 885568364 /* GXTEntry: "Kladruber - Black Coat" */;
		case -127412252:
			return -1540355548 /* GXTEntry: "Kladruber - White Coat" */;
		case -1881155818:
			return -601560591 /* GXTEntry: "Kladruber - Cremello Coat" */;
		case -955237712:
			return -370362766 /* GXTEntry: "Kladruber - Grey Coat" */;
		case -647020346:
			return -1698261864 /* GXTEntry: "Kladruber - Dapple Rose Grey Coat" */;
		case -1846319726:
			return -670301166 /* GXTEntry: "Kladruber - Silver Coat" */;
		case 1007570567:
			return -302057902;
		case 1029339151:
			return 1257620801;
		case -1424767799:
			return 821735821;
		case -217135948:
			return -769035812;
		case -156439156:
			return -1824684932;
		case 1344011125:
			return 1589592948;
		case joaat("a_c_donkey_01"):
			return -1331210307 /* GXTEntry: "Donkey" */;
		case joaat("a_c_horsemule_01"):
			return 122449722 /* GXTEntry: "Mule" */;
		case joaat("a_c_horsemulepainted_01"):
			return -1784502482 /* GXTEntry: "Mule - Painted" */;
		case 1883159941:
			return -1943445834;
		case -1028075925:
			return -635244104 /* GXTEntry: "Appaloosa - Black Snowflake" */;
		case 84224102:
			return -1427377767 /* GXTEntry: "Arabian - Grey Coat" */;
		case 1496579364:
			return -2055655009 /* GXTEntry: "Arabian - Red Chestnut Coat" */;
		case -1896838685:
			return -1293672675 /* GXTEntry: "Hungarian Halfbred - Liver Chestnut Coat" */;
		case -420599285:
			return -1179079660 /* GXTEntry: "Missouri Fox Trotter - Sable Champagne Coat" */;
		case 478986344:
			return 805526368 /* GXTEntry: "Mustang - Golden Dun Coat" */;
		case 446670976:
			return 1342496140 /* GXTEntry: "Tennessee Walker - Mahogany Bay Coat" */;
		case joaat("a_c_horse_shire_ravenblack"):
			return -126555855 /* GXTEntry: "Shire - Raven Black Coat" */;
		case 549900435:
			return 294243421 /* GXTEntry: "Dutch Warmblood - Cremello Gold Coat" */;
		case -2063289686:
			return -997197050 /* GXTEntry: "Thoroughbred - Seal Brown Coat" */;
		case 917402668:
			return -235714362 /* GXTEntry: "Appaloosa - Blanket Coat" */;
		case -914712122:
			return -1678164 /* GXTEntry: "Nokota - Blue Roan Coat" */;
		case -598917269:
			return -977833913 /* GXTEntry: "Tennessee Walker - Black Rabicano Coat" */;
		case joaat("a_c_horse_winter02_01"):
			return 1589164943 /* GXTEntry: "Thoroughbred - Silver Bay Coat" */;
		default:
			break;
	}
	return 0;
}

void func_1599()
{
	Global_1903929->f_124 = (Global_1070356->f_26934[48 /*4*/])->f_3;
	Global_1903929->f_124.f_1 = 0;
	Global_1903929->f_124.f_2 = 0;
	Global_1903929->f_124.f_3 = 0;
	Global_1903929->f_124.f_4 = 0;
}

int func_1600(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1844561321;
		case 0:
			return 1653124001;
		case 1:
			return -430733995;
		case 2:
			return 1501387297;
		case 3:
			return -1143491563;
		case 4:
			return -1460176899;
		case 5:
			return 1003181529;
		default:
			break;
	}
	return 0;
}

void func_1601(var uParam0, int iParam1)
{
	if (func_1225(uParam0, iParam1))
	{
		return;
	}
	func_146(uParam0, iParam1);
}

int func_1602(int iParam0, int iParam1)
{
	if (!func_1273(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_0x99C6EA66DFE73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_1603(int iParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1604(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;

	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return 0;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_681(iParam2, joaat("default"));
		if (iParam3 == 0)
		{
			return 0;
		}
	}
	uVar0 = 5;
	if (!NETSHOPPING::_0xD1555FBC96C88444(iParam2, iParam3, iParam4, &uVar0, 5))
	{
		return 0;
	}
	if (!func_1725(uParam0, iParam1, &uVar0, iParam4, bParam5))
	{
		return 0;
	}
	return 1;
}

struct<16> func_1605(int iParam0, var uParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_684(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_1606(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1726(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 712853601, iParam0))
		{
			return func_1727(NETSHOPPING::_CASHINVENTORY_TRANSACTION_ADD_ITEM(iVar0, uParam1, 16), iVar0, uParam1);
		}
	}
	else
	{
		return func_1728(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_1607(int iParam0, struct<16> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 1 || (Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == 5)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_1608(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		case 13:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1609(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	return 1;
}

int func_1610(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1317351007;
		case 1:
			return -500478573;
		case 2:
			return -806573802;
		case 3:
			return -1109949204;
		default:
			break;
	}
	return -1060513333;
}

int func_1611(struct<4> Param0, int iParam4, int iParam5, bool bParam6)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1729(Param0, iParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1612()
{
	return DATAFILE::_0x603AC35FD4602C76(Global_1132968->f_8);
}

int func_1613(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (iParam0 == (Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_2)
		{
			return &(Global_1132968->f_11.f_1556[iVar0 /*46*/]);
		}
		iVar0++;
	}
	return 0;
}

int func_1614(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	struct<46> Var2;
	bool bVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	vector3 vVar52;

	if (iParam2 == 2)
	{
		bVar0 = func_1730() == true;
	}
	else if (iParam2 == 1)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam3 != -1)
	{
		bVar1 = true;
	}
	if (!func_1434(iParam0))
	{
		func_1731(uParam1);
		return 0;
	}
	Var2 = { *(Global_1132968->f_11.f_1556[func_1435(iParam0, 1) /*46*/]) };
	*uParam1 = Var2;
	uParam1->f_2 = Var2.f_2;
	uParam1->f_1 = Var2.f_1;
	uParam1->f_8 = Var2.f_3;
	uParam1->f_16 = Var2.f_4;
	uParam1->f_32 = Var2.f_7;
	uParam1->f_33 = Var2.f_8;
	if (!func_680(uParam1->f_2, 0))
	{
		func_1731(uParam1);
		return 0;
	}
	bVar48 = true;
	if (!func_1434(*uParam1))
	{
		func_1731(uParam1);
		return 0;
	}
	if (!bVar0)
	{
		if (func_1618())
		{
			uParam1->f_19 = func_1732(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = Var2.f_3;
			uParam1->f_10 = Var2.f_6;
			if (func_1609(uParam1->f_19))
			{
				uParam1->f_13 = (Global_1132968->f_5525.f_34[uParam1->f_19 /*3*/])->f_1;
			}
			else
			{
				uParam1->f_13 = 0;
			}
		}
		else
		{
			uParam1->f_19 = func_1733(*uParam1);
			iVar49 = func_1610(uParam1->f_19);
			uParam1->f_3 = { func_684(uParam1->f_2, func_1012(bVar48), iVar49, bVar48) };
			uParam1->f_21 = func_1734(*uParam1);
			uParam1->f_13 = func_1735(*uParam1);
			uParam1->f_15 = func_1736(*uParam1);
			uParam1->f_20 = func_1737(*uParam1);
			uParam1->f_22 = func_1738(*uParam1);
			uParam1->f_14 = func_1739(*uParam1);
			uParam1->f_23 = func_1740(*uParam1);
			uParam1->f_24 = func_1741(*uParam1);
			uParam1->f_25 = func_1742(*uParam1);
			uParam1->f_26 = func_1743(uParam1);
			uParam1->f_27 = func_1744(uParam1);
			uParam1->f_29 = func_1745(*uParam1);
			uParam1->f_30 = func_1746(*uParam1);
			uParam1->f_31 = func_1747(*uParam1);
			iVar50 = -915411861;
			if (uParam1->f_27)
			{
				iVar50 = uParam1->f_28;
			}
			if (!uParam1->f_20)
			{
				uParam1->f_17 = func_1748(Var2.f_2, iVar50);
			}
			else
			{
				uParam1->f_17 = func_1749(uParam1->f_13, iVar50);
			}
			uParam1->f_18 = func_1748(Var2.f_2, -570078785);
			if (bVar1)
			{
				uParam1->f_26 = 0;
				uParam1->f_27 = 0;
				if (uParam1->f_23)
				{
					uParam1->f_23 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_25)
				{
					uParam1->f_25 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_20)
				{
					uParam1->f_20 = uParam1->f_13 >= iParam3;
				}
				uParam1->f_13 = iParam3;
			}
			if (uParam1->f_20)
			{
				uParam1->f_9 = Var2.f_3;
				uParam1->f_10 = Var2.f_6;
			}
			else
			{
				func_1750(uParam1);
			}
		}
	}
	else
	{
		iVar51 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1939231->f_1433.f_8));
		uParam1->f_9 = Var2.f_3;
		uParam1->f_10 = Var2.f_6;
		if (NETWORK::_0x255A5EF65EDA9167(iVar51))
		{
			uParam1->f_19 = func_1751(*uParam1, iVar51);
			if (func_1609(uParam1->f_19))
			{
				vVar52 = { *(((*Global_1139395)[iVar51 /*34*/])->f_10[uParam1->f_19 /*3*/]) };
				uParam1->f_13 = vVar52.y;
				uParam1->f_21 = func_1752(&(vVar52.f_2), 1);
			}
		}
	}
	uParam1->f_11 = func_1753(uParam1);
	uParam1->f_12 = func_1754(Var2, uParam1);
	return 1;
}

bool func_1615(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return Param0.f_1 == joaat("deadeye");
}

void func_1616()
{
	PLAYER::_0xAE4BCC79C587EBBF(&(Global_1275573->f_154[&Global_1275573]), 0f, 0);
	PLAYER::_0x4D1699543B1C023C(&(Global_1275573->f_154[&Global_1275573]), 0f);
	PLAYER::_0xB783F75940B23014(&(Global_1275573->f_154[&Global_1275573]), 0f);
	PLAYER::_0x6B5DDFB967E5073D(&(Global_1275573->f_154[&Global_1275573]), 0);
	if (PLAYER::_0xB16223CB7DA965F0(&(Global_1275573->f_154[&Global_1275573])))
	{
		PLAYER::_0xAE637BB8EF017875(&(Global_1275573->f_154[&Global_1275573]), 1);
	}
	PLAYER::_0x95EE1DEE1DCD9070(&(Global_1275573->f_154[&Global_1275573]), 0);
}

void func_1617(int iParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1622(Var0, iParam0);
}

bool func_1618()
{
	return (func_381(0) && func_381(5));
}

void func_1619(int iParam0)
{
	int iVar0;

	iVar0 = func_1755(iParam0);
	func_1756(iVar0);
}

void func_1620(var uParam0)
{
	bool bVar0;
	int iVar1;

	func_1757(Global_1939231->f_1433.f_4174.f_37[func_1435(*uParam0, 1) /*44*/], uParam0);
	bVar0 = func_1758(*uParam0);
	iVar1 = UIAPPS::_0x96FD694FE5BE55DC(joaat("abilities"));
	if (bVar0)
	{
		if (iVar1 == 756463805)
		{
			func_1759(*uParam0);
			return;
		}
		else
		{
			func_1760(&(Global_1939231->f_1433.f_4174.f_1936), *uParam0);
			func_1761(*uParam0);
		}
	}
}

void func_1621(int iParam0, int iParam1)
{
	struct<34> Var0;
	int iVar34;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	iVar34 = func_1762(iParam0, 1);
	if (!func_1440(iVar34, &Var0, 0, -1))
	{
		func_1731(&Var0);
	}
	func_1763(iParam0, Global_1939231->f_1433.f_4174.f_1579[iParam0 /*54*/], Var0);
	if (iParam1 && func_1764(iParam0))
	{
		func_1765(&(Global_1939231->f_1433.f_4174.f_1985), Var0, iParam0);
	}
}

void func_1622(struct<14> Param0, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, int iParam34)
{
	Global_1132968->f_5351.f_36[iParam34 /*3*/] = Param0;
	(Global_1132968->f_5351.f_36[iParam34 /*3*/])->f_1 = Param0.f_13;
}

void func_1623(struct<34> Param0, int iParam34)
{
	int iVar0;
	int iVar1;

	if (!func_1434(Param0))
	{
		return;
	}
	if (!func_1766(Param0.f_13))
	{
		return;
	}
	if (func_1615(Param0))
	{
		func_1767(Param0);
	}
	iVar0 = func_1755(iParam34);
	iVar1 = ((Global_1132968->f_11.f_1556[func_1435(Param0, 1) /*46*/])->f_9[Param0.f_13 /*12*/])->f_10;
	func_1768(iVar0, iVar1);
}

bool func_1624(int iParam0)
{
	float fVar0;

	fVar0 = (func_1769(iParam0) - PLAYER::_0xDF66A37936D5F3D9(iParam0));
	return fVar0 <= 1f;
}

int func_1625(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (fParam2 > 100f)
	{
		fParam2 = 100f;
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_0xC6258F41D86676E0(iParam0, func_1770(iParam1), BUILTIN::CEIL(fParam2));
	return 1;
}

void func_1626(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_997(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_1627(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_1771(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_1772(iParam1), fParam2, -1);
	}
}

void func_1628(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_997(2);
	}
	uVar0 = Global_1275573->f_21;
	func_1773(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1774(iParam0, uVar0, iParam3);
	}
}

char* func_1629()
{
	return "PlayerRPGCoreDeadEye";
}

char* func_1630()
{
	return "PlayerRPGCore";
}

int func_1631()
{
	int iVar0;

	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_34, &iVar0, true, 0, false))
		{
			if (WEAPON::_0x6AD66548840472E5(iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1632(float fParam0, float fParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = (fParam0 / fParam1);
	fVar1 = (-1f * (fVar0 - 1f));
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHealthLow"))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("PlayerHealthLow");
	}
	GRAPHICS::_0xCAB4DD2D5B2B7246("PlayerHealthLow", fVar1);
}

void func_1633()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHealthLow"))
	{
		GRAPHICS::_0xC5CB91D65852ED7E("PlayerHealthLow");
	}
}

char* func_1634(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_1635(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_990(2);
	func_1775(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_1636(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1140484->f_41657.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = &Global_1140484->f_41657.f_1[iVar2 /*2*/];
		iVar3 = func_1776(iVar0, 1);
		if (&Global_1140484->f_30603.f_847[iVar3 /*12*/] == iParam0)
		{
			func_1756(iVar0);
			Global_1140484->f_41657.f_1.f_42 = (Global_1140484->f_41657.f_1.f_42 - 1);
		}
		else
		{
			*(Var6[iVar4 /*2*/]) = { *(Global_1140484->f_41657.f_1[iVar2 /*2*/]) };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		*(Global_1140484->f_41657.f_1[iVar5 /*2*/]) = { *(Var6[iVar5 /*2*/]) };
		iVar5++;
	}
}

void func_1637(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_992(2);
	func_1777(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_1638(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_991(2);
	func_1444(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_1639(int iParam0, bool bParam1, bool bParam2)
{
	func_1448(iParam0, 100f, bParam1, bParam2, 1, 2);
}

int func_1640(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -1591664384;
	if (func_1778(uParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1641(int iParam0)
{
	var uVar0;

	if (func_23() != -1)
	{
		return 0;
	}
	if (func_1459(iParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_1010(iParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_1478(iParam0, 1);
}

void func_1642(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_1013(iParam0) != joaat("weapon"))
	{
		return;
	}
	iVar0 = func_1464(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_1652(iVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_34, iVar0, 0, 0) && func_1062(iParam0, 0, 0, 0) == 0))
		{
			if (func_23() == -1)
			{
				func_1465(iVar0);
			}
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_1490(iParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1643(int iParam0, int iParam1)
{
	if (func_1426(iParam0, 58855631))
	{
		func_1779(iParam0, -915411861, iParam1, 1);
	}
}

int func_1644()
{
	if (((((!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_34, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_34)) && !func_1780(Global_34, 1369124074)) && !func_1780(Global_34, 713668775)) && !TASK::_0xEC7E480FF8BD0BED(Global_34)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_34, false))
	{
		return 1;
	}
	return 0;
}

int func_1645(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

int func_1646(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1647(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_39.f_3434[iVar1]), iVar2);
}

void func_1648(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_39.f_3434[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_39.f_3434[iVar1] = uVar3;
}

void func_1649(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1781(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_1782(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1782(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1782(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_1783(1);
			break;
		case 33:
			func_1784(1);
			break;
		case 34:
			func_1785(1);
			break;
		case 35:
			break;
		case 36:
			func_1786(0);
			break;
		case 37:
			func_1787(0);
			break;
		case 38:
			func_1788(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_1789() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_1515("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_1470(675, 0);
			break;
		case 3:
			if (func_1789() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_1515("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_1470(676, 0);
			break;
		case 4:
			if (func_1789() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_1515("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_1470(677, 0);
			break;
		case 5:
			if (func_1789() && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_1515("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_1470(678, 0);
			break;
		case 23:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			break;
		case 47:
			if (func_23() == -1)
			{
				if (!func_1478(1013902307, 1))
				{
					func_384(1013902307, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_23() == -1)
			{
				if (!func_1478(1013902307, 1))
				{
					func_384(1013902307, 1, 752097756);
				}
				if (!func_1478(142640135, 1))
				{
					func_384(142640135, 1, 752097756);
				}
			}
			break;
		case 48:
			if (func_23() == -1)
			{
				if (!func_1478(786809402, 1))
				{
					func_384(786809402, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_23() == -1)
			{
				if (!func_1478(786809402, 1))
				{
					func_384(786809402, 1, 752097756);
				}
				if (!func_1478(-518019409, 1))
				{
					func_384(-518019409, 1, 752097756);
				}
			}
			break;
		case 22:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 24:
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 43:
			break;
		case 44:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1939178->f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), true);
			break;
		case 51:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_1650(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1193(iParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_1651(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_1652(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x865F36299079FB75(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_1653(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

void func_1654(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_34, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(iParam0))
	{
		iVar2 = func_1790(WEAPON::_0xD3750CCC00635FC2(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_34, iParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_34, &iVar1, iParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_34, iParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_34, iParam0, iVar1);
		}
	}
}

void func_1655(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34) || Global_1939178->f_6)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_34, sVar0, iParam0);
	iVar2 = func_1791();
	func_1792(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_34, sVar1, iVar2);
}

int func_1656(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1063(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_34, WEAPON::_0x5C2EA6C44F515F34(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_1657()
{
	return 0;
}

bool func_1658(int iParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(iParam0));
}

int func_1659(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_0x7AA043F6C41D151E(iParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_1460(49))
			{
				if (!func_1460(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_1460(50))
			{
				if (!func_1460(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_1660(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_1661(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 30)
	{
		return 0;
	}
	if (func_1793(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_1794(iParam0))
	{
		return 0;
	}
	if (func_1795(iParam0))
	{
		return 0;
	}
	if ((Global_1900718->f_67 && !func_1669(iParam0, 1)) || func_1294(32768))
	{
		if (!func_1669(iParam0, 262144) || !Global_1904613->f_8198)
		{
			return 0;
		}
	}
	if (!func_1796())
	{
		return 0;
	}
	return 1;
}

void func_1662(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904613[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1904613)[iParam0] = uVar0;
}

int func_1663(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	int iVar25;

	if (func_23() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_1478(1811977508 /* GXTEntry: "Elk Antler Trinket" */, 1))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_34, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_680(iVar25, 0) && func_1426(iVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_1664(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_1797(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_1674(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_1665(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1798() || func_1799())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_1674(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_1674(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 752097756);
		func_436(func_500(1644987397), iVar1);
	}
}

int func_1666(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	if (Global_1939178->f_6)
	{
		return 0;
	}
	iVar0 = func_1288(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1230("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1223(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1653(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_1226(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_1226(iVar1);
	}
	return 0;
}

bool func_1667(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_680(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_905(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_1590(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_1800(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_1801(iParam0);
	iVar2 = func_1800(&(Global_17172.f_54.f_644.f_1353.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17172.f_54.f_644.f_1353.f_5[iVar2 /*17*/];
}

int func_1668(int iParam0)
{
	switch (iParam0)
	{
		case -59585102: /* GXTEntry: "Tonics Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case 1018123892: /* GXTEntry: "Ingredients Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case 982182330: /* GXTEntry: "Materials Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case -1406390556: /* GXTEntry: "Valuables Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case -1455768246: /* GXTEntry: "Kit Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case -921879912: /* GXTEntry: "Provisions Satchel" */
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

bool func_1669(int iParam0, int iParam1)
{
	return ((Global_1904613->f_31[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

void func_1670(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (&uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case 291123060:
			case 617531372:
				if (&uParam0->f_1[iVar1] == 617531372 || &uParam0->f_1[iVar1] == 291123060)
				{
					bVar0 = true;
				}
				break;
			case 1356624740:
			case 1884295263:
				if (&uParam0->f_1[iVar1] == 1356624740 || &uParam0->f_1[iVar1] == 1884295263)
				{
					bVar0 = true;
				}
				break;
			case -1850666435:
			case 1551239286:
			case 1937393363:
				if ((&uParam0->f_1[iVar1] == 1551239286 || &uParam0->f_1[iVar1] == -1850666435) || &uParam0->f_1[iVar1] == 1937393363)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1671(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_1802(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1803(uParam2, iParam0, Var1);
	return 1;
}

char* func_1672(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1673(int iParam0)
{
	var uVar0;

	if (!func_1804(iParam0, &uVar0, joaat("inventory"), 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

var func_1674(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_1805(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_1675()
{
	return !&Global_1912978;
}

void func_1676(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1912978->f_3)
	{
		if ((((&Global_1912978->f_4[iVar0 /*6*/] == iParam0 && (Global_1912978->f_4[iVar0 /*6*/])->f_2 == bParam2) && (Global_1912978->f_4[iVar0 /*6*/])->f_3 == bParam3) && (Global_1912978->f_4[iVar0 /*6*/])->f_4 == bParam4) && (Global_1912978->f_4[iVar0 /*6*/])->f_5 == bParam5)
		{
			(Global_1912978->f_4[iVar0 /*6*/])->f_1 = ((Global_1912978->f_4[iVar0 /*6*/])->f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1912978->f_3 < 19)
	{
		Global_1912978->f_4[Global_1912978->f_3 /*6*/] = iParam0;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_1 = iParam1;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_2 = bParam2;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_3 = bParam3;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_4 = bParam4;
		(Global_1912978->f_4[Global_1912978->f_3 /*6*/])->f_5 = bParam5;
		Global_1912978->f_3++;
	}
}

int func_1677(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_1678(int iParam0)
{
	if (func_1426(iParam0, -1995062316))
	{
		return "collectible_arrowheads";
	}
	if (func_1426(iParam0, 1239889275))
	{
		return "collectible_liquor_bottles";
	}
	if (func_1426(iParam0, 143267379))
	{
		return "collectible_coins";
	}
	if (func_1426(iParam0, -944041124))
	{
		return "colectible_heirlooms";
	}
	if (func_1426(iParam0, 1562621600))
	{
		return "collectible_jewelry";
	}
	if (func_1426(iParam0, -149719013))
	{
		return "collectible_bird_eggs";
	}
	if (func_1426(iParam0, 1940829793))
	{
		return "collectible_tarot_cards";
	}
	if (func_1426(iParam0, 781094263))
	{
		return "collectible_flowers";
	}
	return "";
}

int func_1679(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_1680(int iParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if ((Var0.f_18[iVar35 /*2*/])->f_1 == 14460646)
			{
				if (&Var0.f_18[iVar35 /*2*/] != 0)
				{
					return &(Var0.f_18[iVar35 /*2*/]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

int func_1681(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1806(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

int func_1682(int iParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	StringCopy(sParam1, func_1807(iParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_1808(iParam0))
	{
		return 0;
	}
	StringCopy(&cVar1, func_1809(iParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return 0;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return 0;
	}
	*sParam1 = { cVar1 };
	return 1;
}

char* func_1683(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_0xD8402B858F4DDD88(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_1684(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1685(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_1810(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1686(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_1811(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1812(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1813(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1814(iVar0);
		}
		uParam1->f_2 = 162343104;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1))
		{
			uParam2->f_5 = func_1815(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_7 = func_1816(iVar0);
	uParam1->f_2 = 1060782978;
	DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
}

bool func_1687(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_23() == 0)
	{
		return func_1817(iParam0);
	}
	return iParam0 <= func_1818();
}

int func_1688(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1225057->f_8943.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 1393257577)
	{
		iVar0 = Global_1225057->f_8943.f_99;
		iVar1 = Global_1225057->f_8943.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (&Global_1225057->f_8943.f_16[iVar0 /*8*/] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1225057->f_8943.f_99;
	Global_1225057->f_8943.f_16[iVar2 /*8*/] = iParam0;
	(Global_1225057->f_8943.f_16[iVar2 /*8*/])->f_5 = iParam2;
	(Global_1225057->f_8943.f_16[iVar2 /*8*/])->f_6 = iParam1;
	Global_1225057->f_8943.f_97++;
	Global_1225057->f_8943.f_99 = (Global_1225057->f_8943.f_99 + 1 % 10);
	return iVar2;
}

int func_1689(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1939178->f_12)
	{
		if ((bParam2 || Global_1939178->f_13 > 0) || Global_1939178->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1939178->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1939178->f_14 > 0 || (bParam2 && Global_1939178->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1939178->f_7)
		{
			if (bParam2 || Global_1939178->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1690(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -915411861) && func_1819(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_1820(iParam0))
	{
		return func_1822(func_1821(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_1823(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532)
		{
			if (iParam5 != 0 && &Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return (Var0[iVar32 /*2*/])->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}

struct<16> func_1691(int iParam0, struct<4> Param1, int iParam5, int iParam6, bool bParam7)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0.f_4 = { Param1 };
	Var0 = { func_684(iParam0, Var0.f_4, iParam5, 1) };
	Var0.f_8 = iParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = iParam5;
	if (bParam7)
	{
		Var0.f_15 = func_681(iParam0, joaat("default"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_973() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_1692(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_1693(int iParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0x748C5F51A18CB8F0(0);
	if (!func_1692(iParam0))
	{
		return;
	}
	func_1824(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_782(iVar0))
		{
			if (func_1826(func_1825(iVar0, 1, 1)) == iParam0)
			{
				func_1827(iVar0, 0);
				func_1828(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_1829(iVar1))
		{
			if (func_1830(iVar1) == iParam0)
			{
				func_1831(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_1694(var uParam0)
{
	func_1832(uParam0, 0);
}

int func_1695(int iParam0, int iParam1)
{
	var uVar0[1];
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!func_1281(iParam1, 0))
	{
		return 0;
	}
	if (!PED::_0xA911EE21EDF69DAF(iParam1))
	{
		return 0;
	}
	iVar2 = func_1833(iParam1, &uVar0, 1);
	if (iVar2 != 1)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(&(uVar0[0])))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(&(uVar0[0])))
	{
		return 0;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uVar0[0]));
	if (iVar3 != iParam0)
	{
		return 0;
	}
	return 1;
}

bool func_1696(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &(((*uParam0)[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&(((*uParam0)[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

int func_1697(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case -1879916235:
			iVar1 = 2;
			break;
		case 967545988:
			iVar1 = 1;
			break;
		case 1332068344:
			iVar1 = 0;
			break;
		case 413028970:
			iVar1 = 3;
			break;
		case 719648503:
			iVar1 = 4;
			break;
		default:
			iVar1 = 5;
			break;
	}
	return iVar1;
}

Vector3 func_1698(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_1699(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!AUDIO::_0xD89504D9D7D5057D(&vParam1))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_1834(vParam1, uParam0);
		if (bParam6)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

int func_1700(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	bVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1701(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_1702()
{
	var uVar0;

	if (func_1570(16))
	{
		uVar0 = Global_1050004->f_12;
	}
	else
	{
		uVar0 = func_1835();
	}
	return uVar0;
}

struct<8> func_1703(int iParam0)
{
	char cVar0[64];

	if (MISC::IS_STRING_NULL_OR_EMPTY((*Global_1050937)[iParam0 /*8*/]))
	{
		StringCopy(&cVar0, "TEAM_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&cVar0), 64);
		return cVar0;
	}
	return *((*Global_1050937)[iParam0 /*8*/]);
}

int func_1704(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	return func_1705(iParam0, iParam1, iParam2, bParam3, bParam4);
}

int func_1705(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 > 1)
	{
		if (bParam3)
		{
			switch (iParam0)
			{
				case 0:
					return -275684858;
				case 1:
					return -1561147190;
				case 2:
					return -736318691;
				case 3:
					return 158864851;
				case 4:
					return 923463928;
				case 5:
					return -317694716;
				case 6:
					return 461388259;
				case 7:
					return 1811916478;
				default:
					break;
			}
			return joaat("COLOR_WHITE");
		}
		if (iParam1 == iParam0)
		{
			return 1765299542;
		}
	}
	else if (bParam4)
	{
		if (iParam2 < 2)
		{
			return joaat("COLOR_WHITE");
		}
		else
		{
			return 1765299542;
		}
	}
	return -1031763995;
}

var func_1706()
{
	return Global_1099294->f_26.f_18;
}

bool func_1707()
{
	return &Global_1048583;
}

float func_1708(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_1;
		case 1:
			return uParam0->f_2;
		case 2:
			return uParam0->f_3;
		case 3:
			return uParam0->f_4;
		default:
			break;
	}
	return 0f;
}

char* func_1709(char* sParam0)
{
	return HUD::_0xD8402B858F4DDD88(sParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0));
}

void func_1710(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	sVar0 = func_1836(uParam0->f_159, uParam0->f_160);
	sVar1 = func_1837(uParam0->f_159, uParam0->f_160);
	sVar2 = func_1838(uParam0->f_159, uParam0->f_160);
	sVar3 = func_1839();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", sVar0);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", sVar1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", sVar2);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "StatRounds", sVar3);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "StatRoundsColor", joaat("COLOR_WHITE"));
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", joaat("COLOR_WHITE"));
}

void func_1711(var uParam0, bool bParam1, bool bParam2)
{
	if (!MISC::IS_BIT_SET(uParam0->f_159, 0) && !MISC::IS_BIT_SET(uParam0->f_159, 17))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat0", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat0Color", joaat("COLOR_WHITE"));
			}
		}
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", func_1836(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
	}
	else if (func_1554(uParam0->f_159))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
		{
			if (bParam2)
			{
				DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
				DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
			}
		}
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_159, 3))
	{
		if (bParam2)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat1", HUD::_GET_LABEL_TEXT("UIC_LDR_RNDW"));
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat1Color", joaat("COLOR_WHITE"));
		}
	}
	if (!func_1554(uParam0->f_159))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat2", func_1837(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat2Color", joaat("COLOR_WHITE"));
	}
	if (!MISC::IS_BIT_SET(uParam0->f_159, 3) || MISC::IS_BIT_SET(uParam0->f_159, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1, "Stat3", func_1838(uParam0->f_159, uParam0->f_160));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "Stat3Color", joaat("COLOR_WHITE"));
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1, "HeadingColor", joaat("COLOR_WHITE"));
}

int func_1712()
{
	return 1;
}

void func_1713(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	char* sVar7;
	float fVar8;

	if (Global_1939067->f_108)
	{
		func_1840(uParam0, uParam1, iParam2, iParam7, iParam8);
	}
	else
	{
		func_1381(uParam0, uParam1);
		iVar2 = PLAYER::PLAYER_ID();
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (!func_1543(&(((*uParam1)[iVar0 /*23*/])->f_14)))
			{
			}
			else
			{
				iVar1++;
				func_1544(uParam0, uParam1, iVar0, bParam4);
				if (bParam3)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", func_1545(uParam1, iVar0));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "Position", iVar1);
				}
				bVar3 = iVar2 == ((*uParam1)[iVar0 /*23*/])->f_14;
				iVar4 = func_1546(uParam0, uParam1, iVar0, iVar2, bVar3);
				if (!bParam6)
				{
					if (!bParam4)
					{
						func_1547(uParam0, uParam1, iVar0, bParam3, iVar4);
					}
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Gamertag", &(((*uParam1)[iVar0 /*23*/])->f_14.f_1));
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "GamertagColor", iVar4);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "CrewTag", func_1548());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Rank", func_1549(((*uParam1)[iVar0 /*23*/])->f_14));
				if (!bParam4)
				{
					if (func_1550())
					{
						if (func_1551(((*uParam1)[iVar0 /*23*/])->f_14))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", true);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", false);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "Spectating", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "ShowRank", true);
					}
				}
				if (bParam4)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat0", func_1552(((*uParam1)[iVar0 /*23*/])->f_11));
				}
				else if (bParam5)
				{
				}
				fVar5 = func_1556((*uParam1)[iVar0 /*23*/], uParam0->f_159);
				fVar6 = func_1555((*uParam1)[iVar0 /*23*/], uParam0->f_159);
				sVar7 = func_1560((*uParam1)[iVar0 /*23*/], uParam0->f_159, uParam0->f_160);
				fVar8 = func_1841((*uParam1)[iVar0 /*23*/]);
				if (((*Global_1049246)[0 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat1", MISC::_0x2B6846401D68E563(fVar5, 0));
				}
				if (((*Global_1049246)[1 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat2", MISC::_0x2B6846401D68E563(fVar6, 0));
				}
				if (((*Global_1049246)[2 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Stat3", MISC::_0x2B6846401D68E563(sVar7, 0));
				}
				if (((*Global_1049246)[3 /*2*/])->f_1 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "StatRounds", MISC::_0x2B6846401D68E563(fVar8, 0));
				}
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_12[iVar0]), "isHighlighted", bVar3);
				if (bVar3)
				{
				}
				if (bParam4 && ((*uParam1)[iVar0 /*23*/])->f_13)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_12[iVar0]), "Blip", "BLIP_MVP");
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", -1777836132);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_12[iVar0]), "BlipColor", iVar4);
				}
			}
			iVar0++;
		}
		uParam0->f_149 = iVar1;
	}
}

struct<16> func_1714(var uParam0, int iParam1)
{
	struct<16> Var0;
	int iVar16;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return Var0;
	}
	if (func_1715() > 0)
	{
		return Var0;
	}
	iVar16 = iParam1;
	switch (func_1716(&Var0, iVar16, 1))
	{
		case 4:
			break;
		case 1:
			func_1717(iVar16, 1);
			break;
		case 2:
			func_1717(iVar16, 1);
			func_1718(&(uParam0->f_162), iParam1, 0);
			break;
		case 3:
			break;
		case 0:
			break;
	}
	return Var0;
}

int func_1715()
{
	return Global_1132968->f_5808.f_325;
}

int func_1716(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar10;
	int iVar11;
	char* sVar12;

	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_1842(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &uVar3);
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, NETWORK::_0xB5C4B18B12A2AF23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					uVar10 = func_1843(iParam2);
					iVar1 = NETWORK::_0x6E2FD8CF7EB10E53(iParam1, uVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_1844(iParam1, iParam2, 0);
						return 1;
					}
					func_1845(iParam1, iParam2, iVar1);
					func_1844(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_1846(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1844(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = NETWORK::_GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar11)
					{
						case 0:
							func_1844(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_1844(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_1846(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1844(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::_0x375F5870A7B8BEC1(sVar12))
					{
						return 3;
					}
					func_1844(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_1846(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1844(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_1717(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = func_1842(iParam0, iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 1:
		case 2:
		default:
			return;
			func_1845(iParam0, iParam1, 0);
			func_1844(iParam0, iParam1, 0);
		case 3:
		case 4:
		case 5:
			iVar2 = func_1846(iParam0, iParam1);
			if (iVar2 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(iVar2);
			}
			func_1844(iParam0, iParam1, 0);
			break;
	}
}

void func_1718(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	MISC::SET_BIT(&iVar1, iVar0);
	func_1847(uParam0, iVar1, iParam2);
}

void func_1719(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;
	struct<8> Var6;
	struct<8> Var14;

	vVar0 = -1;
	vVar0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			SCRIPTS::_0x31010318BA9897AC(&(vVar0.f_2), PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_1848(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_0x20F4CB76689ACDBC(&(vVar0.f_2));
			func_1848(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar3])))
					{
					}
					else if (&Global_1275573->f_154[iVar3] == Global_1275573->f_10)
					{
					}
					else
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1275573->f_154[iVar3]));
					}
					iVar3++;
				}
				func_1849(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_1848(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275573->f_154[iVar3])))
						{
						}
						else if (&Global_1275573->f_154[iVar3] == Global_1275573->f_10)
						{
						}
						else
						{
							SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1275573->f_154[iVar3]));
						}
						iVar3++;
					}
					func_1849(&Var14, uVar5);
				}
			}
		}

void func_1720(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1850(uParam0, 1))
	{
		func_1851(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			(uParam0->f_2[iVar0 /*2*/])->f_1 = iParam2;
			return;
		}
		if ((Global_1951141->f_81[&uParam0->f_2[iVar0 /*2*/] /*12*/])->f_2 > (Global_1951141->f_81[iParam1 /*12*/])->f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				*(uParam0->f_2[iVar1 /*2*/]) = { *(uParam0->f_2[(iVar1 - 1) /*2*/]) };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			(uParam0->f_2[iVar0 /*2*/])->f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_1721(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;

	if (DATAFILE::_0x44B3A36933AC009C(&uVar2, uParam0, -480981886))
	{
		uParam1->f_17 = uVar2;
	}
	else if (!bParam2)
	{
		return 0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, -925732223))
	{
		uParam1->f_3 = iVar0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, joaat("normal")))
	{
		uParam1->f_4 = iVar0;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, joaat("material")))
	{
		uParam1->f_5 = iVar0;
	}
	if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, 2018964076))
	{
		uParam1->f_13 = uVar4;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 723829617))
	{
		uParam1->f_16 = func_1852(iVar0);
	}
	if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, 1802626656))
	{
		uParam1->f_15 = uVar4;
	}
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 939944711))
	{
		uParam1->f_6 = uVar3;
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 917806888))
	{
		uParam1->f_7 = iVar0;
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 1922465595))
		{
			uParam1->f_8 = uVar3;
		}
		if (DATAFILE::_0xB2B42607F7867576(&uVar4, uParam0, -1979206779))
		{
			uParam1->f_14 = uVar4;
		}
	}
	if (DATAFILE::_0x44B3A36933AC009C(&iVar0, uParam0, 333547134))
	{
		uParam1->f_9 = iVar0;
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 1223307134))
		{
			uParam1->f_10 = uVar3;
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, 915180227))
		{
			uParam1->f_11 = uVar3;
		}
		if (DATAFILE::_0x52FC26D2D2FC2987(&uVar3, uParam0, -1231156504))
		{
			uParam1->f_12 = uVar3;
		}
	}
	uParam0->f_1 = 1777366913;
	uParam0->f_2 = joaat("id");
	uParam0->f_3 = 1;
	uParam0->f_4 = uVar2;
	DATAFILE::_0x91DED5DD64BB2691(uParam0);
	if (DATAFILE::_0x52FC26D2D2FC2987(&uVar1, uParam0, -1118674339))
	{
		uParam1->f_1 = uVar1;
	}
	if (bParam3)
	{
		func_1853(uParam1, bParam4);
	}
	return 1;
}

void func_1722(var uParam0, var uParam1, var uParam2, var uParam3)
{
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	uParam0->f_4 = uParam3;
	PED::_0x253A63B5BADBC398(*uParam0, 0, uParam0->f_2, uParam0->f_3, uParam0->f_4);
}

void func_1723(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 > 0 && ((*uParam1)[(iParam2 - 1) /*18*/])->f_1 > ((*uParam1)[iParam2 /*18*/])->f_1)
	{
		func_1854(uParam0, uParam1);
	}
	else
	{
		func_1855(uParam0, (*uParam1)[iParam2 /*18*/]);
	}
}

void func_1724(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		PED::_0x253A63B5BADBC398(*uParam0, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5);
	}
	if (uParam1->f_9 != 0)
	{
		PED::_0x1ED8588524AC9BE1(*uParam0, uParam1->f_2, uParam1->f_9);
		PED::_0x2DF59FFE6FFD6044(*uParam0, uParam1->f_2, uParam1->f_10, uParam1->f_11, uParam1->f_12);
	}
	if (uParam1->f_7 != 0)
	{
		PED::_0xF2EA041F1146D75B(*uParam0, uParam1->f_2, uParam1->f_7, uParam1->f_14, uParam1->f_8);
	}
	if (uParam1->f_15 > 0f)
	{
		PED::_0x057C4F092E2298BE(*uParam0, uParam1->f_2, uParam1->f_15);
	}
	PED::_0x3329AAE2882FC8E4(*uParam0, uParam1->f_2, uParam1->f_6);
	PED::_0x6C76BC24F8BB709A(*uParam0, uParam1->f_2, uParam1->f_13);
}

int func_1725(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 5)
	{
		return 0;
	}
	else if (*uParam2 != 5)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iParam3 < 1)
		{
			Jump @200; //curOff = 49
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @191; //curOff = 67
		}
		else if (((*uParam2)[iVar0 /*6*/])->f_5 == 0)
		{
		}
		else
		{
			*((*uParam0)[*iParam1 /*6*/]) = { *((*uParam2)[iVar0 /*6*/]) };
			((*uParam0)[*iParam1 /*6*/])->f_4 = ((*uParam2)[iVar0 /*6*/])->f_4;
			if (((*uParam2)[iVar0 /*6*/])->f_5 > iParam3)
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = iParam3;
				iParam3 = 0;
			}
			else
			{
				((*uParam0)[*iParam1 /*6*/])->f_5 = ((*uParam2)[iVar0 /*6*/])->f_5;
				iParam3 = (iParam3 - ((*uParam0)[*iParam1 /*6*/])->f_5);
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam4 && iParam3 > 0)
	{
		*iParam1 = 0;
		return 0;
	}
	return 1;
}

int func_1726(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_0x6C9F12700BCE69F4(iParam0, uParam1);
	if (iParam0 == joaat("use"))
	{
		if (func_78(iVar0, 2048))
		{
			return 0;
		}
	}
	else if (func_78(iVar0, 8))
	{
		return 0;
	}
	else if (func_78(iVar0, 16))
	{
		return 0;
	}
	else if (func_78(iVar0, 65536))
	{
		return 0;
	}
	return 1;
}

int func_1727(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_1856(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_1856(iParam1, 2, 0, 0);
	return -1;
}

int func_1728(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_1856(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_1729(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_663(bParam7);
	if (INVENTORY::_0x033EE4B89F3AC545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return 0;
	}
	if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return 0;
	}
	return 1;
}

int func_1730()
{
	return Global_1939231->f_1433.f_4174.f_2083;
}

void func_1731(var uParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_1750(&Var0);
	*uParam0 = { Var0 };
}

int func_1732(int iParam0)
{
	int iVar0;

	if (!func_1618())
	{
		return -1;
	}
	if (!func_1434(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&Global_1132968->f_5525.f_34[iVar0 /*3*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1733(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1434(iParam0))
	{
		return -1;
	}
	iVar2 = func_1857(iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_1610(iVar0);
		if (func_1858(iVar2, iVar1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1734(struct<34> Param0)
{
	if (!func_1859(Param0))
	{
		return false;
	}
	if (func_1737(Param0))
	{
		return true;
	}
	return UNLOCK::_UNLOCK_IS_UNLOCKED(Param0.f_2);
}

int func_1735(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;

	if (!func_1434(Param0))
	{
		return -1;
	}
	if (!func_680(Param0.f_2, 0))
	{
		return -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(Param0.f_3)))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar6 = func_1860(iVar1);
		Var2 = { func_684(iVar6, Param0.f_3, 1635590003, 1) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var2))
		{
		}
		else
		{
			iVar0 = iVar1;
			iVar1++;
		}
	}
	return iVar0;
}

int func_1736(struct<14> Param0, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;

	if (Param0.f_13 >= 2)
	{
		return 0;
	}
	if (!func_1434(Param0))
	{
		return -1;
	}
	if (!func_680(Param0.f_2, 0))
	{
		return -1;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(&(Param0.f_3)))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar7 = func_1860(iVar2);
		Var3 = { func_684(iVar7, Param0.f_3, 1635590003, 1) };
		if (!INVENTORY::_0xB881CA836CC4B6D4(&Var3))
		{
		}
		else
		{
			iVar8 = func_1861(iVar2);
			iVar0 = func_1248(1412640604, Var3, iVar8, 1, 0, 0);
			iVar1 = (iVar1 + iVar0);
			iVar2++;
		}
	}
	return iVar1;
}

bool func_1737(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return func_1862(vParam0.z, 1);
}

int func_1738(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	int iVar0;

	if (!func_1434(vParam0.x))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_1437(iVar0, 1) == vParam0.z)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1739(struct<14> Param0, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return Param0.f_13 >= 2;
}

bool func_1740(struct<34> Param0)
{
	return ((!Param0.f_14 && Param0.f_20) && func_1863(Param0));
}

int func_1741(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return 0;
}

var func_1742(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return (Param0.f_24 || Param0.f_23);
}

bool func_1743(var uParam0)
{
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_1864(*uParam0)) && func_1865(uParam0->f_2, &(uParam0->f_28)));
}

bool func_1744(var uParam0)
{
	if (uParam0->f_26)
	{
		return false;
	}
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_1864(*uParam0)) && func_1866(uParam0->f_2, &(uParam0->f_28)));
}

bool func_1745(struct<34> Param0)
{
	return (((!Param0.f_20 && func_1864(Param0)) && !Param0.f_26) && !Param0.f_27);
}

int func_1746(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return 0;
}

var func_1747(struct<31> Param0, var uParam31, var uParam32, var uParam33)
{
	return (((Param0.f_30 || Param0.f_29) || Param0.f_26) || Param0.f_27);
}

int func_1748(int iParam0, int iParam1)
{
	return func_1690(iParam0, iParam1, 1, 0, 1, 0);
}

int func_1749(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1860(iParam0 + 1);
	return func_1748(iVar0, iParam1);
}

void func_1750(var uParam0)
{
	uParam0->f_9 = -902468816;
	uParam0->f_10 = 291057091;
}

int func_1751(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return -1;
	}
	if (!func_1434(iParam0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&((*Global_1139395)[iVar1 /*34*/])->f_10[iVar0 /*3*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1752(var uParam0, int iParam1)
{
	return func_605(*uParam0, iParam1);
}

char* func_1753(var uParam0)
{
	return MISC::_CREATE_VAR_STRING(42, "MP_ABILITY_CARD_DISPLAY_STRING", MISC::_CREATE_VAR_STRING(0, uParam0->f_8), MISC::_CREATE_VAR_STRING(2, func_1867(uParam0->f_13)));
}

char* func_1754(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46)
{
	if (!func_1766(uParam46->f_13))
	{
		return "NULL";
	}
	return MISC::_CREATE_VAR_STRING(0, (Param0.f_9[uParam46->f_13 /*12*/])->f_11);
}

int func_1755(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	iVar0 = (iVar0 + iParam0 * 32);
	iVar0 = (&Global_1275573 + iVar0);
	iVar1 = func_1868(iVar0, 1);
	if (func_1869(iVar1))
	{
		return iVar1;
	}
	return 0;
}

int func_1756(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_1869(iParam0))
	{
		return 0;
	}
	iVar0 = func_1776(iParam0, 1);
	if (!func_1870(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		return 1;
	}
	iVar3 = func_1871(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar3 /*6*/])->f_5)
	{
		iVar1 = Global_1140484->f_30603[iVar3 /*6*/][iVar4];
		switch (func_1872(iParam0, iVar1))
		{
			case 0:
				func_1873(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1140484->f_30603.f_10924)
				{
					if (&Global_1140484->f_30603.f_8871[iVar5 /*3*/] != iVar1 || (Global_1140484->f_30603.f_8871[iVar5 /*3*/])->f_1 != iParam0)
					{
					}
					else
					{
						func_1873(iVar1, iParam0, iVar4);
						func_1874(Global_1140484->f_30603.f_8871[iVar5 /*3*/]);
						Global_1140484->f_30603.f_10924 = (Global_1140484->f_30603.f_10924 - 1);
						*(Global_1140484->f_30603.f_8871[iVar5 /*3*/]) = { *(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]) };
						func_1874(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @554; //curOff = 357
				iVar2 = func_1875(iVar1, 1);
				func_1876(iVar2, -1);
				if ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_29 <= 0)
				{
					func_1877(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1140484->f_30603.f_8870)
					{
						if (&Global_1140484->f_30603.f_8683[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1140484->f_30603.f_8683[iVar6] = -1;
							Global_1140484->f_30603.f_8870 = (Global_1140484->f_30603.f_8870 - 1);
							Global_1140484->f_30603.f_8683[iVar6] = &Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870];
							Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1140484->f_30603.f_847[iVar0 /*12*/] = -1;
			func_1878(Global_1140484->f_30603.f_847[iVar0 /*12*/]);
			return 1;
		}

void func_1757(var uParam0, var uParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, uParam1->f_11);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, uParam1->f_12);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_5, uParam1->f_10);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_41, func_1879(uParam1->f_1, uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6, *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, func_1615(*uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34, uParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_12, uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13, !uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_35, func_1880(*uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_15, uParam1->f_30);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, uParam1->f_29);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_17, uParam1->f_31);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_18, func_1881(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_19, uParam1->f_24);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_20, uParam1->f_23);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_21, uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_22, (!uParam1->f_14 && uParam1->f_20));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, !uParam1->f_14);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_24, (!uParam1->f_14 && func_1882(4)));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_25, func_1883(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26, func_1884(*uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_27, func_1885(*uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_28, func_1886(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_29, (uParam1->f_31 && func_1886(uParam1)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_30, (uParam1->f_25 && func_1886(uParam1)));
	if (uParam1->f_26)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_319(0));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_1887(0));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_319(func_1888(uParam1->f_17)));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_1887(func_1889(uParam1->f_17)));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_33, uParam1->f_18);
	if (!uParam1->f_21)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_43, func_1890(uParam1->f_16));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_36, uParam1->f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_38, uParam1->f_15);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_40, func_1891(uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_10, uParam1->f_23);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_8, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, false);
}

bool func_1758(int iParam0)
{
	return func_1892() == iParam0;
}

void func_1759(int iParam0)
{
	struct<34> Var0;
	struct<34> Var34;
	int iVar68;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	Var34.f_7 = 1;
	Var34.f_13 = -1;
	Var34.f_15 = -1;
	Var34.f_16 = -1;
	Var34.f_17 = -1;
	Var34.f_18 = -1;
	Var34.f_19 = -1;
	Var34.f_32 = -1;
	iVar68 = 0;
	while (iVar68 < 3)
	{
		Var0 = { Var34 };
		func_1440(iParam0, &Var0, 2, iVar68);
		func_1893(Global_1939231->f_1433.f_4174.f_1797[iVar68 /*46*/], Var0);
		if (func_1894(iVar68))
		{
			func_1895(&(Global_1939231->f_1433.f_4174.f_2034), Var0);
		}
		iVar68++;
	}
}

void func_1760(var uParam0, struct<16> Param1, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	int iVar0;

	func_1757(uParam0, &Param1);
	iVar0 = func_1891(Param1.f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_44, MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOCUS_XP_INFO", Param1.f_15, iVar0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_1896(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_1897(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_1898(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_1899(&Param1));
}

void func_1761(struct<34> Param0)
{
	int iVar0;

	if (!func_1900())
	{
		return;
	}
	iVar0 = func_1730();
	if (func_1618())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_1433.f_4174.f_5, true);
	}
	else if (iVar0 == 1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_1433.f_4174.f_5, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939231->f_1433.f_4174.f_5, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939231->f_1433.f_4174.f_4, func_1901(Param0));
}

int func_1762(int iParam0, bool bParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (func_1618())
	{
		return &(Global_1132968->f_5525.f_34[iParam0 /*3*/]);
	}
	iVar0 = func_1610(iParam0);
	Var1 = { func_1012(bParam1) };
	iVar5 = func_1611(Var1, iVar0, 0, bParam1);
	if (!func_1902(iVar5))
	{
		return 0;
	}
	return func_1613(iVar5);
}

void func_1763(int iParam0, var uParam1, struct<23> Param2, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35)
{
	bool bVar0;

	bVar0 = func_1903(iParam0);
	if (func_1618())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, false);
		func_1757(uParam1, &Param2);
		return;
	}
	func_1757(uParam1, &Param2);
	if (bVar0)
	{
		func_1904(&((Global_1132968->f_5351.f_36[iParam0 /*3*/])->f_2), 1);
	}
	else
	{
		func_1905(&((Global_1132968->f_5351.f_36[iParam0 /*3*/])->f_2), 1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, (bVar0 && func_1906()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, ((bVar0 && func_1906()) && func_1882(0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, (Param2.f_22 && func_1906()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, ((Param2.f_22 && func_1906()) && func_1882(3)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_51, func_1890(func_1907(iParam0)));
}

bool func_1764(int iParam0)
{
	return Global_1939231->f_1433.f_4174.f_2086 == iParam0;
}

void func_1765(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, int iParam35)
{
	func_1908(iParam35, &uParam1);
	func_1757(uParam0, &uParam1);
}

int func_1766(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 2)
	{
		return 1;
	}
	return 0;
}

int func_1767(struct<14> Param0, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	int iVar0;

	if (!func_1434(Param0))
	{
		return 0;
	}
	iVar0 = func_1435(Param0, 1);
	func_1616();
	PLAYER::_0x6B5DDFB967E5073D(&(Global_1275573->f_154[&Global_1275573]), &((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/]));
	if (PLAYER::_0x32348719DCED2969(&(Global_1275573->f_154[&Global_1275573])))
	{
		if (func_1257(0))
		{
			PLAYER::_0x83FCD6921FC8FD05(&(Global_1275573->f_154[&Global_1275573]), 6);
		}
		else
		{
			PLAYER::_0x83FCD6921FC8FD05(&(Global_1275573->f_154[&Global_1275573]), 7);
		}
	}
	PLAYER::_0x7146CF430965927C(23, !((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_1);
	PLAYER::_0x7146CF430965927C(22, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_2);
	PLAYER::_0x7146CF430965927C(21, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_2);
	PLAYER::_0x7146CF430965927C(7, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_3);
	PLAYER::_0x7146CF430965927C(12, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_4);
	PLAYER::_0x7146CF430965927C(8, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_5);
	PLAYER::_0x7146CF430965927C(18, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_6);
	PLAYER::_0x7146CF430965927C(9, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_7);
	PLAYER::_0x7146CF430965927C(10, ((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_8);
	PLAYER::_0x7146CF430965927C(14, !((Global_1132968->f_11.f_1556[iVar0 /*46*/])->f_9[Param0.f_13 /*12*/])->f_9);
	PLAYER::_0x95EE1DEE1DCD9070(&(Global_1275573->f_154[&Global_1275573]), 1);
	return 1;
}

int func_1768(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_1869(iParam0))
	{
		return 0;
	}
	iVar0 = func_1776(iParam0, 1);
	if (!func_1870(iParam1))
	{
		return 0;
	}
	iVar1 = func_1871(iParam1, 1);
	if (&Global_1140484->f_30603.f_847[iVar0 /*12*/] == iParam1)
	{
		return 1;
	}
	if (func_1870(&(Global_1140484->f_30603.f_847[iVar0 /*12*/])))
	{
		func_1756(iParam0);
	}
	Global_1140484->f_30603.f_847[iVar0 /*12*/] = iParam1;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603[iVar1 /*6*/])->f_5)
	{
		iVar2 = Global_1140484->f_30603[iVar1 /*6*/][iVar4];
		iVar3 = func_1875(iVar2, 1);
		switch (func_1909(iParam0, iVar2))
		{
			case 0:
				func_1910(iVar2, iParam0, iVar4);
				break;
			case 1:
				Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/] = iVar2;
				(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/])->f_1 = iParam0;
				(Global_1140484->f_30603.f_8871[Global_1140484->f_30603.f_10924 /*3*/])->f_2 = iVar4;
				Global_1140484->f_30603.f_10924++;
				break;
			case 2:
				Jump @391; //curOff = 312
				if ((Global_1140484->f_30603.f_2900[iVar3 /*31*/])->f_29 <= 0)
				{
					Global_1140484->f_30603.f_8683[Global_1140484->f_30603.f_8870] = iVar2;
					Global_1140484->f_30603.f_8870++;
				}
				func_1876(iVar3, 1);
				iVar4++;
			}
			return 1;
		}

float func_1769(int iParam0)
{
	return (PLAYER::_0x592F58BC4D2A2CF3(iParam0, 0) - IntToFloat(func_1911(2)));
}

int func_1770(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

char* func_1771(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_1772(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_1773(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_997(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1954472->f_1331.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1954472->f_1465.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_1774(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_997(2);
	}
	switch (iParam2)
	{
		case 0:
			(Global_1954472->f_1331.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		case 1:
			(Global_1954472->f_1465.f_2.f_16[iParam0 /*3*/])->f_2 = uParam1;
			break;
		default:
			break;
	}
}

void func_1775(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

int func_1776(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2006026692:
			return 166;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 163;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1631930150:
			return 161;
		case -1629969648:
			return 164;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 162;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 167;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 171;
		case 320758674:
			return 158;
		case 352539363:
			return 169;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 165;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1498983922:
			return 84;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1614000521:
			return 170;
		case 1636352616:
			return 151;
		case 1662680949:
			return 168;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_1777(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1275573->f_8;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_0xC3D4B754C0E86B9E(iParam1, fParam0);
}

int func_1778(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_663(bParam3);
	}
	if (!INVENTORY::_0x22E590F108289A9D(iParam4, uParam0, iParam1, &uVar0))
	{
		return 0;
	}
	if (!func_1279(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_1779(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_680(iParam0, 0) && !func_1273(func_1272(iParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_1780(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_1781(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_1782(int iParam0)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1954472->f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954472->f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954472->f_5.f_7, iParam0);
		if (iVar0 == &Global_1954472->f_5.f_14[iParam0 /*82*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954472->f_5.f_7, iParam0, "pause_info_panel_list", &(Global_1954472->f_5.f_14[iParam0 /*82*/]));
}

void func_1783(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 440, !bParam0);
}

void func_1784(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 439, !bParam0);
}

void func_1785(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_34))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_34) || PED::IS_PED_INJURED(Global_34))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_34, 438, !bParam0);
}

void func_1786(bool bParam0)
{
	int iVar0;

	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(iVar0);
	}
}

void func_1787(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_1788(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_1789()
{
	return 1;
	if (Global_1572887->f_13 == 0)
	{
		return 1;
	}
	return Global_39.f_1;
}

int func_1790(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_1791()
{
	return &Global_1902689;
}

void func_1792(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1912(*iParam0);
	iVar1 = func_1913(*iParam0);
	iVar2 = func_1914(*iParam0);
	iVar3 = func_1915(*iParam0);
	iVar4 = func_1916(*iParam0);
	iVar5 = func_1917(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_1918(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1918(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_1919(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_1793(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(&(Global_17172.f_2563[iParam0]), iParam1);
}

int func_1794(int iParam0)
{
	if (func_1669(iParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_1795(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 98304 == 0)
	{
		return 0;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3327)
	{
		if ((Global_39.f_3327[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if ((Global_1904613->f_31[iParam0 /*9*/])->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3327[iVar0 /*3*/] - iVar1);
			if ((Global_39.f_3327[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && (Global_1904613->f_31[iParam0 /*9*/])->f_2 & 32768 != 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1796()
{
	if (!func_17())
	{
		return 0;
	}
	return Global_1904613->f_8196;
}

void func_1797(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1920())
	{
		Global_1912978->f_125 = MISC::GET_GAME_TIMER();
		Global_1912978->f_126 = iParam1;
	}
	Global_1912978->f_127 = (Global_1912978->f_127 + iParam0);
}

bool func_1798()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

bool func_1799()
{
	return DLC::IS_DLC_PRESENT(-2112896652);
}

int func_1800(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (((*uParam0)[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if (((*uParam0)[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1801(int iParam0)
{
	int iVar0;

	iVar0 = func_905(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

void func_1802(var uParam0)
{
	func_1670(uParam0, 143479330);
	if (func_1420() == 2026485318)
	{
		func_1670(uParam0, 617531372);
	}
	else
	{
		func_1670(uParam0, 291123060);
	}
}

void func_1803(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;

	if (!func_433(uParam0))
	{
		return;
	}
	if (Global_1272170->f_2518 < 20)
	{
		Global_1272170->f_2518++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_2518.f_1[iVar0 /*21*/]) = { *(Global_1272170->f_2518.f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1272170->f_2518.f_1[(Global_1272170->f_2518 - 1) /*21*/]) = { Var1 };
}

int func_1804(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1805(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_1806(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if ((Var0[iVar43 /*2*/])->f_1 == iParam1)
			{
				iVar41 = &Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_1807(int iParam0)
{
	int iVar0;

	if (!func_680(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_1480(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_1808(int iParam0)
{
	if (func_905(iParam0) == -126813555 || func_905(iParam0) == 1946043663)
	{
		return 1;
	}
	return 0;
}

char* func_1809(int iParam0)
{
	int iVar0;

	if (!func_680(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_1680(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(iVar0);
}

int func_1810(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("challenge");
			break;
		case -3:
			iVar0 = 1300413597;
			break;
		case 1:
			iVar0 = -1841318328;
			break;
		case -2:
			iVar0 = joaat("gold");
			break;
		case 2:
			iVar0 = -1599460565;
			break;
		case 3:
			iVar0 = 1610555441;
			break;
		case 4:
			iVar0 = 2080488347;
			break;
		case 5:
			iVar0 = 1107336882;
			break;
		case 6:
			iVar0 = -1307562954;
			break;
		case 7:
			iVar0 = 1198585370;
			break;
		case 8:
			iVar0 = 1753821005;
			break;
		case 9:
			iVar0 = joaat("property");
			break;
		case 10:
			iVar0 = 1894568478;
			break;
		case 11:
			iVar0 = joaat("title");
			break;
		case 12:
			iVar0 = joaat("shop");
			break;
		case 13:
			iVar0 = 1252941330;
			break;
		case 14:
			iVar0 = -1930354636;
			break;
		case 15:
			iVar0 = 1332629624;
			break;
		case 16:
			iVar0 = 1746212499;
			break;
		case 17:
			iVar0 = 1859328971;
			break;
		case 18:
			iVar0 = 1151893103;
			break;
		case 19:
			iVar0 = -312924468;
			break;
	}
	return iVar0;
}

int func_1811(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1921(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1812(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case -66250361:
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case -1261475678:
			return 10;
		case -621956193:
			return 11;
		case 1081776803:
			return 12;
		case -218697175:
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case 1724417419:
			return 16;
		case -728200180:
			return 17;
		case 1404415665:
			return 18;
		case 339077182:
			return 20;
		case 650120418:
			return 21;
		case 1695693301:
			return 28;
		case -1809176396:
			return 19;
		case 349772825:
			return 22;
		case 1657045547:
			return 23;
		case -590482787:
			return 24;
		case -1711308722:
			return 25;
		case -409129282:
			return 26;
		case -1790985606:
			return 27;
		default:
			break;
	}
	return -1;
}

int func_1813(int iParam0)
{
	switch (iParam0)
	{
		case -747096482:
			return 0;
		case 390152599:
			return 1;
		case 348001928:
			return 2;
		case 687137831:
			return 3;
		case 1221273613:
			return 4;
		case -669486032:
			return 5;
		case -1044132584:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_1814(int iParam0)
{
	switch (iParam0)
	{
		case 1697883736:
			return 0;
		case 1927192818:
			return 1;
		case -1363591469:
			return 2;
		case 1635448909:
			return 3;
		case -604494871:
			return 4;
		case -993281498:
			return 5;
		case -1871525158:
			return 6;
		case -596286663:
			return 12;
		case 923956646:
			return 13;
		case 1459450644:
			return 14;
		case -2071675432:
			return 15;
		case -552339597:
			return 7;
		case 2144670272:
			return 9;
		case 996459079:
			return 8;
		case 1996177174:
			return 10;
		case -1702168032:
			return 11;
		default:
			break;
	}
	return -1;
}

int func_1815(int iParam0)
{
	switch (iParam0)
	{
		case 2049341823:
			return 0;
		case 1655635003:
			return 1;
		case -435635781:
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case -568832219:
			return 8;
		case -1103026985:
			return 9;
		default:
			break;
	}
	return 0;
}

int func_1816(int iParam0)
{
	switch (iParam0)
	{
		case joaat("null"):
			return -1;
		case joaat("normal"):
			return 0;
		case -640677282:
			return 1;
		case -1950303839:
			return 2;
		case 1322114923:
			return 3;
		case -525004462:
			return 4;
		case 1419735597:
			return 5;
		case 1004744465:
			return 6;
		case joaat("bountyhunter"):
			return 7;
		case 1777227915:
			return 8;
		case 408825843:
			return 9;
		case joaat("hunter"):
			return 10;
		case 64621749:
			return 11;
		case -1346830927:
			return 12;
		case -218234180:
			return 13;
		case 751663875:
			return 14;
		case 1766283257:
			return 15;
		case -269943670:
			return 16;
		case 522313648:
			return 17;
		default:
			break;
	}
	return -1;
}

bool func_1817(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_1818()
{
	if (func_23() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_1819(int iParam0, int iParam1)
{
	if (!func_680(iParam0, 0))
	{
		return false;
	}
	if (func_1820(iParam0))
	{
		return func_1922(func_1821(iParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1) > 0;
}

int func_1820(int iParam0)
{
	if (func_1426(iParam0, 75135761))
	{
		return 1;
	}
	return 0;
}

int func_1821(int iParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_680(iParam0, 0))
	{
		return func_1923(func_1272(iParam0), bParam1);
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && NETWORK::_0xFBE782B3165AC8EC(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

int func_1822(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_1924(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32 /*2*/] == 2084597891 || &Var0[iVar32 /*2*/] == 773203532) || &Var0[iVar32 /*2*/] == -1295114026)
		{
			return (Var0[iVar32 /*2*/])->f_1;
		}
		else if (&Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

int func_1823(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_680(iParam0, 0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return 0;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xAD73B614DF26CF8A(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_1925(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

void func_1824(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1692(iParam0))
	{
		return;
	}
	if (func_1926(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_1927(iParam0, 1);
	}
	else
	{
		func_1928(iParam0, 1);
	}
	func_1929(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_1830(iVar0) == iParam0)
		{
			func_1831(iVar0, 0);
		}
		iVar0++;
	}
}

int func_1825(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 81:
			if (func_1930(iParam0))
			{
				return 305496830;
			}
			else
			{
				return -1482428221;
			}
			break;
		case 111:
			if (func_1930(iParam0))
			{
				return -1323821455;
			}
			else
			{
				return -1994249944;
			}
			break;
		case 5:
			if (func_23() != -1 && func_1931() == 1339372314)
			{
				return 1339372314;
			}
			else
			{
				return 1559741032;
			}
			break;
		case 66:
			return 60667583;
		case 83:
			return 1758133584;
		case 26:
			return -577559008;
		case 40:
			if (!bParam1 || func_23() != -1)
			{
				return 1624541293;
			}
			if (func_1460(44))
			{
				return 1624541293;
			}
			else
			{
				return 1716860278;
			}
			break;
		case 98:
			if (func_23() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 1637569166;
			}
			break;
		case 70:
			return -867798278;
		case 74:
			return 1543937523;
		case 99:
			return 1030875135;
		case 101:
			return -201437056;
		case 62:
			return 794246846;
		case 3:
			return -968357677;
		case 33:
			return 728480338;
		case 87:
			if (func_23() != -1)
			{
				return 1178102426;
			}
			else
			{
				return 725489698;
			}
			break;
		case 37:
			return 183652754;
		case 60:
			if (func_23() != -1)
			{
				return -1147969487;
			}
			else
			{
				return 2056744450;
			}
			break;
		case 134:
			return 963280223;
		case 127:
			return -256309418;
		case 131:
			return 1666986024;
		case 121:
			return 251328732;
		case 135:
			if (func_23() != -1)
			{
				return -877373104;
			}
			if (!bParam1)
			{
				return 1024208566;
			}
			if (func_1460(44))
			{
				return 1024208566;
			}
			else
			{
				return 1640255731;
			}
			break;
		case 22:
			return 965626876;
		case 39:
			return -497792649;
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return -1990305778;
	}
	if (bParam2)
	{
		iVar0 = func_1932(iParam0);
		if (iVar0 != -1)
		{
			return func_1933(iVar0, bParam1);
		}
	}
	return 0;
}

int func_1826(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2126166785:
			return -1;
		case -2119728378:
		case -1482428221:
		case -1391142299:
		case -867798278:
		case 183652754:
		case 305496830:
		case 725489698:
		case 1178102426:
		case 1543937523:
		case 1637569166:
		case 1758133584:
		case 2056744450:
			return 1;
		case -2137625828:
		case -1994249944:
		case -1323821455:
		case -968357677:
		case -201437056:
		case 493546894:
		case 728480338:
		case 1030875135:
		case 1559741032:
		case 1608357655:
			return 2;
		case -1147969487:
			return 0;
		case 60667583:
		case 537788226:
		case 794246846:
			return 5;
		case -1990305778:
		case -1738342532:
		case -1679988168:
		case -1308265478:
		case -650528936:
		case -577559008:
		case -497792649:
		case 139139039:
		case 965626876:
		case 1039226266:
		case 1624541293:
		case 1716860278:
			return 3;
		case -1618764825:
		case -877373104:
		case -256309418:
		case 251328732:
		case 963280223:
		case 1024208566:
		case 1640255731:
		case 1666986024:
			return 4;
	}
	return -1;
}

void func_1827(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_782(iParam0))
	{
		return;
	}
	bVar0 = func_786(iParam0, 67108864);
	if (bParam1)
	{
		if (!bVar0)
		{
			func_1934(iParam0, func_1791());
			func_1935(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_1104(iParam0, 67108864);
		func_1934(iParam0, -15);
	}
	func_1936(iParam0);
}

void func_1828(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_782(iParam0))
	{
		return;
	}
	if (func_1937(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1887327)[iParam0 /*36*/])->f_6))
	{
		iVar0 = ((*Global_1887327)[iParam0 /*36*/])->f_6;
	}
	else
	{
		iVar0 = func_1938(iParam0);
	}
	bVar1 = func_786(iParam0, 33554432);
	if (bParam1)
	{
		iVar2 = func_1939(iParam0);
		if (iParam2 > iVar2)
		{
			func_1940(iParam0, func_1791());
			func_1941(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_1935(iParam0, 33554432);
			if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
			{
				if (iParam0 == 40)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_1104(iParam0, 33554432);
		func_1940(iParam0, -15);
		if (VOLUME::_0x92A78D0BEDB332A3(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_1942(iParam0);
}

bool func_1829(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_1830(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_1831(int iParam0, bool bParam1)
{
	if (!func_1829(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1943(iParam0, 1);
	}
	else
	{
		if (func_1944(iParam0))
		{
			return;
		}
		func_1945(iParam0, 1);
	}
	func_1946(iParam0, bParam1);
}

void func_1832(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_1947() - iParam1);
	func_400(uParam0, 1);
	func_401(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_1833(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!PED::_0xA911EE21EDF69DAF(iParam0))
	{
		return iVar4;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else
		{
			(*uParam1)[iVar4] = iVar1;
			iVar4++;
			if (iVar4 == iParam2)
			{
			}
			else
			{
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iVar4;
		}
	}

void func_1834(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam3[iVar0 /*4*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam3[iVar0 /*4*/]))
			{
				if (!AUDIO::IS_PED_IN_CURRENT_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], 0))
				{
					AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, uParam3[iVar0 /*4*/], &(((*uParam3)[iVar0 /*4*/])->f_1));
				}
			}
		}
		iVar0++;
	}
}

int func_1835()
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller")) != 0)
	{
		return 0;
	}
	else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-701235215) != 0)
	{
		return 1;
	}
	return 2;
}

char* func_1836(int iParam0, int iParam1)
{
	if (func_1707())
	{
		return func_1948(0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) || MISC::IS_BIT_SET(iParam0, 17)) || MISC::IS_BIT_SET(iParam0, 18))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_TIME");
	}
	else if (MISC::IS_BIT_SET(iParam0, 19))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_HOOKED");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ROUNDUP_LEADERBOARD_TOTAL");
	}
	return MISC::_CREATE_VAR_STRING(2, "UIC_LB_KILLS");
}

char* func_1837(int iParam0, int iParam1)
{
	if (func_1707())
	{
		return func_1948(1);
	}
	else if (func_1554(iParam0) || func_1561(iParam0))
	{
		return "";
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 1))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_KILLS");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return HUD::_GET_LABEL_TEXT("UIC_LB_TIME");
		}
		else
		{
			return func_1949(iParam0);
		}
	}
	else if (func_1553(iParam0) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 8))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_VAL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 20))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_ACC");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_CAUGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_HUNTING_LEADERBOARD_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_ALIVE");
	}
	return HUD::_GET_LABEL_TEXT("UIC_LB_DEATHS");
}

char* func_1838(int iParam0, int iParam1)
{
	if (func_1707())
	{
		return func_1948(2);
	}
	else if (MISC::IS_BIT_SET(iParam0, 13))
	{
		return HUD::_GET_LABEL_TEXT("FM_POSSE_RACE_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 9))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_GOODS_TRAIN_LEADERBOARD_GOODS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 7))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_WRECKAGE_LEADERBOARD_FOUND");
	}
	else if (MISC::IS_BIT_SET(iParam0, 6))
	{
		if (MISC::IS_BIT_SET(iParam0, 0))
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_DEATHS");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
		}
	}
	else if (MISC::IS_BIT_SET(iParam0, 3) && MISC::IS_BIT_SET(iParam0, 0))
	{
		return func_1949(iParam0);
	}
	else if ((MISC::IS_BIT_SET(iParam0, 0) && !MISC::IS_BIT_SET(iParam0, 17)) && !func_1561(iParam0))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_DEATHS");
	}
	else if (func_1554(iParam0) && !func_1561(iParam0))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_KILLS");
	}
	else if (MISC::IS_BIT_SET(iParam0, 2) || MISC::IS_BIT_SET(iParam0, 19))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_CAPS");
	}
	else if (MISC::IS_BIT_SET(iParam1, 2))
	{
		return MISC::_CREATE_VAR_STRING(2, "UIC_LB_DEL");
	}
	else if (MISC::IS_BIT_SET(iParam0, 14))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_BOUT");
	}
	else if (MISC::IS_BIT_SET(iParam0, 21))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_TA");
	}
	else if (MISC::IS_BIT_SET(iParam1, 3))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_FISHING_LEADERBOARD_WEIGHT");
	}
	else if (MISC::IS_BIT_SET(iParam1, 4))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 6))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_LEADERBOARD_SCORE");
	}
	else if (MISC::IS_BIT_SET(iParam1, 8))
	{
		return MISC::_CREATE_VAR_STRING(2, "FM_ESC_CONVICTS_LEADERBOARD_DEAD");
	}
	return HUD::_GET_LABEL_TEXT("UIC_LB_SCORE");
}

char* func_1839()
{
	if (func_1707())
	{
		return func_1948(3);
	}
	return "";
}

void func_1840(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<8> Var7;
	char[] cVar15[8];
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	float fVar21[8];
	var uVar30[8];
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	char* sVar43;

	iVar4 = 0;
	iVar5 = 32;
	iVar6 = PLAYER::PLAYER_ID();
	bVar16 = ((*Global_1049264)[0 /*2*/])->f_1 == -1128715836;
	bVar17 = ((*Global_1049264)[0 /*2*/])->f_1 == 1691389412;
	bVar18 = ((*Global_1049264)[0 /*2*/])->f_1 == 2105734739;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Position", "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "Gamertag", "");
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar2]), "GamertagColor", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar2]), "StatPriority", "");
		iVar2++;
	}
	bVar19 = MISC::IS_BIT_SET(uParam0->f_159, 6);
	if (bVar16 && uParam0->f_150 > 0)
	{
		bVar20 = MISC::IS_BIT_SET(uParam0->f_159, 5);
		if ((bVar17 || bVar18) && func_1702() == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				fVar21[iVar0] = BUILTIN::TO_FLOAT(Global_1050928[iVar0]);
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (uParam1[iVar0 /*23*/] != -1 && uParam1[iVar0 /*23*/] < 8)
				{
					if (func_1950((*uParam1)[iVar0 /*23*/], 0) != -1f)
					{
						fVar21[uParam1[iVar0 /*23*/]] = (&fVar21[uParam1[iVar0 /*23*/]] + func_1950((*uParam1)[iVar0 /*23*/], 0));
					}
				}
				iVar0++;
			}
		}
		iVar5 = uParam0->f_150;
		func_1562(iParam2, &uVar30, uParam0->f_150, bVar19);
		func_1563(uParam0, iParam3, &uVar30, &iVar4, &iVar5);
		iVar2 = 0;
		while (iVar2 <= (iVar5 - 1))
		{
			iVar39 = &uVar30[iVar2];
			if (iVar2 == 0 || iVar2 >= iVar4)
			{
				if (iVar39 < 8 && iVar39 != -1)
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar2 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						Var7 = { func_1703(iVar39) };
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &Var7);
						iVar40 = func_1704(iVar39, iParam4, uParam0->f_150, bVar20, iParam4 == iVar39);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar40);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", MISC::_0x2B6846401D68E563(&(fVar21[iVar39]), uParam0->f_151));
					}
				}
			}
			iVar2++;
		}
	}
	else
	{
		func_1565(uParam1, iParam3, &iVar4, &iVar5);
		iVar1 = 0;
		while (iVar1 <= iVar5)
		{
			if (iVar3 == 0 || iVar1 >= iVar4)
			{
				if (func_1543(&(((*uParam1)[iVar1 /*23*/])->f_14)))
				{
					iVar3++;
					if (iVar3 < 5)
					{
						IntToString(&cVar15, iVar1 + 1, 8);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Position", &cVar15);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "Gamertag", &(((*uParam1)[iVar1 /*23*/])->f_14.f_1));
						bVar41 = iVar6 == ((*uParam1)[iVar1 /*23*/])->f_14;
						iVar42 = func_1546(uParam0, uParam1, iVar1, iVar6, bVar41);
						DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam0->f_143[iVar3]), "GamertagColor", iVar42);
						sVar43 = "";
						sVar43 = MISC::_0x2B6846401D68E563(func_1950((*uParam1)[iVar1 /*23*/], 0), 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam0->f_143[iVar3]), "StatPriority", sVar43);
					}
				}
			}
			iVar1++;
		}
	}
}

float func_1841(var uParam0)
{
	if (func_1707())
	{
		func_1708(uParam0, 3);
	}
	return -1f;
}

int func_1842(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &((Global_1132968->f_5808[iParam0 /*10*/])->f_5[iParam1]);
}

int func_1843(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
		}

void func_1844(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	(Global_1132968->f_5808[iParam0 /*10*/])->f_5[iParam1] = iParam2;
}

void func_1845(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	(*Global_1132968->f_5808[iParam0 /*10*/])[iParam1] = iParam2;
}

int func_1846(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1132968->f_5808[iParam0 /*10*/][iParam1];
}

void func_1847(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam1 == 0)
	{
		return;
	}
	Var0.f_1 = 1;
	Var0 = 2;
	Var0.f_3 = iParam2;
	iVar4 = iParam1;
	Var0.f_2 = iVar4;
	func_1719(&Var0);
	uParam0->f_33 = (uParam0->f_33 || iParam1);
}

void func_1848(vector3 vParam0)
{
	if (Global_1132968->f_5808.f_325 >= 50)
	{
		return;
	}
	if (vParam0.x == -1)
	{
		return;
	}
	*(Global_1132968->f_5808.f_326[Global_1132968->f_5808.f_324 /*3*/]) = { vParam0 };
	Global_1132968->f_5808.f_324 = (Global_1132968->f_5808.f_324 + 1 % 50);
	Global_1132968->f_5808.f_325++;
}

void func_1849(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 182;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 3, &uParam1);
}

bool func_1850(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1851(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1852(int iParam0)
{
	switch (iParam0)
	{
		case 377740851:
			return 0;
		case -897347426:
			return 1;
		case -409773112:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_1853(var uParam0, bool bParam1)
{
	int iVar0;
	struct<17> Var1;
	int iVar18;
	struct<4> Var19;

	Var1.f_9 = 1;
	Var1.f_11 = -1591664384;
	iVar0 = func_1951(uParam0->f_17);
	if (iVar0 == 0)
	{
		return;
	}
	iVar18 = *uParam0;
	Var19 = { func_684(889965687 /* GXTEntry: "Wardrobe" */, func_1012(1), 1034665895, 1) };
	if (bParam1 && iVar18 != func_1455(Var19, iVar0, 1, -1))
	{
		return;
	}
	Var1 = { func_1952(func_684(iVar18, Var19, iVar0, 1), 1, 0) };
	if (Var1.f_16 <= 0)
	{
		return;
	}
	uParam0->f_13 = func_1953(Var1.f_16);
}

void func_1854(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;

	iVar1 = (uParam0->f_6 - 1);
	Var2.f_2 = -1;
	Var2.f_13 = 1065353216;
	Var2.f_14 = 1065353216;
	iVar0 = (uParam0->f_6 - 1);
	while (iVar0 >= 1)
	{
		if (((*uParam1)[iVar0 /*18*/])->f_1 < ((*uParam1)[(iVar0 - 1) /*18*/])->f_1)
		{
			PED::_0x96C349DE04C49011(*uParam0, ((*uParam1)[(iVar0 - 1) /*18*/])->f_2);
			Var2 = { *((*uParam1)[iVar0 /*18*/]) };
			*((*uParam1)[iVar0 /*18*/]) = { *((*uParam1)[(iVar0 - 1) /*18*/]) };
			*((*uParam1)[(iVar0 - 1) /*18*/]) = { Var2 };
			iVar1 = (iVar0 - 1);
		}
	else
	{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	iVar0 = iVar1;
	while (iVar0 <= (uParam0->f_6 - 1))
	{
		func_1855(uParam0, (*uParam1)[iVar0 /*18*/]);
		iVar0++;
	}
}

void func_1855(var uParam0, var uParam1)
{
	uParam1->f_2 = PED::_0x86BB5FF45F193A02(*uParam0, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_16, uParam1->f_13, uParam1->f_6);
	func_1724(uParam0, uParam1, 0);
}

void func_1856(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1272170->f_20)
	{
		if (&Global_1272170->f_20.f_1[iVar0 /*20*/] == iParam0)
		{
			if ((Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 == iParam1)
			{
			}
			else
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_2 = iParam2;
				(Global_1272170->f_20.f_1[iVar0 /*20*/])->f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_1954(iParam0, iParam1, iParam2, iParam3);
}

int func_1857(int iParam0)
{
	if (!func_1434(iParam0))
	{
		return 0;
	}
	return (Global_1132968->f_11.f_1556[func_1435(iParam0, 1) /*46*/])->f_2;
}

int func_1858(int iParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;

	if (!func_1902(iParam0))
	{
		return 0;
	}
	Var0 = { func_1012(bParam2) };
	if (func_1248(iParam0, Var0, iParam1, bParam2, 0, 0) >= 1)
	{
		return 1;
	}
	return 0;
}

int func_1859(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	if (func_1426(vParam0.z, 216050813))
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1387714323))
		{
			return 0;
		}
	}
	return 1;
}

int func_1860(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1955(iVar0);
}

int func_1861(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1956(iVar0);
}

int func_1862(int iParam0, bool bParam1)
{
	struct<4> Var0;

	if (!func_1902(iParam0))
	{
		return 0;
	}
	Var0 = { func_1012(bParam1) };
	if (func_1248(iParam0, Var0, -1060513333, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1248(iParam0, Var0, 1317351007, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1248(iParam0, Var0, -500478573, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1248(iParam0, Var0, -806573802, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1248(iParam0, Var0, -1109949204, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	return 0;
}

bool func_1863(struct<16> Param0, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return Param0.f_15 >= func_1891(Param0.f_13);
}

bool func_1864(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return UNLOCK::_UNLOCK_IS_VISIBLE(vParam0.z);
}

bool func_1865(int iParam0, var uParam1)
{
	*uParam1 = func_1957(iParam0, 1);
	return *uParam1 != 0;
}

bool func_1866(int iParam0, var uParam1)
{
	*uParam1 = func_1958(iParam0, 1, 0);
	return *uParam1 != 0;
}

var func_1867(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	return func_1959(iVar0);
}

int func_1868(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -126580932;
		case 1:
			return 0;
		case 2:
			return 698214003;
		case 3:
			return 780689752;
		case 4:
			return 1698995037;
		case 5:
			return 408582472;
		case 6:
			return -1100659165;
		case 7:
			return -1248720641;
		case 8:
			return -286632741;
		case 9:
			return 956867472;
		case 10:
			return 1036630721;
		case 11:
			return 1138017610;
		case 12:
			return -33431232;
		case 13:
			return -2101912686;
		case 14:
			return 846387993;
		case 15:
			return -1840995238;
		case 16:
			return 1585362808;
		case 17:
			return -425216802;
		case 18:
			return -1722264360;
		case 19:
			return -1288042557;
		case 20:
			return 1828803907;
		case 21:
			return -343572565;
		case 22:
			return 1095779900;
		case 23:
			return 1444077748;
		case 24:
			return 952755846;
		case 25:
			return 420477860;
		case 26:
			return 2132307595;
		case 27:
			return -1919393558;
		case 28:
			return 1374979106;
		case 29:
			return 114587291;
		case 30:
			return -900877140;
		case 31:
			return -660114191;
		case 32:
			return -1767662471;
		case 33:
			return 878491929;
		case 34:
			return 398279342;
		case 35:
			return 550487527;
		case 36:
			return 713106899;
		case 37:
			return -1719665775;
		case 38:
			return -1170784825;
		case 39:
			return -1010031245;
		case 40:
			return -29822088;
		case 41:
			return 1323028278;
		case 42:
			return 797908556;
		case 43:
			return 1907663129;
		case 44:
			return -60432888;
		case 45:
			return -1209874968;
		case 46:
			return 1078589127;
		case 47:
			return -1525233154;
		case 48:
			return 1278022357;
		case 49:
			return -1729554078;
		case 50:
			return -1480068681;
		case 51:
			return 926420921;
		case 52:
			return 1195903441;
		case 53:
			return -649929946;
		case 54:
			return 1829805500;
		case 55:
			return -1855662261;
		case 56:
			return 111084081;
		case 57:
			return 149216078;
		case 58:
			return -1920464018;
		case 59:
			return 659100749;
		case 60:
			return -1378468884;
		case 61:
			return -1575244501;
		case 62:
			return -1786033368;
		case 63:
			return 1899963938;
		case 64:
			return -1525401254;
		case 65:
			return 666050502;
		case 66:
			return 887717126;
		case 67:
			return -885646667;
		case 68:
			return 946848176;
		case 69:
			return 2110112797;
		case 70:
			return -1543433893;
		case 71:
			return -587737142;
		case 72:
			return -1697567574;
		case 73:
			return 1554410187;
		case 74:
			return -1551628748;
		case 75:
			return 1801131110;
		case 76:
			return -1431848307;
		case 77:
			return -979738281;
		case 78:
			return -837774766;
		case 79:
			return -1223791123;
		case 80:
			return -1181880939;
		case 81:
			return 180714777;
		case 82:
			return -521477124;
		case 83:
			return 1156950836;
		case 84:
			return 1498983922;
		case 85:
			return -1089821002;
		case 86:
			return -1767968552;
		case 87:
			return 1052684812;
		case 88:
			return -1835722213;
		case 89:
			return -1229834518;
		case 90:
			return -392183396;
		case 91:
			return 839199173;
		case 92:
			return -1080696981;
		case 93:
			return 509781427;
		case 94:
			return -1491472827;
		case 95:
			return 1075856357;
		case 96:
			return 1806354060;
		case 97:
			return 268103762;
		case 98:
			return 54499763;
		case 99:
			return -47513954;
		case 100:
			return 173401469;
		case 101:
			return 1830494920;
		case 102:
			return -56802666;
		case 103:
			return -415437740;
		case 104:
			return -1465202595;
		case 105:
			return -233204301;
		case 106:
			return -1790318144;
		case 107:
			return -1716981503;
		case 108:
			return -1729980669;
		case 109:
			return -1727526861;
		case 110:
			return -920221586;
		case 111:
			return -931294997;
		case 112:
			return -1486927560;
		case 113:
			return 852774198;
		case 114:
			return -885737328;
		case 115:
			return 1769731136;
		case 116:
			return -1459368569;
		case 117:
			return -1291022662;
		case 118:
			return 638586808;
		case 119:
			return 2096770678;
		case 120:
			return -1605880447;
		case 121:
			return -1539337723;
		case 122:
			return -117284255;
		case 123:
			return -636552746;
		case 124:
			return -1993903481;
		case 125:
			return 791791441;
		case 126:
			return 1903067887;
		case 127:
			return -1927422497;
		case 128:
			return 2040423027;
		case 129:
			return 1838787462;
		case 130:
			return 2050123975;
		case 131:
			return 1811663962;
		case 132:
			return -711254121;
		case 133:
			return -35033037;
		case 134:
			return 955999834;
		case 135:
			return -481051896;
		case 136:
			return -1935700575;
		case 137:
			return -1125028284;
		case 138:
			return -267135864;
		case 139:
			return -751329575;
		case 140:
			return 1037792287;
		case 141:
			return 798283666;
		case 142:
			return -1970041458;
		case 143:
			return -203268054;
		case 144:
			return -415250715;
		case 145:
			return -799500009;
		case 146:
			return 1405624312;
		case 147:
			return -1123356036;
		case 148:
			return -1478178768;
		case 149:
			return 168336706;
		case 150:
			return 807983049;
		case 151:
			return 1636352616;
		case 152:
			return 1110815339;
		case 153:
			return -1197630873;
		case 154:
			return 1213703;
		case 155:
			return -1418298797;
		case 156:
			return 1900141702;
		case 157:
			return -992423055;
		case 158:
			return 320758674;
		case 159:
			return -546870456;
		case 160:
			return 2119170919;
		case 161:
			return -1631930150;
		case 162:
			return -1084890102;
		case 163:
			return -1857550353;
		case 164:
			return -1629969648;
		case 165:
			return 576694808;
		case 166:
			return -2006026692;
		case 167:
			return -161625840;
		case 168:
			return 1662680949;
		case 169:
			return 352539363;
		case 170:
			return 1614000521;
		case 171:
			return 282858309;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

int func_1869(int iParam0)
{
	int iVar0;

	iVar0 = func_1776(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 171)
	{
		return 0;
	}
	return 1;
}

int func_1870(int iParam0)
{
	int iVar0;

	iVar0 = func_1871(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 141)
	{
		return 0;
	}
	return 1;
}

int func_1871(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2137819446:
			return 100;
		case -2131931188:
			return 127;
		case -2130179962:
			return 63;
		case -2059502051:
			return 65;
		case -2056449621:
			return 93;
		case -1973221270:
			return 64;
		case -1969715419:
			return 35;
		case -1968787770:
			return 6;
		case -1957895818:
			return 56;
		case -1952291530:
			return 130;
		case -1950424573:
			return 54;
		case -1910888845:
			return 110;
		case -1883405573:
			return 78;
		case -1844803100:
			return 80;
		case -1831687141:
			return 62;
		case -1810408560:
			return 73;
		case -1805785047:
			return 41;
		case -1759910473:
			return 25;
		case -1756646040:
			return 92;
		case -1741565123:
			return 47;
		case -1609480552:
			return 61;
		case -1596526341:
			return 3;
		case -1573606823:
			return 49;
		case -1510695159:
			return 138;
		case -1504620904:
			return 107;
		case -1462866101:
			return 111;
		case -1405836475:
			return 55;
		case -1360021450:
			return 9;
		case -1356583879:
			return 128;
		case -1242362177:
			return 46;
		case -1235458416:
			return 74;
		case -1234968784:
			return 69;
		case -1234548949:
			return 7;
		case -1143906885:
			return 122;
		case -1140308479:
			return 134;
		case -1105699593:
			return 141;
		case -1008191715:
			return 1;
		case -985141745:
			return 79;
		case -974857798:
			return 131;
		case -914097888:
			return 123;
		case -900341092:
			return 133;
		case -859661758:
			return 60;
		case -810885450:
			return 40;
		case -750368411:
			return 48;
		case -691826426:
			return 77;
		case -608746625:
			return 17;
		case -567710817:
			return 2;
		case -565327488:
			return 72;
		case -559775780:
			return 117;
		case -549372097:
			return 59;
		case -455491084:
			return 85;
		case -447950391:
			return 94;
		case -418060375:
			return 4;
		case -391691334:
			return 68;
		case -375368707:
			return 58;
		case -357713093:
			return 119;
		case -336340230:
			return 115;
		case -309456186:
			return 10;
		case -300915357:
			return 136;
		case -252777454:
			return 126;
		case -190717545:
			return 30;
		case -179898515:
			return 118;
		case -179343615:
			return 140;
		case -132268497:
			return 132;
		case -120658935:
			return 67;
		case -97080319:
			return 43;
		case -93340399:
			return 106;
		case -2338369:
			return 39;
		case -1:
			return 0;
		case 18275459:
			return 8;
		case 47725914:
			return 11;
		case 151887407:
			return 18;
		case 153569762:
			return 44;
		case 163503896:
			return 101;
		case 183566846:
			return 15;
		case 193887912:
			return 113;
		case 225804550:
			return 124;
		case 267361268:
			return 86;
		case 272084311:
			return 71;
		case 312483235:
			return 29;
		case 349431355:
			return 105;
		case 350943398:
			return 102;
		case 383280474:
			return 12;
		case 467901857:
			return 51;
		case 508502713:
			return 125;
		case 548902645:
			return 109;
		case 591249118:
			return 28;
		case 611341556:
			return 16;
		case 618168626:
			return 26;
		case 620773281:
			return 98;
		case 668358831:
			return 139;
		case 677513315:
			return 45;
		case 713112284:
			return 50;
		case 722162219:
			return 88;
		case 730253571:
			return 36;
		case 731266401:
			return 90;
		case 785001351:
			return 135;
		case 793035862:
			return 81;
		case 802887669:
			return 114;
		case 828060856:
			return 38;
		case 837742789:
			return 70;
		case 900184247:
			return 21;
		case 924932702:
			return 14;
		case 969398724:
			return 89;
		case 1014273190:
			return 96;
		case 1033330939:
			return 82;
		case 1034286944:
			return 87;
		case 1123546272:
			return 104;
		case 1138545953:
			return 20;
		case 1157170123:
			return 75;
		case 1159895828:
			return 31;
		case 1296512587:
			return 97;
		case 1377989036:
			return 19;
		case 1423325819:
			return 32;
		case 1476796894:
			return 24;
		case 1486559056:
			return 120;
		case 1493749872:
			return 112;
		case 1500545235:
			return 129;
		case 1507470319:
			return 83;
		case 1543468593:
			return 137;
		case 1568867811:
			return 57;
		case 1625043854:
			return 22;
		case 1667258255:
			return 33;
		case 1695199279:
			return 121;
		case 1699722938:
			return 13;
		case 1746978940:
			return 84;
		case 1764814366:
			return 95;
		case 1767031434:
			return 116;
		case 1775828486:
			return 103;
		case 1830439946:
			return 23;
		case 1851839077:
			return 99;
		case 1860260195:
			return 66;
		case 1885285188:
			return 52;
		case 1905466026:
			return 27;
		case 1925734249:
			return 76;
		case 1938325642:
			return 5;
		case 2079700825:
			return 42;
		case 2081475118:
			return 37;
		case 2093509505:
			return 34;
		case 2100718034:
			return 108;
		case 2117355246:
			return 53;
		case 2146493981:
			return 91;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_1872(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1960(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_1875(iParam1, 1);
	switch ((Global_1140484->f_30603.f_2900[iVar2 /*31*/])->f_1)
	{
		case -1912291748:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("duration"):
		case -594821844:
		case 348502922:
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1873(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_1869(iParam1))
	{
		return 0;
	}
	if (!func_1961(iParam0))
	{
		return 0;
	}
	iVar0 = func_1875(iParam0, 1);
	func_1962(iParam0, iParam1, iParam2);
	if (func_1963(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/])) && func_1964(iParam0, (Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar1 = { func_1965((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (func_1966(vVar1))
		{
			if (func_1967(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1968((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1969((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
			}
		}
		else
		{
			func_1969((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4);
		}
	}
	return 1;
}

void func_1874(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1875(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2139291255:
			return 145;
		case -2133203822:
			return 108;
		case -2119961771:
			return 90;
		case -2117138640:
			return 79;
		case -2115524796:
			return 60;
		case -2108980762:
			return 137;
		case -2088744988:
			return 91;
		case -2056483403:
			return 75;
		case -2008161946:
			return 26;
		case -2006179687:
			return 170;
		case -1961023994:
			return 92;
		case -1958950493:
			return 183;
		case -1954641284:
			return 28;
		case -1946267644:
			return 130;
		case -1925826694:
			return 49;
		case -1920322236:
			return 22;
		case -1886192107:
			return 55;
		case -1854279248:
			return 6;
		case -1853627206:
			return 134;
		case -1851126253:
			return 29;
		case -1847886830:
			return 16;
		case -1841577353:
			return 112;
		case -1840959475:
			return 106;
		case -1808210911:
			return 30;
		case -1803458707:
			return 8;
		case -1761885354:
			return 111;
		case -1749044999:
			return 96;
		case -1698597704:
			return 45;
		case -1631537135:
			return 63;
		case -1599892133:
			return 38;
		case -1514337705:
			return 177;
		case -1498884346:
			return 151;
		case -1448841146:
			return 50;
		case -1445919747:
			return 117;
		case -1441068914:
			return 39;
		case -1426414385:
			return 172;
		case -1421504146:
			return 109;
		case -1419242781:
			return 33;
		case -1394912816:
			return 186;
		case -1378028573:
			return 27;
		case -1370534631:
			return 110;
		case -1327315394:
			return 1;
		case -1311380047:
			return 46;
		case -1299791944:
			return 2;
		case -1280685390:
			return 132;
		case -1268916163:
			return 119;
		case -1256990268:
			return 76;
		case -1139172958:
			return 61;
		case -1112015628:
			return 163;
		case -1094465110:
			return 47;
		case -1038422902:
			return 74;
		case -1011126213:
			return 31;
		case -964953325:
			return 123;
		case -955252868:
			return 124;
		case -932897324:
			return 11;
		case -931584677:
			return 103;
		case -925634234:
			return 21;
		case -750441842:
			return 174;
		case -649515024:
			return 142;
		case -624920400:
			return 81;
		case -612675573:
			return 148;
		case -572117096:
			return 182;
		case -562496675:
			return 57;
		case -562150430:
			return 171;
		case -560965516:
			return 48;
		case -554207528:
			return 59;
		case -539762089:
			return 97;
		case -529396121:
			return 175;
		case -454200664:
			return 104;
		case -440727241:
			return 19;
		case -423133485:
			return 133;
		case -403292810:
			return 113;
		case -398496662:
			return 23;
		case -343145237:
			return 155;
		case -342633876:
			return 5;
		case -334674962:
			return 13;
		case -332283977:
			return 66;
		case -306011710:
			return 4;
		case -280832639:
			return 51;
		case -276166656:
			return 162;
		case -269291543:
			return 68;
		case -206787059:
			return 35;
		case -164741307:
			return 105;
		case -158245263:
			return 41;
		case -147416760:
			return 150;
		case -97000889:
			return 86;
		case -91604267:
			return 159;
		case -1:
			return 0;
		case 25589062:
			return 56;
		case 39330853:
			return 125;
		case 78014060:
			return 9;
		case 81243326:
			return 69;
		case 141777963:
			return 15;
		case 183131704:
			return 167;
		case 200623432:
			return 64;
		case 221495846:
			return 165;
		case 224471061:
			return 98;
		case 233412256:
			return 77;
		case 279713143:
			return 161;
		case 285724035:
			return 54;
		case 302482713:
			return 136;
		case 347710188:
			return 89;
		case 350341162:
			return 127;
		case 447464746:
			return 129;
		case 570385280:
			return 185;
		case 593083875:
			return 80;
		case 639606025:
			return 70;
		case 654960265:
			return 95;
		case 668064801:
			return 184;
		case 671416267:
			return 107;
		case 673708797:
			return 139;
		case 694721787:
			return 20;
		case 702532569:
			return 82;
		case 720207812:
			return 168;
		case 724367341:
			return 65;
		case 726043209:
			return 58;
		case 728769635:
			return 83;
		case 756791452:
			return 149;
		case 763061271:
			return 18;
		case 775646007:
			return 102;
		case 783509408:
			return 160;
		case 794883372:
			return 176;
		case 805902559:
			return 84;
		case 817456409:
			return 100;
		case 835146902:
			return 181;
		case 841152146:
			return 93;
		case 886162534:
			return 131;
		case 937140932:
			return 173;
		case 997052462:
			return 152;
		case 1034295275:
			return 17;
		case 1040501041:
			return 122;
		case 1093424641:
			return 115;
		case 1139016431:
			return 34;
		case 1144080006:
			return 32;
		case 1171151366:
			return 43;
		case 1175961229:
			return 138;
		case 1193587137:
			return 166;
		case 1201719505:
			return 42;
		case 1203687692:
			return 10;
		case 1208331227:
			return 12;
		case 1211076549:
			return 73;
		case 1265311313:
			return 36;
		case 1268462011:
			return 37;
		case 1294394742:
			return 179;
		case 1295163466:
			return 114;
		case 1300622865:
			return 99;
		case 1312155508:
			return 144;
		case 1324420970:
			return 25;
		case 1328995848:
			return 88;
		case 1336349861:
			return 143;
		case 1336429519:
			return 140;
		case 1390582854:
			return 94;
		case 1413720692:
			return 158;
		case 1433853218:
			return 85;
		case 1452940977:
			return 87;
		case 1480202237:
			return 178;
		case 1482822775:
			return 146;
		case 1514854451:
			return 180;
		case 1522457772:
			return 147;
		case 1523275824:
			return 62;
		case 1524301922:
			return 78;
		case 1557116130:
			return 126;
		case 1557362410:
			return 116;
		case 1578015076:
			return 72;
		case 1578708778:
			return 67;
		case 1596748830:
			return 101;
		case 1608803012:
			return 128;
		case 1644017723:
			return 153;
		case 1687654048:
			return 71;
		case 1704907062:
			return 169;
		case 1726722300:
			return 135;
		case 1744707601:
			return 3;
		case 1746613639:
			return 121;
		case 1767173923:
			return 141;
		case 1798083308:
			return 24;
		case 1813411238:
			return 157;
		case 1835150954:
			return 40;
		case 1903955831:
			return 7;
		case 1913593527:
			return 53;
		case 1930815945:
			return 118;
		case 1938151130:
			return 44;
		case 1976949991:
			return 156;
		case 2028487040:
			return 52;
		case 2051020894:
			return 164;
		case 2081856931:
			return 120;
		case 2113464199:
			return 154;
		case 2126590447:
			return 14;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_1876(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = ((Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 + iParam1);
}

void func_1877(int iParam0, int iParam1)
{
	(Global_1140484->f_30603.f_2900[iParam0 /*31*/])->f_29 = iParam1;
}

void func_1878(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		(uParam0->f_1[iVar0 /*2*/])->f_1 = 0;
		iVar0++;
	}
}

int func_1879(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	return func_1970(iParam0, iVar0);
}

bool func_1880(struct<23> Param0, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return (Param0.f_20 && !Param0.f_22);
}

char* func_1881(var uParam0)
{
	if (uParam0->f_26 || uParam0->f_27)
	{
		return "IB_REDEEM";
	}
	if (uParam0->f_30)
	{
		return "IB_BUY_NOW";
	}
	return "IB_BUY";
}

int func_1882(int iParam0)
{
	int iVar0;

	iVar0 = func_1971();
	switch (iVar0)
	{
		case 0:
			return 1;
		case 1:
			return iParam0 == 0;
		case 2:
			return iParam0 == 1;
		case 3:
			return iParam0 == 2;
		case 4:
			return iParam0 == 5;
		default:
			break;
	}
	return 0;
}

char* func_1883(var uParam0)
{
	if (uParam0->f_24)
	{
		return "IB_UPGRADE_NOW";
	}
	return "IB_UPGRADE";
}

bool func_1884(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33)
{
	return (Param0.f_29 || Param0.f_23);
}

bool func_1885(struct<34> Param0)
{
	return (!func_1884(Param0) && (Param0.f_30 || Param0.f_24));
}

int func_1886(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (func_1884(*uParam0))
	{
		if (uParam0->f_17 < 0)
		{
			return 0;
		}
		else if (func_1687(uParam0->f_17))
		{
			return 1;
		}
	}
	else if (func_1885(*uParam0))
	{
		if (uParam0->f_18 < 0)
		{
			return 0;
		}
		else if (func_1972(uParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

char* func_1887(int iParam0)
{
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_319(iParam0);
}

int func_1888(int iParam0)
{
	return (iParam0 / 100);
}

int func_1889(int iParam0)
{
	return (iParam0 % 100);
}

char* func_1890(int iParam0)
{
	struct<4> Var0;

	if (iParam0 <= -1)
	{
		return "";
	}
	MISC::_INT_TO_STRING(iParam0, "%i", &Var0);
	return func_1973(Var0);
}

int func_1891(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_1974(iVar0);
}

int func_1892()
{
	return Global_1939231->f_1433.f_4174.f_2084;
}

void func_1893(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_1757(uParam0, &uParam1);
}

bool func_1894(int iParam0)
{
	return func_1975() == iParam0;
}

void func_1895(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_1757(uParam0, &uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_1896(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_1897(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_1898(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_1899(&uParam1));
}

char* func_1896(var uParam0)
{
	if (uParam0->f_20)
	{
		return "IB_UPGRADE";
	}
	if (uParam0->f_26)
	{
		return "SHOP_REWARD_PRICE";
	}
	else if (uParam0->f_27)
	{
		return "SHOP_OFFER_PRICE";
	}
	return "IB_PRICE";
}

char* func_1897(var uParam0)
{
	if (uParam0->f_26)
	{
		return "IB_FREE";
	}
	else if (uParam0->f_20 && !uParam0->f_25)
	{
		return "NET_PLAYER_ABILITY_ADDITIONAL_XP_REQUIRED";
	}
	return "";
}

int func_1898(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (!uParam0->f_25 && uParam0->f_20)
	{
		return 1;
	}
	return 0;
}

bool func_1899(var uParam0)
{
	return (uParam0->f_21 && !uParam0->f_14);
}

bool func_1900()
{
	return UIAPPS::_IS_APP_ACTIVE(joaat("abilities"));
}

char* func_1901(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_526(func_1976(), joaat("COLOR_PURE_WHITE"));
	if (func_1618())
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_OVERRIDEN");
	}
	else if (func_1730() == 1)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_REMOTE_PLAYER_MODE", sVar0);
	}
	if (!func_1900())
	{
		return "INVALID";
	}
	iVar1 = UIAPPS::_0x96FD694FE5BE55DC(joaat("abilities"));
	if (iVar1 == 1738917854)
	{
		return func_1978(func_1977());
	}
	else if (iVar1 == -477213344)
	{
		return func_1979(&uParam0);
	}
	else if (iVar1 == 756463805)
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_UPGRADE");
	}
	return "INVALID";
}

int func_1902(int iParam0)
{
	int iVar0;

	iVar0 = func_1013(iParam0);
	if ((iVar0 == 810656527 || iVar0 == 2088138839) || iVar0 == 129583122)
	{
		return 1;
	}
	return 0;
}

int func_1903(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(-1815917332);
		case 1:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(446771306);
		case 2:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(214930631);
		case 3:
			return UNLOCK::_UNLOCK_IS_UNLOCKED(1057421621);
		default:
			break;
	}
	return 0;
}

void func_1904(var uParam0, int iParam1)
{
	func_476(uParam0, iParam1);
}

void func_1905(var uParam0, int iParam1)
{
	func_606(uParam0, iParam1);
}

bool func_1906()
{
	return func_1730() == 0;
}

int func_1907(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 20;
		case 3:
			return 40;
		default:
			break;
	}
	return -1;
}

void func_1908(int iParam0, var uParam1)
{
	if (!func_1434(*uParam1))
	{
		uParam1->f_11 = func_1980(iParam0);
		uParam1->f_12 = func_1981(iParam0);
	}
}

int func_1909(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1960(iParam0);
	iVar1 = &Global_1275573;
	iVar2 = func_1875(iParam1, 1);
	switch (&Global_1140484->f_30603.f_2900[iVar2 /*31*/])
	{
		case 979390476:
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case -2139108927:
		case -2129621195:
		case -1503245593:
		case 190804938:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1910(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	if (!func_1869(iParam1))
	{
		return 0;
	}
	if (!func_1961(iParam0))
	{
		return 0;
	}
	iVar0 = func_1875(iParam0, 1);
	if (!func_1982(iParam2))
	{
		return 0;
	}
	bVar1 = func_1963(*(Global_1140484->f_30603.f_2900[iVar0 /*31*/]));
	if (bVar1 && func_1983((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4))
	{
		vVar2 = { func_1984((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4) };
		if (!func_1962(vVar2.x, vVar2.y, vVar2.z))
		{
			return 0;
		}
	}
	if (func_1967(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_1968((Global_1140484->f_30603.f_2900[iVar0 /*31*/])->f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

int func_1911(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_990(2) * 2;
		case 1:
			return func_992(2) * 2;
		case 2:
			return func_991(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_1912(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1985(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1913(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1914(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1915(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1916(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1917(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1918(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_1919(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1986(iParam0, iParam6);
	func_1987(iParam0, iParam5);
	func_1988(iParam0, iParam4);
	func_1989(iParam0, iParam3);
	func_1990(iParam0, iParam2);
	func_1991(iParam0, iParam1);
}

bool func_1920()
{
	return Global_1912978->f_127 == 0;
}

int func_1921(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1992(iParam0, uParam1, &uVar0))
	{
		func_1993(&uVar0, iParam0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_1922(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1994(iParam0))
	{
		return 0;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1) == 0)
	{
		return 0;
	}
	if (bParam2)
	{
		return !func_1995(iParam0, iParam1);
	}
	return 1;
}

int func_1923(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1273(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_1924(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return 0;
	}
	if (!func_1994(iParam0))
	{
		return 0;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(iParam0, iParam1, iVar0, (*uParam2)[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_1996(iParam0, iParam1, uParam2, *iParam3);
	}
	return 1;
}

void func_1925(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_PRICE_MODIFIERS(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

bool func_1926(int iParam0, int iParam1)
{
	if (!func_1692(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return ((Global_39.f_186[iParam0 /*12*/])->f_5 && iParam1) != 0;
	}
	return ((Global_1070356->f_19592[iParam0 /*12*/])->f_5 && iParam1) != 0;
}

void func_1927(int iParam0, int iParam1)
{
	if (!func_1692(iParam0))
	{
		return;
	}
	if (!func_1926(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		(Global_39.f_186[iParam0 /*12*/])->f_5 = ((Global_39.f_186[iParam0 /*12*/])->f_5 || iParam1);
		return;
	}
	(Global_1070356->f_19592[iParam0 /*12*/])->f_5 = ((Global_1070356->f_19592[iParam0 /*12*/])->f_5 || iParam1);
}

void func_1928(int iParam0, int iParam1)
{
	if (!func_1692(iParam0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		(Global_39.f_186[iParam0 /*12*/])->f_5 = ((Global_39.f_186[iParam0 /*12*/])->f_5 - ((Global_39.f_186[iParam0 /*12*/])->f_5 && iParam1));
		return;
	}
	(Global_1070356->f_19592[iParam0 /*12*/])->f_5 = ((Global_1070356->f_19592[iParam0 /*12*/])->f_5 - ((Global_1070356->f_19592[iParam0 /*12*/])->f_5 && iParam1));
}

void func_1929(int iParam0, bool bParam1)
{
	if (!func_1692(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1998(func_1997(iParam0));
	}
	else
	{
		func_1999(func_1997(iParam0));
	}
}

int func_1930(int iParam0)
{
	if (!func_782(iParam0))
	{
		return 0;
	}
	return func_786(iParam0, 33554432);
}

int func_1931()
{
	return Global_1938085->f_26;
}

int func_1932(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 121)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 133)
	{
		return 15;
	}
	else if (iParam0 <= 136)
	{
		return 16;
	}
	return -1;
}

int func_1933(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -2137625828;
		case 1:
			return 1039226266;
		case 2:
			return 493546894;
		case 3:
			return -2119728378;
		case 4:
			if (!bParam1 || func_23() != -1)
			{
				return -1308265478;
			}
			if (func_1460(44))
			{
				return -1308265478;
			}
			else
			{
				return -1738342532;
			}
			break;
		case 5:
			return -1147969487;
		case 6:
			return -1147969487;
		case 7:
			return -1147969487;
		case 8:
			return 537788226;
		case 9:
			return -1391142299;
		case 10:
			return 1178102426;
		case 11:
			return 1608357655;
		case 12:
			if (!bParam1 || func_23() != -1)
			{
				return -650528936;
			}
			if (func_1460(44))
			{
				return -650528936;
			}
			else
			{
				return 139139039;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_23() != -1)
			{
				return -877373104;
			}
			if (func_1460(44))
			{
				return -877373104;
			}
			else
			{
				return -1618764825;
			}
			break;
	}
	return 0;
}

void func_1934(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		(Global_7887[iParam0 /*11*/])->f_2 = iParam1;
		return;
	}
	(Global_1070356->f_17941[iParam0 /*11*/])->f_2 = iParam1;
}

void func_1935(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		Global_7887[iParam0 /*11*/] = (Global_7887[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1070356->f_17941[iParam0 /*11*/] = (Global_1070356->f_17941[iParam0 /*11*/] || iParam1);
	}
}

void func_1936(int iParam0)
{
	if (!func_782(iParam0))
	{
		return;
	}
	if (func_2000(iParam0))
	{
		func_2001(iParam0);
	}
	else
	{
		func_2002(iParam0);
	}
}

int func_1937(int iParam0)
{
	if (!func_782(iParam0))
	{
		return 0;
	}
	return func_786(iParam0, 16777216);
}

int func_1938(int iParam0)
{
	if (!func_782(iParam0))
	{
		return 0;
	}
	return ((*Global_1887327)[iParam0 /*36*/])->f_4;
}

int func_1939(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_782(iParam0))
	{
		return 0;
	}
	iVar0 = func_2003(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_2005(func_2004(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

void func_1940(int iParam0, int iParam1)
{
	if (Global_1572887->f_13 == -1)
	{
		(Global_7887[iParam0 /*11*/])->f_1 = iParam1;
		return;
	}
	(Global_1070356->f_17941[iParam0 /*11*/])->f_1 = iParam1;
}

void func_1941(int iParam0, int iParam1)
{
	if (!func_782(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	(Global_7887[iParam0 /*11*/])->f_3 = iParam1;
}

void func_1942(int iParam0)
{
	if (!func_782(iParam0))
	{
		return;
	}
	if (func_1930(iParam0) && func_2006(iParam0))
	{
		func_1998(func_2007(iParam0, 0));
	}
	else
	{
		func_1999(func_2007(iParam0, 0));
	}
}

void func_1943(int iParam0, int iParam1)
{
	if (!func_1829(iParam0))
	{
		return;
	}
	if (!func_2008(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_259[iParam0] = (Global_39.f_259[iParam0] || iParam1);
		return;
	}
	Global_1070356->f_19665[iParam0] = (Global_1070356->f_19665[iParam0] || iParam1);
}

int func_1944(int iParam0)
{
	if (!func_1829(iParam0))
	{
		return 0;
	}
	return func_2008(iParam0, 2);
}

void func_1945(int iParam0, int iParam1)
{
	if (!func_1829(iParam0))
	{
		return;
	}
	if (Global_1572887->f_13 == -1)
	{
		Global_39.f_259[iParam0] = (&Global_39.f_259[iParam0] - (Global_39.f_259[iParam0] && iParam1));
		return;
	}
	Global_1070356->f_19665[iParam0] = (&Global_1070356->f_19665[iParam0] - (Global_1070356->f_19665[iParam0] && iParam1));
}

void func_1946(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1829(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	iVar0 = func_2009(iParam0);
	if (bParam1)
	{
		func_1998(iVar0);
	}
	else
	{
		func_1999(iVar0);
	}
}

int func_1947()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

char* func_1948(int iParam0)
{
	if (&Global_3145858->f_50919[iParam0 /*2*/] > -1)
	{
		if (func_2010(&(Global_3145858->f_50919[iParam0 /*2*/])))
		{
			return MISC::_CREATE_VAR_STRING(2, Global_3145858->f_42116[&Global_3145858->f_50919[iParam0 /*2*/] /*18*/]);
		}
		return func_2011(Global_3145858->f_42116[&Global_3145858->f_50919[iParam0 /*2*/] /*18*/]);
	}
	return "";
}

char* func_1949(int iParam0)
{
	if (MISC::IS_BIT_SET(iParam0, 4))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_BLAP");
	}
	if (MISC::IS_BIT_SET(iParam0, 15))
	{
		return HUD::_GET_LABEL_TEXT("UIC_LB_CPCO");
	}
	return "";
}

float func_1950(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return uParam0->f_9;
		default:
			break;
	}
	return 0f;
}

int func_1951(int iParam0)
{
	switch (iParam0)
	{
		case 12857284:
			return -1990383629;
		case 299749022:
			return -101524555;
		case -1180698265:
			return -1915385310;
		case -487028314:
			return 1315162488;
		case 241235545:
			return 727393558;
		case 1827902148:
			return -1228057307;
		case 1301555144:
			return 1712094016;
		case -2056583192:
			return -1248299493;
		case 1015239729:
			return -451359317;
		case -340627321:
			return -2041626192;
		case -875805376:
			return -1371514637;
		case -768760704:
			return 1547608292;
		case 1089431066:
			return -361152079;
		case -2118203104:
			return -1994943603;
		case 1285634184:
			return 1011151573;
		case -559080197:
			return 892816668;
		case -1811760631:
			return -246340825;
		case 1858448324:
			return -1839865333;
		default:
			break;
	}
	return 0;
}

struct<17> func_1952(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<17> Var0;
	struct<15> Var17;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(func_663(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_2012(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

float func_1953(int iParam0)
{
	return (BUILTIN::TO_FLOAT(iParam0) / 10000f);
}

void func_1954(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<20> Var1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1272170->f_20 < 20)
	{
		Global_1272170->f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1272170->f_20.f_1[iVar0 /*20*/]) = { *(Global_1272170->f_20.f_1[iVar0 + 1 /*20*/]) };
			iVar0++;
		}
	}
	Var1 = -1;
	Var1.f_4.f_7 = -142743235;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Var1.f_2 = iParam2;
		Var1.f_3 = iParam3;
	}
	*(Global_1272170->f_20.f_1[(Global_1272170->f_20 - 1) /*20*/]) = { Var1 };
}

int func_1955(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1814149473;
		case 1:
			return -2038682661;
		case 2:
			return 1942029925;
		default:
			break;
	}
	return 0;
}

int func_1956(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2047978619;
		case 1:
			return -586319254;
		case 2:
			return 249896112;
		default:
			break;
	}
	return 0;
}

int func_1957(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_2013(iVar0, 1, 0);
		if (!func_1823(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_2014(&(Var2[iVar34 /*2*/])))
				{
					if (!bParam1 || func_1062(&(Var2[iVar34 /*2*/]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1958(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_2013(iVar0, 0, 1);
		if (!func_1823(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_2015(&(Var9[iVar41 /*2*/])))
				{
					if (!bParam1 || func_1062(&(Var9[iVar41 /*2*/]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 2084597891 || &Var9[iVar41 /*2*/] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41 /*2*/] == 2084597891) || (!bParam2 && &Var9[iVar41 /*2*/] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && (Var9[iVar41 /*2*/])->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = (Var9[iVar41 /*2*/])->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || (Var9[iVar41 /*2*/])->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = (Var9[iVar41 /*2*/])->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

char* func_1959(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_CARD_TIER_ONE";
		case 1:
			return "MP_PLAYER_CARD_TIER_TWO";
		case 2:
			return "MP_PLAYER_CARD_TIER_THREE";
		default:
			break;
	}
	return "NP_CARD_TIER_INVALID";
}

int func_1960(int iParam0)
{
	if (func_2016(iParam0))
	{
		return (func_2017(iParam0) % 32);
	}
	return &Global_1275573;
}

int func_1961(int iParam0)
{
	int iVar0;

	iVar0 = func_1875(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 186)
	{
		return 0;
	}
	return 1;
}

int func_1962(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_1776(iParam1, 1);
	iVar1 = func_1875(iParam0, 1);
	iVar2 = func_1871(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_2018(iVar3, 1);
		if (!func_2019(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = (&(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] - 1);
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 - func_2020((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_2021(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_2022(iVar6))
		{
		}
		else
		{
			iVar8 = func_2023(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = (Global_1140484->f_18706[iVar8 /*195*/][iVar1] - 1);
			if (Global_1140484->f_18706[iVar8 /*195*/][iVar1] <= 0)
			{
				MISC::_0xB909149F2BB5F6DA(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			}
			if (!MISC::_0x80E9C316EF84DD81(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187)))
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 0;
				func_2024(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_1963(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1964(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1961(iParam0))
	{
		return false;
	}
	if (!func_2025(iParam1))
	{
		return false;
	}
	iVar0 = func_2026(iParam1, 1);
	return &Global_1140484->f_30603.f_8667[iVar0 /*3*/] == iParam0;
}

Vector3 func_1965(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_2027(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return *(Global_1140484->f_30603.f_8871[iVar0 /*3*/]);
}

int func_1966(vector3 vParam0)
{
	if (!func_1961(vParam0.x))
	{
		return 0;
	}
	if (!func_1869(vParam0.y))
	{
		return 0;
	}
	if (!func_1982(vParam0.z))
	{
		return 0;
	}
	return 1;
}

int func_1967(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_1776(iParam1, 1);
	iVar1 = func_1875(iParam0, 1);
	iVar2 = func_1871(&(Global_1140484->f_30603.f_847[iVar0 /*12*/]), 1);
	if (Global_1140484->f_30603[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	((Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])->f_1 = Global_1275573->f_21;
	if (&(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/])
	{
		return 1;
	}
	(Global_1140484->f_30603.f_847[iVar0 /*12*/])->f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_16)
	{
		iVar3 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/];
		iVar5 = func_2018(iVar3, 1);
		if (!func_2019(iVar3))
		{
		}
		else
		{
			(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] = &(Global_1140484->f_2001[iVar5 /*192*/])->f_1[iVar1] + 1;
			(Global_1140484->f_2001[iVar5 /*192*/])->f_188 = ((Global_1140484->f_2001[iVar5 /*192*/])->f_188 + func_2020((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_6[iVar4 /*3*/]));
			func_2028(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < (Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_28)
	{
		iVar6 = &(Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/];
		if (!func_2022(iVar6))
		{
		}
		else if (!func_2029((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_17[iVar7 /*2*/]))
		{
		}
		else
		{
			iVar8 = func_2023(iVar6, 1);
			(*Global_1140484->f_18706[iVar8 /*195*/])[iVar1] = Global_1140484->f_18706[iVar8 /*195*/][iVar1] + 1;
			MISC::_0xE84AAC1B22A73E99(&((Global_1140484->f_18706[iVar8 /*195*/])->f_187), iVar1);
			if (!(Global_1140484->f_18706[iVar8 /*195*/])->f_194)
			{
				(Global_1140484->f_18706[iVar8 /*195*/])->f_194 = 1;
				func_2030(iVar6);
			}
		}
		iVar7++;
	}
	func_2031((Global_1140484->f_30603.f_2900[iVar1 /*31*/])->f_2);
	return 1;
}

void func_1968(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_2025(iParam0))
	{
		return;
	}
	iVar0 = func_2026(iParam0, 1);
	if (!func_1961(iParam1))
	{
		return;
	}
	if (!func_1869(iParam2))
	{
		return;
	}
	if (!func_1982(iParam3))
	{
		return;
	}
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = iParam1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = iParam2;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = iParam3;
}

void func_1969(int iParam0)
{
	int iVar0;

	if (!func_2025(iParam0))
	{
		return;
	}
	iVar0 = func_2026(iParam0, 1);
	Global_1140484->f_30603.f_8667[iVar0 /*3*/] = -1;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_1 = 0;
	(Global_1140484->f_30603.f_8667[iVar0 /*3*/])->f_2 = -1;
}

int func_1970(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("deadeye"):
			switch (iParam1)
			{
				case 0:
					return -880922108;
				case 1:
					return 712437748;
				case 2:
					return -132314303;
				default:
					break;
			}
			break;
		case joaat("combat"):
			switch (iParam1)
			{
				case 0:
					return 1098244389;
				case 1:
					return 856704090;
				case 2:
					return -1750135398;
				default:
					break;
			}
			break;
		case -1794176813:
			switch (iParam1)
			{
				case 0:
					return -216428280;
				case 1:
					return 283298970;
				case 2:
					return -1044664755;
				default:
					break;
			}
			break;
		case joaat("recovery"):
			switch (iParam1)
			{
				case 0:
					return -75395410;
				case 1:
					return 1111923763;
				case 2:
					return 1350842542;
				default:
					break;
			}
			break;
	}
	return joaat("COLOR_WHITE");
}

int func_1971()
{
	return Global_1132968->f_5351.f_155;
}

bool func_1972(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

char* func_1973(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_1974(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return &(Global_1132968->f_11.f_1556.f_1647[0]);
		case 1:
			return &(Global_1132968->f_11.f_1556.f_1647[1]);
		default:
			break;
	}
	return -1;
}

int func_1975()
{
	return Global_1939231->f_1433.f_4174.f_2087;
}

char* func_1976()
{
	return func_1683(Global_1939231->f_1433.f_8.f_7);
}

int func_1977()
{
	return Global_1939231->f_1433.f_4174.f_2086;
}

char* func_1978(int iParam0)
{
	if (!func_1903(iParam0))
	{
		if (func_1436(iParam0))
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_LOCKED");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_LOCKED", func_1907(iParam0));
		}
	}
	else if (!func_2032(iParam0, 1))
	{
		if (func_1436(iParam0))
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_EQUIPPED");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_EQUIPPED");
		}
	}
	else if (func_1436(iParam0))
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_OPEN");
	}
	else
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_OPEN");
	}
	return "INVALID";
}

char* func_1979(var uParam0)
{
	if (func_2033(*uParam0))
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_LOCKED", func_2034(uParam0->f_2, 1));
	}
	else if (uParam0->f_26 || uParam0->f_27)
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_VOUCHER");
	}
	else if (uParam0->f_29)
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_CASH");
	}
	else if (uParam0->f_23)
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE");
	}
	else if (uParam0->f_22)
	{
		if (uParam0->f_14)
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED_MAX");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED");
		}
	}
	else
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UNEQUIPPED");
	}
	return "INVALID";
}

char* func_1980(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_TITLE");
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_1_FOCUS_TITLE");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_2_FOCUS_TITLE");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_3_FOCUS_TITLE");
		default:
			break;
	}
	return "NULL";
}

char* func_1981(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_DESCRIPTION");
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		default:
			break;
	}
	return "NULL";
}

int func_1982(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return 1;
}

int func_1983(int iParam0)
{
	int iVar0;

	if (!func_2025(iParam0))
	{
		return 0;
	}
	iVar0 = func_2035(iParam0);
	if (!func_1961(iVar0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_1984(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!func_2025(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	iVar3 = func_2026(iParam0, 1);
	return *(Global_1140484->f_30603.f_8667[iVar3 /*3*/]);
}

int func_1985(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1986(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_1987(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1988(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1913(*iParam0);
	iVar1 = func_1912(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1918(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1989(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1990(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1991(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_1992(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1132968->f_7;
	uParam2->f_2 = -1096981081;
	uParam2->f_3 = func_1810(iParam0);
	uParam2->f_4 = uParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
}

void func_1993(var uParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	uParam0->f_2 = -611386243;
	DATAFILE::_DATAFILE_GET_INT(&(uParam2->f_1), uParam0);
	uParam0->f_2 = -2140901307;
	if (DATAFILE::_DATAFILE_GET_HASH(&uVar0, uParam0))
	{
		uParam2->f_2 = uVar0;
	}
	uParam0->f_2 = -2140901307;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_11), uParam0);
	uParam0->f_2 = 1292053410;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_19), uParam0);
	uParam0->f_2 = 1234058424;
	DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_3), uParam0);
}

int func_1994(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iParam0);
}

int func_1995(int iParam0, int iParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

void func_1996(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_0xE81D0378A384E755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (uParam2[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f)
		{
			((*uParam2)[iVar0 /*2*/])->f_1 = (BUILTIN::ROUND((IntToFloat((10000 * ((*uParam2)[iVar0 /*2*/])->f_1)) * (&fVar21[iVar0] / 1f))) / 10000);
		}
		iVar0++;
	}
}

int func_1997(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1806461473;
		case 3:
			return -694461623;
		case 1:
			return 1093870742;
		case 0:
			return 999150106;
		case 4:
			return 1098225713;
		case 5:
			return -1828192959;
		default:
			break;
	}
	return 0;
}

void func_1998(int iParam0)
{
	int iVar0;

	if (func_2036(iParam0) == 62)
	{
		MAP::_0x563FCB6620523917(-1145496915, -1482012664);
		MAP::_0x563FCB6620523917(-1043953850, -1482012664);
		MAP::_0x563FCB6620523917(-1783502982, -1482012664);
	}
	else
	{
		iVar0 = -1482012664;
		if (((func_2037(iParam0) == 4 || func_2037(iParam0) == 12) || func_1830(func_2037(iParam0)) == 4) || (func_2008(func_2037(iParam0), 8) && ((func_2037(iParam0) == 2 || func_2037(iParam0) == 0) || func_2037(iParam0) == 10)))
		{
			iVar0 = -1305340593;
		}
		MAP::_0x563FCB6620523917(iParam0, iVar0);
	}
}

void func_1999(int iParam0)
{
	if (func_2036(iParam0) == 62)
	{
		MAP::_0x6786D7AFAC3162B3(-1145496915);
		MAP::_0x6786D7AFAC3162B3(-1043953850);
		MAP::_0x6786D7AFAC3162B3(-1783502982);
	}
	else if (MAP::_0xE38450DBCBC70E3D(iParam0, -1305340593) || MAP::_0xE38450DBCBC70E3D(iParam0, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iParam0);
	}
}

int func_2000(int iParam0)
{
	if (!func_782(iParam0))
	{
		return 0;
	}
	return func_786(iParam0, 67108864);
}

void func_2001(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_2038(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_2039(cVar0);
	MAP::_0x563FCB6620523917(MISC::GET_HASH_KEY(sVar8), -1482012664);
}

void func_2002(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	StringCopy(&cVar0, func_2038(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_2039(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_0xE38450DBCBC70E3D(iVar9, -1305340593) || MAP::_0xE38450DBCBC70E3D(iVar9, -1482012664))
	{
		MAP::_0x6786D7AFAC3162B3(iVar9);
	}
}

int func_2003(int iParam0)
{
	if (!func_782(iParam0))
	{
		return 0;
	}
	if (func_1937(iParam0))
	{
		return -1;
	}
	return (Global_7887[iParam0 /*11*/])->f_3;
}

int func_2004(int iParam0)
{
	if (!func_782(iParam0))
	{
		return -15;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_7887[iParam0 /*11*/])->f_1;
	}
	return (Global_1070356->f_17941[iParam0 /*11*/])->f_1;
}

int func_2005(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_2040(iParam0))
	{
		return 0;
	}
	func_2041(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 60f) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 60f)) + ((BUILTIN::TO_FLOAT(iVar3) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar4) * 30.4375f) * 24f) * 60f)) + (((BUILTIN::TO_FLOAT(iVar5) * 365.25f) * 24f) * 60f));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

int func_2006(int iParam0)
{
	if (!func_782(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 26:
		case 33:
		case 37:
		case 40:
		case 62:
		case 66:
		case 81:
		case 83:
		case 99:
		case 101:
		case 111:
		case 121:
			return 1;
	}
	return 0;
}

int func_2007(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -4613767;
		case 1:
			return 1567162363;
		case 2:
			return 456471693;
		case 3:
			return -1772963474;
		case 4:
			return 1881496386;
		case 5:
			return 711768994;
		case 6:
			return -440834066;
		case 7:
			return -1363847832;
		case 8:
			return 967769300;
		case 9:
			return -1436873944;
		case 10:
			return -1585669139;
		case 11:
			return 16791368;
		case 12:
			return 1452922822;
		case 13:
			return 549538301;
		case 14:
			return 974698954;
		case 15:
			return 445881012;
		case 16:
			return -2043891857;
		case 17:
			return 419656993;
		case 18:
			return -1732457315;
		case 19:
			return 1794318026;
		case 20:
			return 2035159966;
		case 21:
			return 770832805;
		case 22:
			return -1109814766;
		case 24:
			return -1075550363;
		case 23:
			return -1080317735;
		case 25:
			return 2138576151;
		case 26:
			return 1180954297;
		case 27:
			return 783603394;
		case 28:
			return 1162337247;
		case 30:
			return -170458336;
		case 29:
			return 2023240596;
		case 31:
			return 1285083821;
		case 32:
			return -1840907462;
		case 33:
			return 756710130;
		case 34:
			return 1634157321;
		case 35:
			return 388370024;
		case 36:
			return 1092296123;
		case 37:
			return 467491346;
		case 38:
			return -1391584612;
		case 39:
			return -152111346;
		case 40:
			return 1447551317;
		case 41:
			return 153136092;
		case 42:
			return 1304405732;
		case 43:
			return 1074984055;
		case 53:
			return 1087476368;
		case 54:
			return -1768057340;
		case 44:
			return 1218874593;
		case 55:
			return -1438443836;
		case 45:
			return -2036340415;
		case 56:
			return -597278150;
		case 46:
			return 803939643;
		case 57:
			return -632496195;
		case 47:
			return -965943619;
		case 48:
			return 283532073;
		case 49:
			return -462827524;
		case 50:
			return -69067491;
		case 51:
			return -1864895118;
		case 58:
			return -1929806571;
		case 59:
			return -698525417;
		case 60:
			return -1149739894;
		case 52:
			return 380507325;
		case 61:
			return -875142075;
		case 62:
			return 407796241;
		case 63:
			return -152267914;
		case 64:
			return -1675443320;
		case 65:
			return 1940341639;
		case 66:
			return 1846596114;
		case 67:
			return 907708501;
		case 69:
			return 1825644981;
		case 70:
			return 2065937607;
		case 71:
			return -211317417;
		case 72:
			return 1801307910;
		case 73:
			return -4118897;
		case 74:
			return 1853610692;
		case 75:
			return -1574644415;
		case 76:
			return 2133055515;
		case 77:
			return -1413401932;
		case 78:
			return 801090761;
		case 79:
			return 2131218644;
		case 80:
			return 1708823660;
		case 81:
			return 7976942;
		case 82:
			return 2111120505;
		case 83:
			return 176893118;
		case 84:
			return 1179148161;
		case 68:
			return 602306665;
		case 85:
			return 547412068;
		case 86:
			return -1539748801;
		case 87:
			return -1605119912;
		case 88:
			return -884464063;
		case 89:
			return -1420970720;
		case 90:
			return 1017024547;
		case 91:
			return -1204497306;
		case 92:
			return -1621069480;
		case 93:
			return -458604261;
		case 94:
			return -923391614;
		case 95:
			return -689247089;
		case 97:
			return 44049568;
		case 98:
			return 1350259552;
		case 96:
			return 620414938;
		case 99:
			return -61661574;
		case 100:
			return -725338054;
		case 101:
			return -770123507;
		case 102:
			return 1322486734;
		case 103:
			return -460939553;
		case 104:
			return -1451863552;
		case 105:
			return 173833068;
		case 106:
			return -1681004136;
		case 107:
			return 713715980;
		case 108:
			return -31204969;
		case 109:
			return -1720064790;
		case 110:
			return -532172775;
		case 111:
			return -739067737;
		case 112:
			return -1203133835;
		case 113:
			return -1947411598;
		case 115:
			return -1298718762;
		case 116:
			return -595083064;
		case 117:
			return 884833917;
		case 118:
			return 2141950651;
		case 114:
			return -1049753365;
		case 119:
			return -1437650729;
		case 134:
			return 672925454;
		case 135:
			return 846062774;
		case 136:
			return 1713550306;
		case 127:
			return 1369756178;
		case 128:
			return -736172423;
		case 129:
			return 1597070291;
		case 131:
			return -159501564;
		case 130:
			return -1438809608;
		case 132:
			return -102682392;
		case 133:
			return 676673543;
		case 120:
			return -81068979;
		case 121:
			return 227618407;
		case 122:
			return 2106043438;
		case 123:
			return -1380256064;
		case 124:
			return -2118469183;
		case 125:
			return -558997834;
		case 126:
			return 1563120499;
		case 137:
			return 658339366;
		default:
			break;
	}
	if (bParam1)
	{
		return 1757124778 /* GXTEntry: "Wilderness" */;
	}
	return 0;
}

bool func_2008(int iParam0, int iParam1)
{
	if (!func_1829(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_13 == -1)
	{
		return (Global_39.f_259[iParam0] && iParam1) != 0;
	}
	return (Global_1070356->f_19665[iParam0] && iParam1) != 0;
}

int func_2009(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 675537701;
		case 1:
			return -1915988145;
		case 2:
			return 38535626;
		case 3:
			return 1904167574;
		case 4:
			return 244711249;
		case 5:
			return -1859792564;
		case 6:
			return -1808688941;
		case 7:
			return -736296038;
		case 8:
			return -909439131;
		case 9:
			return 1917744724;
		case 10:
			return 821748379;
		case 11:
			return 196685551;
		case 12:
			return 1983548039;
		case 15:
			return -1716084250;
		case 13:
			return 985737465;
		case 16:
			return 869827975;
		case 14:
			return -735550853;
		default:
			break;
	}
	return 1776960747;
}

bool func_2010(int iParam0)
{
	return func_425((Global_3145858->f_42116[iParam0 /*18*/])->f_17, 0);
}

var func_2011(var uParam0)
{
	return uParam0;
}

struct<16> func_2012(var uParam0, bool bParam1)
{
	struct<16> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_681(uParam0->f_4, joaat("default"));
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_973() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_2013(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_2014(int iParam0)
{
	return func_905(iParam0) == 1946043663;
}

bool func_2015(int iParam0)
{
	return func_905(iParam0) == -126813555;
}

int func_2016(int iParam0)
{
	int iVar0;

	iVar0 = func_1776(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return 1;
	}
	return 0;
}

int func_2017(int iParam0)
{
	int iVar0;

	iVar0 = func_1776(iParam0, 1);
	if (func_2016(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_2042(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_2043(iParam0))
	{
		return (iVar0 - 161);
	}
	else if (func_2044(iParam0))
	{
		return (iVar0 - 162);
	}
	else if (func_2045(iParam0))
	{
		return (iVar0 - 170);
	}
	else if (func_2046(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_2018(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1988557796:
			return 49;
		case -1936069272:
			return 47;
		case -1926692092:
			return 42;
		case -1846416021:
			return 58;
		case -1721745367:
			return 2;
		case -1701192079:
			return 41;
		case -1659620438:
			return 50;
		case -1607530002:
			return 61;
		case -1589052195:
			return 37;
		case -1575020444:
			return 86;
		case -1572802418:
			return 67;
		case -1514969696:
			return 74;
		case -1397050499:
			return 53;
		case -1349331938:
			return 43;
		case -1345921497:
			return 29;
		case -1309904053:
			return 22;
		case -1290490489:
			return 7;
		case -1202225775:
			return 56;
		case -1080116020:
			return 23;
		case -1079033682:
			return 46;
		case -1059185085:
			return 25;
		case -1003690472:
			return 51;
		case -851757466:
			return 64;
		case -744806636:
			return 52;
		case -516489227:
			return 11;
		case -514416345:
			return 63;
		case -484540420:
			return 36;
		case -483049716:
			return 71;
		case -400566333:
			return 14;
		case -391623459:
			return 69;
		case -374018223:
			return 59;
		case -349428415:
			return 39;
		case -231535884:
			return 15;
		case -201802680:
			return 1;
		case -85606741:
			return 62;
		case -77989269:
			return 76;
		case -1:
			return 0;
		case 66478954:
			return 85;
		case 146438590:
			return 83;
		case 198507096:
			return 68;
		case 222365748:
			return 78;
		case 295732030:
			return 40;
		case 340029732:
			return 66;
		case 374652900:
			return 82;
		case 410940916:
			return 84;
		case 515706097:
			return 5;
		case 527883710:
			return 44;
		case 549685826:
			return 60;
		case 641300611:
			return 81;
		case 696211072:
			return 30;
		case 778435476:
			return 19;
		case 808428606:
			return 4;
		case 854463919:
			return 79;
		case 857703729:
			return 48;
		case 874892169:
			return 87;
		case 886907851:
			return 16;
		case 995847993:
			return 65;
		case 1061744811:
			return 6;
		case 1149992366:
			return 27;
		case 1221256507:
			return 8;
		case 1247001946:
			return 72;
		case 1275912274:
			return 45;
		case 1333289277:
			return 20;
		case 1341193408:
			return 10;
		case 1447875596:
			return 75;
		case 1495919075:
			return 70;
		case 1509485650:
			return 17;
		case 1546732394:
			return 34;
		case 1572090083:
			return 55;
		case 1608132015:
			return 38;
		case 1664203120:
			return 32;
		case 1679987408:
			return 54;
		case 1728485678:
			return 28;
		case 1742416595:
			return 3;
		case 1766148221:
			return 73;
		case 1768495249:
			return 21;
		case 1900095956:
			return 18;
		case 1946296046:
			return 12;
		case 1968069853:
			return 24;
		case 1997267529:
			return 31;
		case 2000631014:
			return 77;
		case 2019620375:
			return 57;
		case 2037894795:
			return 9;
		case 2048982041:
			return 33;
		case 2063781084:
			return 13;
		case 2082272090:
			return 35;
		case 2089824257:
			return 26;
		case 2128780735:
			return 80;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_2019(int iParam0)
{
	int iVar0;

	iVar0 = func_2018(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 87)
	{
		return 0;
	}
	return 1;
}

float func_2020(var uParam0)
{
	var uVar0;

	if (uParam0->f_2 != 0)
	{
		uVar0 = func_2047(794259616, uParam0->f_2, uParam0->f_1, "");
		return uVar0;
	}
	return uParam0->f_1;
}

void func_2021(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_2019(iParam0))
	{
		return;
	}
	iVar0 = func_2018(iParam0, 1);
	if (!func_617(&(Global_1140484->f_2001[iVar0 /*192*/])))
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] - 1);
	if ((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/][iVar0] > 0)
	{
		return;
	}
	(*(*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])[iVar0] = 0;
	(Global_1140484->f_2001[iVar0 /*192*/])->f_191 = 0;
	if (!func_2048((Global_1140484->f_2001[iVar0 /*192*/])->f_190))
	{
		return;
	}
	iVar1 = func_2049((Global_1140484->f_2001[iVar0 /*192*/])->f_190, 1);
	((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] = (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] - 1);
	if (&((*Global_1140484)[&Global_1140484->f_2001[iVar0 /*192*/] /*94*/])->f_88[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < (Global_1140484->f_41529[iVar1 /*25*/])->f_23)
	{
		if (Global_1140484->f_41529[iVar1 /*25*/][iVar2] != &Global_1140484->f_2001[iVar0 /*192*/])
		{
		}
		else
		{
			(*Global_1140484->f_41529[iVar1 /*25*/])[iVar2] = -1;
			(Global_1140484->f_41529[iVar1 /*25*/])->f_23 = ((Global_1140484->f_41529[iVar1 /*25*/])->f_23 - 1);
		}
		else
		{
			iVar2++;
	}