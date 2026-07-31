#pragma once

class CDOTA_Unit_Scout : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1BB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B88]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1B88, size 0x1, align 1
    char _pad_1B89[0x3]; // offset 0x1B89
    PlayerID_t m_nSoleControllingPlayer; // offset 0x1B8C, size 0x4, align 255
    GameTime_t m_flRespawnTime; // offset 0x1B90, size 0x4, align 255
    ScoutState_t m_nScoutState; // offset 0x1B94, size 0x4, align 4
    CHandle< CBaseEntity > m_hScoutStateEntity; // offset 0x1B98, size 0x4, align 4
    char _pad_1B9C[0x4]; // offset 0x1B9C
    CUtlString m_strScoutModel; // offset 0x1BA0, size 0x8, align 8
    VectorWS m_vSpawnLocation; // offset 0x1BA8, size 0xC, align 4
    char _pad_1BB4[0x4]; // offset 0x1BB4
};
