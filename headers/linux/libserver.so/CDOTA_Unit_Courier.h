#pragma once

class CDOTA_Unit_Courier : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1BB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B80]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1B80, size 0x1, align 1
    bool m_bPreUpdateFlyingCourier; // offset 0x1B81, size 0x1, align 1
    char _pad_1B82[0x2]; // offset 0x1B82
    PlayerID_t m_nSoleControllingPlayer; // offset 0x1B84, size 0x4, align 255
    bool m_bFlyingCourier; // offset 0x1B88, size 0x1, align 1
    char _pad_1B89[0x3]; // offset 0x1B89
    GameTime_t m_flRespawnTime; // offset 0x1B8C, size 0x4, align 255
    CourierState_t m_nCourierState; // offset 0x1B90, size 0x4, align 4
    CHandle< CBaseEntity > m_hCourierStateEntity; // offset 0x1B94, size 0x4, align 4
    CUtlString m_strCourierModel; // offset 0x1B98, size 0x8, align 8
    CUtlString m_strFlyingCourierModel; // offset 0x1BA0, size 0x8, align 8
    VectorWS m_vSpawnLocation; // offset 0x1BA8, size 0xC, align 4
    GameTime_t m_flLastLeavingFountainToastTime; // offset 0x1BB4, size 0x4, align 255
};
