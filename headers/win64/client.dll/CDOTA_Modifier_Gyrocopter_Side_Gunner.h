#pragma once

class CDOTA_Modifier_Gyrocopter_Side_Gunner : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< C_BaseEntity > m_hIdealTarget; // offset 0x1AF8, size 0x4, align 4
    float32 sidegunner_radius; // offset 0x1AFC, size 0x4, align 4
    float32 sidegunner_fire_rate; // offset 0x1B00, size 0x4, align 4
    float32 m_flRotation; // offset 0x1B04, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSecondaryTarget; // offset 0x1B08, size 0x4, align 4
    float32 m_flLastFireTime; // offset 0x1B0C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwnerNPC; // offset 0x1B10, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwningAbility; // offset 0x1B14, size 0x4, align 4
    int32 m_nSideGunnerIndex; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
