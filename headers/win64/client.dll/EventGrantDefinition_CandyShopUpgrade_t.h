#pragma once

struct EventGrantDefinition_CandyShopUpgrade_t : public EventGrantDefinition_t /*0x0*/  // sizeof 0x10, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    ECandyShopUpgrade m_eUpgrade; // offset 0x8, size 0x4, align 4
    uint32 m_unUpgradeAmount; // offset 0xC, size 0x4, align 4
};
