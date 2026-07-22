#pragma once

class CMaterialAttributeAnimTag : public CAnimTagBase /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    CUtlString m_AttributeName; // offset 0x58, size 0x8, align 8 | MPropertyFriendlyName
    MatterialAttributeTagType_t m_AttributeType; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName MPropertyAutoRebuildOnChange
    float32 m_flValue; // offset 0x64, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttrStateCallback
    Color m_Color; // offset 0x68, size 0x4, align 1 | MPropertyFriendlyName MPropertyAttrStateCallback
    char _pad_006C[0x4]; // offset 0x6C
};
