#pragma once

class CAnimGraphDoc_WayPointHelperNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    float32 m_flStartCycle; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    float32 m_flEndCycle; // offset 0x4C, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeRange
    bool m_bOnlyGoals; // offset 0x50, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPreventOvershoot; // offset 0x51, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bPreventUndershoot; // offset 0x52, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0053[0x5]; // offset 0x53
};
