#pragma once

class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 face_duration; // offset 0x1AF8, size 0x4, align 4
    float32 duration; // offset 0x1AFC, size 0x4, align 4
    float32 vision_cone; // offset 0x1B00, size 0x4, align 4
    float32 m_flAccumulatedTime; // offset 0x1B04, size 0x4, align 4
    float32 mesmerize_radius; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
    CountdownTimer ctFacing; // offset 0x1B10, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1B28, size 0x4, align 255
    CHandle< CDOTA_BaseNPC > m_hPullTarget; // offset 0x1B2C, size 0x4, align 4
};
