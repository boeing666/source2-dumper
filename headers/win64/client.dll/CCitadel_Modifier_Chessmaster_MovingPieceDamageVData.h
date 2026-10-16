#pragma once

class CCitadel_Modifier_Chessmaster_MovingPieceDamageVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x790, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x870, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strImpactSound; // offset 0x880, size 0x10, align 8 | MPropertyStartGroup
    bool m_bDropGroundAuras; // offset 0x890, size 0x1, align 1 | MPropertyStartGroup
    bool m_bAlignOnDiagonal; // offset 0x891, size 0x1, align 1
    char _pad_0892[0x6]; // offset 0x892
};
