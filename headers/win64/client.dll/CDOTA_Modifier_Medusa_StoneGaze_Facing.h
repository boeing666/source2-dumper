#pragma once

class CDOTA_Modifier_Medusa_StoneGaze_Facing : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 face_duration; // offset 0x1A58, size 0x4, align 4
    float32 stone_duration; // offset 0x1A5C, size 0x4, align 4
    float32 duration; // offset 0x1A60, size 0x4, align 4
    float32 vision_cone; // offset 0x1A64, size 0x4, align 4
    float32 m_flAccumulatedTime; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
    CountdownTimer ctFacing; // offset 0x1A70, size 0x18, align 8
    bool m_bAlreadyStoned; // offset 0x1A88, size 0x1, align 1
    char _pad_1A89[0x3]; // offset 0x1A89
    ParticleIndex_t m_nFXIndex; // offset 0x1A8C, size 0x4, align 255
};
