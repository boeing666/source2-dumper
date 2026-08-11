#pragma once

class CDOTA_Modifier_Ringmaster_Wheel_Mesmerize_Facing : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 face_duration; // offset 0x1A78, size 0x4, align 4
    float32 duration; // offset 0x1A7C, size 0x4, align 4
    float32 vision_cone; // offset 0x1A80, size 0x4, align 4
    float32 m_flAccumulatedTime; // offset 0x1A84, size 0x4, align 4
    float32 mesmerize_radius; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
    CountdownTimer ctFacing; // offset 0x1A90, size 0x18, align 8
    ParticleIndex_t m_nFXIndex; // offset 0x1AA8, size 0x4, align 255
    CHandle< CDOTA_BaseNPC > m_hPullTarget; // offset 0x1AAC, size 0x4, align 4
};
