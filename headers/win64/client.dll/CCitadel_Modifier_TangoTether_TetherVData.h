#pragma once

class CCitadel_Modifier_TangoTether_TetherVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CSoundEventName m_HealSound; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_GrappleHitSound; // offset 0x760, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x770, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DisconnectingModifier; // offset 0x780, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DisconnectedModifier; // offset 0x790, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_LockedTargetModifier; // offset 0x7A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_NoConnectionModifier; // offset 0x7B0, size 0x10, align 8
    float32 m_flMinConnectTime; // offset 0x7C0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flDisconnectDistanceBuffer; // offset 0x7C4, size 0x4, align 4
    float32 m_flCandidateCloserDistance; // offset 0x7C8, size 0x4, align 4
    float32 m_flTargetAwayDistance; // offset 0x7CC, size 0x4, align 4
};
