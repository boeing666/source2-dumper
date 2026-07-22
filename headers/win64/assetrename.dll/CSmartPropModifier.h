#pragma once

class CSmartPropModifier  // sizeof 0x50, align 0xFF [vtable abstract] (smartprops) {MGetKV3ClassDefaults MVDataBase MVDataNodeType MVDataAnonymousNode}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CSmartPropAttributeBool m_bEnabled; // offset 0x8, size 0x40, align 8 | MVDataEnableKey
    char _pad_0048[0x8]; // offset 0x48
};
