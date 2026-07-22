#pragma once

class CMixSteamAudioPathing : public CMixPropertyBase /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    float32 m_flPathingMixLevel; // offset 0x20, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32[3] m_vPathingEQ; // offset 0x24, size 0xC, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    CUtlVector< float32 > m_vPathingCoeffs; // offset 0x30, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttributeRange
    CUtlVector< float32 > m_vecPathingEQ; // offset 0x48, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttributeRange
};
