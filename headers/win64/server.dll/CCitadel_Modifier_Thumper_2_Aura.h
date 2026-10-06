#pragma once

class CCitadel_Modifier_Thumper_2_Aura : public CCitadelModifierAura /*0x0*/  // sizeof 0x308, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x180]; // offset 0x0
    VectorWS m_vecOrigin; // offset 0x180, size 0xC, align 4
    VectorWS m_vecWorldSpaceMins; // offset 0x18C, size 0xC, align 4
    VectorWS m_vecWorldSpaceMaxs; // offset 0x198, size 0xC, align 4
    float32 m_flBarbedWireAuraRadius; // offset 0x1A4, size 0x4, align 4
    char _pad_01A8[0x160]; // offset 0x1A8
};
