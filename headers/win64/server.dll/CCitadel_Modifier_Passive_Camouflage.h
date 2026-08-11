#pragma once

class CCitadel_Modifier_Passive_Camouflage : public CCitadelModifier /*0x0*/  // sizeof 0xE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    float32 m_flRate; // offset 0xD0, size 0x4, align 4
    Vector m_vLastPosition; // offset 0xD4, size 0xC, align 4
};
