#pragma once

class CDOTA_Modifier_Ringmaster_TheBox_Buff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 leash_radius; // offset 0x1AA8, size 0x4, align 4
    VectorWS m_vLeashLocation; // offset 0x1AAC, size 0xC, align 4
    float32 transform_time; // offset 0x1AB8, size 0x4, align 4
    float32 invis_duration; // offset 0x1ABC, size 0x4, align 4
    int32 radius; // offset 0x1AC0, size 0x4, align 4
    int32 move_speed; // offset 0x1AC4, size 0x4, align 4
    int32 magic_resist; // offset 0x1AC8, size 0x4, align 4
    int32 grant_flying; // offset 0x1ACC, size 0x4, align 4
    int32 grant_debuff_immunity; // offset 0x1AD0, size 0x4, align 4
    float32 slow_resist; // offset 0x1AD4, size 0x4, align 4
    float32 m_flDamageTaken; // offset 0x1AD8, size 0x4, align 4
    GameTime_t m_flCancelTime; // offset 0x1ADC, size 0x4, align 255
    ParticleIndex_t m_nCircleFXIndex; // offset 0x1AE0, size 0x4, align 255
    char _pad_1AE4[0x4]; // offset 0x1AE4
};
