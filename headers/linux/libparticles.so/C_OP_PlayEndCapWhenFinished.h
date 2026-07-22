#pragma once

class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1D8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D1]; // offset 0x0
    bool m_bFireOnEmissionEnd; // offset 0x1D1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIncludeChildren; // offset 0x1D2, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01D3[0x5]; // offset 0x1D3
};
