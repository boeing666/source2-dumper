#pragma once

struct MaterialSwap_t  // sizeof 0xF0, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_sOriginalMaterial; // offset 0x0, size 0x8, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_SwappedMaterial; // offset 0x8, size 0xE0, align 8
    int32 m_nPriority; // offset 0xE8, size 0x4, align 4
    char _pad_00EC[0x4]; // offset 0xEC
};
