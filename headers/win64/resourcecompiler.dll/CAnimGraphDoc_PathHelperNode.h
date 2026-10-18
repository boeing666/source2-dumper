#pragma once

class CAnimGraphDoc_PathHelperNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    float32 m_flStoppingRadius; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flStoppingSpeedScale; // offset 0x4C, size 0x4, align 4 | MPropertyFriendlyName
};
