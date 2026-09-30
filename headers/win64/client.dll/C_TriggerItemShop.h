#pragma once

class C_TriggerItemShop : public C_BaseTrigger /*0x0*/  // sizeof 0xCA8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC98]; // offset 0x0
    CUtlSymbolLarge m_iszSoundName; // offset 0xC98, size 0x8, align 8
    int32 m_iLane; // offset 0xCA0, size 0x4, align 4
    char _pad_0CA4[0x4]; // offset 0xCA4
};
