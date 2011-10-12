#ifndef THERMISTORTABLES_H_
#define THERMISTORTABLES_H_

#define OVERSAMPLENR 1
#if (THERMISTORHEATER == 1) || (THERMISTORBED == 1) //100k bed thermistor


#define NUMTEMPS_1 61
const short temptable_1[NUMTEMPS_1][2] = {
{	(23*OVERSAMPLENR)	,	300	},
{	(25*OVERSAMPLENR)	,	295	},
{	(27*OVERSAMPLENR)	,	290	},
{	(28*OVERSAMPLENR)	,	285	},
{	(31*OVERSAMPLENR)	,	280	},
{	(33*OVERSAMPLENR)	,	275	},
{	(35*OVERSAMPLENR)	,	270	},
{	(38*OVERSAMPLENR)	,	265	},
{	(41*OVERSAMPLENR)	,	260	},
{	(44*OVERSAMPLENR)	,	255	},
{	(48*OVERSAMPLENR)	,	250	},
{	(52*OVERSAMPLENR)	,	245	},
{	(56*OVERSAMPLENR)	,	240	},
{	(61*OVERSAMPLENR)	,	235	},
{	(66*OVERSAMPLENR)	,	230	},
{	(71*OVERSAMPLENR)	,	225	},
{	(78*OVERSAMPLENR)	,	220	},
{	(84*OVERSAMPLENR)	,	215	},
{	(92*OVERSAMPLENR)	,	210	},
{	(100*OVERSAMPLENR),	205	},
{	(109*OVERSAMPLENR),	200	},
{	(120*OVERSAMPLENR),	195	},
{	(131*OVERSAMPLENR),	190	},
{	(143*OVERSAMPLENR),	185	},
{	(156*OVERSAMPLENR),	180	},
{	(171*OVERSAMPLENR),	175	},
{	(187*OVERSAMPLENR),	170	},
{	(205*OVERSAMPLENR),	165	},
{	(224*OVERSAMPLENR),	160	},
{	(245*OVERSAMPLENR),	155	},
{	(268*OVERSAMPLENR),	150	},
{	(293*OVERSAMPLENR),	145	},
{	(320*OVERSAMPLENR),	140	},
{	(348*OVERSAMPLENR),	135	},
{	(379*OVERSAMPLENR),	130	},
{	(411*OVERSAMPLENR),	125	},
{	(445*OVERSAMPLENR),	120	},
{	(480*OVERSAMPLENR),	115	},
{	(516*OVERSAMPLENR),	110	},
{	(553*OVERSAMPLENR),	105	},
{	(591*OVERSAMPLENR),	100	},
{	(628*OVERSAMPLENR),	95	},
{	(665*OVERSAMPLENR),	90	},
{	(702*OVERSAMPLENR),	85	},
{	(737*OVERSAMPLENR),	80	},
{	(770*OVERSAMPLENR),	75	},
{	(801*OVERSAMPLENR),	70	},
{	(830*OVERSAMPLENR),	65	},
{	(857*OVERSAMPLENR),	60	},
{	(881*OVERSAMPLENR),	55	},
{	(903*OVERSAMPLENR),	50	},
{	(922*OVERSAMPLENR),	45	},
{	(939*OVERSAMPLENR),	40	},
{	(954*OVERSAMPLENR),	35	},
{	(966*OVERSAMPLENR),	30	},
{	(977*OVERSAMPLENR),	25	},
{	(985*OVERSAMPLENR),	20	},
{	(993*OVERSAMPLENR),	15	},
{	(999*OVERSAMPLENR),	10	},
{	(1004*OVERSAMPLENR),	5	},
{	(1008*OVERSAMPLENR),	0	} //safety
};
#endif
#if (THERMISTORHEATER == 2) || (THERMISTORBED == 2) //200k bed thermistor
#define NUMTEMPS_2 21
const short temptable_2[NUMTEMPS_2][2] = {
   {(1*OVERSAMPLENR), 848},
   {(54*OVERSAMPLENR), 275},
   {(107*OVERSAMPLENR), 228},
   {(160*OVERSAMPLENR), 202},
   {(213*OVERSAMPLENR), 185},
   {(266*OVERSAMPLENR), 171},
   {(319*OVERSAMPLENR), 160},
   {(372*OVERSAMPLENR), 150},
   {(425*OVERSAMPLENR), 141},
   {(478*OVERSAMPLENR), 133},
   {(531*OVERSAMPLENR), 125},
   {(584*OVERSAMPLENR), 118},
   {(637*OVERSAMPLENR), 110},
   {(690*OVERSAMPLENR), 103},
   {(743*OVERSAMPLENR), 95},
   {(796*OVERSAMPLENR), 86},
   {(849*OVERSAMPLENR), 77},
   {(902*OVERSAMPLENR), 65},
   {(955*OVERSAMPLENR), 49},
   {(1008*OVERSAMPLENR), 17},
   {(1020*OVERSAMPLENR), 0} //safety
};

#endif
#if (THERMISTORHEATER == 3) || (THERMISTORBED == 3) //mendel-parts
#define NUMTEMPS_3 28
const short temptable_3[NUMTEMPS_3][2] = {
		{(1*OVERSAMPLENR),864},
		{(21*OVERSAMPLENR),300},
		{(25*OVERSAMPLENR),290},
		{(29*OVERSAMPLENR),280},
		{(33*OVERSAMPLENR),270},
		{(39*OVERSAMPLENR),260},
		{(46*OVERSAMPLENR),250},
		{(54*OVERSAMPLENR),240},
		{(64*OVERSAMPLENR),230},
		{(75*OVERSAMPLENR),220},
		{(90*OVERSAMPLENR),210},
		{(107*OVERSAMPLENR),200},
		{(128*OVERSAMPLENR),190},
		{(154*OVERSAMPLENR),180},
		{(184*OVERSAMPLENR),170},
		{(221*OVERSAMPLENR),160},
		{(265*OVERSAMPLENR),150},
		{(316*OVERSAMPLENR),140},
		{(375*OVERSAMPLENR),130},
		{(441*OVERSAMPLENR),120},
		{(513*OVERSAMPLENR),110},
		{(588*OVERSAMPLENR),100},
		{(734*OVERSAMPLENR),80},
		{(856*OVERSAMPLENR),60},
		{(938*OVERSAMPLENR),40},
		{(986*OVERSAMPLENR),20},
		{(1008*OVERSAMPLENR),0},
		{(1018*OVERSAMPLENR),-20}
	};

#endif

#if THERMISTORHEATER == 1
#define NUMTEMPS NUMTEMPS_1
#define temptable temptable_1
#elif THERMISTORHEATER == 2
#define NUMTEMPS NUMTEMPS_2
#define temptable temptable_2
#elif THERMISTORHEATER == 3
#define NUMTEMPS NUMTEMPS_3
#define temptable temptable_3
#else
#error No heater thermistor table specified
#endif


#endif //THERMISTORTABLES_H_
