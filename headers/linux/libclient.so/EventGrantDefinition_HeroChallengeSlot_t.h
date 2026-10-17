#pragma once

struct EventGrantDefinition_HeroChallengeSlot_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    HeroID_t m_unHeroID; // offset 0x8, size 0x4, align 255
    uint16 m_unSlotID; // offset 0xC, size 0x2, align 2
    char _pad_000E[0x2]; // offset 0xE
};
