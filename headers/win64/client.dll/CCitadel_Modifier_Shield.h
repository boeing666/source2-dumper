#pragma once

class CCitadel_Modifier_Shield : public CCitadelModifier /*0x0*/  // sizeof 0xC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CHandle< C_Citadel_Shield > m_hShieldEntity; // offset 0xC0, size 0x4, align 4
    char _pad_00C4[0x4]; // offset 0xC4
};
