#pragma once

class CCitadel_Modifier_IntensifyingClip : public CCitadelModifier /*0x0*/  // sizeof 0x1C8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1C0]; // offset 0x0
    GameTime_t m_LastThinkTime; // offset 0x1C0, size 0x4, align 255
    float32 m_flSpinUpTime; // offset 0x1C4, size 0x4, align 4
};
