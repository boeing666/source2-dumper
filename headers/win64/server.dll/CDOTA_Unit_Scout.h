#pragma once

class CDOTA_Unit_Scout : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x19C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1998]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1998, size 0x1, align 1
    char _pad_1999[0x3]; // offset 0x1999
    PlayerID_t m_nSoleControllingPlayer; // offset 0x199C, size 0x4, align 255
    GameTime_t m_flRespawnTime; // offset 0x19A0, size 0x4, align 255
    ScoutState_t m_nScoutState; // offset 0x19A4, size 0x4, align 4
    CHandle< CBaseEntity > m_hScoutStateEntity; // offset 0x19A8, size 0x4, align 4
    char _pad_19AC[0x4]; // offset 0x19AC
    CUtlString m_strScoutModel; // offset 0x19B0, size 0x8, align 8
    VectorWS m_vSpawnLocation; // offset 0x19B8, size 0xC, align 4
    char _pad_19C4[0x4]; // offset 0x19C4
};
