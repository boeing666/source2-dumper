#pragma once

class CDOTA_Modifier_Phoenix_IcarusYoink : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vSource; // offset 0x1A78, size 0xC, align 4
    VectorWS m_vTarget; // offset 0x1A84, size 0xC, align 4
    Vector m_vDirection; // offset 0x1A90, size 0xC, align 4
    QAngle m_angDirection; // offset 0x1A9C, size 0xC, align 4
    float32 m_flCurrentTime; // offset 0x1AA8, size 0x4, align 4
    float32 dash_length; // offset 0x1AAC, size 0x4, align 4
    float32 dash_width; // offset 0x1AB0, size 0x4, align 4
    float32 hit_radius; // offset 0x1AB4, size 0x4, align 4
    float32 burn_duration; // offset 0x1AB8, size 0x4, align 4
    float32 dive_duration; // offset 0x1ABC, size 0x4, align 4
    float32 impact_damage; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEntities; // offset 0x1AC8, size 0x18, align 8
    CHandle< C_BaseEntity > hTarget; // offset 0x1AE0, size 0x4, align 4
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
