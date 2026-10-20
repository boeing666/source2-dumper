#pragma once

class CCitadel_Modifier_SpiritSnatch : public CCitadel_Modifier_BaseEventProc /*0x0*/  // sizeof 0x660, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2D8]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier > m_hBuffHandle; // offset 0x2D8, size 0x18, align 8
    char _pad_02F0[0x370]; // offset 0x2F0
};
