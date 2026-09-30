#pragma once

class CVMixToolEffectsList  // sizeof 0x20, align 0x8 (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    bool m_bIsAutomaticDSP; // offset 0x0, size 0x1, align 1 | MKV3TransferName
    char _pad_0001[0x7]; // offset 0x1
    CUtlVector< CVMixEffectPreset > m_list; // offset 0x8, size 0x18, align 8 | MKV3TransferName
};
