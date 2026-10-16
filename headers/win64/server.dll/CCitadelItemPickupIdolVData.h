#pragma once

class CCitadelItemPickupIdolVData : public CCitadelItemPickupVData /*0x0*/  // sizeof 0x140, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x120]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_WalkBackModifier; // offset 0x120, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_PickUpAura; // offset 0x130, size 0x10, align 8
};
