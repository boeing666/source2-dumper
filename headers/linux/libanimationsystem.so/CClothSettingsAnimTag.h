#pragma once

class CClothSettingsAnimTag : public CAnimTagBase /*0x0*/  // sizeof 0x70, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    float32 m_flStiffness; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flEaseIn; // offset 0x5C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flEaseOut; // offset 0x60, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    char _pad_0064[0x4]; // offset 0x64
    CUtlString m_nVertexSet; // offset 0x68, size 0x8, align 8 | MPropertyFriendlyName
};
