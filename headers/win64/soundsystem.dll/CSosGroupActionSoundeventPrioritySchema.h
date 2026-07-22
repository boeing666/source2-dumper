#pragma once

class CSosGroupActionSoundeventPrioritySchema : public CSosGroupActionSchema /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (soundsystem) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_priorityValue; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_priorityVolumeScalar; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_priorityContributeButDontRead; // offset 0x18, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_bPriorityReadButDontContribute; // offset 0x20, size 0x8, align 8 | MPropertyFriendlyName
    char _pad_0028[0x10]; // offset 0x28
};
