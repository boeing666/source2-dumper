#pragma once

class CCitadel_Modifier_IntensifyingClip : public CCitadelModifier /*0x0*/  // sizeof 0x2A0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x298]; // offset 0x0
    GameTime_t m_LastThinkTime; // offset 0x298, size 0x4, align 255
    float32 m_flSpinUpTime; // offset 0x29C, size 0x4, align 4
};
