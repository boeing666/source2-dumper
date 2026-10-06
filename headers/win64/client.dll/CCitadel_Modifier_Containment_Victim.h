#pragma once

class CCitadel_Modifier_Containment_Victim : public CCitadelModifier /*0x0*/  // sizeof 0x1F8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    float32 m_flTetherRadius; // offset 0x138, size 0x4, align 4
    VectorWS m_vecOrigin; // offset 0x13C, size 0xC, align 4
    char _pad_0148[0xB0]; // offset 0x148
};
