#pragma once

class CCitadel_Modifier_Gravity_Lasso_Self : public CCitadelModifier /*0x0*/  // sizeof 0x4E0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    bool m_bHasUsedBouncePad; // offset 0xC0, size 0x1, align 1
    char _pad_00C1[0x7]; // offset 0xC1
    CUtlVector< CHandle< C_BaseEntity > > m_vCastTargets; // offset 0xC8, size 0x18, align 8
    char _pad_00E0[0x400]; // offset 0xE0
};
