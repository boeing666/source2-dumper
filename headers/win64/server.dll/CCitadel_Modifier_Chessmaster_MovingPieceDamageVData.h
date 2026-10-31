#pragma once

class CCitadel_Modifier_Chessmaster_MovingPieceDamageVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GroundAuraModifier; // offset 0x878, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strImpactSound; // offset 0x888, size 0x10, align 8 | MPropertyStartGroup
    bool m_bDropGroundAuras; // offset 0x898, size 0x1, align 1 | MPropertyStartGroup
    bool m_bAlignOnDiagonal; // offset 0x899, size 0x1, align 1
    char _pad_089A[0x6]; // offset 0x89A
};
