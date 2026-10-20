#pragma once

class CCitadel_Modifier_Containment_Victim : public CCitadelModifier /*0x0*/  // sizeof 0x200, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    float32 m_flTetherRadius; // offset 0x140, size 0x4, align 4
    VectorWS m_vecOrigin; // offset 0x144, size 0xC, align 4
    char _pad_0150[0xB0]; // offset 0x150
};
