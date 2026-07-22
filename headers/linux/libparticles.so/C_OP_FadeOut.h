#pragma once

class C_OP_FadeOut : public CParticleFunctionOperator /*0x0*/  // sizeof 0x230, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    float32 m_flFadeOutTimeMin; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flFadeOutTimeMax; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flFadeOutTimeExp; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flFadeBias; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E0[0x30]; // offset 0x1E0
    bool m_bProportional; // offset 0x210, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bEaseInAndOut; // offset 0x211, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0212[0x1E]; // offset 0x212
};
