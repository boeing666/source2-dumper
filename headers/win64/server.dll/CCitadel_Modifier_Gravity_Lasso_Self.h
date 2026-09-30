#pragma once

class CCitadel_Modifier_Gravity_Lasso_Self : public CCitadelModifier /*0x0*/  // sizeof 0x6E0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    bool m_bHasUsedBouncePad; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x7]; // offset 0x141
    CUtlVector< CHandle< CBaseEntity > > m_vCastTargets; // offset 0x148, size 0x18, align 8
    char _pad_0160[0x580]; // offset 0x160
};
