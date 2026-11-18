#pragma once

class CDOTA_Unit_Scout : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1A58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A28]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1A28, size 0x1, align 1
    char _pad_1A29[0x3]; // offset 0x1A29
    PlayerID_t m_nSoleControllingPlayer; // offset 0x1A2C, size 0x4, align 255
    GameTime_t m_flRespawnTime; // offset 0x1A30, size 0x4, align 255
    ScoutState_t m_nScoutState; // offset 0x1A34, size 0x4, align 4
    CHandle< CBaseEntity > m_hScoutStateEntity; // offset 0x1A38, size 0x4, align 4
    char _pad_1A3C[0x4]; // offset 0x1A3C
    CUtlString m_strScoutModel; // offset 0x1A40, size 0x8, align 8
    VectorWS m_vSpawnLocation; // offset 0x1A48, size 0xC, align 4
    char _pad_1A54[0x4]; // offset 0x1A54
};
