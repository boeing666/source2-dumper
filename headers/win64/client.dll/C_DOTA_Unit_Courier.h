#pragma once

class C_DOTA_Unit_Courier : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1BB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1AB8]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1AB8, size 0x1, align 1
    bool m_bPreUpdateFlyingCourier; // offset 0x1AB9, size 0x1, align 1
    char _pad_1ABA[0x2]; // offset 0x1ABA
    PlayerID_t m_nSoleControllingPlayer; // offset 0x1ABC, size 0x4, align 255
    bool m_bFlyingCourier; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x3]; // offset 0x1AC1
    GameTime_t m_flRespawnTime; // offset 0x1AC4, size 0x4, align 255
    CourierState_t m_nCourierState; // offset 0x1AC8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCourierStateEntity; // offset 0x1ACC, size 0x4, align 4
    char _pad_1AD0[0xE0]; // offset 0x1AD0
};
