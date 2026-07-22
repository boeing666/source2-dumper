#pragma once

class CDOTA_Modifier_Phoenix_IcarusYoink : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    VectorWS m_vSource; // offset 0x1A58, size 0xC, align 4
    VectorWS m_vTarget; // offset 0x1A64, size 0xC, align 4
    Vector m_vDirection; // offset 0x1A70, size 0xC, align 4
    QAngle m_angDirection; // offset 0x1A7C, size 0xC, align 4
    float32 m_flCurrentTime; // offset 0x1A88, size 0x4, align 4
    float32 dash_length; // offset 0x1A8C, size 0x4, align 4
    float32 dash_width; // offset 0x1A90, size 0x4, align 4
    float32 hit_radius; // offset 0x1A94, size 0x4, align 4
    float32 burn_duration; // offset 0x1A98, size 0x4, align 4
    float32 dive_duration; // offset 0x1A9C, size 0x4, align 4
    float32 impact_damage; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEntities; // offset 0x1AA8, size 0x18, align 8
    CHandle< C_BaseEntity > hTarget; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
