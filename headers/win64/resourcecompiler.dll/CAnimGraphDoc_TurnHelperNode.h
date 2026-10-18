#pragma once

class CAnimGraphDoc_TurnHelperNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    CAnimGraphDoc_NodeConnection m_inputConnection; // offset 0x40, size 0x8, align 4 | MPropertySuppressField
    AnimValueSource m_facingTarget; // offset 0x48, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_turnStartTime; // offset 0x4C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_turnDuration; // offset 0x50, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bMatchChildDuration; // offset 0x54, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseManualTurnOffset; // offset 0x55, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0056[0x2]; // offset 0x56
    float32 m_manualTurnOffset; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_005C[0x4]; // offset 0x5C
};
