#pragma once

class C_INIT_RemapParticleCountToNamedModelElementScalar : public C_INIT_RemapParticleCountToScalar /*0x0*/  // sizeof 0x230, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x210]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCModel > m_hModel; // offset 0x210, size 0x8, align 8
    CUtlString m_outputMinName; // offset 0x218, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_outputMaxName; // offset 0x220, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bModelFromRenderer; // offset 0x228, size 0x1, align 1
    char _pad_0229[0x7]; // offset 0x229
};
