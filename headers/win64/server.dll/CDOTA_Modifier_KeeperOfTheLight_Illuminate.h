#pragma once

class CDOTA_Modifier_KeeperOfTheLight_Illuminate : public CDOTA_Buff /*0x0*/  // sizeof 0x1B60, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 range; // offset 0x1AF8, size 0x4, align 4
    float32 total_damage; // offset 0x1AFC, size 0x4, align 4
    float32 radius; // offset 0x1B00, size 0x4, align 4
    float32 max_channel_time; // offset 0x1B04, size 0x4, align 4
    float32 speed; // offset 0x1B08, size 0x4, align 4
    float32 channel_vision_radius; // offset 0x1B0C, size 0x4, align 4
    float32 channel_vision_interval; // offset 0x1B10, size 0x4, align 4
    float32 channel_vision_duration; // offset 0x1B14, size 0x4, align 4
    float32 channel_vision_step; // offset 0x1B18, size 0x4, align 4
    GameTime_t m_flLastChantTime; // offset 0x1B1C, size 0x4, align 255
    VectorWS m_vNextVisionLocation; // offset 0x1B20, size 0xC, align 4
    Vector m_vCastDirection; // offset 0x1B2C, size 0xC, align 4
    VectorWS m_vCastLoc; // offset 0x1B38, size 0xC, align 4
    QAngle m_qCastAngle; // offset 0x1B44, size 0xC, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B50, size 0x4, align 255
    bool m_bIsSpiritForm; // offset 0x1B54, size 0x1, align 1
    char _pad_1B55[0x3]; // offset 0x1B55
    GameTime_t m_fStartTime; // offset 0x1B58, size 0x4, align 255
    char _pad_1B5C[0x4]; // offset 0x1B5C
};
