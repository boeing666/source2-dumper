#pragma once

class CDOTA_Modifier_Nian_Tail_Swipe_Wall : public CDOTA_Buff /*0x0*/  // sizeof 0x1B78, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vWallStartPosition; // offset 0x1AF8, size 0xC, align 4
    Vector m_vWallDirection; // offset 0x1B04, size 0xC, align 4
    Vector m_vWallLeft; // offset 0x1B10, size 0xC, align 4
    int32 m_DamageAmount; // offset 0x1B1C, size 0x4, align 4
    int32 m_DamageType; // offset 0x1B20, size 0x4, align 4
    float32 speed; // offset 0x1B24, size 0x4, align 4
    float32 starting_width; // offset 0x1B28, size 0x4, align 4
    float32 ending_width; // offset 0x1B2C, size 0x4, align 4
    float32 stun_duration; // offset 0x1B30, size 0x4, align 4
    float32 fly_duration; // offset 0x1B34, size 0x4, align 4
    float32 fly_distance; // offset 0x1B38, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B3C, size 0x4, align 255
    GameTime_t m_flWallStartTime; // offset 0x1B40, size 0x4, align 255
    float32 m_flScalar; // offset 0x1B44, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > m_EntitiesToExclude; // offset 0x1B48, size 0x18, align 8
    char _pad_1B60[0x18]; // offset 0x1B60
};
