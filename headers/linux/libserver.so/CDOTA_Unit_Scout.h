#pragma once

class CDOTA_Unit_Scout : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1D38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D0C]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1D0C, size 0x1, align 1
    char _pad_1D0D[0x3]; // offset 0x1D0D
    PlayerID_t m_nSoleControllingPlayer; // offset 0x1D10, size 0x4, align 255
    GameTime_t m_flRespawnTime; // offset 0x1D14, size 0x4, align 255
    ScoutState_t m_nScoutState; // offset 0x1D18, size 0x4, align 4
    CHandle< CBaseEntity > m_hScoutStateEntity; // offset 0x1D1C, size 0x4, align 4
    CUtlString m_strScoutModel; // offset 0x1D20, size 0x8, align 8
    VectorWS m_vSpawnLocation; // offset 0x1D28, size 0xC, align 4
    char _pad_1D34[0x4]; // offset 0x1D34
};
