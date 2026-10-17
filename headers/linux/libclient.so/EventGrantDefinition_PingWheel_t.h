#pragma once

struct EventGrantDefinition_PingWheel_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x20, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_strRewardName; // offset 0x8, size 0x8, align 8
    CUtlString m_strImage; // offset 0x10, size 0x8, align 8
    SPingWheelMessageIDRange m_messageIDRange; // offset 0x18, size 0x8, align 4
};
