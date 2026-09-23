#pragma once

class C_NametagModule : public C_CS2WeaponModuleBase /*0x0*/  // sizeof 0x1200, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11F8]; // offset 0x0
    CUtlString m_strNametagString; // offset 0x11F8, size 0x8, align 8
};
