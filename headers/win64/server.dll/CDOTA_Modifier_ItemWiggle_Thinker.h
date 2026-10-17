#pragma once

class CDOTA_Modifier_ItemWiggle_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vOriginalPosition; // offset 0x1AA8, size 0xC, align 4
    float32 m_flOriginalScale; // offset 0x1AB4, size 0x4, align 4
    GameTime_t m_flLastChangeTime; // offset 0x1AB8, size 0x4, align 255
    VectorWS m_vLastChangePosition; // offset 0x1ABC, size 0xC, align 4
    float32 m_flLastChangeScale; // offset 0x1AC8, size 0x4, align 4
    VectorWS m_vTargetPosition; // offset 0x1ACC, size 0xC, align 4
    float32 m_flTargetScale; // offset 0x1AD8, size 0x4, align 4
    bool m_bFirstThink; // offset 0x1ADC, size 0x1, align 1
    char _pad_1ADD[0x3]; // offset 0x1ADD
    float32 m_flStartAmplitude; // offset 0x1AE0, size 0x4, align 4
    float32 m_flEndAmplitude; // offset 0x1AE4, size 0x4, align 4
    float32 m_flScaleAmplitude; // offset 0x1AE8, size 0x4, align 4
    float32 m_flStartFrequency; // offset 0x1AEC, size 0x4, align 4
    float32 m_flEndFrequency; // offset 0x1AF0, size 0x4, align 4
    char _pad_1AF4[0x4]; // offset 0x1AF4
};
