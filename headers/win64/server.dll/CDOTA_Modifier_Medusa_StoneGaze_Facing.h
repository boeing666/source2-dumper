#pragma once

class CDOTA_Modifier_Medusa_StoneGaze_Facing : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 face_duration; // offset 0x1AA8, size 0x4, align 4
    float32 stone_duration; // offset 0x1AAC, size 0x4, align 4
    float32 duration; // offset 0x1AB0, size 0x4, align 4
    float32 vision_cone; // offset 0x1AB4, size 0x4, align 4
    float32 m_flAccumulatedTime; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
    CountdownTimer ctFacing; // offset 0x1AC0, size 0x18, align 8
    bool m_bAlreadyStoned; // offset 0x1AD8, size 0x1, align 1
    char _pad_1AD9[0x3]; // offset 0x1AD9
    ParticleIndex_t m_nFXIndex; // offset 0x1ADC, size 0x4, align 255
};
