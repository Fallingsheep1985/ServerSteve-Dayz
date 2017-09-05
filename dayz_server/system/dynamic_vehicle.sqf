_Ratio1 = 1;
_Ratio2 = 2;
_Ratio3 = 3;
if (MaxVehicleLimit > 300) then {
	_Ratio1 = round(MaxVehicleLimit * 0.0034);
	_Ratio2 = round(MaxVehicleLimit * 0.0067);
	_Ratio3 = round(MaxVehicleLimit * 0.01);
};
AllowedVehiclesList = [
	["AH6X_DZ",_Ratio3],
	["AN2_DZ",_Ratio1], //Green
	["AN2_2_DZ",_Ratio1], //Red and white
	["An2_2_TK_CIV_EP1_DZ",_Ratio1], //Green and white
	["ArmoredSUV_PMC_DZE",_Ratio1],
	["ATV_CZ_EP1",_Ratio3],
	["ATV_US_EP1",_Ratio3],
	["C130J_US_EP1_DZ",_Ratio1],
	["car_hatchback",_Ratio3],
	["car_sedan",_Ratio3],
	["CH_47F_EP1_DZE",_Ratio1],
	["CH53_DZE",_Ratio1],
	["CSJ_GyroC",_Ratio3],
	["CSJ_GyroCover",_Ratio3],
	["CSJ_GyroP",_Ratio3],
	["datsun1_civil_1_open_DZE",_Ratio3],
	["datsun1_civil_2_covered_DZE",_Ratio3],
	["datsun1_civil_3_open_DZE",_Ratio3],
	["GAZ_Vodnik_DZE",_Ratio1],
	["GAZ_Vodnik_MedEvac",_Ratio1],
	["GLT_M300_LT",_Ratio3],
	["GLT_M300_ST",_Ratio3],
	["GNT_C185_DZ",_Ratio1],
	["GNT_C185C_DZ",_Ratio1],
	["GNT_C185R_DZ",_Ratio1],
	["GNT_C185U_DZ",_Ratio1],
	["hilux1_civil_1_open_DZE",_Ratio3],
	["hilux1_civil_2_covered_DZE",_Ratio3],
	["hilux1_civil_3_open_DZE",_Ratio3],
	["HMMWV_Ambulance",_Ratio1],
	["HMMWV_Ambulance_CZ_DES_EP1",_Ratio1],
	["HMMWV_DES_EP1",_Ratio3],
	["HMMWV_DZ",_Ratio3],
	["HMMWV_M1035_DES_EP1",_Ratio1],
	["HMMWV_M1151_M2_CZ_DES_EP1_DZE",_Ratio1],
	["HMMWV_M998A2_SOV_DES_EP1_DZE",_Ratio1],
	["Ikarus",_Ratio3],
	["Ikarus_TK_CIV_EP1",_Ratio3],
	["Kamaz_DZE",_Ratio3],
	["KamazRefuel_DZ",_Ratio1],
	["Lada1",_Ratio3],
	["Lada1_TK_CIV_EP1",_Ratio3],
	["Lada2",_Ratio3],
	["Lada2_TK_CIV_EP1",_Ratio3],
	["LadaLM",_Ratio3],
	["LandRover_CZ_EP1",_Ratio3],
	["LandRover_MG_TK_EP1_DZE",_Ratio1],
	["LandRover_Special_CZ_EP1_DZE",_Ratio1],
	["LandRover_TK_CIV_EP1",_Ratio3],
	["M1030_US_DES_EP1",_Ratio3],
	["MH6J_DZ",_Ratio3],
	["Mi17_Civilian_DZ",_Ratio3],
	["Mi17_DZE",_Ratio3],
	["MMT_Civ",(_Ratio3 * 2)],
	["MtvrRefuel_DES_EP1_DZ",_Ratio1],
	["MTVR_DES_EP1",_Ratio3],
	["MV22_DZ",_Ratio1],
	["Offroad_DSHKM_Gue_DZE",_Ratio3],
	["Old_bike_TK_INS_EP1",_Ratio3],
	["Old_moto_TK_Civ_EP1",_Ratio3],
	["Pickup_PK_GUE_DZE",_Ratio3],
	["Pickup_PK_INS_DZE",_Ratio3],
	["Pickup_PK_TK_GUE_EP1_DZE",_Ratio3],
	["S1203_ambulance_EP1",_Ratio3],
	["S1203_TK_CIV_EP1",_Ratio3],
	["Skoda",_Ratio3],
	["SkodaBlue",_Ratio3],
	["SkodaGreen",_Ratio3],
	["SkodaRed",_Ratio3],
	["SUV_Blue",_Ratio1],
	["SUV_Camo",_Ratio1],
	["SUV_Charcoal",_Ratio1],
	["SUV_Green",_Ratio1],
	["SUV_Orange",_Ratio1],
	["SUV_Pink",_Ratio1],
	["SUV_Red",_Ratio1],
	["SUV_Silver",_Ratio1],
	["SUV_TK_CIV_EP1",_Ratio1],
	["SUV_White",_Ratio1],
	["SUV_Yellow",_Ratio1],
	["tractor",_Ratio3],
	["TT650_Civ",_Ratio3],
	["TT650_Ins",_Ratio3],
	["TT650_TK_CIV_EP1",_Ratio3],
	["UAZ_CDF",_Ratio3],
	["UAZ_INS",_Ratio3],
	["UAZ_MG_TK_EP1_DZE",_Ratio3],
	["UAZ_RU",_Ratio3],
	["UAZ_Unarmed_TK_CIV_EP1",_Ratio3],
	["UAZ_Unarmed_TK_EP1",_Ratio3],
	["UAZ_Unarmed_UN_EP1",_Ratio3],
	["UH1H_DZE",_Ratio2],
	["UH1Y_DZE",_Ratio2],
	["UH60M_EP1_DZE",_Ratio1],
	["UralRefuel_TK_EP1_DZ",_Ratio1],
	["Ural_CDF",_Ratio3],
	["Ural_TK_CIV_EP1",_Ratio3],
	["Ural_UN_EP1",_Ratio3],
	["V3S_Open_TK_CIV_EP1",_Ratio3],
	["V3S_Open_TK_EP1",_Ratio3],
	["V3S_Refuel_TK_GUE_EP1_DZ",_Ratio1],
	["VolhaLimo_TK_CIV_EP1",_Ratio3],
	["Volha_1_TK_CIV_EP1",_Ratio3],
	["Volha_2_TK_CIV_EP1",_Ratio3],
	["VWGolf",_Ratio3]
];

if (toLower worldName in ["caribou","chernarus","cmr_ovaron","dayznogova","dingor","dzhg","fallujah","fapovo","fdf_isle1_a","isladuala","lingor","mbg_celle2","namalsk","napf","oring","panthera2","sara","sauerland","smd_sahrani_a2","tasmania2010","tavi","trinity","utes"]) then {
	// water map, add boats
	
	AllowedVehiclesList = AllowedVehiclesList + [
		["Fishing_Boat",_Ratio3],
		["JetSkiYanahui_Case_Blue",_Ratio1],
		["JetSkiYanahui_Case_Green",_Ratio1],
		["JetSkiYanahui_Case_Red",_Ratio1],
		["JetSkiYanahui_Case_Yellow",_Ratio1],
		["PBX",_Ratio3],
		["RHIB",_Ratio3],
		["Smallboat_1",_Ratio3],
		["Smallboat_2",_Ratio3],
		["Zodiac",_Ratio3]
	];
};