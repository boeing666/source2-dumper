#pragma once

class C_DOTA_Unit_Scout : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1BB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1AB8]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1AB8, size 0x1, align 1
    char _pad_1AB9[0x3]; // offset 0x1AB9
    PlayerID_t m_nSoleControllingPlayer; // offset 0x1ABC, size 0x4, align 255
    GameTime_t m_flRespawnTime; // offset 0x1AC0, size 0x4, align 255
    ScoutState_t m_nScoutState; // offset 0x1AC4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hScoutStateEntity; // offset 0x1AC8, size 0x4, align 4
    char _pad_1ACC[0xE4]; // offset 0x1ACC
};
