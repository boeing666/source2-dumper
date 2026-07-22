#pragma once

struct CDOTA_ScriptedSpawner::scripted_moveto_t  // sizeof 0x8, align 0xFF [trivial_dtor] (server)
{
    CHandle< CBaseEntity > hMoveToTarget; // offset 0x0, size 0x4, align 4
    CHandle< CBaseEntity > hGivenToNPC; // offset 0x4, size 0x4, align 4
};
