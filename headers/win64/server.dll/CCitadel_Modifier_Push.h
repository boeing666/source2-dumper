#pragma once

class CCitadel_Modifier_Push : public CCitadelModifier /*0x0*/  // sizeof 0xE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    Vector m_vPushForce; // offset 0xD0, size 0xC, align 4
    float32 m_flDecayRate; // offset 0xDC, size 0x4, align 4
    GameTime_t m_TimeDestroy; // offset 0xE0, size 0x4, align 255
    char _pad_00E4[0x4]; // offset 0xE4
};
