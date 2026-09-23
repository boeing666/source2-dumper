#pragma once

class C_OP_HSVShiftToCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x208, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nColorCP; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nColorGemEnableCP; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    Color m_DefaultHSVColor; // offset 0x1F4, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F8[0x10]; // offset 0x1F8
};
