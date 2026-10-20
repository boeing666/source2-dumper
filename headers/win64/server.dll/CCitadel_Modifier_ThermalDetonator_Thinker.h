#pragma once

class CCitadel_Modifier_ThermalDetonator_Thinker : public CCitadelModifierAura /*0x0*/  // sizeof 0x310, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x188]; // offset 0x0
    VectorWS m_vecOrigin; // offset 0x188, size 0xC, align 4
    VectorWS m_vecWorldSpaceMins; // offset 0x194, size 0xC, align 4
    VectorWS m_vecWorldSpaceMaxs; // offset 0x1A0, size 0xC, align 4
    char _pad_01AC[0x164]; // offset 0x1AC
};
