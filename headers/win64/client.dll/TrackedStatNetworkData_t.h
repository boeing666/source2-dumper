#pragma once

struct TrackedStatNetworkData_t  // sizeof 0x38, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x30]; // offset 0x0
    TrackedStatID_t unStatID; // offset 0x30, size 0x4, align 255 | MNetworkEnable
    TrackedStatValue_t unStatValue; // offset 0x34, size 0x4, align 255 | MNetworkEnable
};
