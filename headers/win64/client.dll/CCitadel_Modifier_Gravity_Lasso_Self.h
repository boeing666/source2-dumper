#pragma once

class CCitadel_Modifier_Gravity_Lasso_Self : public CCitadelModifier /*0x0*/  // sizeof 0x6D0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    bool m_bHasUsedBouncePad; // offset 0x130, size 0x1, align 1
    char _pad_0131[0x7]; // offset 0x131
    CUtlVector< CHandle< C_BaseEntity > > m_vCastTargets; // offset 0x138, size 0x18, align 8
    char _pad_0150[0x580]; // offset 0x150
};
