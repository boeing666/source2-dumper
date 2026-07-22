#pragma once

class C_DOTA_Unit_Courier : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1AA8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x19B0]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x19B0, size 0x1, align 1
    bool m_bPreUpdateFlyingCourier; // offset 0x19B1, size 0x1, align 1
    char _pad_19B2[0x2]; // offset 0x19B2
    PlayerID_t m_nSoleControllingPlayer; // offset 0x19B4, size 0x4, align 255
    bool m_bFlyingCourier; // offset 0x19B8, size 0x1, align 1
    char _pad_19B9[0x3]; // offset 0x19B9
    GameTime_t m_flRespawnTime; // offset 0x19BC, size 0x4, align 255
    CourierState_t m_nCourierState; // offset 0x19C0, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCourierStateEntity; // offset 0x19C4, size 0x4, align 4
    char _pad_19C8[0xE0]; // offset 0x19C8
};
