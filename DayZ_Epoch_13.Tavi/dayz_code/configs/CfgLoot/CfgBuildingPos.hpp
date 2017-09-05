#include "Buildings\Residential.hpp"
#include "Buildings\Boat.hpp"
#include "Buildings\Castle.hpp"
#include "Buildings\Church.hpp"
#include "Buildings\Construction.hpp"
#include "Buildings\CrashSite.hpp"
#include "Buildings\Farm.hpp"
#include "Buildings\Hospital.hpp"
#include "Buildings\Hunting.hpp"
#include "Buildings\Industrial.hpp"
#include "Buildings\InfectedCamp.hpp"
#include "Buildings\Military.hpp"
#include "Buildings\Office.hpp"
#include "Buildings\Powerlines.hpp"
#include "Buildings\ResidentialRuins.hpp"
#include "Buildings\Supermarket.hpp"
#include "Buildings\Toilet.hpp"
#include "Buildings\Roaming.hpp"
#include "Buildings\Misc.hpp"


//Taviana Building Loots
class land_tav_houseblock_b1: Supermarket
{
lootPos[] = {
{9.33594,2.09961,-7.2768},
{-5.17969,2.50037,-7.26909},
{7.35547,0.890991,-6.6768},
{9.85938,-2.53125,-7.2768},
{4.85156,-1.4679,-7.2768}};
};
class land_domek_zluty_bez: Residential
{
lootPos[] = {
{7.01855,2.59375,-2.42372},
{-0.68457,3.32813,-2.42373},
{-6.89624,0.078125,-2.42371},
{-6.73218,-3.8418,-2.42379},
{-5.39185,3.57227,-1.52366},
{2.51709,3.67188,-2.42372},
{-2.5022,2.56836,-2.42371}};
};
class land_stan_east: Military
{
lootPos[] = {
{1.9209,2.29468,-1.30048},
{-1.37109,0.115967,-1.30048},
{-1.78223,-3.05713,-1.30048},
{2.0625,-3.2063,-1.30048},
{0.790039,0.279053,-1.30048}};
};
class land_fortified_nest_big: Military
{
lootPos[] = {
{0.802246,1.06641,-0.680344},
{3.16797,-3.73535,-0.680344},
{-0.96582,-1.9248,-0.680344},
{-2.43555,1.04395,-0.680344},
{-3.12524,-3.8916,-0.680344}};
};
class land_kamaz: MilitarySpecial
{
lootPos[] = {
{1.62695,-3.93604,-1.75773},
{1.60645,0.710449,-1.72321},
{0.464844,4.646,-1.67464},
{-1.20605,1.86133,-1.70049},
{-1.18457,-1.37451,-1.74194},
{-0.359375,-4.16064,-1.76808}};
};
class land_tav_guardhouse: Military
{
lootPos[] = {
{4.14453,-0.350586,-1.70814},
{4.35547,2.32227,-1.70814},
{-0.570313,3.68848,-1.70814},
{-0.996094,-0.552734,-1.70814},
{-2.4375,2.83203,-1.70814},
{-2.36133,-3.3252,-1.02814},
{2.19922,-2.625,-0.848144}};
};
class land_tav_barrack2: MilitarySpecial
{
lootPos[] = {
{1.51538,-0.966797,-0.693401},
{0.468384,3.23438,-0.69013},
{-2.01868,-2.39258,-0.692669},
{0.831909,5.07422,0.520308}};
};
class land_wf_depot: Military
{
lootPos[] = {
{-0.634521,-2,-1.48044},
{2.98962,-0.970703,0.987467}};
};
class land_tav_houseblock_b4_in: Residential
{
    lootPos[] = {    
        {-5.13281,-2.19922,-3.27635},
        {0.830078,-4.00391,-3.31635},
        {4.95508,-2.82031,-2.76635},    
        {-5.05078,1.15918,-3.31635},        
        {-3.98438,3.11914,-2.54635},    
        {-1.60938,3.00781,-2.29635},        
        {0.856445,-2.54297,-7.2548}};    
};
























	class Land_tav_Ind_Pec_03_nov : Industrial {
	lootPos[] = {{7.11816,-21.1865,-5.36023},{3.15234,-9.58789,-5.35023},{8.6377,1.13916,-5.34023},{-0.453125,-0.964355,-5.34023},{-13.3867,-10.0005,-5.33023},{-7.76953,-10.0313,-5.32023},{-8.60352,-15.8286,-3.96721},{-9.10742,-12.6348,-2.47037},{-13.2656,-9.32764,-2.45037},{11.7871,-7.78174,5.82546},{-1.21582,-13.377,5.83546},{-0.919922,19.687,4.09103}};}; 
	class Land_tav_tovarna2 : Industrial {
	lootPos[] = {{-11.6309,7.2052,-5.55933},{-12.0674,2.56909,-5.55933},{-4.89355,6.6394,-5.55933},{-3.74121,2.90393,-3.89665},{-12.8672,1.44519,-2.23135},{-12.415,8.1311,-2.23135},{-12.7236,4.11255,-2.23135},{-3.99805,8.9801,-2.23156},{-7.33105,8.44214,-2.23156},{-4.55371,5.22644,-2.23156},{-11.4746,2.92114,1.66661},{-11.0703,8.13818,1.66661},{-4.67578,7.32678,1.62174},{-2.68262,3.44763,3.4243},{-13.1953,-8.95862,3.4243},{-8.80859,-0.443481,0.401226},{-12.1328,-0.149414,0.424298},{-2.03418,6.61414,-5.55933},{0.239258,1.72278,-5.59793},{6.22461,-3.948,-4.61825},{-6.39355,-8.24353,-5.59541},{-10.8496,-6.91211,-5.56572},{-6.77637,-1.73083,-5.56019}}; }; 
	class Land_tav_Ind_Pec_03 : Industrial { 
	lootPos[] = {{7.11816,-21.1865,-5.36023},{3.15234,-9.58789,-5.35023},{8.6377,1.13916,-5.34023},{-0.453125,-0.964355,-5.34023},{-13.3867,-10.0005,-5.33023},{-7.76953,-10.0313,-5.32023},{-8.60352,-15.8286,-3.96721},{-9.10742,-12.6348,-2.47037},{-13.2656,-9.32764,-2.45037},{11.7871,-7.78174,5.82546},{-1.21582,-13.377,5.83546},{-0.919922,19.687,4.09103}}; }; 
	class Land_Ind_Mlyn_01 : Industrial { 
	lootPos[] = {{-6.88525,2.5332,9.12113},{-7.21045,2.59473,3.08799},{-2.69336,8.43848,0.18856},{-2.80615,8.02051,-7.77156}}; }; 
	class Land_Ind_SiloVelke_02 : Industrial { 
	lootPos[] = {{9.44531,0.0566406,17.7159},{-6.57422,0.0644531,17.7059}}; }; 
	class Land_Ind_Pec_03b : Industrial { 
	lootPos[] = {{1.79883,-17.834,5.72049},{-2.71094,10.7085,5.71049},{-2.08105,19.0791,3.96606},{0.714844,25.252,3.96606}}; }; 
	class Land_Ind_Expedice_3 : Industrial { 
	lootPos[] = {{1.86475,-5.73145,2.15865},{2.06738,6.79297,2.11729},{-1.11279,17.6689,2.10161}}; }; 
	class Land_tav_HouseV2_01B : Residential { maxRoaming = 2; 
	lootPos[] = {{-8.60889,2.91016,1.15648},{-9.13623,-0.748047,1.16798},{-4.93896,3.45801,1.15673},{-1.05664,2.22168,1.15663},{-2.76758,-1.0625,5.43909},{-7.48486,0.986328,5.44909},{-1.41699,4.82129,5.45909},{1.76758,-0.648438,6.17909},{6.99365,4.53906,5.42909},{1.5249,1.26465,5.42909}}; }; 
	class Land_tav_HouseV_2L : Residential { maxRoaming = 3; 
	lootPos[] = {{2.94727,-4.0979,-3.05021},{0.294922,-1.46436,-3.05999},{0.492188,3.06396,-4.07833},{4.24219,1.87793,-4.00904},{-2.95117,2.56055,-4.05833},{-1.30078,-3.3042,-1.13694},{2.68555,-4.24805,-1.13486},{-3.62109,2.62524,-0.594858},{1.5,3.74561,-0.394857},{-2.23633,-4.28052,-4.07968}}; }; 
	class Land_Bulding_r : Residential { maxRoaming = 3; 
	lootPos[] = {{-11.9141,-7.70056,-3.11493},{-5.33789,-8.85352,-3.11493},{9.89453,-8.91663,-3.12493},{3.5957,0.791138,-3.11493},{-0.537109,4.53772,-2.80493},{-4.25781,6.32971,0.5368},{3.08203,1.11963,0.546801},{-6.57617,-8.63171,0.5368},{-4.57422,12.075,0.5368},{-20.6484,-12.1409,0.5368},{-17.916,-16.7217,0.546801},{8.28711,-15.3203,0.5368},{13.3633,-1.95349,0.5268}}; }; 
	class LAND_x : Default { minRoaming = 0; maxRoaming = 1; zombieClass[] = {}; 
	lootPos[] = {}; }; 
	class Land_zombie_spawn : Default { minRoaming = 0; maxRoaming = 1; zombieClass[] = {"z_Mutant"}; 
	lootPos[] = {}; }; 
	class Land_dumruina_mini : Residential { maxRoaming = 3; 
	lootPos[] = {}; }; 
	class Land_statek_hl_bud : Residential { maxRoaming = 3; 
	lootPos[] = {}; }; 
	class LAND_HouseBlock_D1_ex1 : Residential { maxRoaming = 3; 
	lootPos[] = {}; }; 
	class LAND_HouseBlock_D1 : Residential { maxRoaming = 3; 
	lootPos[] = {}; }; 
	class LAND_hockej_stadion : Residential { maxRoaming = 3; 
	lootPos[] = {}; }; 
	class LAND_Big_Panelka : Residential { maxRoaming = 6; 
	lootPos[] = {{2.72461, -0.673828, -14.7521}, {3.56104, 3.88281, -14.7521}, {8.94434, -1.90771, -14.7521}, {10.9814, 0.0883789, -14.7519}}; }; 
	class LAND_small_Panelka : Residential { maxRoaming = 3; 
	lootPos[] = {}; }; 
	class Land_statek_brana : Farm { maxRoaming = 3;
	lootPos[] = {}; }; 
	class Land_Statek_kulna : Farm { maxRoaming = 3; 
	lootPos[] = {}; }; 
	class LAND_domek05 : Residential { maxRoaming = 7; 
	lootPos[] = { {-4.85107,-1.41309,-2.79727}, {-4.92188,1.28662,-2.79728}, {0.280273,-1.30566,-2.79728}, {2.28516,-1.74805,-2.79727}, {4.56299,0.943848,-2.79727} }; }; 
	class LAND_ZalChata : Residential { maxRoaming = 2; 
	lootPos[] = {{-0.405273, -3.00085, -0.631011}}; }; 
	class LAND_hotel_rivera2 : Residential { maxRoaming = 4;//15 
	lootPos[] = {{-6.81641, -8.87415, -0.227416}, {-6.94629, 2.83325, -0.395831}}; }; 
	class LAND_hotel_rivera1 : Residential { maxRoaming = 5;//15 
	lootPos[] = {{10.8145, 4.72375, -0.209453}, {2.43164, 6.83557, -0.271956}, {-6.52734, 5.13611, -0.358277}}; }; 
	class LAND_bus_depo : Industrial { maxRoaming = 5;//15 
	lootPos[] = { {46.2207,-12.0498,-11.023}, {41.7188,-16.0869,-11.023}, {33.9932,-27.4717,-11.023}, {34.5576,-22.0527,-11.023}, {27.3032,-11.8188,-11.023}, {20.5039,-15.9302,-11.023}, {22.4487,-38.8652,-11.023}, {12.3018,-33.7637,-11.023}, {12.332,-27.6064,-11.023}, {8.68701,-11.834,-11.023}, {-6.22607,-15.6729,-11.023}, {-6.7002,-26.4194,-11.023}, {-9.30078,-38.2964,-11.023}, {-17.5396,-40.0762,-11.023}, {-17.5771,-20.0938,-11.023}, {-12.4268,-9.27393,-11.023}, {-23.0518,-24.9692,-11.023}, {-40.2495,-25.6689,-11.023}, {-34.6821,-15.707,-11.023}, {-22.8115,-2.72607,-11.023}, {-23.3408,15.585,-11.023}, {-30.1621,35.708,-11.023}, {-23.6079,32.4619,-11.023} }; }; 
	class LAND_casino : Residential { maxRoaming = 5;//50 
	lootPos[] = {}; }; 
	class LAND_Parlament : Residential { maxRoaming = 5;//50 
	lootPos[] = {{14.3896, 16.248, -8.68905}, {9.83301, -8.93848, -8.68905}, {10.9756, -22.2969, -8.68905}, {-3.5752, -15.6768, -8.68905}, {-10.0947, -3.38965, -8.68905}, {-32.4775, -11.9082, -9.15828}, {-41.9609, -6.90527, -8.68905}, {-20.8779, -0.0322266, -8.68905}, {-23.3994, 9.42383, -8.68905}, {-36.8359, 12.3271, -8.68905}, {-23.6777, 6.11328, -4.44803}, {-23.1836, 0.365234, -4.44803}, {-37.2666, 3.17383, -4.44803}, {-11.3096, -14.624, -1.5775}, {-16.0293, -2.89355, -1.5775}, {-9.78906, 17.9072, -1.00882}, {2.22656, 22.0771, 1.06898}, {6.81738, 18.7188, -0.604359}, {15.8086, 10.7207, -1.5775}, {12.6025, -14.8164, -1.5775}, {11.9072, -23.6543, -1.5775}, {-6.1748, -23.7324, -1.5775}}; }; 
	class LAND_Galerie : Residential { lootChance = 0.2; maxRoaming = 5;//50 
	lootPos[] = {{2.2998, -15.3848, -4.03873}, {-3.52148, -5.5752, -4.03873}, {-0.500977, 6.52051, -4.03873}, {3.08398, 17.0322, -4.03873}, {7.05078, 21.6533, -4.03873}, {15.0928, 20.6689, -4.03873}, {9.73145, 13.6855, -4.03873}, {6.77148, 6.11621, -4.03873}, {10.415, -5.66602, -4.03873}, {17.2861, -0.505859, -4.03873}, {14.792, -11.7266, -4.03873}, {7.39355, -9.91992, -4.03873}, {11.9824, -23.0996, -4.03873}, {17.0127, -22.916, -4.03873}, {-6.96387, -22.4404, -4.03873}, {-16.3311, -20.2607, -4.03873}, {-8.69629, -12.6553, -4.03873}, {-15.2529, -3.19043, -4.03873}, {-12.7793, 0.00878906, -4.03873}, {-7.13867, 5.29004, -4.03873}, {-12.3525, 16.9082, -4.03873}, {-16.9336, 11.4092, -4.03873}, {-17.1719, 23.0137, -4.03873}, {-0.325195, 23.165, -2.77151}, {2.25293, 10.8838, -0.0799408}, {-0.390625, -21.5742, -0.0799408}, {-15.8799, -21.9678, -0.0799408}, {-8.38184, -15.25, -0.0799408}, {-15.9922, -3.94824, -0.0799408}, {-9.87598, 2.06152, -0.0799408}, {-15.7168, 20.9795, -0.0799408}, {-7.92676, 21.0273, -0.0799408}, {7.29199, 21.8848, -0.0799408}, {9.74707, 14.2617, -0.0799408}, {16.7217, 15.6582, -0.0799408}, {15.3125, 4.15234, -0.0799408}, {9.31543, -2.77637, -0.0799408}, {8.64258, -12.2246, -0.0799408}, {15.874, -15.8506, -0.0799408}, {8.00195, -22.6797, -0.0799408}}; }; 
	class LAND_Stojan_Bus : Residential { maxRoaming = 5;//15 
	lootPos[] = {{-0.432617,-4.72363,-2.94725},{-0.138672,2.72168,-2.94725},{-0.0273438,14.0723,-2.94725}}; }; 
	class LAND_dum_patrovy03 : Residential { maxRoaming = 5;//10 
	lootPos[] = {}; }; 
	class LAND_Cinzak_long : Residential { maxRoaming = 1;//5 
	lootPos[] = {}; }; 
	class LAND_Cinzak_corner2 : Residential { maxRoaming = 1;//5 
	lootPos[] = {}; }; 
	class LAND_Cinzak_long_centr : Residential { maxRoaming = 1;//5 
	lootPos[] = {}; }; 
	class LAND_Cinzak_corner : Residential { maxRoaming = 1;//5 
	lootPos[] = {}; }; 
	class LAND_Cinzak_long_double : Residential { maxRoaming = 1;//5 
	lootPos[] = {}; }; 
	class LAND_spital : Hospital { maxRoaming = 10;//30 
	lootPos[] = {{26.7461, 5.39746, -20.3688}, {27.5381, -11.8232, -20.3688}, {27.3848, -4.24023, -20.3688}, {16.9307, -1.49316, -20.3688}, {4.95117, -14.4082, -20.3688}, {-0.453125, -8.0293, -20.3688}, {-3.30566, 0.111328, -20.3688}, {-16.3809, 0.611328, -20.3688}, {-15.084, 5.4375, -20.3688}}; }; 
	class LAND_Podloubi_double_low : Residential { maxRoaming = 3; //5 
	lootPos[] = {}; }; 
	class LAND_Podloubi_End_Low_1 : Residential { maxRoaming = 3;//5 
	lootPos[] = {}; }; 
	class LAND_Podloubi_End_Low_2 : Residential { maxRoaming = 3; //5 
	lootPos[] = {}; }; 
	class LAND_Garaz_velka : Industrial { maxRoaming = 3;//30 
	lootPos[] = {{23.1904, 13.9424, 2.01991}, {3.24121, -11.0928, 2.00445}, {-18.8145, -6.86035, 1.98736}, {-1.86914, 31.0566, -0.0248146}, {9.60156, 6.1709, -1.75024}, {-16.4717, -7.5293, -1.77044}, {-1.99414, 24.2988, -3.8975}, {5.67578, 14.3477, -5.51864}, {18.374, 7.62695, -5.5088}, {12.4443, -6.52539, -5.51339}, {-22.5498, -19.5303, -5.54051}}; }; 
	class LAND_Hotel_Marcomio : Residential { maxRoaming = 3;//30 
	lootPos[] = {}; }; 
	class LAND_shopping_sab2 : Supermarket { maxRoaming = 3;//30 
	lootPos[] = {{-3.02246, -9.18652, -3.66148}, {2.74121, -0.436523, -3.66148}, {-2.81445, 9.39941, -3.66148}, {-8.21387, 8.58105, -3.66148}, {-4.8252,20.6104,-3.66148},{3.1748,21.4014,-3.66148}, {-11.0781, -11.707, -3.66148}, {-11.3047, -1.60938, -3.66148}, {7.66602, -10.1807, -3.66148}, {9.92285,-2.89453,-3.66148}, {-19.9063, -0.12207, -6.70006}, {23.7676, 4.64551, -3.65215}, {11.5693, 3.95996, -3.65815}, {10.6963, 10.0068, -3.65599}}; }; 
	class LAND_Nadrazi_sabina : Residential { maxRoaming = 5;//50 
	lootPos[] = {{9.3916, 2.6377, -18.609}, {12.6191, -13.3779, -18.083}, {-12.0859, -13.4141, -18.0592}, {-10.3867, 11.1563, -20.5584}, {18.3037, 25.9717, -23.8341}, {-16.3701, 27.2012, -24.99}, {-28.5869, 29.3105, -24.99}, {-31.9834, -6.94727, -18.0517}, {-21.3545, -38.3887, -12.6001}, {-5.75586, -43.291, -12.6138}, {9.58203, -38.4443, -12.5712}, {19.1826, -42.4551, -12.5954}, {-1.72852, -27.6846, -22.0921}, {19.6211, -30.2168, -22.0318}, {28.9629, -26.2432, -21.9936}}; }; 
	class LAND_dum_patrovy06 : Residential { maxRoaming = 3;//5 
	lootPos[] = {}; }; 
	class LAND_Autosalon : Residential { maxRoaming = 4;//40 
	lootPos[] = {{-0.675781, -2.78906, -8.88722}, {9.98242, 0.103516, -8.88722}, {13.1133, 11.5215, -8.88722}, {18.6689, 20.7617, -8.88722}, {7.25781, 17.5869, -8.88722}, {-1.80371, 22.6143, -8.88722}, {-20.9941, -4.5752, -1.02026}, {-8.07324, 19.542, -1.02026}, {-4.66113, 9.11816, -1.02026}, {3.75293, 8.75488, -1.02026}, {13.1406, 19.0322, -1.02026}, {15.6494, 4.32324, -1.02026}}; }; 
	class LAND_Banka : Residential { maxRoaming = 5;//5 
	lootPos[] = {{3.83691, -15.7803, -25.6122}, {5.27539, -7.64551, -25.6122}, {13.2227, -7.44336, -25.6122}, {11.8125, -11.6328, -25.6122}}; }; 
	class LAND_Muzeum : Residential { maxRoaming = 15;//40 
	lootPos[] = {}; }; 
	class LAND_big_church : Church { maxRoaming = 3;//20 
	lootPos[] = {}; }; 
	class LAND_Ruske_kolo : Residential { maxRoaming = 3;//10 
	lootPos[] = {}; }; 
	class LAND_Bufet : Residential { maxRoaming = 3;//15 
	lootPos[] = {{10.9902, -1.64453, -1.7135}, {6.53027, -2.49707, -1.7135}, {4.9541, -6.72949, -1.7135}, {-1.73047, -12.3477, -1.7135}, {3.03809, -3.75781, -1.7135}, {-4.38379, -7.69727, -1.7135}, {-0.751953, -1.2002, -1.7135}, {6.97559, 4.30762, -1.7135}, {-0.258789, 2.55762, -1.7135}, {-6.70898, 3.5918, -1.7135}, {-7.43555, -5.5752, -1.7135}}; }; 
	class LAND_Bus_Stojan_Bud : Residential { maxRoaming = 3;//15 
	lootPos[] = {}; }; 
	class LAND_Cinzak_roh2 : Residential { maxRoaming = 3;//20 
	lootPos[] = {}; }; 
	class LAND_Cinzak_roh3 : Residential { maxRoaming = 3;//20 
	lootPos[] = {}; }; 
	class LAND_Cinzak_trojuhlenik : Residential { maxRoaming = 3;//20 
	lootPos[] = {}; }; 
	class LAND_kanovka_budova : Industrial { maxRoaming = 3;//10 
	lootPos[] = {{-4.93652, -3.72852, -6.58418}, {-6.65625, 10.7012, -6.58418}}; }; 
	class LAND_kanovka_budova_snich : Industrial { maxRoaming = 3;//10 
	lootPos[] = {{-12.3037,-0.175781,-7.46695},{-6.47119,-8.65234,-7.46695},{-4.81348,-3.49023,-7.46695}}; }; 
	class LAND_HouseV_2I_snow : Residential { maxRoaming = 3;//5 
	lootPos[] = {}; }; 
	class LAND_bouda1_zima : Residential { maxRoaming = 3;//5 
	lootPos[] = {}; }; 
	class LAND_kasarna_brana : Military { maxRoaming = 3;//5 
	lootPos[] = {}; }; 
	class LAND_kasarna : Military { maxRoaming = 3;//5 
	lootPos[] = {}; }; 
	class LAND_kasarna_prujezd : Military { maxRoaming = 3;//5 
	lootPos[] = {}; }; 
	class LAND_kasarna_rohova : Military { maxRoaming = 3;//5 
	lootPos[] = {}; }; 
	class LAND_watertower1 : Residential { maxRoaming = 3;//5 
	lootPos[] = {}; }; 
	class OSShDY_base : Residential { maxRoaming = 3;//20 
	lootPos[] = {}; }; 
	class CD2 : Residential { maxRoaming = 3;//20 
	lootPos[] = {}; }; 
	class Ds : Residential { maxRoaming = 3;//20 
	lootPos[] = {}; }; 
	class Land_fuelstation_army : Military { maxRoaming = 3; 
	lootPos[] = {}; }; 
	class Land_ryb_domek : Residential { maxRoaming = 2; 
	lootPos[] = {{-0.0595703, -1.03418, -2.015}}; }; 
	class Land_benzina_schnell : Industrial { maxRoaming = 7; 
	lootPos[] = {}; }; 
	class Land_chilovej_dum_mini : Residential { maxRoaming = 3; 
	lootPos[] = {2.51221, 2.39453, -2.86942}; }; //Origins Wrecks 
	class Land_zygul_wrecked : Residential { maxRoaming = 1; 
	lootPos[] = {}; }; 
	class Land_sedan_weck : Residential { maxRoaming = 1; 
	lootPos[] = {}; }; 
	class Land_Trabant_wreck : Residential { maxRoaming = 1; 
	lootPos[] = {}; }; 
	class Land_kamaz_hasic : Residential { minRoaming = 1; maxRoaming = 1; zombieClass[] = {"ori_pozarnik","ori_pozarnik","ori_pozarnik","ori_zombie6Ln"}; 
	lootPos[] = {}; };