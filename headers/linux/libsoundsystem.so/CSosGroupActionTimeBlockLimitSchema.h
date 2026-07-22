#pragma once

class CSosGroupActionTimeBlockLimitSchema : public CSosGroupActionSchema /*0x0*/  // sizeof 0x10, align 0x8 [vtable] (soundsystem) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nMaxCount; // offset 0x8, size 0x4, align 4
    float32 m_flMaxDuration; // offset 0xC, size 0x4, align 4
};
