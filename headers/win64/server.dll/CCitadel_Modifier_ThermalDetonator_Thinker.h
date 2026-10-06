#pragma once

class CCitadel_Modifier_ThermalDetonator_Thinker : public CCitadelModifierAura /*0x0*/  // sizeof 0x308, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x180]; // offset 0x0
    VectorWS m_vecOrigin; // offset 0x180, size 0xC, align 4
    VectorWS m_vecWorldSpaceMins; // offset 0x18C, size 0xC, align 4
    VectorWS m_vecWorldSpaceMaxs; // offset 0x198, size 0xC, align 4
    char _pad_01A4[0x164]; // offset 0x1A4
};
