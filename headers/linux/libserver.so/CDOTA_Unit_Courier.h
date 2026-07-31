#pragma once

class CDOTA_Unit_Courier : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1BC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B88]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1B88, size 0x1, align 1
    bool m_bPreUpdateFlyingCourier; // offset 0x1B89, size 0x1, align 1
    char _pad_1B8A[0x2]; // offset 0x1B8A
    PlayerID_t m_nSoleControllingPlayer; // offset 0x1B8C, size 0x4, align 255
    bool m_bFlyingCourier; // offset 0x1B90, size 0x1, align 1
    char _pad_1B91[0x3]; // offset 0x1B91
    GameTime_t m_flRespawnTime; // offset 0x1B94, size 0x4, align 255
    CourierState_t m_nCourierState; // offset 0x1B98, size 0x4, align 4
    CHandle< CBaseEntity > m_hCourierStateEntity; // offset 0x1B9C, size 0x4, align 4
    CUtlString m_strCourierModel; // offset 0x1BA0, size 0x8, align 8
    CUtlString m_strFlyingCourierModel; // offset 0x1BA8, size 0x8, align 8
    VectorWS m_vSpawnLocation; // offset 0x1BB0, size 0xC, align 4
    GameTime_t m_flLastLeavingFountainToastTime; // offset 0x1BBC, size 0x4, align 255
};
