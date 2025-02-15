#ifndef FF_SH_SHAREDDEFS_H
#define FF_SH_SHAREDDEFS_H
#ifdef _WIN32
#pragma once
#endif


enum FF_CLASS
{
	FF_CLASS_UNASSIGNED = 0,
	FF_CLASS_SCOUT,
	FF_CLASS_SNIPER,
	FF_CLASS_SOLDIER,
	FF_CLASS_DEMOMAN,
	FF_CLASS_MEDIC,
	FF_CLASS_HWGUY,
	FF_CLASS_PYRO,
	FF_CLASS_SPY,
	FF_CLASS_ENGINEER,
	FF_CLASS_CIVILIAN,

	FF_CLASS_COUNT
};

const int FF_CLASS_BITS[] =
{
	0,
	(1<<0),
	(1<<1),
	(1<<2),
	(1<<3),
	(1<<4),
	(1<<5),
	(1<<6),
	(1<<7),
	(1<<8),
	(1<<9)
};


enum FF_TEAM
{
	FF_TEAM_AUTO_ASSIGN = -1,
	FF_TEAM_UNASSIGNED,
	FF_TEAM_SPECTATE,
	FF_TEAM_ONE,
	FF_TEAM_TWO,
	FF_TEAM_THREE,
	FF_TEAM_FOUR,
	FF_TEAM_FIVE,
	FF_TEAM_SIX,
	FF_TEAM_SEVEN,
	FF_TEAM_EIGHT,
	FF_TEAM_NINE,
	FF_TEAM_TEN,
	FF_TEAM_ELEVEN,
	FF_TEAM_TWELVE,
	FF_TEAM_THIRTEEN,
	FF_TEAM_FOURTEEN,
	FF_TEAM_FIFTEEN,
	FF_TEAM_SIXTEEN,
	FF_TEAM_SEVENTEEN,
	FF_TEAM_EIGHTEEN,
	FF_TEAM_NINETEEN,
	FF_TEAM_TWENTY,
	FF_TEAM_TWENTYONE,
	FF_TEAM_TWENTYTWO,
	FF_TEAM_TWENTYTHREE,
	FF_TEAM_TWENTYFOUR,
	FF_TEAM_TWENTYFIVE,
	FF_TEAM_TWENTYSIX,
	FF_TEAM_TWENTYSEVEN,
	FF_TEAM_TWENTYEIGHT,
	FF_TEAM_TWENTYNINE,
	FF_TEAM_THIRTY,
	FF_TEAM_THIRTYONE, // WARNING: Do not add more than 31 as more will not work with a bit mask.

	FF_TEAM_LAST = FF_TEAM_THIRTYONE
};

const int FF_TEAM_BITS[] =
{
	0,			0,			(1<<0),		(1<<1),		(1<<2),
	(1<<3),		(1<<4),		(1<<5),		(1<<6),		(1<<7),
	(1<<8),		(1<<9),		(1<<10),	(1<<11),	(1<<12),
	(1<<13),	(1<<14),	(1<<15),	(1<<16),	(1<<17),
	(1<<18),	(1<<19),	(1<<20),	(1<<21),	(1<<22),
	(1<<23),	(1<<24),	(1<<25),	(1<<26),	(1<<27),
	(1<<28),	(1<<29),	(1<<30)
};


enum FF_WEAPON
{
	FF_WEAPON_PISTOL = 0,
	FF_WEAPON_PHYSCANNON,
	FF_WEAPON_SMG1,

	FF_WEAPON_COUNT // WARNING: The weapon count should never be greater than 31.
};

const int FF_WEAPON_BITS[] =
{
	(1<<0),
	(1<<1),
	(1<<2)
};

const string_t FF_WEAPON_NAME[] =
{
	MAKE_STRING("weapon_pistol"),
	MAKE_STRING("weapon_physcannon"),
	MAKE_STRING("weapon_smg1")
};

#endif // FF_SH_SHAREDDEFS_H