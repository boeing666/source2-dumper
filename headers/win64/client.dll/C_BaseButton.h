#pragma once

class C_BaseButton : public C_BaseToggle /*0x0*/  // sizeof 0x9B8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    CHandle< C_BaseModelEntity > m_glowEntity; // offset 0x9A8, size 0x4, align 4 | MNetworkEnable
    bool m_usable; // offset 0x9AC, size 0x1, align 1 | MNetworkEnable
    char _pad_09AD[0x3]; // offset 0x9AD
    CUtlSymbolLarge m_szDisplayText; // offset 0x9B0, size 0x8, align 8 | MNetworkEnable
};
