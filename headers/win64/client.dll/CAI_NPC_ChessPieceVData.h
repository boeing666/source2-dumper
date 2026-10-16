#pragma once

class CAI_NPC_ChessPieceVData : public CAI_CitadelNPCVData /*0x0*/  // sizeof 0xC68, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xC30]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ExpireModifier; // offset 0xC30, size 0x10, align 8 | MPropertyStartGroup
    bool m_bShouldUseCooldownOutline; // offset 0xC40, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0C41[0x3]; // offset 0xC41
    Color m_cCooldownOutlineColor; // offset 0xC44, size 0x4, align 4
    float32 m_flCooldownOutlineWidth; // offset 0xC48, size 0x4, align 4
    bool m_bShouldMove; // offset 0xC4C, size 0x1, align 1 | MPropertyStartGroup
    bool m_bShouldKnockawayOnMelee; // offset 0xC4D, size 0x1, align 1
    char _pad_0C4E[0x2]; // offset 0xC4E
    float32 m_flMeleeDuration; // offset 0xC50, size 0x4, align 4
    float32 m_flMeleeFireDelay; // offset 0xC54, size 0x4, align 4
    float32 m_flHopSpeed; // offset 0xC58, size 0x4, align 4
    float32 m_flMeleeKnockupStrength; // offset 0xC5C, size 0x4, align 4
    float32 m_flMeleeKnockbackStrength; // offset 0xC60, size 0x4, align 4
    char _pad_0C64[0x4]; // offset 0xC64
};
