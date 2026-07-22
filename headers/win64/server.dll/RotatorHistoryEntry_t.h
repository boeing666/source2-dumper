#pragma once

struct RotatorHistoryEntry_t  // sizeof 0x20, align 0xFF [trivial_dtor] (server)
{
    Quaternion qInvChange; // offset 0x0, size 0x10, align 16
    GameTime_t flTimeRotationStart; // offset 0x10, size 0x4, align 255
    char _pad_0014[0xC]; // offset 0x14
};
