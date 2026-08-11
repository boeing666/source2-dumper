#pragma once

class CCitadel_Modifier_Thumper_2_Aura : public CCitadelModifierAura /*0x0*/  // sizeof 0x230, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x108]; // offset 0x0
    Vector m_vecOrigin; // offset 0x108, size 0xC, align 4
    Vector m_vecWorldSpaceMins; // offset 0x114, size 0xC, align 4
    Vector m_vecWorldSpaceMaxs; // offset 0x120, size 0xC, align 4
    float32 m_flBarbedWireAuraRadius; // offset 0x12C, size 0x4, align 4
    char _pad_0130[0x100]; // offset 0x130
};
