#pragma once

class C_OP_RenderText : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x230, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    Color m_OutlineColor; // offset 0x220, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0224[0x4]; // offset 0x224
    CUtlString m_DefaultText; // offset 0x228, size 0x8, align 8 | MPropertyFriendlyName
};
