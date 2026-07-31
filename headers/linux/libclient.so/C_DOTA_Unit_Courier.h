#pragma once

class C_DOTA_Unit_Courier : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1C38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B3C]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1B3C, size 0x1, align 1
    bool m_bPreUpdateFlyingCourier; // offset 0x1B3D, size 0x1, align 1
    char _pad_1B3E[0x2]; // offset 0x1B3E
    PlayerID_t m_nSoleControllingPlayer; // offset 0x1B40, size 0x4, align 255
    bool m_bFlyingCourier; // offset 0x1B44, size 0x1, align 1
    char _pad_1B45[0x3]; // offset 0x1B45
    GameTime_t m_flRespawnTime; // offset 0x1B48, size 0x4, align 255
    CourierState_t m_nCourierState; // offset 0x1B4C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCourierStateEntity; // offset 0x1B50, size 0x4, align 4
    char _pad_1B54[0xE4]; // offset 0x1B54
};
