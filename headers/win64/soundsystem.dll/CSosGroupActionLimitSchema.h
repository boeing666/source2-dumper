#pragma once

class CSosGroupActionLimitSchema : public CSosGroupActionSchema /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (soundsystem) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int32 m_nMaxCount; // offset 0x8, size 0x4, align 4
    SosActionStopType_t m_nStopType; // offset 0xC, size 0x4, align 4
    SosActionLimitSortType_t m_nSortType; // offset 0x10, size 0x4, align 4
    bool m_bStopImmediate; // offset 0x14, size 0x1, align 1
    bool m_bCountStopped; // offset 0x15, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0016[0x2]; // offset 0x16
};
