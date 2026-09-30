#pragma once

class CCitadel_Modifier_Thumper_2_Aura : public CCitadelModifierAura /*0x0*/  // sizeof 0x300, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x178]; // offset 0x0
    VectorWS m_vecOrigin; // offset 0x178, size 0xC, align 4
    VectorWS m_vecWorldSpaceMins; // offset 0x184, size 0xC, align 4
    VectorWS m_vecWorldSpaceMaxs; // offset 0x190, size 0xC, align 4
    float32 m_flBarbedWireAuraRadius; // offset 0x19C, size 0x4, align 4
    char _pad_01A0[0x160]; // offset 0x1A0
};
