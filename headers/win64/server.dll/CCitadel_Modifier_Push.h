#pragma once

class CCitadel_Modifier_Push : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    Vector m_vPushForce; // offset 0x150, size 0xC, align 4
    float32 m_flDecayRate; // offset 0x15C, size 0x4, align 4
    GameTime_t m_TimeDestroy; // offset 0x160, size 0x4, align 255
    char _pad_0164[0x4]; // offset 0x164
};
