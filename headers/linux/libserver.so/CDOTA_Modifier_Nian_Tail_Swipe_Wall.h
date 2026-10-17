#pragma once

class CDOTA_Modifier_Nian_Tail_Swipe_Wall : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vWallStartPosition; // offset 0x1AA8, size 0xC, align 4
    Vector m_vWallDirection; // offset 0x1AB4, size 0xC, align 4
    Vector m_vWallLeft; // offset 0x1AC0, size 0xC, align 4
    int32 m_DamageAmount; // offset 0x1ACC, size 0x4, align 4
    int32 m_DamageType; // offset 0x1AD0, size 0x4, align 4
    float32 speed; // offset 0x1AD4, size 0x4, align 4
    float32 starting_width; // offset 0x1AD8, size 0x4, align 4
    float32 ending_width; // offset 0x1ADC, size 0x4, align 4
    float32 stun_duration; // offset 0x1AE0, size 0x4, align 4
    float32 fly_duration; // offset 0x1AE4, size 0x4, align 4
    float32 fly_distance; // offset 0x1AE8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AEC, size 0x4, align 255
    GameTime_t m_flWallStartTime; // offset 0x1AF0, size 0x4, align 255
    float32 m_flScalar; // offset 0x1AF4, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_EntitiesToExclude; // offset 0x1AF8, size 0x18, align 8
    char _pad_1B10[0x18]; // offset 0x1B10
};
