#pragma once

class C_DOTA_Unit_Courier : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1DC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1CCC]; // offset 0x0
    bool m_bUnitRespawned; // offset 0x1CCC, size 0x1, align 1
    bool m_bPreUpdateFlyingCourier; // offset 0x1CCD, size 0x1, align 1
    char _pad_1CCE[0x2]; // offset 0x1CCE
    PlayerID_t m_nSoleControllingPlayer; // offset 0x1CD0, size 0x4, align 255
    bool m_bFlyingCourier; // offset 0x1CD4, size 0x1, align 1
    char _pad_1CD5[0x3]; // offset 0x1CD5
    GameTime_t m_flRespawnTime; // offset 0x1CD8, size 0x4, align 255
    CourierState_t m_nCourierState; // offset 0x1CDC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCourierStateEntity; // offset 0x1CE0, size 0x4, align 4
    char _pad_1CE4[0xE4]; // offset 0x1CE4
};
