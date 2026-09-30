#pragma once

class CCitadelModifierInvisBushVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x778, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flHideDuration; // offset 0x760, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRevealDuration; // offset 0x764, size 0x4, align 4
    float32 m_flLingerDuration; // offset 0x768, size 0x4, align 4
    float32 m_flFriendlyInBushVisibility; // offset 0x76C, size 0x4, align 4
    float32 m_flEnemyInSharedBushVisibility; // offset 0x770, size 0x4, align 4
    char _pad_0774[0x4]; // offset 0x774
};
