#pragma once

struct AI_EnemyInfo_t : public AI_EnemyInfoBase_t /*0x0*/  // sizeof 0xD8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x18]; // offset 0x0
    CRelativeLocation m_lastKnownLocation; // offset 0x18, size 0x48, align 8
    CRelativeLocation m_lastSeenLocation; // offset 0x60, size 0x48, align 8
    GameTime_t m_flLastKnownTime; // offset 0xA8, size 0x4, align 255
    GameTime_t m_flTimeValidEnemy; // offset 0xAC, size 0x4, align 255
    AI_EnemyEludingState_t m_nEludingState; // offset 0xB0, size 0x4, align 4
    bool m_bUnforgettable; // offset 0xB4, size 0x1, align 1
    bool m_bUnknownEnemy; // offset 0xB5, size 0x1, align 1
    char _pad_00B6[0x2]; // offset 0xB6
    AI_MemoryData_t[2] m_pMemoryTypeData; // offset 0xB8, size 0x20, align 4
};
