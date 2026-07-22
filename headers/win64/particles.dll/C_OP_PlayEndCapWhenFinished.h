#pragma once

class C_OP_PlayEndCapWhenFinished : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    bool m_bFireOnEmissionEnd; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bIncludeChildren; // offset 0x1E1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E2[0x6]; // offset 0x1E2
};
