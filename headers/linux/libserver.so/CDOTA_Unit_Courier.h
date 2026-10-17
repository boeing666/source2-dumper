#pragma once

class CDOTA_Unit_Courier : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1CB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1C78]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1C78, size 0x1, align 1
    bool m_bPreUpdateFlyingCourier; // offset 0x1C79, size 0x1, align 1
    char _pad_1C7A[0x2]; // offset 0x1C7A
    PlayerID_t m_nSoleControllingPlayer; // offset 0x1C7C, size 0x4, align 255
    bool m_bFlyingCourier; // offset 0x1C80, size 0x1, align 1
    char _pad_1C81[0x3]; // offset 0x1C81
    GameTime_t m_flRespawnTime; // offset 0x1C84, size 0x4, align 255
    CourierState_t m_nCourierState; // offset 0x1C88, size 0x4, align 4
    CHandle< CBaseEntity > m_hCourierStateEntity; // offset 0x1C8C, size 0x4, align 4
    CUtlString m_strCourierModel; // offset 0x1C90, size 0x8, align 8
    CUtlString m_strFlyingCourierModel; // offset 0x1C98, size 0x8, align 8
    VectorWS m_vSpawnLocation; // offset 0x1CA0, size 0xC, align 4
    GameTime_t m_flLastLeavingFountainToastTime; // offset 0x1CAC, size 0x4, align 255
};
