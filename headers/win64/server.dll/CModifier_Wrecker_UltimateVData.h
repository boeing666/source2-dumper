#pragma once

class CModifier_Wrecker_UltimateVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x818, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyGrabModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_EnemyThrowModifier; // offset 0x7A8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EnemyDamageModifier; // offset 0x7B8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InvincibleModifier; // offset 0x7C8, size 0x10, align 8
    CSoundEventName m_StartSound; // offset 0x7D8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_AmbientLoopingSound; // offset 0x7E8, size 0x10, align 8
    CSoundEventName m_GrabSound; // offset 0x7F8, size 0x10, align 8
    CSoundEventName m_ThrowSound; // offset 0x808, size 0x10, align 8
};
