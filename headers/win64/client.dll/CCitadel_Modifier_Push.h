#pragma once

class CCitadel_Modifier_Push : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    Vector m_vPushForce; // offset 0x138, size 0xC, align 4
    float32 m_flDecayRate; // offset 0x144, size 0x4, align 4
    GameTime_t m_TimeDestroy; // offset 0x148, size 0x4, align 255
    char _pad_014C[0x4]; // offset 0x14C
};
