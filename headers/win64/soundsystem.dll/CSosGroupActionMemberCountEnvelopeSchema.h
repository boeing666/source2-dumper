#pragma once

class CSosGroupActionMemberCountEnvelopeSchema : public CSosGroupActionSchema /*0x0*/  // sizeof 0x30, align 0x8 [vtable] (soundsystem) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nBaseCount; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nTargetCount; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flBaseValue; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flTargetValue; // offset 0x14, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAttack; // offset 0x18, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDecay; // offset 0x1C, size 0x4, align 4 | MPropertyFriendlyName
    CUtlString m_resultVarName; // offset 0x20, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bSaveToGroup; // offset 0x28, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0029[0x7]; // offset 0x29
};
