#pragma once

class CAttributeManager  // sizeof 0x50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_Providers; // offset 0x8, size 0x18, align 8
    int32 m_iReapplyProvisionParity; // offset 0x20, size 0x4, align 4
    CHandle< C_BaseEntity > m_hOuter; // offset 0x24, size 0x4, align 4
    bool m_bPreventLoopback; // offset 0x28, size 0x1, align 1
    char _pad_0029[0x3]; // offset 0x29
    attributeprovidertypes_t m_ProviderType; // offset 0x2C, size 0x4, align 4
    CUtlVector< CAttributeManager::cached_attribute_float_t > m_CachedResults; // offset 0x30, size 0x18, align 8
    char _pad_0048[0x8]; // offset 0x48
};
