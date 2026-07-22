#pragma once

class CCitadel_Modifier_Passive_Camouflage : public CCitadelModifier /*0x0*/  // sizeof 0xD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    float32 m_flRate; // offset 0xC0, size 0x4, align 4
    Vector m_vLastPosition; // offset 0xC4, size 0xC, align 4
};
