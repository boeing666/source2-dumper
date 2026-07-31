#pragma once

class CDOTA_Modifier_Gyrocopter_Side_Gunner : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 sidegunner_radius; // offset 0x1A78, size 0x4, align 4
    float32 sidegunner_fire_rate; // offset 0x1A7C, size 0x4, align 4
    float32 m_flRotation; // offset 0x1A80, size 0x4, align 4
    CHandle< C_BaseEntity > m_hIdealTarget; // offset 0x1A84, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSecondaryTarget; // offset 0x1A88, size 0x4, align 4
    float32 m_flLastFireTime; // offset 0x1A8C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwnerNPC; // offset 0x1A90, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwningAbility; // offset 0x1A94, size 0x4, align 4
};
