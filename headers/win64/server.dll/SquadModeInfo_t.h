#pragma once

struct SquadModeInfo_t  // sizeof 0x30, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x10]; // offset 0x0
    CUtlVector< SquadSlotId_t > m_vecSlots; // offset 0x10, size 0x18, align 8
    bool m_bShareEnemyInfo; // offset 0x28, size 0x1, align 1
    char _pad_0029[0x7]; // offset 0x29
};
