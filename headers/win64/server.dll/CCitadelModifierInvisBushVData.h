#pragma once

class CCitadelModifierInvisBushVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    float32 m_flHideDuration; // offset 0x790, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRevealDuration; // offset 0x794, size 0x4, align 4
    float32 m_flLingerDuration; // offset 0x798, size 0x4, align 4
    float32 m_flFriendlyInBushVisibility; // offset 0x79C, size 0x4, align 4
    float32 m_flEnemyInSharedBushVisibility; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
};
