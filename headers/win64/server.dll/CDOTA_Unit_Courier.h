#pragma once

class CDOTA_Unit_Courier : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1A60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A28]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1A28, size 0x1, align 1
    bool m_bPreUpdateFlyingCourier; // offset 0x1A29, size 0x1, align 1
    char _pad_1A2A[0x2]; // offset 0x1A2A
    PlayerID_t m_nSoleControllingPlayer; // offset 0x1A2C, size 0x4, align 255
    bool m_bFlyingCourier; // offset 0x1A30, size 0x1, align 1
    char _pad_1A31[0x3]; // offset 0x1A31
    GameTime_t m_flRespawnTime; // offset 0x1A34, size 0x4, align 255
    CourierState_t m_nCourierState; // offset 0x1A38, size 0x4, align 4
    CHandle< CBaseEntity > m_hCourierStateEntity; // offset 0x1A3C, size 0x4, align 4
    CUtlString m_strCourierModel; // offset 0x1A40, size 0x8, align 8
    CUtlString m_strFlyingCourierModel; // offset 0x1A48, size 0x8, align 8
    VectorWS m_vSpawnLocation; // offset 0x1A50, size 0xC, align 4
    GameTime_t m_flLastLeavingFountainToastTime; // offset 0x1A5C, size 0x4, align 255
};
