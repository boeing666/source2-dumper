#pragma once

class CDOTA_Modifier_Gyrocopter_Side_Gunner : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 sidegunner_radius; // offset 0x1A58, size 0x4, align 4
    float32 sidegunner_fire_rate; // offset 0x1A5C, size 0x4, align 4
    float32 m_flRotation; // offset 0x1A60, size 0x4, align 4
    CHandle< C_BaseEntity > m_hIdealTarget; // offset 0x1A64, size 0x4, align 4
    CHandle< C_BaseEntity > m_hSecondaryTarget; // offset 0x1A68, size 0x4, align 4
    float32 m_flLastFireTime; // offset 0x1A6C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwnerNPC; // offset 0x1A70, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOwningAbility; // offset 0x1A74, size 0x4, align 4
};
