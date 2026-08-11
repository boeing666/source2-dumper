#pragma once

class CCitadel_Modifier_IntensifyingClip : public CCitadelModifier /*0x0*/  // sizeof 0x1D8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    GameTime_t m_LastThinkTime; // offset 0x1D0, size 0x4, align 255
    float32 m_flSpinUpTime; // offset 0x1D4, size 0x4, align 4
};
