#pragma once

class C_DOTA_Unit_Scout : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1DC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1CCC]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1CCC, size 0x1, align 1
    char _pad_1CCD[0x3]; // offset 0x1CCD
    PlayerID_t m_nSoleControllingPlayer; // offset 0x1CD0, size 0x4, align 255
    GameTime_t m_flRespawnTime; // offset 0x1CD4, size 0x4, align 255
    ScoutState_t m_nScoutState; // offset 0x1CD8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hScoutStateEntity; // offset 0x1CDC, size 0x4, align 4
    char _pad_1CE0[0xE0]; // offset 0x1CE0
};
