#pragma once

class CBlendNodeChild  // sizeof 0x20, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x8, size 0x8, align 4 | MPropertySuppressField
    CUtlString m_name; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName
    float32 m_blendValue; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_001C[0x4]; // offset 0x1C
};
