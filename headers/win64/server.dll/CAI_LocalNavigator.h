#pragma once

class CAI_LocalNavigator : public CAI_LocalNavigatorBase /*0x0*/  // sizeof 0x118, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    bool m_bLastWasClear; // offset 0x60, size 0x1, align 1
    char _pad_0061[0x9F]; // offset 0x61
    CSimpleSimTimer m_FullDirectTimer; // offset 0x100, size 0x8, align 255
    char _pad_0108[0x10]; // offset 0x108
};
