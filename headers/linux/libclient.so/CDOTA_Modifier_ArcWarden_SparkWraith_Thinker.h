#pragma once

class CDOTA_Modifier_ArcWarden_SparkWraith_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    float32 wraith_vision_radius; // offset 0x1A5C, size 0x4, align 4
    int32 wraith_speed; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x14]; // offset 0x1A64
    float32 activation_delay; // offset 0x1A78, size 0x4, align 4
    float32 think_interval; // offset 0x1A7C, size 0x4, align 4
    float32 m_flSparkDamage; // offset 0x1A80, size 0x4, align 4
    int32 m_nViewerID; // offset 0x1A84, size 0x4, align 4
    int32 m_nViewerTeam; // offset 0x1A88, size 0x4, align 4
    bool m_bActive; // offset 0x1A8C, size 0x1, align 1
    char _pad_1A8D[0x3]; // offset 0x1A8D
    int32 maximum_targets; // offset 0x1A90, size 0x4, align 4
    float32 second_wraith_damage_pct; // offset 0x1A94, size 0x4, align 4
    float32 second_wraith_speed_pct; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
