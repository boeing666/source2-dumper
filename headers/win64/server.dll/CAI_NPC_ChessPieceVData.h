#pragma once

class CAI_NPC_ChessPieceVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0xC88, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ExpireModifier; // offset 0xC50, size 0x10, align 8 | MPropertyStartGroup
    bool m_bShouldUseCooldownOutline; // offset 0xC60, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0C61[0x3]; // offset 0xC61
    Color m_cCooldownOutlineColor; // offset 0xC64, size 0x4, align 4
    float32 m_flCooldownOutlineWidth; // offset 0xC68, size 0x4, align 4
    bool m_bShouldMove; // offset 0xC6C, size 0x1, align 1 | MPropertyStartGroup
    bool m_bShouldKnockawayOnMelee; // offset 0xC6D, size 0x1, align 1
    char _pad_0C6E[0x2]; // offset 0xC6E
    float32 m_flMeleeDuration; // offset 0xC70, size 0x4, align 4
    float32 m_flMeleeFireDelay; // offset 0xC74, size 0x4, align 4
    float32 m_flHopSpeed; // offset 0xC78, size 0x4, align 4
    float32 m_flMeleeKnockupStrength; // offset 0xC7C, size 0x4, align 4
    float32 m_flMeleeKnockbackStrength; // offset 0xC80, size 0x4, align 4
    char _pad_0C84[0x4]; // offset 0xC84
};
