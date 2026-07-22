#pragma once

class C_OP_RenderText : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x228, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x219]; // offset 0x0
    Color m_OutlineColor; // offset 0x219, size 0x4, align 1 | MPropertyFriendlyName
    char _pad_021D[0x3]; // offset 0x21D
    CUtlString m_DefaultText; // offset 0x220, size 0x8, align 8 | MPropertyFriendlyName
};
