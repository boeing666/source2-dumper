#pragma once

class CDOTA_Unit_Courier : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1D48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D0C]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1D0C, size 0x1, align 1
    bool m_bPreUpdateFlyingCourier; // offset 0x1D0D, size 0x1, align 1
    char _pad_1D0E[0x2]; // offset 0x1D0E
    PlayerID_t m_nSoleControllingPlayer; // offset 0x1D10, size 0x4, align 255
    bool m_bFlyingCourier; // offset 0x1D14, size 0x1, align 1
    char _pad_1D15[0x3]; // offset 0x1D15
    GameTime_t m_flRespawnTime; // offset 0x1D18, size 0x4, align 255
    CourierState_t m_nCourierState; // offset 0x1D1C, size 0x4, align 4
    CHandle< CBaseEntity > m_hCourierStateEntity; // offset 0x1D20, size 0x4, align 4
    char _pad_1D24[0x4]; // offset 0x1D24
    CUtlString m_strCourierModel; // offset 0x1D28, size 0x8, align 8
    CUtlString m_strFlyingCourierModel; // offset 0x1D30, size 0x8, align 8
    VectorWS m_vSpawnLocation; // offset 0x1D38, size 0xC, align 4
    GameTime_t m_flLastLeavingFountainToastTime; // offset 0x1D44, size 0x4, align 255
};
