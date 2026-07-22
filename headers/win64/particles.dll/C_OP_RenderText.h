#pragma once

class C_OP_RenderText : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x238, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x228]; // offset 0x0
    Color m_OutlineColor; // offset 0x228, size 0x4, align 1 | MPropertyFriendlyName
    char _pad_022C[0x4]; // offset 0x22C
    CUtlString m_DefaultText; // offset 0x230, size 0x8, align 8 | MPropertyFriendlyName
};
