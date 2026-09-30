#pragma once

class CCitadel_Modifier_Charmed : public CCitadelModifier /*0x0*/  // sizeof 0x140, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    VectorWS m_vecCharmLocation; // offset 0x130, size 0xC, align 4
    CHandle< C_BaseEntity > m_hCharmEntity; // offset 0x13C, size 0x4, align 4
};
