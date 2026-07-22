#pragma once

class CAnimGraphDoc_NodeBlend2DItem : public CAnimGraphDoc_Blend2DItem /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x30, size 0x8, align 4 | MPropertySuppressField
    CUtlString m_name; // offset 0x38, size 0x8, align 8 | MPropertyFriendlyName
};
