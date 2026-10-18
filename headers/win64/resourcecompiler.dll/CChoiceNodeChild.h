#pragma once

class CChoiceNodeChild  // sizeof 0x18, align 0x8 (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyElementNameFn}
{
public:
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x0, size 0x8, align 4 | MPropertySuppressField
    CUtlString m_name; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName
    float32 m_weight; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_blendTime; // offset 0x14, size 0x4, align 4 | MPropertyFriendlyName
};
