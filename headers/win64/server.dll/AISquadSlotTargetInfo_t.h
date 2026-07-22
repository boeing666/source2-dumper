#pragma once

struct AISquadSlotTargetInfo_t  // sizeof 0x14, align 0xFF [trivial_dtor] (server)
{
    CHandle< CBaseEntity > hTarget; // offset 0x0, size 0x4, align 4
    CBitVec< 48 > slots; // offset 0x4, size 0x8, align 4 | MNotSaved
    CBitVec< 48 > inactive_slots_by_mode; // offset 0xC, size 0x8, align 4 | MNotSaved
};
