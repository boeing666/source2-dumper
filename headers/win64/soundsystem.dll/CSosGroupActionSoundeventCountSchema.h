#pragma once

class CSosGroupActionSoundeventCountSchema : public CSosGroupActionSchema /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (soundsystem) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    bool m_bExcludeStoppedSounds; // offset 0x8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0009[0x7]; // offset 0x9
    CUtlString m_strCountKeyName; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName
};
