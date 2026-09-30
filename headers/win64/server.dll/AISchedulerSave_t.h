#pragma once

struct AISchedulerSave_t  // sizeof 0x188, align 0x4 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
    int16 nVersion; // offset 0x0, size 0x2, align 2
    char _pad_0002[0x2]; // offset 0x2
    uint32 scheduleCrc; // offset 0x4, size 0x4, align 4
    char[128] szSchedule; // offset 0x8, size 0x80, align 1
    char[128] szUntranslatedSchedule; // offset 0x88, size 0x80, align 1
    char[128] szFailSchedule; // offset 0x108, size 0x80, align 1
};
