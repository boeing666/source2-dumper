#pragma once

class C_DOTA_BaseNPC_Building : public C_DOTA_BaseNPC /*0x0*/  // sizeof 0x1D40, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1CCC]; // offset 0x0
    int32 m_iDamageLevel; // offset 0x1CCC, size 0x4, align 4
    ParticleIndex_t m_nAmbientFXIndex; // offset 0x1CD0, size 0x4, align 255
    ParticleIndex_t m_nTPFXIndex; // offset 0x1CD4, size 0x4, align 255
    ParticleIndex_t m_nStatusFXIndex; // offset 0x1CD8, size 0x4, align 255
    char _pad_1CDC[0x4]; // offset 0x1CDC
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndex; // offset 0x1CE0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_nFXIndexDestruction; // offset 0x1CE8, size 0x8, align 8
    QAngle m_angInitialAngles; // offset 0x1CF0, size 0xC, align 4
    HSequence m_hHeroStatueSequence; // offset 0x1CFC, size 0x4, align 255
    HSequence m_hConstantLayerSequence; // offset 0x1D00, size 0x4, align 255
    float32 m_fHeroStatueCycle; // offset 0x1D04, size 0x4, align 4
    int32 m_iHeroStatueStatusEffectIndex; // offset 0x1D08, size 0x4, align 4
    bool m_bHeroStatue; // offset 0x1D0C, size 0x1, align 1
    bool m_bBattleCup; // offset 0x1D0D, size 0x1, align 1
    char[32] m_HeroStatueInscription; // offset 0x1D0E, size 0x20, align 1
    char _pad_1D2E[0x2]; // offset 0x1D2E
    PlayerID_t m_iHeroStatueOwnerPlayerID; // offset 0x1D30, size 0x4, align 255
    Color m_ParticleTintColor; // offset 0x1D34, size 0x4, align 4
    FowCustomTeams_t m_nFoWTeam; // offset 0x1D38, size 0x4, align 4
    char _pad_1D3C[0x4]; // offset 0x1D3C
};
