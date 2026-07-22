#pragma once

class CSosGroupActionSetSoundeventParameterSchema : public CSosGroupActionSchema /*0x0*/  // sizeof 0x28, align 0x8 [vtable] (soundsystem) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nMaxCount; // offset 0x8, size 0x4, align 4
    float32 m_flMinValue; // offset 0xC, size 0x4, align 4
    float32 m_flMaxValue; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
    CUtlString m_opvarName; // offset 0x18, size 0x8, align 8 | MPropertyFriendlyName
    SosActionSetParamSortType_t m_nSortType; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
};
