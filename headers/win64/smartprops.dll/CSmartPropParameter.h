#pragma once

class CSmartPropParameter  // sizeof 0x10, align 0xFF [vtable abstract trivial_dtor] (smartprops) {MGetKV3ClassDefaults MVDataRoot MVDataNodeType MVDataAnonymousNode}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nElementID; // offset 0x8, size 0x4, align 4 | MPropertySuppressField MVDataUniqueMonotonicInt
    char _pad_000C[0x4]; // offset 0xC
};
