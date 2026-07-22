#pragma once

struct AirheartLockOnTarget_t  // sizeof 0x38, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x30]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x30, size 0x4, align 4 | MNetworkEnable
    uint8 m_nMarks; // offset 0x34, size 0x1, align 1 | MNetworkEnable
    char _pad_0035[0x3]; // offset 0x35
};
