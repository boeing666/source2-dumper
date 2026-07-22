#pragma once

class CCitadelItemPickupIdolVData : public CCitadelItemPickupVData /*0x0*/  // sizeof 0x128, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x108]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_WalkBackModifier; // offset 0x108, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PickUpAura; // offset 0x118, size 0x10, align 8
};
