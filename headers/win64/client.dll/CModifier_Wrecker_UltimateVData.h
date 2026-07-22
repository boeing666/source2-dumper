#pragma once

class CModifier_Wrecker_UltimateVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyGrabModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_EnemyThrowModifier; // offset 0x760, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDamageModifier; // offset 0x770, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InvincibleModifier; // offset 0x780, size 0x10, align 8
    CSoundEventName m_StartSound; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_AmbientLoopingSound; // offset 0x7A0, size 0x10, align 8
    CSoundEventName m_GrabSound; // offset 0x7B0, size 0x10, align 8
    CSoundEventName m_ThrowSound; // offset 0x7C0, size 0x10, align 8
};
