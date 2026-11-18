#pragma once

class CDOTA_Modifier_Phoenix_IcarusDive : public CDOTA_Buff /*0x0*/  // sizeof 0x1B60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vSource; // offset 0x1AF8, size 0xC, align 4
    VectorWS m_vTarget; // offset 0x1B04, size 0xC, align 4
    Vector m_vDirection; // offset 0x1B10, size 0xC, align 4
    QAngle m_angDirection; // offset 0x1B1C, size 0xC, align 4
    float32 m_flCurrentTime; // offset 0x1B28, size 0x4, align 4
    float32 dash_length; // offset 0x1B2C, size 0x4, align 4
    float32 dash_width; // offset 0x1B30, size 0x4, align 4
    float32 hit_radius; // offset 0x1B34, size 0x4, align 4
    float32 burn_duration; // offset 0x1B38, size 0x4, align 4
    float32 dive_duration; // offset 0x1B3C, size 0x4, align 4
    float32 impact_damage; // offset 0x1B40, size 0x4, align 4
    char _pad_1B44[0x4]; // offset 0x1B44
    CUtlVector< CHandle< C_BaseEntity > > m_vecHitEntities; // offset 0x1B48, size 0x18, align 8
};
