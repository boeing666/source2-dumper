#pragma once

class CDOTA_Modifier_ItemWiggle_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS m_vOriginalPosition; // offset 0x1AF8, size 0xC, align 4
    float32 m_flOriginalScale; // offset 0x1B04, size 0x4, align 4
    GameTime_t m_flLastChangeTime; // offset 0x1B08, size 0x4, align 255
    VectorWS m_vLastChangePosition; // offset 0x1B0C, size 0xC, align 4
    float32 m_flLastChangeScale; // offset 0x1B18, size 0x4, align 4
    VectorWS m_vTargetPosition; // offset 0x1B1C, size 0xC, align 4
    float32 m_flTargetScale; // offset 0x1B28, size 0x4, align 4
    bool m_bFirstThink; // offset 0x1B2C, size 0x1, align 1
    char _pad_1B2D[0x3]; // offset 0x1B2D
    float32 m_flStartAmplitude; // offset 0x1B30, size 0x4, align 4
    float32 m_flEndAmplitude; // offset 0x1B34, size 0x4, align 4
    float32 m_flScaleAmplitude; // offset 0x1B38, size 0x4, align 4
    float32 m_flStartFrequency; // offset 0x1B3C, size 0x4, align 4
    float32 m_flEndFrequency; // offset 0x1B40, size 0x4, align 4
    char _pad_1B44[0x4]; // offset 0x1B44
};
