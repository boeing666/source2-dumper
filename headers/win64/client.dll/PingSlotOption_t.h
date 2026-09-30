#pragma once

struct PingSlotOption_t  // sizeof 0xC, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    CitadelPingWheelConcept_t m_ePingConcept; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    EMinimapPingAnim_t m_eMinimapPingAnim; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    EAbilitySlots_t m_eAbilityPingSlot; // offset 0x8, size 0x2, align 2 | MPropertyDescription
    char _pad_000A[0x2]; // offset 0xA
};
