#pragma once

class CDOTA_Unit_Scout : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x18D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18A8]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x18A8, size 0x1, align 1
    char _pad_18A9[0x3]; // offset 0x18A9
    PlayerID_t m_nSoleControllingPlayer; // offset 0x18AC, size 0x4, align 255
    GameTime_t m_flRespawnTime; // offset 0x18B0, size 0x4, align 255
    ScoutState_t m_nScoutState; // offset 0x18B4, size 0x4, align 4
    CHandle< CBaseEntity > m_hScoutStateEntity; // offset 0x18B8, size 0x4, align 4
    char _pad_18BC[0x4]; // offset 0x18BC
    CUtlString m_strScoutModel; // offset 0x18C0, size 0x8, align 8
    VectorWS m_vSpawnLocation; // offset 0x18C8, size 0xC, align 4
    char _pad_18D4[0x4]; // offset 0x18D4
};
