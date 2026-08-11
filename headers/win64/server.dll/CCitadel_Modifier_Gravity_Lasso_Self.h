#pragma once

class CCitadel_Modifier_Gravity_Lasso_Self : public CCitadelModifier /*0x0*/  // sizeof 0x4F0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bHasUsedBouncePad; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x7]; // offset 0xD1
    CUtlVector< CHandle< CBaseEntity > > m_vCastTargets; // offset 0xD8, size 0x18, align 8
    char _pad_00F0[0x400]; // offset 0xF0
};
