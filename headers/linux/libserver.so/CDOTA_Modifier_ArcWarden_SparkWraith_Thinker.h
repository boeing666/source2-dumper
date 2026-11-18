#pragma once

class CDOTA_Modifier_ArcWarden_SparkWraith_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B40, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    float32 wraith_vision_radius; // offset 0x1AFC, size 0x4, align 4
    int32 wraith_speed; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x14]; // offset 0x1B04
    float32 activation_delay; // offset 0x1B18, size 0x4, align 4
    float32 think_interval; // offset 0x1B1C, size 0x4, align 4
    float32 m_flSparkDamage; // offset 0x1B20, size 0x4, align 4
    int32 m_nViewerID; // offset 0x1B24, size 0x4, align 4
    int32 m_nViewerTeam; // offset 0x1B28, size 0x4, align 4
    bool m_bActive; // offset 0x1B2C, size 0x1, align 1
    char _pad_1B2D[0x3]; // offset 0x1B2D
    int32 maximum_targets; // offset 0x1B30, size 0x4, align 4
    float32 second_wraith_damage_pct; // offset 0x1B34, size 0x4, align 4
    float32 second_wraith_speed_pct; // offset 0x1B38, size 0x4, align 4
    char _pad_1B3C[0x4]; // offset 0x1B3C
};
